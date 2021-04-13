// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "NiagaraComponent.h"
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
	UPROPERTY(EditAnywhere)
		UShapeComponent* ShapeComponent;

	//UPROPERTY(EditAnywhere)
		//UNiagaraComponent* PlayerWonNiagaraOne;

	//UPROPERTY(EditAnywhere)
		//UNiagaraComponent* PlayerWonNiagaraTwo;

	UPROPERTY(EditAnywhere)
		int playersFinished = 0;

	UPROPERTY(EditAnywhere)
		int playerRoundLimit = 3;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
