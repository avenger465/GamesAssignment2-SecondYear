// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuInterface.h"
#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAMESASSIGNMENTTWO_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup();

	void SetDown();

	void SetMenuInterface(IMenuInterface* _MenuInterface);

protected:
	IMenuInterface* MenuInterface;
};
