// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the Widgets
#include "BaseUserWidget.h"
#include "CustomGameInstance.h"


void UBaseUserWidget::Setup()
{
	//add this Widget to the players viewport
	this->AddToViewport();

	//Get a reference to the World and the players controller and check if it exists
	UWorld* World = GetWorld();
	if (World == nullptr) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (PlayerController != nullptr)
	{
		//Set the players input to be for UI only and show the mouse cursor
		PlayerController->SetInputMode(FInputModeUIOnly());
		PlayerController->bShowMouseCursor = true;
	}
}

void UBaseUserWidget::SetDown()
{
	//remove this Widget to the players viewport
	this->RemoveFromViewport();

	//Get a reference to the Game Instance and the players controller and check if it exists
	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetGameInstance());
	if (GameInstance == nullptr) return;
	APlayerController* PlayerController = GameInstance->GetFirstLocalPlayerController();

	if (PlayerController != nullptr)
	{
		//Set the players input to be for Game only and hide the mouse cursor
		PlayerController->SetInputMode(FInputModeGameOnly());
		PlayerController->bShowMouseCursor = false;
	}
}

void UBaseUserWidget::SetMenuInterface(IMenuInterface* _MenuInterface)
{
	//Set the Menu Interface
	this->MenuInterface = _MenuInterface;
}
