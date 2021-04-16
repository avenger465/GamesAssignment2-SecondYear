// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerLobbyGameModeBase.h"
#include "CustomGameInstance.h"

//Called when a player is logged into the Obstacle Course level on the server
//and increments the amount of players in the level
void AServerLobbyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	++NumberOfPlayers;

	UE_LOG(LogTemp, Warning, TEXT("Players: %i"), NumberOfPlayers);

	//Check if the correct amount of players are in the lobby level and then start a timer
	//before calling the StartGame function
	if (NumberOfPlayers >= NumberOfPlayersToStart)
	{
		GetWorldTimerManager().SetTimer(GameStartTimer, this, &AServerLobbyGameModeBase::StartGame, 10.0f);
	}
}

//Called when a player is logged out of the Obstacle Course level on the server
//and decrements the amount of players in the level
void AServerLobbyGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	--NumberOfPlayers;
}

//Called when the correct amount of players are in the lobby level
void AServerLobbyGameModeBase::StartGame()
{
	//Get a reference to the Game Instance
	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetGameInstance());
	if (GameInstance == nullptr) return;

	//Get a reference to the World and then perform a server travel to the Game Level
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		bUseSeamlessTravel = true;
		World->ServerTravel("/Game/Levels/Gamelevel?listen");
	}
}
