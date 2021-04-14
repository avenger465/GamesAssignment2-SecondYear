// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInterfaceWidget.h"
#include "Components/TextBlock.h"

void UPlayerInterfaceWidget::UpdateFinishedPlayersText(int Players)
{
	FString PlayersAmountString = FString::FromInt(Players);
	FText PlayerAmountText = FText::FromString(PlayersAmountString);
	FinishedPlayerstext->SetText(PlayerAmountText);
}

bool UPlayerInterfaceWidget::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) { return false; }

	//if (FinishedPlayerstext == nullptr) { return false; }
	//FinishedPlayerstext->

	return true;
}
