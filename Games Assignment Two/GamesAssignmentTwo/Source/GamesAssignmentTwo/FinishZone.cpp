// Fill out your copyright notice in the Description page of Project Settings.


#include "FinishZone.h"
#include "Components/BoxComponent.h"
#include "CustomGameInstance.h"
#include "PlayableCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFinishZone::AFinishZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShapeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Player Collision Box"));
	ShapeComponent->SetupAttachment(RootComponent);

	//PlayerWonNiagaraOne = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara Component One: "));
	//PlayerWonNiagaraTwo = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara Component One: "));
}

// Called when the game starts or when spawned
void AFinishZone::BeginPlay()
{
	Super::BeginPlay();
	
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
	if (HasAuthority())
	{
		if (OtherActor != nullptr)
		{
			APlayableCharacter* character = Cast<APlayableCharacter>(OtherActor);
			if (character != nullptr)
			{
				character->RPCVictorySound();
				if (playersFinished >= (playerRoundLimit - 1))
				{
					UE_LOG(LogTemp, Warning, TEXT("Overlap Begin"));
					UCustomGameInstance* GameInstanceRef = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
					if (GameInstanceRef != nullptr)
					{
						GameInstanceRef->Warp("EndLevel");
					}
				}
				else
				{
					playersFinished += 1;
					UE_LOG(LogTemp, Warning, TEXT("%i"), playersFinished);
				}
			}
		}
	}
}

void AFinishZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap End"));
	}
}

