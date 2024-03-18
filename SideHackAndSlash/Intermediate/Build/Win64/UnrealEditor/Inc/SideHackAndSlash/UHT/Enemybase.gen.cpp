// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideHackAndSlash/Enemy/Enemybase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemybase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SIDEHACKANDSLASH_API UClass* Z_Construct_UClass_AEnemybase();
	SIDEHACKANDSLASH_API UClass* Z_Construct_UClass_AEnemybase_NoRegister();
	SIDEHACKANDSLASH_API UEnum* Z_Construct_UEnum_SideHackAndSlash_EEnemyStates();
	UPackage* Z_Construct_UPackage__Script_SideHackAndSlash();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyStates;
	static UEnum* EEnemyStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SideHackAndSlash_EEnemyStates, (UObject*)Z_Construct_UPackage__Script_SideHackAndSlash(), TEXT("EEnemyStates"));
		}
		return Z_Registration_Info_UEnum_EEnemyStates.OuterSingleton;
	}
	template<> SIDEHACKANDSLASH_API UEnum* StaticEnum<EEnemyStates>()
	{
		return EEnemyStates_StaticEnum();
	}
	struct Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::Enumerators[] = {
		{ "EEnemyStates::State_Idle", (int64)EEnemyStates::State_Idle },
		{ "EEnemyStates::State_Aggro", (int64)EEnemyStates::State_Aggro },
		{ "EEnemyStates::State_AggroIdle", (int64)EEnemyStates::State_AggroIdle },
		{ "EEnemyStates::State_Attack", (int64)EEnemyStates::State_Attack },
		{ "EEnemyStates::State_Stun", (int64)EEnemyStates::State_Stun },
		{ "EEnemyStates::State_FlyBack", (int64)EEnemyStates::State_FlyBack },
		{ "EEnemyStates::State_KnockDown", (int64)EEnemyStates::State_KnockDown },
		{ "EEnemyStates::State_PopUp", (int64)EEnemyStates::State_PopUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enemy/Enemybase.h" },
		{ "State_Aggro.DisplayName", "Aggro" },
		{ "State_Aggro.Name", "EEnemyStates::State_Aggro" },
		{ "State_AggroIdle.DisplayName", "AggroIdle" },
		{ "State_AggroIdle.Name", "EEnemyStates::State_AggroIdle" },
		{ "State_Attack.DisplayName", "Attack" },
		{ "State_Attack.Name", "EEnemyStates::State_Attack" },
		{ "State_FlyBack.DisplayName", "FlyBack" },
		{ "State_FlyBack.Name", "EEnemyStates::State_FlyBack" },
		{ "State_Idle.DisplayName", "Idle" },
		{ "State_Idle.Name", "EEnemyStates::State_Idle" },
		{ "State_KnockDown.DisplayName", "KnockDown" },
		{ "State_KnockDown.Name", "EEnemyStates::State_KnockDown" },
		{ "State_PopUp.DisplayName", "PopUp" },
		{ "State_PopUp.Name", "EEnemyStates::State_PopUp" },
		{ "State_Stun.DisplayName", "Stun" },
		{ "State_Stun.Name", "EEnemyStates::State_Stun" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SideHackAndSlash,
		nullptr,
		"EEnemyStates",
		"EEnemyStates",
		Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SideHackAndSlash_EEnemyStates()
	{
		if (!Z_Registration_Info_UEnum_EEnemyStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyStates.InnerSingleton, Z_Construct_UEnum_SideHackAndSlash_EEnemyStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyStates.InnerSingleton;
	}
	void AEnemybase::StaticRegisterNativesAEnemybase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemybase);
	UClass* Z_Construct_UClass_AEnemybase_NoRegister()
	{
		return AEnemybase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemybase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemybase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SideHackAndSlash,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemybase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Enemybase.h" },
		{ "ModuleRelativePath", "Enemy/Enemybase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "EnemyBehaviour" },
		{ "ModuleRelativePath", "Enemy/Enemybase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemybase, CurrentState), Z_Construct_UEnum_SideHackAndSlash_EEnemyStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState_MetaData) }; // 9787433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemybase_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Enemy/Enemybase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemybase_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemybase, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::NewProp_MaxHP_MetaData), Z_Construct_UClass_AEnemybase_Statics::NewProp_MaxHP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Enemy/Enemybase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemybase, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentHP_MetaData), Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentHP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemybase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemybase_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemybase_Statics::NewProp_CurrentHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemybase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemybase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemybase_Statics::ClassParams = {
		&AEnemybase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemybase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemybase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemybase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemybase()
	{
		if (!Z_Registration_Info_UClass_AEnemybase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemybase.OuterSingleton, Z_Construct_UClass_AEnemybase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemybase.OuterSingleton;
	}
	template<> SIDEHACKANDSLASH_API UClass* StaticClass<AEnemybase>()
	{
		return AEnemybase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemybase);
	AEnemybase::~AEnemybase() {}
	struct Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics::EnumInfo[] = {
		{ EEnemyStates_StaticEnum, TEXT("EEnemyStates"), &Z_Registration_Info_UEnum_EEnemyStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 9787433U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemybase, AEnemybase::StaticClass, TEXT("AEnemybase"), &Z_Registration_Info_UClass_AEnemybase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemybase), 2972067104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_1143079826(TEXT("/Script/SideHackAndSlash"),
		Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Milan_Documents_Unreal_Projects_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
