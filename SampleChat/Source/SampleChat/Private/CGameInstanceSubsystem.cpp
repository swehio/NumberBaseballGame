// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameInstanceSubsystem.h"

FString UCGameInstanceSubsystem::GISSGetUserName() const
{
	return GISSUserName;
}

void UCGameInstanceSubsystem::GISSSetUserName(const FString& NewUserName)
{
	GISSUserName = NewUserName;
	UE_LOG(LogTemp, Warning, TEXT("GISSSetUserName set to : %s"), *GISSUserName);
}
