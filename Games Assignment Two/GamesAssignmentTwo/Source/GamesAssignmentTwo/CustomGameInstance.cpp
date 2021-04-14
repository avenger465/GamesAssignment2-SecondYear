// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameInstance.h"
//#include "OnlineSessionSettings.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer)
{

}

void UCustomGameInstance::Warp(const FString LevelName)
{
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		FString Destination = FString::Printf(TEXT("/Game/Levels/%s?listen"), *LevelName);
		World->ServerTravel(Destination);
	}
}

void UCustomGameInstance::Host()
{
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		World->ServerTravel("/Game/Levels/Lobby?listen");
	}
}

void UCustomGameInstance::Join(const FString IPAddress)
{
	APlayerController* PlayerControllerRef = GetFirstLocalPlayerController();
	if (PlayerControllerRef != nullptr)
	{
		PlayerControllerRef->ClientTravel(IPAddress, ETravelType::TRAVEL_Absolute);
	}
}
