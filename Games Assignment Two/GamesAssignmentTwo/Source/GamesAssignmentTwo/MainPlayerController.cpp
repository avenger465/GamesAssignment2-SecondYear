// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the PlayerController
#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CustomGameInstance.h"

AMainPlayerController::AMainPlayerController()
{
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//Create a timer to add the widget to the players screen
	GetWorldTimerManager().SetTimer(AddToScreenTimer, this, &AMainPlayerController::AddToScreen, Timer);
}

void AMainPlayerController::AddToScreen()
{
	//Create a widget of the player interface WBP
	PlayerInterfaceDisplay = CreateWidget(this, PlayerInterfaceWidget);

	FString CurrentMapName = GetWorld()->GetMapName();
	UE_LOG(LogTemp, Warning, TEXT("Level: %s"), *CurrentMapName);

	//Check if the PlayerInterface doesn't exist
	if (PlayerInterfaceDisplay == nullptr) return;

	//Check if the Current Map is the GameLevel 
	//and then add the Player Interface Widget to the players screen
	if (CurrentMapName.Contains("GameLevel"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Game World"));
		PlayerInterfaceDisplay->AddToViewport();
	}
}
