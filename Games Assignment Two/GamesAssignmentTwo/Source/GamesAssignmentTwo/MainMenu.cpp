// Fill out your copyright notice in the Description page of Project Settings.


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
	GameInstanceRef = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) { return false; }

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

void UMainMenu::JoinServer()
{
	if (GameInstanceRef != nullptr)
	{
		GameInstanceRef->Join("127.0.0.1");
	}
}

void UMainMenu::QuitGame()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(World != nullptr)) return;

	PlayerController->ConsoleCommand("quit");
}

void UMainMenu::OpenJoinMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(JoinWidget);
}

void UMainMenu::OpenHostMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(HostWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(HostWidget);
}

void UMainMenu::ReturnMainMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(MainMenuWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(MainMenuWidget);
}

void UMainMenu::HostServer()
{
	if (GameInstanceRef != nullptr)
	{
		GameInstanceRef->Host();
	}
}
