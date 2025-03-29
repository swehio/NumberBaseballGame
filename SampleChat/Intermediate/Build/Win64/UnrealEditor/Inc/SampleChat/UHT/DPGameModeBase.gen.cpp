// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/DPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ADPGameModeBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ADPGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ADPGameModeBase
void ADPGameModeBase::StaticRegisterNativesADPGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADPGameModeBase);
UClass* Z_Construct_UClass_ADPGameModeBase_NoRegister()
{
	return ADPGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ADPGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DPGameModeBase.h" },
		{ "ModuleRelativePath", "Public/DPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADPGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADPGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADPGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADPGameModeBase_Statics::ClassParams = {
	&ADPGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADPGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADPGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADPGameModeBase()
{
	if (!Z_Registration_Info_UClass_ADPGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADPGameModeBase.OuterSingleton, Z_Construct_UClass_ADPGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADPGameModeBase.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ADPGameModeBase>()
{
	return ADPGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADPGameModeBase);
ADPGameModeBase::~ADPGameModeBase() {}
// End Class ADPGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADPGameModeBase, ADPGameModeBase::StaticClass, TEXT("ADPGameModeBase"), &Z_Registration_Info_UClass_ADPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADPGameModeBase), 855850305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_1572361001(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
