// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GamesAssignmentTwoGameModeBase.generated.h"

class UCustomGameInstance;
class APlayableCharacter;

/**
 * 
 */
UCLASS()
class GAMESASSIGNMENTTWO_API AGamesAssignmentTwoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AGamesAssignmentTwoGameModeBase();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
		UCustomGameInstance* GameInstanceRef;

};
