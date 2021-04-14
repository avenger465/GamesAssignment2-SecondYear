// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CourseGameModeBase.h"
#include "BaseUserWidget.h"
#include "PlayerInterfaceWidget.generated.h"

/**
 * 
 */
class UTextBlock;

UCLASS()
class GAMESASSIGNMENTTWO_API UPlayerInterfaceWidget : public UBaseUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
		void UpdateFinishedPlayersText(int Players);

protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
		UTextBlock* FinishedPlayerstext;
};
