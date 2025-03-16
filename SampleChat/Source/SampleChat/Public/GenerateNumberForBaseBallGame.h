// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenerateNumberForBaseBallGame.generated.h"

UCLASS()
class SAMPLECHAT_API UGenerateNumberForBaseBallGame : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "BaseballGame")
	FString GenerateRandomNum();

	UFUNCTION(BlueprintCallable, Category = "BaseballGame")
	FString CheckResult(FString ServerAnswer, FString InputAnswer);
};
