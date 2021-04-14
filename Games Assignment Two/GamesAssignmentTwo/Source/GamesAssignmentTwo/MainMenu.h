// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuInterface.h"
#include "GamesAssignmentTwo/GamesAssignmentTwoGameModeBase.h"
#include "BaseUserWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */

class UButton;
class UWidgetSwitcher;
class UWidget;
class UPanelWidget;
class UEditableTextBox;
class UCustomGameInstance;


UCLASS()
class GAMESASSIGNMENTTWO_API UMainMenu : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	UMainMenu(const FObjectInitializer& ObjectInitializer);

protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
		UButton* QuitBtn;

	UPROPERTY(meta = (BindWidget))
		UButton* OpenJoinMenuBtn;

	UPROPERTY(meta = (BindWidget))
		UButton* OpenHostMenuBtn;
	
	UPROPERTY(meta = (BindWidget))
		UButton* CancelJoinMenuBtn;

	UPROPERTY(meta = (BindWidget))
		UButton* JoinBtn;

	UPROPERTY(meta = (BindWidget))
		UButton* CancelHostMenuBtn;

	UPROPERTY(meta = (BindWidget))
		UButton* HostBtn;

	UPROPERTY(meta = (BindWidget))
		UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
		UWidget* MainMenuWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget* JoinWidget;

	UPROPERTY(meta = (BindWidget))
		UWidget* HostWidget;

	UPROPERTY()
		AGamesAssignmentTwoGameModeBase* GameModeRef;

	UPROPERTY()
		UCustomGameInstance* GameInstanceRef;

	UFUNCTION()
		void JoinServer();

	UFUNCTION()
		void QuitGame();

	UFUNCTION()
		void OpenJoinMenu();

	UFUNCTION()
		void OpenHostMenu();

	UFUNCTION()
		void ReturnMainMenu();

	UFUNCTION()
		void HostServer();
};
