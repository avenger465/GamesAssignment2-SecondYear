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
	//Constructor for the GameInstance to add the menu widget and the player character blueprints to the class
	UCustomGameInstance(const FObjectInitializer& ObjectInitializer);

	//Called when the Game Instance is initialized
	virtual void Init();

	//Loads the Menu widget to the players screen
	UFUNCTION(BlueprintCallable)
		void LoadMenuWidget();

	//Spawns the player from the servers side
	UFUNCTION(BlueprintCallable)
		void SpawnPlayer();

	//Loads the Main menu level and travels to it using Client Travel
	virtual void LoadMainMenu() override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APlayableCharacter> CharacterClass;

	UMainMenu* Menu;

	//RPC implementation for the ServerSpawnPlayer 
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSpawnPlayer();

	//Warps all players to a new level using Server Travel
	UFUNCTION(Exec)
		void Warp(const FString LevelName);

	//Create a Listen server and travel to a new level using server travel
	//and delete the main menu widget
	UFUNCTION(Exec)
		void Host();

	//Joins a server at a specific IP Address uing client travel
	UFUNCTION(Exec)
		void Join(const FString IPAddress);

private:
	TSubclassOf<UUserWidget> MenuClass;

	//Called when the game Instance encounters a Network Failure
	void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);

};	
