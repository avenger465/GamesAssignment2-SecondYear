// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CourseGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMESASSIGNMENTTWO_API ACourseGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	//Increments the amount of players over the Finish Line
	void LogPlayerOverFinishLine();

	//return the amount of players currently over the finih line
	UFUNCTION(BlueprintCallable)
		int ReturnPlayersFinished();

private:
	//current amount of players over the finish line
	//Replicated to all players 
	UPROPERTY(ReplicatedUsing = OnRep_TotalPlayersOverFinishLine)
		int PlayersOverFinishLine = 0;

	//Called when the PlayersOverFinishLine variable is changed
	UFUNCTION()
		void OnRep_TotalPlayersOverFinishLine();
};
