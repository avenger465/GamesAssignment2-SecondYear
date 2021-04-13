// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayableCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class GAMESASSIGNMENTTWO_API APlayableCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayableCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		int currentCheckpoint = 0;

	UPROPERTY(EditAnywhere)
		int numberOfCheckpoints;

	UPROPERTY(EditAnywhere)
		int bPassedCheckpoint[3];

	UFUNCTION(Client, Reliable)
		void RPCVictorySound();

private:
	void MoveForwards(float axis);
	void Strafe(float axis);
	void LookUp(float axis);
	void Turn(float axis);
	void Dive();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDive();

	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
		USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
		USoundBase* VictorySound;

	UPROPERTY(EditAnywhere)
		float SpringArmLength = 500.0f;

	UPROPERTY()
		TArray<AActor*> RespawnPoints;

};
