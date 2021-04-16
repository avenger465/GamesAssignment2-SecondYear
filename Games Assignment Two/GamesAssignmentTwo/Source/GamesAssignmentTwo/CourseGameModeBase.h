// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GamesAssignmentTwoGameModeBase.h"
#include "CourseGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMESASSIGNMENTTWO_API ACourseGameModeBase : public AGamesAssignmentTwoGameModeBase
{
	GENERATED_BODY()
	
public:
	//Called whenever a player goes over the Finish Line
	void PlayerOverFinishLine();

	//Called when a player is logged into the Obstacle Course level on the server
	//and increments the amount of players in the level
	void PostLogin(APlayerController* NewPlayer) override;

	//Called when a player is logged out of the Obstacle Course level on the server
	//and decrements the amount of players in the level
	void Logout(AController* Exiting) override;

private:
	//Number of players in the Obstacle course level
	uint32 NumberOfPlayers = 0;
};
