// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidget.h"
#include "CustomGameInstance.h"


void UBaseUserWidget::Setup()
{
	this->AddToViewport();

	UWorld* World = GetWorld();

	if (World == nullptr) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (PlayerController != nullptr)
	{
		PlayerController->SetInputMode(FInputModeUIOnly());
		PlayerController->bShowMouseCursor = true;
	}
}

void UBaseUserWidget::SetDown()
{
	this->RemoveFromViewport();

	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetGameInstance());

	if (GameInstance == nullptr) return;
	APlayerController* PlayerController = GameInstance->GetFirstLocalPlayerController();

	if (PlayerController != nullptr)
	{
		PlayerController->SetInputMode(FInputModeGameOnly());
		PlayerController->bShowMouseCursor = false;
	}
}
