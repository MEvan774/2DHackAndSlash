// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideHackAndSlash/SideHackAndSlashGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideHackAndSlashGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIDEHACKANDSLASH_API UClass* Z_Construct_UClass_ASideHackAndSlashGameMode();
	SIDEHACKANDSLASH_API UClass* Z_Construct_UClass_ASideHackAndSlashGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SideHackAndSlash();
// End Cross Module References
	void ASideHackAndSlashGameMode::StaticRegisterNativesASideHackAndSlashGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASideHackAndSlashGameMode);
	UClass* Z_Construct_UClass_ASideHackAndSlashGameMode_NoRegister()
	{
		return ASideHackAndSlashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASideHackAndSlashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideHackAndSlash,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SideHackAndSlashGameMode.h" },
		{ "ModuleRelativePath", "SideHackAndSlashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideHackAndSlashGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::ClassParams = {
		&ASideHackAndSlashGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASideHackAndSlashGameMode()
	{
		if (!Z_Registration_Info_UClass_ASideHackAndSlashGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideHackAndSlashGameMode.OuterSingleton, Z_Construct_UClass_ASideHackAndSlashGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASideHackAndSlashGameMode.OuterSingleton;
	}
	template<> SIDEHACKANDSLASH_API UClass* StaticClass<ASideHackAndSlashGameMode>()
	{
		return ASideHackAndSlashGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideHackAndSlashGameMode);
	ASideHackAndSlashGameMode::~ASideHackAndSlashGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_SideHackAndSlashGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_SideHackAndSlashGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASideHackAndSlashGameMode, ASideHackAndSlashGameMode::StaticClass, TEXT("ASideHackAndSlashGameMode"), &Z_Registration_Info_UClass_ASideHackAndSlashGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideHackAndSlashGameMode), 2087444714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_SideHackAndSlashGameMode_h_2643655604(TEXT("/Script/SideHackAndSlash"),
		Z_CompiledInDeferFile_FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_SideHackAndSlashGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_SideHackAndSlashGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
