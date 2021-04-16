// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the main menu Widget
#include "MainMenu.h"
#include "MenuInterface.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "CustomGameInstance.h"
#include "Kismet/GameplayStatics.h"

UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer)
{
	//Gets a reference to the game Instance
	GameInstanceRef = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

//Initalizes all Widgets in the Main Menu 
bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) { return false; }

	//---------------------------------------------------------//
	// Create Dynamics for all button widgets in the main menu //
	//---------------------------------------------------------//
	if (QuitBtn == nullptr) { return false; }
	QuitBtn->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

	if (OpenJoinMenuBtn == nullptr) { return false; }
	OpenJoinMenuBtn->OnClicked.AddDynamic(this, &UMainMenu::OpenJoinMenu);

	if (OpenHostMenuBtn == nullptr) { return false; }
	OpenHostMenuBtn->OnClicked.AddDynamic(this, &UMainMenu::OpenHostMenu);

	if (CancelJoinMenuBtn == nullptr) { return false; }
	CancelJoinMenuBtn->OnClicked.AddDynamic(this, &UMainMenu::ReturnMainMenu);

	if (JoinBtn == nullptr) { return false; }
	JoinBtn->OnClicked.AddDynamic(this, &UMainMenu::JoinServer);

	if (CancelHostMenuBtn == nullptr) { return false; }
	CancelHostMenuBtn->OnClicked.AddDynamic(this, &UMainMenu::ReturnMainMenu);

	if (HostBtn == nullptr) { return false; }
	HostBtn->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	return true;
}

//Called when the player clicks on the Join Server Button
void UMainMenu::JoinServer()
{
	//Check if the gameInstance exists and then call the Join function
	if (GameInstanceRef != nullptr)
	{
		GameInstanceRef->Join("127.0.0.1");
	}
}

//Called when the player clicks on the Quit Button
void UMainMenu::QuitGame()
{
	//Get a reference to the World and the Player controller and check if they exist
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(World != nullptr)) return;

	//Quit the game
	PlayerController->ConsoleCommand("quit");
}

//Called when the player clicks on the Join Button
void UMainMenu::OpenJoinMenu()
{
	//Check if the Widget Switcher and Widget exist and then change widgets
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(JoinWidget);
}

//Called when the player clicks on the host Button
void UMainMenu::OpenHostMenu()
{
	//Check if the Widget Switcher and Widget exist and then change widgets
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(HostWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(HostWidget);
}

//Called when the player clicks on the Return Button
void UMainMenu::ReturnMainMenu()
{
	//Check if the Widget Switcher and Widget exist and then change widgets
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(MainMenuWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(MainMenuWidget);
}

//Called when the player clicks on the Host Server Button
void UMainMenu::HostServer()
{
	//Check if the gameInstance exists and then call the Host function
	if (GameInstanceRef != nullptr)
	{
		GameInstanceRef->Host();
	}
}
