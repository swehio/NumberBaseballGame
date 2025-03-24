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
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACPlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ACPlayerController
void ACPlayerController::StaticRegisterNativesACPlayerController()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ACPlayerController, ACPlayerController::StaticClass, TEXT("ACPlayerController"), &Z_Registration_Info_UClass_ACPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlayerController), 2046253487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_1520557306(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
