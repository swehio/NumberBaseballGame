// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMYIDPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MYIDPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MYIDPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_MYIDPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MYIDPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCBA493AD,
				0xEE2233CD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MYIDPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MYIDPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MYIDPlugin(Z_Construct_UPackage__Script_MYIDPlugin, TEXT("/Script/MYIDPlugin"), Z_Registration_Info_UPackage__Script_MYIDPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCBA493AD, 0xEE2233CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
