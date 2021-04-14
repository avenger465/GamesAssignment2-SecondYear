// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerLobbyGameModeBase.h"
#include "CustomGameInstance.h"

void AServerLobbyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	++NumberOfPlayers;

	UE_LOG(LogTemp, Warning, TEXT("Players: %i"), NumberOfPlayers);

	if (NumberOfPlayers >= MaxNumberOfPlayers)
	{
		GetWorldTimerManager().SetTimer(GameStartTimer, this, &AServerLobbyGameModeBase::StartGame, 10.0f);
	}
}
void AServerLobbyGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	--NumberOfPlayers;
}

void AServerLobbyGameModeBase::StartGame()
{
	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetGameInstance());
	if (GameInstance == nullptr) return;

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		bUseSeamlessTravel = true;
		World->ServerTravel("/Game/Levels/Gamelevel?listen");
	}
}
