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
	int32 BallCount = 0;
	int32 StrikeCount = 0;
	if (InputAnswer.Len() != 3 || (InputAnswer.Len() == 3 && (InputAnswer[0] == InputAnswer[1] || InputAnswer[1] == InputAnswer[2] || InputAnswer[0] == InputAnswer[2])))
	{
		return TEXT("OUT");
	}

	for (int i = 0; i < 3; i++)
	{
		int32 Index = ServerAnswer.Find(FString::Chr(InputAnswer[i]));
		if (Index == INDEX_NONE)
		{
			continue;
		}
		else if(Index == i)
		{
			StrikeCount++;
		}
		else 
		{
			BallCount++;
		}
	}

	Result += FString::FromInt(StrikeCount) + TEXT("S") + FString::FromInt(BallCount) + TEXT("B");

	if (BallCount == 0 && StrikeCount == 0)
	{
		Result = TEXT("OUT");
	}

	return Result;
}
