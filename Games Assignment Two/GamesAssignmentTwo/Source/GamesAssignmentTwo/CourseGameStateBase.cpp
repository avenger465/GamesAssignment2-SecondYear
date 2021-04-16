// Fill out your copyright notice in the Description page of Project Settings.

//Includes needed for the GameState class and for replication
#include "CourseGameStateBase.h"
#include "Net/UnrealNetwork.h"

//Increments the amount of players over the Finish Line
void ACourseGameStateBase::LogPlayerOverFinishLine()
{
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Finished Loggged (Game State)"));
		PlayersOverFinishLine++;
	}
}

//Called when the PlayersOverFinishLine variable is changed
void ACourseGameStateBase::OnRep_TotalPlayersOverFinishLine()
{
	UE_LOG(LogTemp, Warning, TEXT("Total players over the finish line Replicated on Client %i"), PlayersOverFinishLine);
}

//Needed to replicate the PlayersOverFinishLine variable
void ACourseGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACourseGameStateBase ,PlayersOverFinishLine);
}

//return the amount of players currently over the finih line
int ACourseGameStateBase::ReturnPlayersFinished()
{
	return PlayersOverFinishLine;
}
