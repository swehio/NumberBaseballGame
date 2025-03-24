// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACGameModeBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ACGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ACGameModeBase
void ACGameModeBase::StaticRegisterNativesACGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGameModeBase);
UClass* Z_Construct_UClass_ACGameModeBase_NoRegister()
{
	return ACGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGameModeBase_Statics::ClassParams = {
	&ACGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACGameModeBase()
{
	if (!Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton, Z_Construct_UClass_ACGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ACGameModeBase>()
{
	return ACGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameModeBase);
ACGameModeBase::~ACGameModeBase() {}
// End Class ACGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGameModeBase, ACGameModeBase::StaticClass, TEXT("ACGameModeBase"), &Z_Registration_Info_UClass_ACGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameModeBase), 1593274520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_3257650915(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
