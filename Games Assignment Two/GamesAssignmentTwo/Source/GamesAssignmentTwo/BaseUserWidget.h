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

	//Function to setup a User Widget
	void Setup();

	//Function to setdown a user Widget
	void SetDown();

	//Sets the Menu interface of the widget 
	void SetMenuInterface(IMenuInterface* _MenuInterface);

protected:
	IMenuInterface* MenuInterface;
};
