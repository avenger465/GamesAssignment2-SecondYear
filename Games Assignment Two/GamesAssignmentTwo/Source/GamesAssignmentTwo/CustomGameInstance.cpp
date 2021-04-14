// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.h"
#include "MainPlayerController.h"
#include "BaseUserWidget.h"
#include "PlayableCharacter.h"

#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget>MenuWidgetBPClass(TEXT("/Game/Widgets/BP_MainMenu"));
	if (!ensure(MenuWidgetBPClass.Class != nullptr)) return;
	MenuClass = MenuWidgetBPClass.Class;

	static ConstructorHelpers::FClassFinder<APawn> PlayableCharacterBPClass(TEXT("/Game/Blueprints/BP_PlayableCharacter"));
	if (!ensure(PlayableCharacterBPClass.Class != nullptr)) return;
	CharacterClass = PlayableCharacterBPClass.Class;
}

void UCustomGameInstance::Init()
{
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().AddUObject(this, &UCustomGameInstance::OnNetworkFailure);
	}
}

void UCustomGameInstance::LoadMenuWidget()
{

	UE_LOG(LogTemp, Warning, TEXT("Load main menu widget from instance called"));
	if (!ensure(MenuClass != nullptr)) return;
	UE_LOG(LogTemp, Warning, TEXT("Load main menu widget from instance MenuClass set"));
	Menu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;

	Menu->Setup();
	Menu->SetMenuInterface(this);
}

void UCustomGameInstance::SpawnPlayer()
{
	ServerSpawnPlayer();

}

void UCustomGameInstance::ServerSpawnPlayer_Implementation()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();

	if (PlayerController != nullptr)
	{
		if (PlayerController->GetPawn())
		{
			UE_LOG(LogTemp, Warning, TEXT("Destroy Character"));
			PlayerController->GetPawn()->Destroy();
		}
		PlayerController->UnPossess(); // Unposses anything already in play
		PlayerController->SetInputMode(FInputModeGameOnly());
	}
	FString CurrentMapName = GetWorld()->GetMapName();
	if (!CurrentMapName.Contains("MainMenu"))
	{
		APlayableCharacter* Player = GetWorld()->SpawnActor<APlayableCharacter>(CharacterClass); // Spawns actor depending on class Selected

		if (Player != nullptr)
		{
			PlayerController->Possess(Player); // Posses the character
			PlayerController->SetInputMode(FInputModeGameOnly());
		}
	}
}

bool UCustomGameInstance::ServerSpawnPlayer_Validate()
{
	return true;
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
	if (Menu != nullptr)
	{
		Menu->SetDown();
	}
	if (World != nullptr)
	{
		World->ServerTravel("/Game/Levels/Lobby?listen");
	}
}

void UCustomGameInstance::Join(const FString IPAddress)
{
	if (Menu != nullptr)
	{
		Menu->SetDown();
	}
	APlayerController* PlayerControllerRef = GetFirstLocalPlayerController();
	if (PlayerControllerRef != nullptr)
	{
		PlayerControllerRef->ClientTravel(IPAddress, ETravelType::TRAVEL_Absolute);
	}
}

void UCustomGameInstance::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString)
{
	LoadMainMenu();
}

void UCustomGameInstance::LoadMainMenu()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (PlayerController != nullptr)
	{
		PlayerController->ClientTravel("/Game/Levels/MainMenu", ETravelType::TRAVEL_Absolute);
	}
}
