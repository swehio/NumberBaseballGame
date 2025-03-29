// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class SAMPLECHAT_API DPGameStateInterface
{
public:
    virtual void Enter() = 0;
    virtual void HandleInput(int32 Input) = 0;
    virtual void Update(float DeltaTime) = 0;
    virtual void Exit() = 0;
    virtual ~DPGameStateInterface() = default;
};
