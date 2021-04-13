// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"
#include "Components/BoxComponent.h"
#include "PlayableCharacter.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShapeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Player Collision Box"));
	ShapeComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();

	ShapeComponent->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::OnOverlapBegin);
	ShapeComponent->OnComponentEndOverlap.AddDynamic(this, &ACheckpoint::OnOverlapEnd);
	
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckpoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority())
	{
		if (OtherActor != nullptr)
		{
			APlayableCharacter* character = Cast<APlayableCharacter>(OtherActor);
			if (character != nullptr/* && !bPassedCheckpoint*/)
			{
				if (!character->bPassedCheckpoint[CheckpointIndex])
				{
					UE_LOG(LogTemp, Warning, TEXT("Collided"));
					character->currentCheckpoint += 1;
					CheckpointIndex += 1;
					if (character->currentCheckpoint > character->numberOfCheckpoints) character->currentCheckpoint = character->numberOfCheckpoints;
					if (CheckpointIndex >= character->numberOfCheckpoints) CheckpointIndex = 0;
					character->bPassedCheckpoint[CheckpointIndex] = 1;
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("UnCollided"));
				}
			}
		}
	}
}

void ACheckpoint::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

