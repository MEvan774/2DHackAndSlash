// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/Enemybase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDEHACKANDSLASH_Enemybase_generated_h
#error "Enemybase.generated.h already included, missing '#pragma once' in Enemybase.h"
#endif
#define SIDEHACKANDSLASH_Enemybase_generated_h

#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_SPARSE_DATA
#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_ACCESSORS
#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemybase(); \
	friend struct Z_Construct_UClass_AEnemybase_Statics; \
public: \
	DECLARE_CLASS(AEnemybase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideHackAndSlash"), NO_API) \
	DECLARE_SERIALIZER(AEnemybase)


#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemybase(AEnemybase&&); \
	NO_API AEnemybase(const AEnemybase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemybase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemybase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemybase) \
	NO_API virtual ~AEnemybase();


#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_22_PROLOG
#define FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_SPARSE_DATA \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_ACCESSORS \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDEHACKANDSLASH_API UClass* StaticClass<class AEnemybase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Milan_Documents_GitHub_2DHackAndSlash_SideHackAndSlash_Source_SideHackAndSlash_Enemy_Enemybase_h


#define FOREACH_ENUM_EENEMYSTATES(op) \
	op(EEnemyStates::State_Idle) \
	op(EEnemyStates::State_Aggro) \
	op(EEnemyStates::State_AggroIdle) \
	op(EEnemyStates::State_Attack) \
	op(EEnemyStates::State_Stun) \
	op(EEnemyStates::State_FlyBack) \
	op(EEnemyStates::State_KnockDown) \
	op(EEnemyStates::State_PopUp) 

enum class EEnemyStates : uint8;
template<> struct TIsUEnumClass<EEnemyStates> { enum { Value = true }; };
template<> SIDEHACKANDSLASH_API UEnum* StaticEnum<EEnemyStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
