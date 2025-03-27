// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACGameStateBase_NoRegister();
SAMPLECHAT_API UEnum* Z_Construct_UEnum_SampleChat_EGameState();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Enum EGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SampleChat_EGameState, (UObject*)Z_Construct_UPackage__Script_SampleChat(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> SAMPLECHAT_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_SampleChat_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGS_BeforeStart.Name", "EGameState::EGS_BeforeStart" },
		{ "EGS_BeforFinish.Name", "EGameState::EGS_BeforFinish" },
		{ "EGS_Finish.Name", "EGameState::EGS_Finish" },
		{ "EGS_FinishTurn.Name", "EGameState::EGS_FinishTurn" },
		{ "EGS_Max.Name", "EGameState::EGS_Max" },
		{ "EGS_Start.Name", "EGameState::EGS_Start" },
		{ "EGS_WaitAnswer.Name", "EGameState::EGS_WaitAnswer" },
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::EGS_BeforeStart", (int64)EGameState::EGS_BeforeStart },
		{ "EGameState::EGS_Start", (int64)EGameState::EGS_Start },
		{ "EGameState::EGS_WaitAnswer", (int64)EGameState::EGS_WaitAnswer },
		{ "EGameState::EGS_FinishTurn", (int64)EGameState::EGS_FinishTurn },
		{ "EGameState::EGS_BeforFinish", (int64)EGameState::EGS_BeforFinish },
		{ "EGameState::EGS_Finish", (int64)EGameState::EGS_Finish },
		{ "EGameState::EGS_Max", (int64)EGameState::EGS_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SampleChat_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SampleChat,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_SampleChat_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SampleChat_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SampleChat_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SampleChat_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SampleChat_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_SampleChat_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// End Enum EGameState

// Begin Class ACGameStateBase Function GSSetEditableTextReadWrite
static const FName NAME_ACGameStateBase_GSSetEditableTextReadWrite = FName(TEXT("GSSetEditableTextReadWrite"));
void ACGameStateBase::GSSetEditableTextReadWrite()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSSetEditableTextReadWrite);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSSetEditableTextReadWrite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSSetEditableTextReadWrite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSSetEditableTextReadWrite_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSSetEditableTextReadWrite

// Begin Class ACGameStateBase Function GSSetStartButEnabled
static const FName NAME_ACGameStateBase_GSSetStartButEnabled = FName(TEXT("GSSetStartButEnabled"));
void ACGameStateBase::GSSetStartButEnabled()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSSetStartButEnabled);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSSetStartButEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSSetStartButEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSSetStartButEnabled_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSSetStartButEnabled

// Begin Class ACGameStateBase Function GSSetStartButHiddenAll
static const FName NAME_ACGameStateBase_GSSetStartButHiddenAll = FName(TEXT("GSSetStartButHiddenAll"));
void ACGameStateBase::GSSetStartButHiddenAll()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSSetStartButHiddenAll);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSSetStartButHiddenAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSSetStartButHiddenAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSSetStartButHiddenAll_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSSetStartButHiddenAll

// Begin Class ACGameStateBase Function GSShowServerAnswerAll
static const FName NAME_ACGameStateBase_GSShowServerAnswerAll = FName(TEXT("GSShowServerAnswerAll"));
void ACGameStateBase::GSShowServerAnswerAll()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_GSShowServerAnswerAll);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSShowServerAnswerAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execGSShowServerAnswerAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSShowServerAnswerAll_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function GSShowServerAnswerAll

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateGuestScoreAll", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateGuestScoreAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateHostScoreAll", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateHostScoreAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateResult", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateResult_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateScore", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateScore_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "GSUpdateTimerAll", nullptr, nullptr, Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::PropPointers), sizeof(CGameStateBase_eventGSUpdateTimerAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "IncreasePlayerNum", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum_Statics::Function_MetaDataParams) };
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
	P_THIS->IncreasePlayerNum_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function IncreasePlayerNum

// Begin Class ACGameStateBase Function SetBeforeStartSetting
static const FName NAME_ACGameStateBase_SetBeforeStartSetting = FName(TEXT("SetBeforeStartSetting"));
void ACGameStateBase::SetBeforeStartSetting()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_SetBeforeStartSetting);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "SetBeforeStartSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execSetBeforeStartSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeforeStartSetting_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function SetBeforeStartSetting

// Begin Class ACGameStateBase Function SetSwitchTurnSetting
static const FName NAME_ACGameStateBase_SetSwitchTurnSetting = FName(TEXT("SetSwitchTurnSetting"));
void ACGameStateBase::SetSwitchTurnSetting()
{
	UFunction* Func = FindFunctionChecked(NAME_ACGameStateBase_SetSwitchTurnSetting);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGameStateBase, nullptr, "SetSwitchTurnSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACGameStateBase::execSetSwitchTurnSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwitchTurnSetting_Implementation();
	P_NATIVE_END;
}
// End Class ACGameStateBase Function SetSwitchTurnSetting

// Begin Class ACGameStateBase
void ACGameStateBase::StaticRegisterNativesACGameStateBase()
{
	UClass* Class = ACGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GSSetEditableTextReadWrite", &ACGameStateBase::execGSSetEditableTextReadWrite },
		{ "GSSetStartButEnabled", &ACGameStateBase::execGSSetStartButEnabled },
		{ "GSSetStartButHiddenAll", &ACGameStateBase::execGSSetStartButHiddenAll },
		{ "GSShowServerAnswerAll", &ACGameStateBase::execGSShowServerAnswerAll },
		{ "GSUpdateGuestScoreAll", &ACGameStateBase::execGSUpdateGuestScoreAll },
		{ "GSUpdateHostScoreAll", &ACGameStateBase::execGSUpdateHostScoreAll },
		{ "GSUpdateResult", &ACGameStateBase::execGSUpdateResult },
		{ "GSUpdateScore", &ACGameStateBase::execGSUpdateScore },
		{ "GSUpdateTimerAll", &ACGameStateBase::execGSUpdateTimerAll },
		{ "IncreasePlayerNum", &ACGameStateBase::execIncreasePlayerNum },
		{ "SetBeforeStartSetting", &ACGameStateBase::execSetBeforeStartSetting },
		{ "SetSwitchTurnSetting", &ACGameStateBase::execSetSwitchTurnSetting },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHostTurn_MetaData[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAnswer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsHostTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHostTurn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Chance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAnswer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGameStateBase_GSSetEditableTextReadWrite, "GSSetEditableTextReadWrite" }, // 3385608889
		{ &Z_Construct_UFunction_ACGameStateBase_GSSetStartButEnabled, "GSSetStartButEnabled" }, // 3042287314
		{ &Z_Construct_UFunction_ACGameStateBase_GSSetStartButHiddenAll, "GSSetStartButHiddenAll" }, // 1112774082
		{ &Z_Construct_UFunction_ACGameStateBase_GSShowServerAnswerAll, "GSShowServerAnswerAll" }, // 3325619200
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateGuestScoreAll, "GSUpdateGuestScoreAll" }, // 1813131853
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateHostScoreAll, "GSUpdateHostScoreAll" }, // 1056750285
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateResult, "GSUpdateResult" }, // 3752274104
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateScore, "GSUpdateScore" }, // 3761318121
		{ &Z_Construct_UFunction_ACGameStateBase_GSUpdateTimerAll, "GSUpdateTimerAll" }, // 2271092849
		{ &Z_Construct_UFunction_ACGameStateBase_IncreasePlayerNum, "IncreasePlayerNum" }, // 3574656360
		{ &Z_Construct_UFunction_ACGameStateBase_SetBeforeStartSetting, "SetBeforeStartSetting" }, // 660727963
		{ &Z_Construct_UFunction_ACGameStateBase_SetSwitchTurnSetting, "SetSwitchTurnSetting" }, // 520783724
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACGameStateBase_Statics::NewProp_IsHostTurn_SetBit(void* Obj)
{
	((ACGameStateBase*)Obj)->IsHostTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACGameStateBase_Statics::NewProp_IsHostTurn = { "IsHostTurn", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACGameStateBase), &Z_Construct_UClass_ACGameStateBase_Statics::NewProp_IsHostTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHostTurn_MetaData), NewProp_IsHostTurn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACGameStateBase_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGameStateBase, Chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chance_MetaData), NewProp_Chance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACGameStateBase_Statics::NewProp_ServerAnswer = { "ServerAnswer", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGameStateBase, ServerAnswer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAnswer_MetaData), NewProp_ServerAnswer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGameStateBase_Statics::NewProp_IsHostTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGameStateBase_Statics::NewProp_Chance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGameStateBase_Statics::NewProp_ServerAnswer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameStateBase_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ACGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACGameStateBase_Statics::PropPointers),
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
void ACGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_IsHostTurn(TEXT("IsHostTurn"));
	static const FName Name_Chance(TEXT("Chance"));
	static const FName Name_ServerAnswer(TEXT("ServerAnswer"));
	const bool bIsValid = true
		&& Name_IsHostTurn == ClassReps[(int32)ENetFields_Private::IsHostTurn].Property->GetFName()
		&& Name_Chance == ClassReps[(int32)ENetFields_Private::Chance].Property->GetFName()
		&& Name_ServerAnswer == ClassReps[(int32)ENetFields_Private::ServerAnswer].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACGameStateBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameStateBase);
ACGameStateBase::~ACGameStateBase() {}
// End Class ACGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 382397621U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGameStateBase, ACGameStateBase::StaticClass, TEXT("ACGameStateBase"), &Z_Registration_Info_UClass_ACGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameStateBase), 605533068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_1148881012(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
