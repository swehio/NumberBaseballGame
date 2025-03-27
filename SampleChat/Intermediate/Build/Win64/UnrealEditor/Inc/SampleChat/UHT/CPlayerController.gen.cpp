// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACPlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ACPlayerController Function OnSendMsgToServer
struct CPlayerController_eventOnSendMsgToServer_Parms
{
	FString Msg;
};
static const FName NAME_ACPlayerController_OnSendMsgToServer = FName(TEXT("OnSendMsgToServer"));
void ACPlayerController::OnSendMsgToServer(const FString& Msg)
{
	CPlayerController_eventOnSendMsgToServer_Parms Parms;
	Parms.Msg=Msg;
	UFunction* Func = FindFunctionChecked(NAME_ACPlayerController_OnSendMsgToServer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPlayerController_eventOnSendMsgToServer_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayerController, nullptr, "OnSendMsgToServer", nullptr, nullptr, Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::PropPointers), sizeof(CPlayerController_eventOnSendMsgToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(CPlayerController_eventOnSendMsgToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPlayerController::execOnSendMsgToServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSendMsgToServer_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class ACPlayerController Function OnSendMsgToServer

// Begin Class ACPlayerController Function OnSendStartToServer
static const FName NAME_ACPlayerController_OnSendStartToServer = FName(TEXT("OnSendStartToServer"));
void ACPlayerController::OnSendStartToServer()
{
	UFunction* Func = FindFunctionChecked(NAME_ACPlayerController_OnSendStartToServer);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACPlayerController_OnSendStartToServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayerController_OnSendStartToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayerController, nullptr, "OnSendStartToServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayerController_OnSendStartToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPlayerController_OnSendStartToServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACPlayerController_OnSendStartToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPlayerController_OnSendStartToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPlayerController::execOnSendStartToServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSendStartToServer_Implementation();
	P_NATIVE_END;
}
// End Class ACPlayerController Function OnSendStartToServer

// Begin Class ACPlayerController
void ACPlayerController::StaticRegisterNativesACPlayerController()
{
	UClass* Class = ACPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSendMsgToServer", &ACPlayerController::execOnSendMsgToServer },
		{ "OnSendStartToServer", &ACPlayerController::execOnSendStartToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlayerController);
UClass* Z_Construct_UClass_ACPlayerController_NoRegister()
{
	return ACPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPlayerController.h" },
		{ "ModuleRelativePath", "Public/CPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "CPlayerController" },
		{ "ModuleRelativePath", "Public/CPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPlayerController_OnSendMsgToServer, "OnSendMsgToServer" }, // 3933432223
		{ &Z_Construct_UFunction_ACPlayerController_OnSendStartToServer, "OnSendStartToServer" }, // 2204179315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPlayerController_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPlayerController, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayerController_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlayerController_Statics::ClassParams = {
	&ACPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlayerController()
{
	if (!Z_Registration_Info_UClass_ACPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlayerController.OuterSingleton, Z_Construct_UClass_ACPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlayerController.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ACPlayerController>()
{
	return ACPlayerController::StaticClass();
}
ACPlayerController::ACPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlayerController);
ACPlayerController::~ACPlayerController() {}
// End Class ACPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlayerController, ACPlayerController::StaticClass, TEXT("ACPlayerController"), &Z_Registration_Info_UClass_ACPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlayerController), 2127136992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_2024528220(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
