// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE4_BackTraceGameMode.generated.h"

UCLASS(minimalapi)
class AUE4_BackTraceGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE4_BackTraceGameMode();
	virtual void BeginPlay() override;
};



