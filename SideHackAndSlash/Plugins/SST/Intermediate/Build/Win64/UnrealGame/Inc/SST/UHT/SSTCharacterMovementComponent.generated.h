// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SSTCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SST_SSTCharacterMovementComponent_generated_h
#error "SSTCharacterMovementComponent.generated.h already included, missing '#pragma once' in SSTCharacterMovementComponent.h"
#endif
#define SST_SSTCharacterMovementComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_22_DELEGATE \
SST_API void FPerformDashDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerformDashDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_23_DELEGATE \
SST_API void FEndDashDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndDashDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndDash_Implementation(); \
	virtual void OnBeginDash_Implementation(); \
	virtual void OnEndWallslide_Implementation(); \
	virtual void OnBeginWallslide_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsDashing); \
	DECLARE_FUNCTION(execOnRep_IsWallsliding); \
	DECLARE_FUNCTION(execOnEndDash); \
	DECLARE_FUNCTION(execOnBeginDash); \
	DECLARE_FUNCTION(execCanDash); \
	DECLARE_FUNCTION(execOnEndWallslide); \
	DECLARE_FUNCTION(execOnBeginWallslide); \
	DECLARE_FUNCTION(execRequestTurnAround); \
	DECLARE_FUNCTION(execCanWalljump); \
	DECLARE_FUNCTION(execIsCustomMovementMode); \
	DECLARE_FUNCTION(execIsFacingRight);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSSTCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_USSTCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USSTCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SST"), NO_API) \
	DECLARE_SERIALIZER(USSTCharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsDashing=NETFIELD_REP_START, \
		IsWallsliding, \
		FacingRight, \
		NETFIELD_REP_END=FacingRight	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USSTCharacterMovementComponent(USSTCharacterMovementComponent&&); \
	NO_API USSTCharacterMovementComponent(const USSTCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USSTCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USSTCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USSTCharacterMovementComponent) \
	NO_API virtual ~USSTCharacterMovementComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_35_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SST_API UClass* StaticClass<class USSTCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h


#define FOREACH_ENUM_ESSTCHARACTERMOVEMENTMODE(op) \
	op(FSSTMOVE_NONE) \
	op(FSSTMOVE_WALLSLIDING) \
	op(FSSTMOVE_DASHING) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
