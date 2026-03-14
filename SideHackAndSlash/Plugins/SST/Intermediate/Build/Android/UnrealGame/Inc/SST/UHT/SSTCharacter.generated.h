// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SSTCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USSTCharacterMovementComponent;
#ifdef SST_SSTCharacter_generated_h
#error "SSTCharacter.generated.h already included, missing '#pragma once' in SSTCharacter.h"
#endif
#define SST_SSTCharacter_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReleaseJump_Implementation(); \
	virtual bool CanDash_Implementation() const; \
	virtual void Dash_Implementation(); \
	virtual void JumpOrDrop_Implementation(); \
	virtual void StopCrouchDrop_Implementation(); \
	virtual void CrouchDrop_Implementation(); \
 \
	DECLARE_FUNCTION(execReleaseJump); \
	DECLARE_FUNCTION(execCanDash); \
	DECLARE_FUNCTION(execGetSSTCharacterMovement); \
	DECLARE_FUNCTION(execDash); \
	DECLARE_FUNCTION(execJumpOrDrop); \
	DECLARE_FUNCTION(execStopCrouchDrop); \
	DECLARE_FUNCTION(execCrouchDrop);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASSTCharacter(); \
	friend struct Z_Construct_UClass_ASSTCharacter_Statics; \
public: \
	DECLARE_CLASS(ASSTCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SST"), NO_API) \
	DECLARE_SERIALIZER(ASSTCharacter)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASSTCharacter(ASSTCharacter&&); \
	NO_API ASSTCharacter(const ASSTCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASSTCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASSTCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASSTCharacter) \
	NO_API virtual ~ASSTCharacter();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SST_API UClass* StaticClass<class ASSTCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
