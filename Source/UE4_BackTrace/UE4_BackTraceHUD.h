// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE4_BackTraceHUD.generated.h"

UCLASS()
class AUE4_BackTraceHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUE4_BackTraceHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

