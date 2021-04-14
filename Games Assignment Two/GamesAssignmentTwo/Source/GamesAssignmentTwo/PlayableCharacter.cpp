// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayableCharacter.h"
#include "MainPlayerController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "CourseGameModeBase.h"

// Sets default values
APlayableCharacter::APlayableCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(100.0f, 10.0f, 150.0f));
	SpringArm->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));

	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = SpringArmLength;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	for (int i = 0; i < 3; ++i)
	{
		bPassedCheckpoint[i] = 0;
	}

}

// Called when the game starts or when spawned
void APlayableCharacter::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), "RespawnPoint", RespawnPoints);
	numberOfCheckpoints = RespawnPoints.Num() - 1;
	UE_LOG(LogTemp, Warning, TEXT("%i"), RespawnPoints.Num());
	
}

// Called every frame
void APlayableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FHitResult OutHit;

	//GetCharacterMovement()->SafeMoveUpdatedComponent(FVector(0.0f, 0.0f, 0.01f), GetActorRotation(), true, OutHit);

	if (APlayableCharacter::GetActorLocation().Z <= -100)
	{
		APlayableCharacter::SetActorLocation(RespawnPoints[currentCheckpoint]->GetActorLocation());
	}

}

// Called to bind functionality to input
void APlayableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForwards"), this, &APlayableCharacter::MoveForwards);
	PlayerInputComponent->BindAxis(TEXT("Strafe"), this, &APlayableCharacter::Strafe);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APlayableCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APlayableCharacter::Turn);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Dive"), IE_Pressed, this, &APlayableCharacter::Dive);
	PlayerInputComponent->BindAction(TEXT("Push"), IE_Pressed, this, &APlayableCharacter::Push);
}


void APlayableCharacter::MoveForwards(float axis)
{
	AddMovementInput(GetActorForwardVector() * axis); // Changes character position forwards and backwards based on key input
}

void APlayableCharacter::Strafe(float axis)
{
	AddMovementInput(GetActorRightVector() * axis); // Changes character position left and right based on key input
}

void APlayableCharacter::LookUp(float axis)
{
	AddControllerPitchInput(axis); // Changes the pitch (up and down) based on the mouse input 
}

void APlayableCharacter::Turn(float axis)
{
	AddControllerYawInput(axis); // Changes the yaw (left and right) based on the mouse input
}

void APlayableCharacter::RPCServerDive_Implementation()
{
	LaunchCharacter(GetActorForwardVector() * 1000, false, false);
}

bool APlayableCharacter::RPCServerDive_Validate()
{
	return true;
}

void APlayableCharacter::RPCServerPush_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling Push"));
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	OwnerController = this->GetController();
	if (OwnerController == nullptr) return;

	FVector Location; // Used to store location of ray spawnpoint
	FRotator Rotation; // Used to store rotation of ray spawnpoint
	//OwnerController->GetPlayerViewPoint(Location, Rotation); // Used to get the location and rotation of viewpoint to shoot from
	//OwnerController->GetActorForwardVector()
	OwnerController->GetActorEyesViewPoint(Location, Rotation);

	UE_LOG(LogTemp, Warning, TEXT("Start Location: %s"), *Location.ToString());
	FVector End = Location + Rotation.Vector() * 100;

	UE_LOG(LogTemp, Warning, TEXT("End Location: %s"), *End.ToString());

	FHitResult Hit;

	bool success = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_Pawn, Params); // Checks if ray has hit something

	if (success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit Somethingy"));
		FVector ShotDirection = -Rotation.Vector(); // Gets the shot direction
		AActor* HitActor = Hit.GetActor(); // Gets the actor been hit
		if (Cast<ACharacter>(HitActor))
		{
			ACharacter* character = Cast<ACharacter>(HitActor);
			character->LaunchCharacter(this->GetActorForwardVector() * 500, false, false);
			UE_LOG(LogTemp, Warning, TEXT("Hit Actor"));
		}
	}

	//LaunchCharacter(GetActorForwardVector() * 1000, false, false);
}

bool APlayableCharacter::RPCServerPush_Validate()
{
	return true;
}

void APlayableCharacter::Dive()
{
	RPCServerDive();
}

void APlayableCharacter::Push()
{
	RPCServerPush();
}

void APlayableCharacter::RPCVictorySound_Implementation()
{
	UGameplayStatics::PlaySound2D(GetWorld(), VictorySound, 1.0f, 1.0f, 0.0f);
}

