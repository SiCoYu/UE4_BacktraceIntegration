// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4_BackTraceGameMode.h"
#include "UE4_BackTraceHUD.h"
#include "UE4_BackTraceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_BackTraceGameMode::AUE4_BackTraceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4_BackTraceHUD::StaticClass();
}

void AUE4_BackTraceGameMode::BeginPlay()
{
	Super::BeginPlay();
	TArray<int32> IndexArray;
	IndexArray[100] = 0;
	UE_LOG(LogTemp, Error, TEXT("BackIntrace test"));
}
