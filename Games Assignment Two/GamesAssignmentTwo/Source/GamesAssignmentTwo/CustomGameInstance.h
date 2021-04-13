// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
//#include "OnlineSubsystem.h"
//#include "Interfaces/OnlineSessionInterface.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
class FOnlineSessionSearch;

UCLASS()
class GAMESASSIGNMENTTWO_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UCustomGameInstance(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(Exec)
		void Warp();

};
