// Copyright Epic Games, Inc. All Rights Reserved.


#include "GamesAssignmentTwoGameModeBase.h"
#include "CustomGameInstance.h"
#include "PlayableCharacter.h"
#include "Kismet/GameplayStatics.h"

AGamesAssignmentTwoGameModeBase::AGamesAssignmentTwoGameModeBase()
{
	//DefaultPawnClass = NULL;
}

void AGamesAssignmentTwoGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetGameInstance());
	GameInstance->SpawnPlayer();
}