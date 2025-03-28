// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MYIDPlugin/Public/MYIDPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMYIDPluginBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UMYIDPluginBPLibrary();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UMYIDPluginBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MYIDPlugin();
// End Cross Module References

// Begin Class UMYIDPluginBPLibrary Function GetUserName
struct Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics
{
	struct MYIDPluginBPLibrary_eventGetUserName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MYIDPluginTesting" },
		{ "ModuleRelativePath", "Public/MYIDPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MYIDPluginBPLibrary_eventGetUserName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMYIDPluginBPLibrary, nullptr, "GetUserName", nullptr, nullptr, Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::MYIDPluginBPLibrary_eventGetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::MYIDPluginBPLibrary_eventGetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMYIDPluginBPLibrary::execGetUserName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMYIDPluginBPLibrary::GetUserName();
	P_NATIVE_END;
}
// End Class UMYIDPluginBPLibrary Function GetUserName

// Begin Class UMYIDPluginBPLibrary Function MYIDPluginSampleFunction
struct Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics
{
	struct MYIDPluginBPLibrary_eventMYIDPluginSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MYIDPluginTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "MYIDPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/MYIDPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MYIDPluginBPLibrary_eventMYIDPluginSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MYIDPluginBPLibrary_eventMYIDPluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMYIDPluginBPLibrary, nullptr, "MYIDPluginSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::MYIDPluginBPLibrary_eventMYIDPluginSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::MYIDPluginBPLibrary_eventMYIDPluginSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMYIDPluginBPLibrary::execMYIDPluginSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->MYIDPluginSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UMYIDPluginBPLibrary Function MYIDPluginSampleFunction

// Begin Class UMYIDPluginBPLibrary Function SetUserName
struct Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics
{
	struct MYIDPluginBPLibrary_eventSetUserName_Parms
	{
		FString NewName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MYIDPluginTesting" },
		{ "ModuleRelativePath", "Public/MYIDPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MYIDPluginBPLibrary_eventSetUserName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMYIDPluginBPLibrary, nullptr, "SetUserName", nullptr, nullptr, Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::MYIDPluginBPLibrary_eventSetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::MYIDPluginBPLibrary_eventSetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMYIDPluginBPLibrary::execSetUserName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMYIDPluginBPLibrary::SetUserName(Z_Param_NewName);
	P_NATIVE_END;
}
// End Class UMYIDPluginBPLibrary Function SetUserName

// Begin Class UMYIDPluginBPLibrary
void UMYIDPluginBPLibrary::StaticRegisterNativesUMYIDPluginBPLibrary()
{
	UClass* Class = UMYIDPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserName", &UMYIDPluginBPLibrary::execGetUserName },
		{ "MYIDPluginSampleFunction", &UMYIDPluginBPLibrary::execMYIDPluginSampleFunction },
		{ "SetUserName", &UMYIDPluginBPLibrary::execSetUserName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMYIDPluginBPLibrary);
UClass* Z_Construct_UClass_UMYIDPluginBPLibrary_NoRegister()
{
	return UMYIDPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UMYIDPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MYIDPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MYIDPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMYIDPluginBPLibrary_GetUserName, "GetUserName" }, // 2123593322
		{ &Z_Construct_UFunction_UMYIDPluginBPLibrary_MYIDPluginSampleFunction, "MYIDPluginSampleFunction" }, // 2071575226
		{ &Z_Construct_UFunction_UMYIDPluginBPLibrary_SetUserName, "SetUserName" }, // 151927861
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMYIDPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMYIDPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MYIDPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMYIDPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMYIDPluginBPLibrary_Statics::ClassParams = {
	&UMYIDPluginBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMYIDPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMYIDPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMYIDPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UMYIDPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMYIDPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UMYIDPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMYIDPluginBPLibrary.OuterSingleton;
}
template<> MYIDPLUGIN_API UClass* StaticClass<UMYIDPluginBPLibrary>()
{
	return UMYIDPluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMYIDPluginBPLibrary);
UMYIDPluginBPLibrary::~UMYIDPluginBPLibrary() {}
// End Class UMYIDPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMYIDPluginBPLibrary, UMYIDPluginBPLibrary::StaticClass, TEXT("UMYIDPluginBPLibrary"), &Z_Registration_Info_UClass_UMYIDPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMYIDPluginBPLibrary), 453170602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_942460022(TEXT("/Script/MYIDPlugin"),
	Z_CompiledInDeferFile_FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
