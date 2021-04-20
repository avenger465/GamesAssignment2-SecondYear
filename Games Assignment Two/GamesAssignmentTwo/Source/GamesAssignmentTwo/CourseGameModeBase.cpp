// Fill out your copyright notice in the Description page of Project Settings.


#include "CourseGameModeBase.h"
#include "CourseGameStateBase.h"

//Called whenever a player goes over the Finish Line
void ACourseGameModeBase::PlayerOverFinishLine()
{
	UE_LOG(LogTemp, Warning, TEXT("Player Dive Loggged (Game Mode)"));
	//Get the game state and increment the players over the finish line 
	//this variable is replicated to all players
	if (ACourseGameStateBase* GState = GetGameState<ACourseGameStateBase>())
	{
		GState->LogPlayerOverFinishLine();
	}
}

//Called when a player is logged into the Obstacle Course level on the server
//and increments the amount of players in the level
void ACourseGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	++NumberOfPlayers;

	UE_LOG(LogTemp, Warning, TEXT("Players in Course Level: %i"), NumberOfPlayers);
}

//Called when a player is logged out of the Obstacle Course level on the server
//and decrements the amount of players in the level
void ACourseGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	--NumberOfPlayers;
}
