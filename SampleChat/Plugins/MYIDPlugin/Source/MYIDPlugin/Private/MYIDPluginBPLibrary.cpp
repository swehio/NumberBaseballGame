// Copyright Epic Games, Inc. All Rights Reserved.

#include "MYIDPluginBPLibrary.h"
#include "MYIDPlugin.h"

UMYIDPluginBPLibrary::UMYIDPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	UserName = TEXT("Unknown");
}

float UMYIDPluginBPLibrary::MYIDPluginSampleFunction(float Param)
{
	return -1;
}

void UMYIDPluginBPLibrary::SetUserName(const FString& NewName)
{
	UserName = NewName;
	UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *UserName);
}

FString UMYIDPluginBPLibrary::GetUserName()
{
	return UserName;
}