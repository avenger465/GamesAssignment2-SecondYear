// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerInterfaceWidget.h"
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
	void LogPlayerOverFinishLine();

	UFUNCTION(BlueprintCallable)
		int ReturnPlayersFinished();

private:
	UPROPERTY(ReplicatedUsing = OnRep_TotalPlayersOverFinishLine)
		int PlayersOverFinishLine = 0;

	UFUNCTION()
		void OnRep_TotalPlayersOverFinishLine();

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	UWidgetComponent* WidgetComponent;
};
