// Fill out your copyright notice in the Description page of Project Settings.


#include "CourseGameStateBase.h"
#include "PlayerInterfaceWidget.h"
#include "Net/UnrealNetwork.h"

void ACourseGameStateBase::LogPlayerOverFinishLine()
{
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Dive Loggged (Game State)"));
		PlayersOverFinishLine++;
	}
}

void ACourseGameStateBase::OnRep_TotalPlayersOverFinishLine()
{
	UE_LOG(LogTemp, Warning, TEXT("Total Dives Replicated on Client %i"), PlayersOverFinishLine);
}

void ACourseGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACourseGameStateBase ,PlayersOverFinishLine);
}

int ACourseGameStateBase::ReturnPlayersFinished()
{
	return PlayersOverFinishLine;
}
