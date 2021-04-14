// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuInterface.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
class UUserWidget;
class UMainMenu;
class APlayableCharacter;

UCLASS()
class GAMESASSIGNMENTTWO_API UCustomGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()

public:
	UCustomGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
		void LoadMenuWidget();

//	virtual void LoadMainMenu() override;

	UFUNCTION(BlueprintCallable)
		void SpawnPlayer();

	virtual void LoadMainMenu() override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APlayableCharacter> CharacterClass;

	UMainMenu* Menu;

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSpawnPlayer();


	UFUNCTION(Exec)
		void Warp(const FString LevelName);

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString IPAddress);

private:
	TSubclassOf<UUserWidget> MenuClass;

	void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);

};	
