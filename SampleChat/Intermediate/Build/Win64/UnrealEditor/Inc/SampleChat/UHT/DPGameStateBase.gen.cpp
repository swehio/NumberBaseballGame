// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/DPGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ADPGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ADPGameStateBase_NoRegister();
SAMPLECHAT_API UEnum* Z_Construct_UEnum_SampleChat_EGamePhase();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Enum EGamePhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePhase;
static UEnum* EGamePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SampleChat_EGamePhase, (UObject*)Z_Construct_UPackage__Script_SampleChat(), TEXT("EGamePhase"));
	}
	return Z_Registration_Info_UEnum_EGamePhase.OuterSingleton;
}
template<> SAMPLECHAT_API UEnum* StaticEnum<EGamePhase>()
{
	return EGamePhase_StaticEnum();
}
struct Z_Construct_UEnum_SampleChat_EGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameOver.Name", "EGamePhase::GameOver" },
		{ "Guessing.Name", "EGamePhase::Guessing" },
		{ "Judging.Name", "EGamePhase::Judging" },
		{ "Max.Name", "EGamePhase::Max" },
		{ "ModuleRelativePath", "Public/DPGameStateBase.h" },
		{ "TurnSwitching.Name", "EGamePhase::TurnSwitching" },
		{ "Wating.Name", "EGamePhase::Wating" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamePhase::Wating", (int64)EGamePhase::Wating },
		{ "EGamePhase::Guessing", (int64)EGamePhase::Guessing },
		{ "EGamePhase::Judging", (int64)EGamePhase::Judging },
		{ "EGamePhase::TurnSwitching", (int64)EGamePhase::TurnSwitching },
		{ "EGamePhase::GameOver", (int64)EGamePhase::GameOver },
		{ "EGamePhase::Max", (int64)EGamePhase::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SampleChat_EGamePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SampleChat,
	nullptr,
	"EGamePhase",
	"EGamePhase",
	Z_Construct_UEnum_SampleChat_EGamePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SampleChat_EGamePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SampleChat_EGamePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SampleChat_EGamePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SampleChat_EGamePhase()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePhase.InnerSingleton, Z_Construct_UEnum_SampleChat_EGamePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamePhase.InnerSingleton;
}
// End Enum EGamePhase

// Begin Class ADPGameStateBase Function OnRep_CurrentGamePhase
struct Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DPGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADPGameStateBase, nullptr, "OnRep_CurrentGamePhase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADPGameStateBase::execOnRep_CurrentGamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentGamePhase();
	P_NATIVE_END;
}
// End Class ADPGameStateBase Function OnRep_CurrentGamePhase

// Begin Class ADPGameStateBase
void ADPGameStateBase::StaticRegisterNativesADPGameStateBase()
{
	UClass* Class = ADPGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentGamePhase", &ADPGameStateBase::execOnRep_CurrentGamePhase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADPGameStateBase);
UClass* Z_Construct_UClass_ADPGameStateBase_NoRegister()
{
	return ADPGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ADPGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DPGameStateBase.h" },
		{ "ModuleRelativePath", "Public/DPGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGamePhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/DPGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGamePhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGamePhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADPGameStateBase_OnRep_CurrentGamePhase, "OnRep_CurrentGamePhase" }, // 109855702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADPGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADPGameStateBase_Statics::NewProp_CurrentGamePhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADPGameStateBase_Statics::NewProp_CurrentGamePhase = { "CurrentGamePhase", "OnRep_CurrentGamePhase", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADPGameStateBase, CurrentGamePhase), Z_Construct_UEnum_SampleChat_EGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGamePhase_MetaData), NewProp_CurrentGamePhase_MetaData) }; // 1425190751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADPGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADPGameStateBase_Statics::NewProp_CurrentGamePhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADPGameStateBase_Statics::NewProp_CurrentGamePhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADPGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADPGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADPGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADPGameStateBase_Statics::ClassParams = {
	&ADPGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADPGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADPGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADPGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADPGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADPGameStateBase()
{
	if (!Z_Registration_Info_UClass_ADPGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADPGameStateBase.OuterSingleton, Z_Construct_UClass_ADPGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADPGameStateBase.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ADPGameStateBase>()
{
	return ADPGameStateBase::StaticClass();
}
void ADPGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentGamePhase(TEXT("CurrentGamePhase"));
	const bool bIsValid = true
		&& Name_CurrentGamePhase == ClassReps[(int32)ENetFields_Private::CurrentGamePhase].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADPGameStateBase"));
}
ADPGameStateBase::ADPGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADPGameStateBase);
ADPGameStateBase::~ADPGameStateBase() {}
// End Class ADPGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGamePhase_StaticEnum, TEXT("EGamePhase"), &Z_Registration_Info_UEnum_EGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1425190751U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADPGameStateBase, ADPGameStateBase::StaticClass, TEXT("ADPGameStateBase"), &Z_Registration_Info_UClass_ADPGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADPGameStateBase), 1146174219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_1266681102(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
