// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CustomGameInstance.h"

AMainPlayerController::AMainPlayerController()
{
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	PlayerInterfaceDisplay = CreateWidget(this, PlayerInterfaceWidget);
	FString CurrentMapName = GetWorld()->GetMapName();
	UE_LOG(LogTemp, Warning, TEXT("Level: %s"), *CurrentMapName);
	if (PlayerInterfaceDisplay == nullptr) return;
	if (CurrentMapName.Contains("GameLevel"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerInterface Here"));
		PlayerInterfaceDisplay->AddToViewport();
	}

	//PlayerInterfaceDisplay = CreateWidget(this, PlayerInterfaceWidget);
	//FString CurrentMapName = GetWorld()->GetMapName();
	//UE_LOG(LogTemp, Warning, TEXT("Level: %s"), *CurrentMapName);
	//if (PlayerInterfaceDisplay == nullptr) return;
	//if (CurrentMapName.Contains("GameLevel"))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("PlayerInterface Here");
	//	PlayerInterfaceDisplay->AddToViewport();
	//}
}
