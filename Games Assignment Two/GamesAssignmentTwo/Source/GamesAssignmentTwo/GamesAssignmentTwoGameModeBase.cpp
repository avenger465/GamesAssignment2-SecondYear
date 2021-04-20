// Copyright Epic Games, Inc. All Rights Reserved.


#include "GamesAssignmentTwoGameModeBase.h"
#include "CustomGameInstance.h"
#include "PlayableCharacter.h"
#include "Kismet/GameplayStatics.h"

AGamesAssignmentTwoGameModeBase::AGamesAssignmentTwoGameModeBase()
{
}

void AGamesAssignmentTwoGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//get a reference to the GameInstance and then spawns the players character
	//This character then travells to new levels with the server
	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetGameInstance());
	GameInstance->SpawnPlayer();
}