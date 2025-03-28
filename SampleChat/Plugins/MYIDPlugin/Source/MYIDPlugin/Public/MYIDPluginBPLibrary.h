// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MYIDPluginBPLibrary.generated.h"


UCLASS()
class UMYIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	static FString UserName;
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "MYIDPlugin sample test testing"), Category = "MYIDPluginTesting")
	float MYIDPluginSampleFunction(float Param);
	UFUNCTION(BlueprintCallable, Category = "MYIDPluginTesting")
	static void SetUserName(const FString& NewName); 
	UFUNCTION(BlueprintCallable, Category = "MYIDPluginTesting")
	static FString GetUserName();
};
