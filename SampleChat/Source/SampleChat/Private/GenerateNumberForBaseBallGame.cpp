// Fill out your copyright notice in the Description page of Project Settings.


#include "GenerateNumberForBaseBallGame.h"
#include "Misc/DateTime.h"

FString UGenerateNumberForBaseBallGame::GenerateRandomNum()
{
	TSet<int32> IntSet;
	FMath::RandInit(FDateTime::Now().GetTicks());
	while (IntSet.Num() < 3)
	{
		int RandNum = FMath::RandRange(1, 9);
		IntSet.Add(RandNum);
	}

	FString RandomThreeNumber = "";
	for (int32 Number : IntSet)
	{
		RandomThreeNumber += FString::FromInt(Number);
	}

	return RandomThreeNumber;
}

FString UGenerateNumberForBaseBallGame::CheckResult(FString ServerAnswer, FString InputAnswer)
{
	FString Result = "";
	return Result;
}
