// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SAMPLECHAT_API UClass* Z_Construct_UClass_UCGameInstanceSubsystem();
SAMPLECHAT_API UClass* Z_Construct_UClass_UCGameInstanceSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UCGameInstanceSubsystem Function GISSGetUserName
struct Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics
{
	struct CGameInstanceSubsystem_eventGISSGetUserName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameInstanceSubsystem_eventGISSGetUserName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCGameInstanceSubsystem, nullptr, "GISSGetUserName", nullptr, nullptr, Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::CGameInstanceSubsystem_eventGISSGetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::CGameInstanceSubsystem_eventGISSGetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCGameInstanceSubsystem::execGISSGetUserName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GISSGetUserName();
	P_NATIVE_END;
}
// End Class UCGameInstanceSubsystem Function GISSGetUserName

// Begin Class UCGameInstanceSubsystem Function GISSSetUserName
struct Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics
{
	struct CGameInstanceSubsystem_eventGISSSetUserName_Parms
	{
		FString NewUserName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGameInstanceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewUserName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::NewProp_NewUserName = { "NewUserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CGameInstanceSubsystem_eventGISSSetUserName_Parms, NewUserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUserName_MetaData), NewProp_NewUserName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::NewProp_NewUserName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCGameInstanceSubsystem, nullptr, "GISSSetUserName", nullptr, nullptr, Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::CGameInstanceSubsystem_eventGISSSetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::CGameInstanceSubsystem_eventGISSSetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCGameInstanceSubsystem::execGISSSetUserName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewUserName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GISSSetUserName(Z_Param_NewUserName);
	P_NATIVE_END;
}
// End Class UCGameInstanceSubsystem Function GISSSetUserName

// Begin Class UCGameInstanceSubsystem
void UCGameInstanceSubsystem::StaticRegisterNativesUCGameInstanceSubsystem()
{
	UClass* Class = UCGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GISSGetUserName", &UCGameInstanceSubsystem::execGISSGetUserName },
		{ "GISSSetUserName", &UCGameInstanceSubsystem::execGISSSetUserName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCGameInstanceSubsystem);
UClass* Z_Construct_UClass_UCGameInstanceSubsystem_NoRegister()
{
	return UCGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCGameInstanceSubsystem_GISSGetUserName, "GISSGetUserName" }, // 1188956961
		{ &Z_Construct_UFunction_UCGameInstanceSubsystem_GISSSetUserName, "GISSSetUserName" }, // 2401460356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCGameInstanceSubsystem_Statics::ClassParams = {
	&UCGameInstanceSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UCGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UCGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCGameInstanceSubsystem.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UCGameInstanceSubsystem>()
{
	return UCGameInstanceSubsystem::StaticClass();
}
UCGameInstanceSubsystem::UCGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCGameInstanceSubsystem);
UCGameInstanceSubsystem::~UCGameInstanceSubsystem() {}
// End Class UCGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCGameInstanceSubsystem, UCGameInstanceSubsystem::StaticClass, TEXT("UCGameInstanceSubsystem"), &Z_Registration_Info_UClass_UCGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCGameInstanceSubsystem), 1848134542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_1197272971(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
