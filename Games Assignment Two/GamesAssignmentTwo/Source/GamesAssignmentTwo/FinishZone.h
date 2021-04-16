// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FinishZone.generated.h"


UCLASS()
class GAMESASSIGNMENTTWO_API AFinishZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFinishZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Shape component used for the OnOverlap Dynamics
	UPROPERTY(EditAnywhere)
		UShapeComponent* ShapeComponent;

	//The amount of players finished with the obstacle course
	UPROPERTY(EditAnywhere)
		int playersFinished = 0;

	//amount of players needed to finish the obstacle course
	UPROPERTY(EditAnywhere)
		int playerRoundLimit = 3;

	//Timer to transition to the End level so there is no
	//player glitching when three players cross the finish line
	UPROPERTY(VisibleAnywhere)
		FTimerHandle EndLevelTimer;


	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//RPC called from the client to indicate that the player has finished
	UFUNCTION(Server, Reliable)
		void ServerRPCPlayerFinished();

	//RPC called from the client to tell the server to perform a serverTravel for all clients
	UFUNCTION(Server, Reliable)
		void ServerRPCWarpToEndLevel();

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
