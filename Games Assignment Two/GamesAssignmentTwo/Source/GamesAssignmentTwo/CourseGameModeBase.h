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
	void PlayerOverFinishLine();
};
