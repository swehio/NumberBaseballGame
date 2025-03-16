// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/GenerateNumberForBaseBallGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateNumberForBaseBallGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UGenerateNumberForBaseBallGame();
SAMPLECHAT_API UClass* Z_Construct_UClass_UGenerateNumberForBaseBallGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UGenerateNumberForBaseBallGame Function CheckResult
struct Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics
{
	struct GenerateNumberForBaseBallGame_eventCheckResult_Parms
	{
		FString ServerAnswer;
		FString InputAnswer;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseballGame" },
		{ "ModuleRelativePath", "Public/GenerateNumberForBaseBallGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAnswer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputAnswer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::NewProp_ServerAnswer = { "ServerAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateNumberForBaseBallGame_eventCheckResult_Parms, ServerAnswer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::NewProp_InputAnswer = { "InputAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateNumberForBaseBallGame_eventCheckResult_Parms, InputAnswer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateNumberForBaseBallGame_eventCheckResult_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::NewProp_ServerAnswer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::NewProp_InputAnswer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateNumberForBaseBallGame, nullptr, "CheckResult", nullptr, nullptr, Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::GenerateNumberForBaseBallGame_eventCheckResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::GenerateNumberForBaseBallGame_eventCheckResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenerateNumberForBaseBallGame::execCheckResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerAnswer);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputAnswer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGenerateNumberForBaseBallGame::CheckResult(Z_Param_ServerAnswer,Z_Param_InputAnswer);
	P_NATIVE_END;
}
// End Class UGenerateNumberForBaseBallGame Function CheckResult

// Begin Class UGenerateNumberForBaseBallGame Function GenerateRandomNum
struct Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics
{
	struct GenerateNumberForBaseBallGame_eventGenerateRandomNum_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseballGame" },
		{ "ModuleRelativePath", "Public/GenerateNumberForBaseBallGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateNumberForBaseBallGame_eventGenerateRandomNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateNumberForBaseBallGame, nullptr, "GenerateRandomNum", nullptr, nullptr, Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::GenerateNumberForBaseBallGame_eventGenerateRandomNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::GenerateNumberForBaseBallGame_eventGenerateRandomNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenerateNumberForBaseBallGame::execGenerateRandomNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGenerateNumberForBaseBallGame::GenerateRandomNum();
	P_NATIVE_END;
}
// End Class UGenerateNumberForBaseBallGame Function GenerateRandomNum

// Begin Class UGenerateNumberForBaseBallGame
void UGenerateNumberForBaseBallGame::StaticRegisterNativesUGenerateNumberForBaseBallGame()
{
	UClass* Class = UGenerateNumberForBaseBallGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckResult", &UGenerateNumberForBaseBallGame::execCheckResult },
		{ "GenerateRandomNum", &UGenerateNumberForBaseBallGame::execGenerateRandomNum },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateNumberForBaseBallGame);
UClass* Z_Construct_UClass_UGenerateNumberForBaseBallGame_NoRegister()
{
	return UGenerateNumberForBaseBallGame::StaticClass();
}
struct Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GenerateNumberForBaseBallGame.h" },
		{ "ModuleRelativePath", "Public/GenerateNumberForBaseBallGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateNumberForBaseBallGame_CheckResult, "CheckResult" }, // 1002972186
		{ &Z_Construct_UFunction_UGenerateNumberForBaseBallGame_GenerateRandomNum, "GenerateRandomNum" }, // 837300459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateNumberForBaseBallGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics::ClassParams = {
	&UGenerateNumberForBaseBallGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenerateNumberForBaseBallGame()
{
	if (!Z_Registration_Info_UClass_UGenerateNumberForBaseBallGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateNumberForBaseBallGame.OuterSingleton, Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenerateNumberForBaseBallGame.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UGenerateNumberForBaseBallGame>()
{
	return UGenerateNumberForBaseBallGame::StaticClass();
}
UGenerateNumberForBaseBallGame::UGenerateNumberForBaseBallGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateNumberForBaseBallGame);
UGenerateNumberForBaseBallGame::~UGenerateNumberForBaseBallGame() {}
// End Class UGenerateNumberForBaseBallGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateNumberForBaseBallGame, UGenerateNumberForBaseBallGame::StaticClass, TEXT("UGenerateNumberForBaseBallGame"), &Z_Registration_Info_UClass_UGenerateNumberForBaseBallGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateNumberForBaseBallGame), 982369801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_3260314867(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
