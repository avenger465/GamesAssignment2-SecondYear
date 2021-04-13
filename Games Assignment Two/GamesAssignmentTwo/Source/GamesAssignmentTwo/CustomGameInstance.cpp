// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameInstance.h"
//#include "OnlineSessionSettings.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer)
{

}

void UCustomGameInstance::Warp()
{
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		World->ServerTravel("/Game/Levels/EndLevel?listen");
	}
}