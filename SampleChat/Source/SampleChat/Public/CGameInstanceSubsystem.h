// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UCGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	FString GISSUserName;
public:
	UFUNCTION(BlueprintCallable)
	FString GISSGetUserName() const;
	UFUNCTION(BlueprintCallable)
	void GISSSetUserName(const FString& NewUserName);
	
};
