// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RPGGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMING_RPG_API ARPGGameMode : public AGameModeBase
{

	GENERATED_BODY()

public:
	ARPGGameMode();

	virtual void StartPlay() override;
	
};


