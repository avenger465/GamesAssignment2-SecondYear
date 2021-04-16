// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GamesAssignmentTwoGameModeBase.h"
#include "ServerLobbyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMESASSIGNMENTTWO_API AServerLobbyGameModeBase : public AGamesAssignmentTwoGameModeBase
{
	GENERATED_BODY()
	
public:
	void PostLogin(APlayerController* NewPlayer) override;
	void Logout(AController* Exiting) override;

private:
	void StartGame();

	uint32 NumberOfPlayers = 0;

	uint32 NumberOfPlayersToStart = 2;

	FTimerHandle GameStartTimer;
};
