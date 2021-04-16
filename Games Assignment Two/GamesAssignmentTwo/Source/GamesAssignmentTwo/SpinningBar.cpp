// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the Spinning Bar
#include "SpinningBar.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASpinningBar::ASpinningBar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpinningBarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Spinning Bar Mesh"));
	SpinningBarMesh->SetupAttachment(RootComponent);
	bReplicates = true;
}

// Called when the game starts or when spawned
void ASpinningBar::BeginPlay()
{
	Super::BeginPlay();

	//Check if the Spinning Bar actor has authority on the september
	if (HasAuthority())
	{
		//allow the Spinning bar to be replicated to all clients
		NetUpdateFrequency = 5;
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

// Called every frame
void ASpinningBar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Rotator the Spinning Bar by the Rotation Rate
	//If the the Rotation Rate changes, it will be replicated properly
	AddActorLocalRotation(FRotator(0.0f, RotationRate * DeltaTime, 0.0f));
}

//Replicate the Rotation Rate variable
void ASpinningBar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpinningBar, RotationRate);
}

