// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the actor
#include "FinishZone.h"
#include "Components/BoxComponent.h"
#include "CourseGameStateBase.h"
#include "CourseGameModeBase.h"
#include "CustomGameInstance.h"
#include "PlayableCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFinishZone::AFinishZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create a Default Subobject for the shape component and setup its attachment
	ShapeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Player Collision Box"));
	ShapeComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFinishZone::BeginPlay()
{
	Super::BeginPlay();

	//Add Dynamics to the Box BoxComponent
	ShapeComponent->OnComponentBeginOverlap.AddDynamic(this, &AFinishZone::OnOverlapBegin);
	ShapeComponent->OnComponentEndOverlap.AddDynamic(this, &AFinishZone::OnOverlapEnd);
}

// Called every frame
void AFinishZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFinishZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Check if the Finish zone has authority from the server
	if (HasAuthority())
	{
		//Check if the actor in the overlap actually exists
		if (OtherActor != nullptr)
		{
			//Cast the actor to the an APlayableCharacter and then check if it exists
			APlayableCharacter* character = Cast<APlayableCharacter>(OtherActor);
			if (character != nullptr)
			{
				//call a client RPC to play a sound wave
				character->ClientRPCVictorySound();

				//Increase the amount of players finished and then call a Server RPC
				//to inrement the amount of players over the finish line in the Game State
				playersFinished += 1;
				ServerRPCPlayerFinished();

				//Check if the amount of players finished is over the limit and then start a timer to change the level
				if (playersFinished >= playerRoundLimit)
				{
					GetWorldTimerManager().SetTimer(EndLevelTimer, this, &AFinishZone::ServerRPCWarpToEndLevel, 5.0f);
				}
			}
		}
	}
}

//RPC called from the client to indicate that the player has finished
void AFinishZone::ServerRPCPlayerFinished_Implementation()
{
	//Get a reference to the GameModeBase of the level and then increment the amount of players over the finish line 
	//through the GameModeBase
	if (ACourseGameModeBase* GMode = GetWorld()->GetAuthGameMode<ACourseGameModeBase>())
	{
		GMode->PlayerOverFinishLine();
	}
}

//RPC called from the client to tell the server to perform a serverTravel for all clients
void AFinishZone::ServerRPCWarpToEndLevel_Implementation()
{
	//Get a reference to the Game Instance and then perform a server travel
	UCustomGameInstance* GameInstanceRef = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GameInstanceRef != nullptr)
	{
		GameInstanceRef->Warp("EndLevel");
	}
}

void AFinishZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap End"));
	}
}

