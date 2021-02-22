// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "FGPlayerSettings.generated.h"

UCLASS()
class FGNET_API UFGPlayerSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Movmement)
		float Acceleration = 500.0f;

	UPROPERTY(EditAnywhere, Category = Movmement, meta = (DisplayName = "TurnSpeed"))
		float TurnSpeedDefault = 100.0f;

	UPROPERTY(EditAnywhere, Category = Movmement)
		float MaxVelocity = 2000.0f;

	UPROPERTY(EditAnywhere, Category = Movmement, meta = (ClampMin = 0.0, ClampMax = 1.0))
		float Friction = 0.75f;

	UPROPERTY(EditAnywhere, Category = Movmement, meta = (ClampMin = 0.0, ClampMax = 1.0))
		float BrakingFriction = 0.001f;
};
