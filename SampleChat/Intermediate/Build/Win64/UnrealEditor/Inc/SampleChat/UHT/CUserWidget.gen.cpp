// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget() {}

// Begin Cross Module References
SAMPLECHAT_API UClass* Z_Construct_UClass_UCUserWidget();
SAMPLECHAT_API UClass* Z_Construct_UClass_UCUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UCUserWidget
void UCUserWidget::StaticRegisterNativesUCUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUserWidget);
UClass* Z_Construct_UClass_UCUserWidget_NoRegister()
{
	return UCUserWidget::StaticClass();
}
struct Z_Construct_UClass_UCUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CUserWidget.h" },
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_Statics::ClassParams = {
	&UCUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCUserWidget()
{
	if (!Z_Registration_Info_UClass_UCUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUserWidget.OuterSingleton, Z_Construct_UClass_UCUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCUserWidget.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UCUserWidget>()
{
	return UCUserWidget::StaticClass();
}
UCUserWidget::UCUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget);
UCUserWidget::~UCUserWidget() {}
// End Class UCUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCUserWidget, UCUserWidget::StaticClass, TEXT("UCUserWidget"), &Z_Registration_Info_UClass_UCUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUserWidget), 2885949271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_997275307(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
