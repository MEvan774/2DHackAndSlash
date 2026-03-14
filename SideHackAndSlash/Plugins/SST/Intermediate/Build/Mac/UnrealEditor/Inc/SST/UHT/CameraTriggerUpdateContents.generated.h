// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraTriggerUpdateContents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SST_CameraTriggerUpdateContents_generated_h
#error "CameraTriggerUpdateContents.generated.h already included, missing '#pragma once' in CameraTriggerUpdateContents.h"
#endif
#define SST_CameraTriggerUpdateContents_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SST_API UScriptStruct* StaticStruct<struct FCameraTriggerUpdateFloat>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SST_API UScriptStruct* StaticStruct<struct FCameraTriggerUpdateBool>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SST_API UScriptStruct* StaticStruct<struct FCameraTriggerUpdateVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h


#define FOREACH_ENUM_ECAMERATRIGGERUPDATEFLOATPARAMETER(op) \
	op(ECameraTriggerUpdateFloatParameter::ZoomDistance) \
	op(ECameraTriggerUpdateFloatParameter::MaxLeadDistance) \
	op(ECameraTriggerUpdateFloatParameter::LeadSpeed) \
	op(ECameraTriggerUpdateFloatParameter::ZLockHeight) 

enum class ECameraTriggerUpdateFloatParameter : uint8;
template<> struct TIsUEnumClass<ECameraTriggerUpdateFloatParameter> { enum { Value = true }; };
template<> SST_API UEnum* StaticEnum<ECameraTriggerUpdateFloatParameter>();

#define FOREACH_ENUM_ECAMERATRIGGERUPDATEBOOLPARAMETER(op) \
	op(ECameraTriggerUpdateBoolParameter::ZLock) \
	op(ECameraTriggerUpdateBoolParameter::FixLeadAtMax) 

enum class ECameraTriggerUpdateBoolParameter : uint8;
template<> struct TIsUEnumClass<ECameraTriggerUpdateBoolParameter> { enum { Value = true }; };
template<> SST_API UEnum* StaticEnum<ECameraTriggerUpdateBoolParameter>();

#define FOREACH_ENUM_ECAMERATRIGGERUPDATEVECTORPARAMETER(op) \
	op(ECameraTriggerUpdateVectorParameter::LocationOffset) \
	op(ECameraTriggerUpdateVectorParameter::RotationOffset) 

enum class ECameraTriggerUpdateVectorParameter : uint8;
template<> struct TIsUEnumClass<ECameraTriggerUpdateVectorParameter> { enum { Value = true }; };
template<> SST_API UEnum* StaticEnum<ECameraTriggerUpdateVectorParameter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
