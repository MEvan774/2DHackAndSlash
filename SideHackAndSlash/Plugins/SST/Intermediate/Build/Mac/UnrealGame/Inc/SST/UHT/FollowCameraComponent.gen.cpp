// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/FollowCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFollowCameraComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	SST_API UClass* Z_Construct_UClass_UFollowCameraComponent();
	SST_API UClass* Z_Construct_UClass_UFollowCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References
	DEFINE_FUNCTION(UFollowCameraComponent::execSetRotationOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationOffset_Implementation(Z_Param_Value,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetLocationOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationOffset_Implementation(Z_Param_Value,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetFixLeadAtMax)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFixLeadAtMax_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetZLock)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZLock_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetZLockHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZLockHeight_Implementation(Z_Param_Value,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetLeadSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeadSpeed_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetMaxLeadDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLeadDistance_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execSetZoomDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZoomDistance_Implementation(Z_Param_Value,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetRotationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRotationOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetLocationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetFixLeadAtMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFixLeadAtMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetZLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetZLock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetZLockHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetZLockHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetLeadSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeadSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetMaxLeadDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxLeadDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFollowCameraComponent::execGetZoomDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetZoomDistance();
		P_NATIVE_END;
	}
	struct FollowCameraComponent_eventSetFixLeadAtMax_Parms
	{
		bool Value;
	};
	struct FollowCameraComponent_eventSetLeadSpeed_Parms
	{
		float Value;
	};
	struct FollowCameraComponent_eventSetLocationOffset_Parms
	{
		FVector Value;
		float BlendTime;
	};
	struct FollowCameraComponent_eventSetMaxLeadDistance_Parms
	{
		float Value;
	};
	struct FollowCameraComponent_eventSetRotationOffset_Parms
	{
		FVector Value;
		float BlendTime;
	};
	struct FollowCameraComponent_eventSetZLock_Parms
	{
		bool Value;
	};
	struct FollowCameraComponent_eventSetZLockHeight_Parms
	{
		float Value;
		float BlendTime;
	};
	struct FollowCameraComponent_eventSetZoomDistance_Parms
	{
		float Value;
		float BlendTime;
	};
	static FName NAME_UFollowCameraComponent_SetFixLeadAtMax = FName(TEXT("SetFixLeadAtMax"));
	void UFollowCameraComponent::SetFixLeadAtMax(bool Value)
	{
		FollowCameraComponent_eventSetFixLeadAtMax_Parms Parms;
		Parms.Value=Value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetFixLeadAtMax),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetLeadSpeed = FName(TEXT("SetLeadSpeed"));
	void UFollowCameraComponent::SetLeadSpeed(float Value)
	{
		FollowCameraComponent_eventSetLeadSpeed_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetLeadSpeed),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetLocationOffset = FName(TEXT("SetLocationOffset"));
	void UFollowCameraComponent::SetLocationOffset(FVector Value, float BlendTime)
	{
		FollowCameraComponent_eventSetLocationOffset_Parms Parms;
		Parms.Value=Value;
		Parms.BlendTime=BlendTime;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetLocationOffset),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetMaxLeadDistance = FName(TEXT("SetMaxLeadDistance"));
	void UFollowCameraComponent::SetMaxLeadDistance(float Value)
	{
		FollowCameraComponent_eventSetMaxLeadDistance_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetMaxLeadDistance),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetRotationOffset = FName(TEXT("SetRotationOffset"));
	void UFollowCameraComponent::SetRotationOffset(FVector Value, float BlendTime)
	{
		FollowCameraComponent_eventSetRotationOffset_Parms Parms;
		Parms.Value=Value;
		Parms.BlendTime=BlendTime;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetRotationOffset),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetZLock = FName(TEXT("SetZLock"));
	void UFollowCameraComponent::SetZLock(bool Value)
	{
		FollowCameraComponent_eventSetZLock_Parms Parms;
		Parms.Value=Value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetZLock),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetZLockHeight = FName(TEXT("SetZLockHeight"));
	void UFollowCameraComponent::SetZLockHeight(float Value, float BlendTime)
	{
		FollowCameraComponent_eventSetZLockHeight_Parms Parms;
		Parms.Value=Value;
		Parms.BlendTime=BlendTime;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetZLockHeight),&Parms);
	}
	static FName NAME_UFollowCameraComponent_SetZoomDistance = FName(TEXT("SetZoomDistance"));
	void UFollowCameraComponent::SetZoomDistance(float Value, float BlendTime)
	{
		FollowCameraComponent_eventSetZoomDistance_Parms Parms;
		Parms.Value=Value;
		Parms.BlendTime=BlendTime;
		ProcessEvent(FindFunctionChecked(NAME_UFollowCameraComponent_SetZoomDistance),&Parms);
	}
	void UFollowCameraComponent::StaticRegisterNativesUFollowCameraComponent()
	{
		UClass* Class = UFollowCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFixLeadAtMax", &UFollowCameraComponent::execGetFixLeadAtMax },
			{ "GetLeadSpeed", &UFollowCameraComponent::execGetLeadSpeed },
			{ "GetLocationOffset", &UFollowCameraComponent::execGetLocationOffset },
			{ "GetMaxLeadDistance", &UFollowCameraComponent::execGetMaxLeadDistance },
			{ "GetRotationOffset", &UFollowCameraComponent::execGetRotationOffset },
			{ "GetZLock", &UFollowCameraComponent::execGetZLock },
			{ "GetZLockHeight", &UFollowCameraComponent::execGetZLockHeight },
			{ "GetZoomDistance", &UFollowCameraComponent::execGetZoomDistance },
			{ "SetFixLeadAtMax", &UFollowCameraComponent::execSetFixLeadAtMax },
			{ "SetLeadSpeed", &UFollowCameraComponent::execSetLeadSpeed },
			{ "SetLocationOffset", &UFollowCameraComponent::execSetLocationOffset },
			{ "SetMaxLeadDistance", &UFollowCameraComponent::execSetMaxLeadDistance },
			{ "SetRotationOffset", &UFollowCameraComponent::execSetRotationOffset },
			{ "SetZLock", &UFollowCameraComponent::execSetZLock },
			{ "SetZLockHeight", &UFollowCameraComponent::execSetZLockHeight },
			{ "SetZoomDistance", &UFollowCameraComponent::execSetZoomDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics
	{
		struct FollowCameraComponent_eventGetFixLeadAtMax_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FollowCameraComponent_eventGetFixLeadAtMax_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FollowCameraComponent_eventGetFixLeadAtMax_Parms), &Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetFixLeadAtMax", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::FollowCameraComponent_eventGetFixLeadAtMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::FollowCameraComponent_eventGetFixLeadAtMax_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics
	{
		struct FollowCameraComponent_eventGetLeadSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventGetLeadSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetLeadSpeed", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::FollowCameraComponent_eventGetLeadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::FollowCameraComponent_eventGetLeadSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics
	{
		struct FollowCameraComponent_eventGetLocationOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventGetLocationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetLocationOffset", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::FollowCameraComponent_eventGetLocationOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::FollowCameraComponent_eventGetLocationOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics
	{
		struct FollowCameraComponent_eventGetMaxLeadDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventGetMaxLeadDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetMaxLeadDistance", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::FollowCameraComponent_eventGetMaxLeadDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::FollowCameraComponent_eventGetMaxLeadDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics
	{
		struct FollowCameraComponent_eventGetRotationOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventGetRotationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetRotationOffset", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::FollowCameraComponent_eventGetRotationOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::FollowCameraComponent_eventGetRotationOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics
	{
		struct FollowCameraComponent_eventGetZLock_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FollowCameraComponent_eventGetZLock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FollowCameraComponent_eventGetZLock_Parms), &Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetZLock", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::FollowCameraComponent_eventGetZLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::FollowCameraComponent_eventGetZLock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetZLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetZLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics
	{
		struct FollowCameraComponent_eventGetZLockHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventGetZLockHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetZLockHeight", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::FollowCameraComponent_eventGetZLockHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::FollowCameraComponent_eventGetZLockHeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics
	{
		struct FollowCameraComponent_eventGetZoomDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventGetZoomDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/* These getters return the target value, which may differ from the instantaneous value if it is currently interpolating */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "These getters return the target value, which may differ from the instantaneous value if it is currently interpolating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "GetZoomDistance", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::FollowCameraComponent_eventGetZoomDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::FollowCameraComponent_eventGetZoomDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics
	{
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FollowCameraComponent_eventSetFixLeadAtMax_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FollowCameraComponent_eventSetFixLeadAtMax_Parms), &Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetFixLeadAtMax", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetFixLeadAtMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetFixLeadAtMax_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetLeadSpeed_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetLeadSpeed", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetLeadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetLeadSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetLocationOffset_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetLocationOffset_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetLocationOffset", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetLocationOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetLocationOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetMaxLeadDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetMaxLeadDistance", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetMaxLeadDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetMaxLeadDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetRotationOffset_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetRotationOffset_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetRotationOffset", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetRotationOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetRotationOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics
	{
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FollowCameraComponent_eventSetZLock_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FollowCameraComponent_eventSetZLock_Parms), &Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetZLock", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetZLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetZLock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetZLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetZLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetZLockHeight_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetZLockHeight_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetZLockHeight", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetZLockHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetZLockHeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetZoomDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowCameraComponent_eventSetZoomDistance_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/* Can be called manually, or overriden in blueprints to define behaviors using different curves */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Can be called manually, or overriden in blueprints to define behaviors using different curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFollowCameraComponent, nullptr, "SetZoomDistance", nullptr, nullptr, Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::PropPointers), sizeof(FollowCameraComponent_eventSetZoomDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(FollowCameraComponent_eventSetZoomDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFollowCameraComponent);
	UClass* Z_Construct_UClass_UFollowCameraComponent_NoRegister()
	{
		return UFollowCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFollowCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoomDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLeadMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLeadMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLeadSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLeadSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixLeadAtMax_MetaData[];
#endif
		static void NewProp_FixLeadAtMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FixLeadAtMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZLock_MetaData[];
#endif
		static void NewProp_CameraZLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CameraZLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZLockHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZLockHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlendSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBlendSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLeadLock_MetaData[];
#endif
		static void NewProp_CameraLeadLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CameraLeadLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchHeightReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchHeightReduction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFollowCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SST,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFollowCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetFixLeadAtMax, "GetFixLeadAtMax" }, // 1397882009
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetLeadSpeed, "GetLeadSpeed" }, // 3679198000
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetLocationOffset, "GetLocationOffset" }, // 4149158981
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetMaxLeadDistance, "GetMaxLeadDistance" }, // 3844939109
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetRotationOffset, "GetRotationOffset" }, // 3163940157
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetZLock, "GetZLock" }, // 1511087226
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetZLockHeight, "GetZLockHeight" }, // 1675751638
		{ &Z_Construct_UFunction_UFollowCameraComponent_GetZoomDistance, "GetZoomDistance" }, // 303869917
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetFixLeadAtMax, "SetFixLeadAtMax" }, // 213367928
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetLeadSpeed, "SetLeadSpeed" }, // 726024300
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetLocationOffset, "SetLocationOffset" }, // 3882885398
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetMaxLeadDistance, "SetMaxLeadDistance" }, // 505617088
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetRotationOffset, "SetRotationOffset" }, // 1800831660
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetZLock, "SetZLock" }, // 14269851
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetZLockHeight, "SetZLockHeight" }, // 919813000
		{ &Z_Construct_UFunction_UFollowCameraComponent_SetZoomDistance, "SetZoomDistance" }, // 3094944389
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera component which automatically follows the camera to which it is attached.\n * Designed to work with CameraTrigger, which can adjust this camera when the owning\n *\x09""character enters an overlapping volume. \n */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "FollowCameraComponent.h" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "A camera component which automatically follows the camera to which it is attached.\nDesigned to work with CameraTrigger, which can adjust this camera when the owning\n    character enters an overlapping volume." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZoomDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera zoom */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Camera zoom" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZoomDistance = { "CameraZoomDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraZoomDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZoomDistance_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZoomDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadMaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The maximum amount by which the camera leads the character, when in follow mode */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "The maximum amount by which the camera leads the character, when in follow mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadMaxDistance = { "CameraLeadMaxDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraLeadMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadMaxDistance_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Adjusts the speed with which the camera moves to lead the character, when in follow mode */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Adjusts the speed with which the camera moves to lead the character, when in follow mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadSpeed = { "CameraLeadSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraLeadSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadSpeed_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** If true, the camera will stay at max lead distance (plus any offsets) for left/right, regardless of movement. */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "If true, the camera will stay at max lead distance (plus any offsets) for left/right, regardless of movement." },
	};
#endif
	void Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax_SetBit(void* Obj)
	{
		((UFollowCameraComponent*)Obj)->FixLeadAtMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax = { "FixLeadAtMax", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFollowCameraComponent), &Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** If true, locks the camera to a specific z-height, rather than following character as they jump */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "If true, locks the camera to a specific z-height, rather than following character as they jump" },
	};
#endif
	void Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock_SetBit(void* Obj)
	{
		((UFollowCameraComponent*)Obj)->CameraZLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock = { "CameraZLock", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFollowCameraComponent), &Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLockHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Z-height of the camera, when CameraZLock == true */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Z-height of the camera, when CameraZLock == true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLockHeight = { "CameraZLockHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraZLockHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLockHeight_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLockHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraBlendSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Controls speed of blend when swapping to a different camera in the level */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Controls speed of blend when swapping to a different camera in the level" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraBlendSpeed = { "CameraBlendSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraBlendSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraBlendSpeed_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraBlendSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Static offset to add to camera transform */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Static offset to add to camera transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLocationOffset = { "CameraLocationOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLocationOffset_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Static rotation to add to camera (roll, pitch, yaw) */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Static rotation to add to camera (roll, pitch, yaw)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraRotationOffset = { "CameraRotationOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CameraRotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraRotationOffset_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** If true, camera will freeze its lead position until false (e.g. during dash) */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "If true, camera will freeze its lead position until false (e.g. during dash)" },
	};
#endif
	void Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock_SetBit(void* Obj)
	{
		((UFollowCameraComponent*)Obj)->CameraLeadLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock = { "CameraLeadLock", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFollowCameraComponent), &Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CrouchHeightReduction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Set this based on the capsule half-height difference to prevent the camera moving while crouching */" },
		{ "ModuleRelativePath", "Public/FollowCameraComponent.h" },
		{ "ToolTip", "Set this based on the capsule half-height difference to prevent the camera moving while crouching" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CrouchHeightReduction = { "CrouchHeightReduction", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowCameraComponent, CrouchHeightReduction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CrouchHeightReduction_MetaData), Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CrouchHeightReduction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFollowCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZoomDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_FixLeadAtMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraZLockHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraBlendSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CameraLeadLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowCameraComponent_Statics::NewProp_CrouchHeightReduction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFollowCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFollowCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFollowCameraComponent_Statics::ClassParams = {
		&UFollowCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFollowCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFollowCameraComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowCameraComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFollowCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UFollowCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFollowCameraComponent.OuterSingleton, Z_Construct_UClass_UFollowCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFollowCameraComponent.OuterSingleton;
	}
	template<> SST_API UClass* StaticClass<UFollowCameraComponent>()
	{
		return UFollowCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFollowCameraComponent);
	UFollowCameraComponent::~UFollowCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFollowCameraComponent, UFollowCameraComponent::StaticClass, TEXT("UFollowCameraComponent"), &Z_Registration_Info_UClass_UFollowCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFollowCameraComponent), 3643033507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_2869265634(TEXT("/Script/SST"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_FollowCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
