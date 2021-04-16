// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the actor
#include "Checkpoint.h"
#include "Components/BoxComponent.h"
#include "PlayableCharacter.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Add Dynamics to the Box BoxComponent
	ShapeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Player Collision Box"));
	ShapeComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();

	//Create a Default Subobject for the shape component and setup its attachment
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
	//Check if the Checkpoint zone has authority from the server
	if (HasAuthority())
	{
		//Check if the actor in the overlap actually exists
		if (OtherActor != nullptr)
		{
			//Cast the actor to the an APlayableCharacter and then check if it exists
			APlayableCharacter* character = Cast<APlayableCharacter>(OtherActor);
			if (character != nullptr/* && !bPassedCheckpoint*/)
			{
				//Checks if the overlapped character has passed a checkpoint
				if (!character->bPassedCheckpoint[CheckpointIndex])
				{
					//Increment the CurrentCheckpoint from the character
					character->currentCheckpoint += 1;

					//increment the Checkpoint index in the actor 
					CheckpointIndex += 1;

					//Sets the character current checkpoint to the last checkpoint
					//if the characters current checkpoint is greater than the total number of checkpoints
					if (character->currentCheckpoint > character->numberOfCheckpoints) character->currentCheckpoint = character->numberOfCheckpoints;

					//if the actors checkpointIndex is greater than the total number of checkpoints
					//Reset it to 0
					if (CheckpointIndex >= character->numberOfCheckpoints) CheckpointIndex = 0;

					//Set the Current index of the bPassedCheckpoint array to true
					character->bPassedCheckpoint[CheckpointIndex] = 1;
				}
			}
		}
	}
}

void ACheckpoint::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

