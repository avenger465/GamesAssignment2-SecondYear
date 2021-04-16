// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the Games Instance class
#include "CustomGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.h"
#include "MainPlayerController.h"
#include "BaseUserWidget.h"
#include "PlayableCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

//Constructor for the GameInstance to add the menu widget and the player character blueprints to the class
UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget>MenuWidgetBPClass(TEXT("/Game/Widgets/WBP_MainMenu"));
	if (!ensure(MenuWidgetBPClass.Class != nullptr)) return;
	MenuClass = MenuWidgetBPClass.Class;

	static ConstructorHelpers::FClassFinder<APawn> PlayableCharacterBPClass(TEXT("/Game/Blueprints/BP_PlayableCharacter"));
	if (!ensure(PlayableCharacterBPClass.Class != nullptr)) return;
	CharacterClass = PlayableCharacterBPClass.Class;
}

//Called when the Game Instance is initialized
void UCustomGameInstance::Init()
{
	//Checks if the Engine encounters a Network Failure
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().AddUObject(this, &UCustomGameInstance::OnNetworkFailure);
	}
}

//Loads the Menu widget to the players screen
void UCustomGameInstance::LoadMenuWidget()
{
	//Checks if the MenuClass exists and if the Menu Widget could be created
	if (!ensure(MenuClass != nullptr)) return;
	Menu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;

	//add the MenuWidget to the players screen using the Setup() Function
	Menu->Setup();
	Menu->SetMenuInterface(this);
}

//Spawns the player from the servers side
void UCustomGameInstance::SpawnPlayer()
{
	ServerSpawnPlayer();

}
//RPC implementation for the ServerSpawnPlayer 
void UCustomGameInstance::ServerSpawnPlayer_Implementation()
{
	//gets the first player controller for the client and checks if it exists
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

//Validation for the RPC
bool UCustomGameInstance::ServerSpawnPlayer_Validate()
{
	return true;
}

//Warps all players to a new level using Server Travel
void UCustomGameInstance::Warp(const FString LevelName)
{
	//Gets the world and checks if it exists 
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		FString Destination = FString::Printf(TEXT("/Game/Levels/%s?listen"), *LevelName);
		World->ServerTravel(Destination);
	}
}

//Create a Listen server and travel to a new level using server travel
//and delete the main menu widget
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

//Joins a server at a specific IP Address uing client travel
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

//Called when the game Instance encounters a Network Failure
void UCustomGameInstance::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString)
{
	LoadMainMenu();
}

//Loads the Main menu level and travels to it using Client Travel
void UCustomGameInstance::LoadMainMenu()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (PlayerController != nullptr)
	{
		PlayerController->ClientTravel("/Game/Levels/MainMenu", ETravelType::TRAVEL_Absolute);
	}
}
