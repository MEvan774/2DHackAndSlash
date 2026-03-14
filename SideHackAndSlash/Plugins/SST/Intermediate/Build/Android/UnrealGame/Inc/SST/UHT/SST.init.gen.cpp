// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSST_init() {}
	SST_API UFunction* Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature();
	SST_API UFunction* Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SST;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SST()
	{
		if (!Z_Registration_Info_UPackage__Script_SST.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SST",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x11EE1FEB,
				0x1C5A11BD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SST.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SST.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SST(Z_Construct_UPackage__Script_SST, TEXT("/Script/SST"), Z_Registration_Info_UPackage__Script_SST, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x11EE1FEB, 0x1C5A11BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
