// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CGameStateBase.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ACGameStateBase Function GSUpdateGuestScoreAll
struct CGameStateBase_eventGSUpdateGuestScoreAll_Parms
{
	FString GMGuestScore;
};
static const FName NAME_ACGameStateBase_GSUpdateGuestScoreAll = FName(TEXT("GSUpdateGuestScoreAll"));
void ACGameStateBase::GSUpdateGuestScoreAll(const FString& GMGuestScore)
{
	CGameStateBase_eventGSUpdateGuestScoreAll_Parms Parms;
	Parms.GMGuestScore=GMGuestScore;
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSUpdateGuestScoreAll);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GMGuestScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GMGuestScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::NewProp_GMGuestScore = { "GMGuestScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameStateBase_eventGSUpdateGuestScoreAll_Parms, GMGuestScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GMGuestScore_MetaData), NewProp_GMGuestScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::NewProp_GMGuestScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateGuestScoreAll", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateGuestScoreAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(CGameStateBase_eventGSUpdateGuestScoreAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSUpdateGuestScoreAll)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GMGuestScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->GSUpdateGuestScoreAll_Validate(Z_Param_GMGuestScore))
	{
		RPC_ValidateFailed(TEXT("GSUpdateGuestScoreAll_Validate"));
		return;
	}
	P_THIS->GSUpdateGuestScoreAll_Implementation(Z_Param_GMGuestScore);
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSUpdateGuestScoreAll

// Begin Class ACGameStateBase Function GSUpdateHostScoreAll
struct CGameStateBase_eventGSUpdateHostScoreAll_Parms
{
	FString GMHostScore;
};
static const FName NAME_ACGameStateBase_GSUpdateHostScoreAll = FName(TEXT("GSUpdateHostScoreAll"));
void ACGameStateBase::GSUpdateHostScoreAll(const FString& GMHostScore)
{
	CGameStateBase_eventGSUpdateHostScoreAll_Parms Parms;
	Parms.GMHostScore=GMHostScore;
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSUpdateHostScoreAll);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GMHostScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GMHostScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::NewProp_GMHostScore = { "GMHostScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameStateBase_eventGSUpdateHostScoreAll_Parms, GMHostScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GMHostScore_MetaData), NewProp_GMHostScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::NewProp_GMHostScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateHostScoreAll", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateHostScoreAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(CGameStateBase_eventGSUpdateHostScoreAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSUpdateHostScoreAll)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GMHostScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->GSUpdateHostScoreAll_Validate(Z_Param_GMHostScore))
	{
		RPC_ValidateFailed(TEXT("GSUpdateHostScoreAll_Validate"));
		return;
	}
	P_THIS->GSUpdateHostScoreAll_Implementation(Z_Param_GMHostScore);
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSUpdateHostScoreAll

// Begin Class ACGameStateBase Function GSUpdateResult
struct CGameStateBase_eventGSUpdateResult_Parms
{
	FString GMAnswer;
	FString GMResult;
};
static const FName NAME_ACGameStateBase_GSUpdateResult = FName(TEXT("GSUpdateResult"));
void ACGameStateBase::GSUpdateResult(const FString& GMAnswer, const FString& GMResult)
{
	CGameStateBase_eventGSUpdateResult_Parms Parms;
	Parms.GMAnswer=GMAnswer;
	Parms.GMResult=GMResult;
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSUpdateResult);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GMAnswer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GMResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GMAnswer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GMResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::NewProp_GMAnswer = { "GMAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameStateBase_eventGSUpdateResult_Parms, GMAnswer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GMAnswer_MetaData), NewProp_GMAnswer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::NewProp_GMResult = { "GMResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameStateBase_eventGSUpdateResult_Parms, GMResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GMResult_MetaData), NewProp_GMResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::NewProp_GMAnswer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::NewProp_GMResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateResult", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(CGameStateBase_eventGSUpdateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACGameStateBase_GSUpdateResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSUpdateResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GMAnswer);
	P_GET_PROPERTY(FStrProperty,Z_Param_GMResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->GSUpdateResult_Validate(Z_Param_GMAnswer,Z_Param_GMResult))
	{
		RPC_ValidateFailed(TEXT("GSUpdateResult_Validate"));
		return;
	}
	P_THIS->GSUpdateResult_Implementation(Z_Param_GMAnswer,Z_Param_GMResult);
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSUpdateResult

// Begin Class ACGameStateBase Function GSUpdateScore
struct CGameStateBase_eventGSUpdateScore_Parms
{
	bool IsHostWin;
};
static const FName NAME_ACGameStateBase_GSUpdateScore = FName(TEXT("GSUpdateScore"));
void ACGameStateBase::GSUpdateScore(bool IsHostWin)
{
	CGameStateBase_eventGSUpdateScore_Parms Parms;
	Parms.IsHostWin=IsHostWin ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSUpdateScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsHostWin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHostWin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::NewProp_IsHostWin_SetBit(void* Obj)
{
	((CGameStateBase_eventGSUpdateScore_Parms*)Obj)->IsHostWin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::NewProp_IsHostWin = { "IsHostWin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CGameStateBase_eventGSUpdateScore_Parms), &Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::NewProp_IsHostWin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::NewProp_IsHostWin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateScore", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(CGameStateBase_eventGSUpdateScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACGameStateBase_GSUpdateScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSUpdateScore)
{
	P_GET_UBOOL(Z_Param_IsHostWin);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->GSUpdateScore_Validate(Z_Param_IsHostWin))
	{
		RPC_ValidateFailed(TEXT("GSUpdateScore_Validate"));
		return;
	}
	P_THIS->GSUpdateScore_Implementation(Z_Param_IsHostWin);
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSUpdateScore

// Begin Class ACGameStateBase Function GSUpdateTimerAll
struct CGameStateBase_eventGSUpdateTimerAll_Parms
{
	float RemainTime;
};
static const FName NAME_ACGameStateBase_GSUpdateTimerAll = FName(TEXT("GSUpdateTimerAll"));
void ACGameStateBase::GSUpdateTimerAll(float RemainTime)
{
	CGameStateBase_eventGSUpdateTimerAll_Parms Parms;
	Parms.RemainTime=RemainTime;
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSUpdateTimerAll);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::NewProp_RemainTime = { "RemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameStateBase_eventGSUpdateTimerAll_Parms, RemainTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::NewProp_RemainTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateTimerAll", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateTimerAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(CGameStateBase_eventGSUpdateTimerAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSUpdateTimerAll)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RemainTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->GSUpdateTimerAll_Validate(Z_Param_RemainTime))
	{
		RPC_ValidateFailed(TEXT("GSUpdateTimerAll_Validate"));
		return;
	}
	P_THIS->GSUpdateTimerAll_Implementation(Z_Param_RemainTime);
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSUpdateTimerAll

// Begin Class ACGameStateBase Function IncreasePlayerNum
static const FName NAME_ACGameStateBase_IncreasePlayerNum = FName(TEXT("IncreasePlayerNum"));
void ACGameStateBase::IncreasePlayerNum()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_IncreasePlayerNum);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "IncreasePlayerNum", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execIncreasePlayerNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->IncreasePlayerNum_Validate())
	{
		RPC_ValidateFailed(TEXT("IncreasePlayerNum_Validate"));
		return;
	}
	P_THIS->IncreasePlayerNum_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function IncreasePlayerNum

// Begin Class ACGameStateBase
void ACGameStateBase::StaticRegisterNativesACGameStateBase()
{
	UClass* Class = ACGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GSUpdateGuestScoreAll", &ACGameStateBase::execGSUpdateGuestScoreAll },
		{ "GSUpdateHostScoreAll", &ACGameStateBase::execGSUpdateHostScoreAll },
		{ "GSUpdateResult", &ACGameStateBase::execGSUpdateResult },
		{ "GSUpdateScore", &ACGameStateBase::execGSUpdateScore },
		{ "GSUpdateTimerAll", &ACGameStateBase::execGSUpdateTimerAll },
		{ "IncreasePlayerNum", &ACGameStateBase::execIncreasePlayerNum },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGameStateBase);
UClass* Z_Construct_UClass_ACGameStateBase_NoRegister()
{
	return ACGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ACGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGameStateBase.h" },
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll, "GSUpdateGuestScoreAll" }, // 1036395430
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll, "GSUpdateHostScoreAll" }, // 3565757911
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateResult, "GSUpdateResult" }, // 1961778876
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateScore, "GSUpdateScore" }, // 261099385
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll, "GSUpdateTimerAll" }, // 4286613600
		{ &Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum, "IncreasePlayerNum" }, // 3457887008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGameStateBase_Statics::ClassParams = {
	&ACGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACGameStateBase()
{
	if (!Z_Registration_Info_UClass_ACGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGameStateBase.OuterSingleton, Z_Construct_UClass_ACGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACGameStateBase.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ACGameStateBase>()
{
	return ACGameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameStateBase);
ACGameStateBase::~ACGameStateBase() {}
// End Class ACGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGameStateBase, ACGameStateBase::StaticClass, TEXT("ACGameStateBase"), &Z_Registration_Info_UClass_ACGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameStateBase), 174377361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_3989753846(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
