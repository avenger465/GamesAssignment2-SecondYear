// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMESASSIGNMENTTWO_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMainPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> PlayerInterfaceWidget;

	//UserWidget Component
	UPROPERTY()
		UUserWidget* PlayerInterfaceDisplay;

	//Timer to call when the PlayerControllers' BeginPlay is called
	UPROPERTY()
		FTimerHandle AddToScreenTimer;

	//Amount of time for the timer to use
	UPROPERTY(EditAnywhere)
		float Timer = 10.0f;

	//Create a Player Interface widget and then add it to the screen
	UFUNCTION()
		void AddToScreen();
};
