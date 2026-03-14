// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FollowCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SST_FollowCameraComponent_generated_h
#error "FollowCameraComponent.generated.h already included, missing '#pragma once' in FollowCameraComponent.h"
#endif
#define SST_FollowCameraComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetRotationOffset_Implementation(FVector Value, float BlendTime); \
	virtual void SetLocationOffset_Implementation(FVector Value, float BlendTime); \
	virtual void SetFixLeadAtMax_Implementation(bool Value); \
	virtual void SetZLock_Implementation(bool Value); \
	virtual void SetZLockHeight_Implementation(float Value, float BlendTime); \
	virtual void SetLeadSpeed_Implementation(float Value); \
	virtual void SetMaxLeadDistance_Implementation(float Value); \
	virtual void SetZoomDistance_Implementation(float Value, float BlendTime); \
 \
	DECLARE_FUNCTION(execSetRotationOffset); \
	DECLARE_FUNCTION(execSetLocationOffset); \
	DECLARE_FUNCTION(execSetFixLeadAtMax); \
	DECLARE_FUNCTION(execSetZLock); \
	DECLARE_FUNCTION(execSetZLockHeight); \
	DECLARE_FUNCTION(execSetLeadSpeed); \
	DECLARE_FUNCTION(execSetMaxLeadDistance); \
	DECLARE_FUNCTION(execSetZoomDistance); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetFixLeadAtMax); \
	DECLARE_FUNCTION(execGetZLock); \
	DECLARE_FUNCTION(execGetZLockHeight); \
	DECLARE_FUNCTION(execGetLeadSpeed); \
	DECLARE_FUNCTION(execGetMaxLeadDistance); \
	DECLARE_FUNCTION(execGetZoomDistance);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFollowCameraComponent(); \
	friend struct Z_Construct_UClass_UFollowCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UFollowCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SST"), NO_API) \
	DECLARE_SERIALIZER(UFollowCameraComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFollowCameraComponent(UFollowCameraComponent&&); \
	NO_API UFollowCameraComponent(const UFollowCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFollowCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFollowCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFollowCameraComponent) \
	NO_API virtual ~UFollowCameraComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SST_API UClass* StaticClass<class UFollowCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
