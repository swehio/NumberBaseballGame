// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DPGameStateInterface.h"

class DPGameModeBase;

class SAMPLECHAT_API DPFGuessInputState : public DPGameStateInterface
{
private:
	DPGameModeBase* GameMode;
public:
	DPFGuessInputState(DPGameModeBase* InGameMode);

	virtual void Enter() override;
	virtual void HandleInput(int32 Input) override;
	virtual void Update(float DeltaTime) override;
	virtual void Exit() override;

	DPFGuessInputState();
	~DPFGuessInputState();
};
