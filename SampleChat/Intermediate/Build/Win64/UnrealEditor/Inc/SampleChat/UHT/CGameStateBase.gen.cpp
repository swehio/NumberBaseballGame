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
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ACGameStateBase
void ACGameStateBase::StaticRegisterNativesACGameStateBase()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGameStateBase.h" },
		{ "ModuleRelativePath", "Public/CGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
ACGameStateBase::ACGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameStateBase);
ACGameStateBase::~ACGameStateBase() {}
// End Class ACGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGameStateBase, ACGameStateBase::StaticClass, TEXT("ACGameStateBase"), &Z_Registration_Info_UClass_ACGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameStateBase), 1407597830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_2018163376(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
