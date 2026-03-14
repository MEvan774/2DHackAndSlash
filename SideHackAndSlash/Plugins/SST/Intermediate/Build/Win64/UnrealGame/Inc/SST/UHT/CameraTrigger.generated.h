// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SST_CameraTrigger_generated_h
#error "CameraTrigger.generated.h already included, missing '#pragma once' in CameraTrigger.h"
#endif
#define SST_CameraTrigger_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitiateCameraUpdate_Implementation(AActor* Actor, bool Undo); \
	virtual void OnOverlapEnd_Implementation(AActor* ThisActor, AActor* OtherActor); \
	virtual void OnOverlapBegin_Implementation(AActor* ThisActor, AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execInitiateCameraUpdate); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraTrigger(); \
	friend struct Z_Construct_UClass_ACameraTrigger_Statics; \
public: \
	DECLARE_CLASS(ACameraTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SST"), NO_API) \
	DECLARE_SERIALIZER(ACameraTrigger)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraTrigger(ACameraTrigger&&); \
	NO_API ACameraTrigger(const ACameraTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraTrigger) \
	NO_API virtual ~ACameraTrigger();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SST_API UClass* StaticClass<class ACameraTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
