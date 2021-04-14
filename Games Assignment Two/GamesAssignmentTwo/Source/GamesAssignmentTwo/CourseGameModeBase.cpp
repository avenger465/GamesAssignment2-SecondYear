// Fill out your copyright notice in the Description page of Project Settings.


#include "CourseGameModeBase.h"
#include "CourseGameStateBase.h"

void ACourseGameModeBase::PlayerOverFinishLine()
{
	UE_LOG(LogTemp, Warning, TEXT("Player Dive Loggged (Game Mode)"));
	if (ACourseGameStateBase* GState = GetGameState<ACourseGameStateBase>())
	{
		GState->LogPlayerOverFinishLine();
	}
}