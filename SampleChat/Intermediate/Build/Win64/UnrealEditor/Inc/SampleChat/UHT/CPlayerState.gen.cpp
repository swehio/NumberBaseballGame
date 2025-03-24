// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACPlayerState();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ACPlayerState
void ACPlayerState::StaticRegisterNativesACPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlayerState);
UClass* Z_Construct_UClass_ACPlayerState_NoRegister()
{
	return ACPlayerState::StaticClass();
}
struct Z_Construct_UClass_ACPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPlayerState.h" },
		{ "ModuleRelativePath", "Public/CPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlayerState_Statics::ClassParams = {
	&ACPlayerState::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlayerState()
{
	if (!Z_Registration_Info_UClass_ACPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlayerState.OuterSingleton, Z_Construct_UClass_ACPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlayerState.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ACPlayerState>()
{
	return ACPlayerState::StaticClass();
}
ACPlayerState::ACPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlayerState);
ACPlayerState::~ACPlayerState() {}
// End Class ACPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlayerState, ACPlayerState::StaticClass, TEXT("ACPlayerState"), &Z_Registration_Info_UClass_ACPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlayerState), 1973934950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_3461333689(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
