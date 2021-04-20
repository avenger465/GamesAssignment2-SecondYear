// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the Playable character
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

	//Setup the SpringArm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(100.0f, 10.0f, 150.0f));
	SpringArm->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));

	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = SpringArmLength;
	SpringArm->bUsePawnControlRotation = true;

	//Setup the camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	//Set all checkpoints in the bPassedCheckpoint array to false;
	for (int i = 0; i < 3; ++i)
	{
		bPassedCheckpoint[i] = 0;
	}
}

// Called when the game starts or when spawned
void APlayableCharacter::BeginPlay()
{
	Super::BeginPlay();

	//get all Respawn points in the level
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), "RespawnPoint", RespawnPoints);
	numberOfCheckpoints = RespawnPoints.Num() - 1;
	
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

//Make the character move forwards and backwards
void APlayableCharacter::MoveForwards(float axis)
{
	AddMovementInput(GetActorForwardVector() * axis); // Changes character position forwards and backwards based on key input
}

//Make the character move left and right
void APlayableCharacter::Strafe(float axis)
{
	AddMovementInput(GetActorRightVector() * axis); // Changes character position left and right based on key input
}

//Make the character lookUp or Down
void APlayableCharacter::LookUp(float axis)
{
	AddControllerPitchInput(axis); // Changes the pitch (up and down) based on the mouse input 
}

//Turn the character
void APlayableCharacter::Turn(float axis)
{
	AddControllerYawInput(axis); // Changes the yaw (left and right) based on the mouse input
}

//RPC Implementation for the player diving
void APlayableCharacter::ServerRPCDive_Implementation()
{
	LaunchCharacter(GetActorForwardVector() * 1000, false, false);
}

//RPC validation for the player diving
bool APlayableCharacter::ServerRPCDive_Validate()
{
	return true;
}

//RPC Implementation for pushing the player in front
void APlayableCharacter::ServerRPCPush_Implementation()
{
	//Creating Parameter variables for the Line trace
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	//Checks if the OwnerController exists
	OwnerController = this->GetController();
	if (OwnerController == nullptr) return;

	FVector Location; // Used to store location of ray spawnpoint
	FRotator Rotation; // Used to store rotation of ray spawnpoint
	OwnerController->GetActorEyesViewPoint(Location, Rotation);

	//get the End Location of the Line Trace
	FVector End = Location + Rotation.Vector() * 100;

	FHitResult Hit;

	//Perform a Line trace along the Pawn Collision Channel
	bool success = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_Pawn, Params); // Checks if ray has hit something

	//check if the line trace is successful
	if (success)
	{
		//Cast the HitActor to ACharacter class and check if it exists
		AActor* HitActor = Hit.GetActor();
		if (Cast<ACharacter>(HitActor))
		{
			ACharacter* character = Cast<ACharacter>(HitActor);

			//launch the character in front of the player;
			character->LaunchCharacter(this->GetActorForwardVector() * 1000, false, false);
		}
	}
}

//RPC validation for pushing the player in front
bool APlayableCharacter::ServerRPCPush_Validate()
{
	return true;
}

//make the player dive
void APlayableCharacter::Dive()
{
	ServerRPCDive();
}

//Push the player in front 
void APlayableCharacter::Push()
{
	ServerRPCPush();
}

//RPC Implementation to play a sound for the user when crossing the finish zone
void APlayableCharacter::ClientRPCVictorySound_Implementation()
{
	UGameplayStatics::PlaySound2D(GetWorld(), VictorySound, 1.0f, 1.0f, 0.0f);
}

