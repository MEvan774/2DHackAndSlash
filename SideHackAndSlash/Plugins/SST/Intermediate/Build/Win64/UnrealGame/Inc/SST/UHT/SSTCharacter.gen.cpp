// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/SSTCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSTCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SST_API UClass* Z_Construct_UClass_ASSTCharacter();
	SST_API UClass* Z_Construct_UClass_ASSTCharacter_NoRegister();
	SST_API UClass* Z_Construct_UClass_UFollowCameraComponent_NoRegister();
	SST_API UClass* Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References
	DEFINE_FUNCTION(ASSTCharacter::execReleaseJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseJump_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASSTCharacter::execCanDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDash_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASSTCharacter::execGetSSTCharacterMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USSTCharacterMovementComponent**)Z_Param__Result=P_THIS->GetSSTCharacterMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASSTCharacter::execDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASSTCharacter::execJumpOrDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpOrDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASSTCharacter::execStopCrouchDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCrouchDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASSTCharacter::execCrouchDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchDrop_Implementation();
		P_NATIVE_END;
	}
	struct SSTCharacter_eventCanDash_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SSTCharacter_eventCanDash_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_ASSTCharacter_CanDash = FName(TEXT("CanDash"));
	bool ASSTCharacter::CanDash() const
	{
		SSTCharacter_eventCanDash_Parms Parms;
		const_cast<ASSTCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASSTCharacter_CanDash),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ASSTCharacter_CrouchDrop = FName(TEXT("CrouchDrop"));
	void ASSTCharacter::CrouchDrop()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASSTCharacter_CrouchDrop),NULL);
	}
	static FName NAME_ASSTCharacter_Dash = FName(TEXT("Dash"));
	void ASSTCharacter::Dash()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASSTCharacter_Dash),NULL);
	}
	static FName NAME_ASSTCharacter_JumpOrDrop = FName(TEXT("JumpOrDrop"));
	void ASSTCharacter::JumpOrDrop()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASSTCharacter_JumpOrDrop),NULL);
	}
	static FName NAME_ASSTCharacter_ReleaseJump = FName(TEXT("ReleaseJump"));
	void ASSTCharacter::ReleaseJump()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASSTCharacter_ReleaseJump),NULL);
	}
	static FName NAME_ASSTCharacter_StopCrouchDrop = FName(TEXT("StopCrouchDrop"));
	void ASSTCharacter::StopCrouchDrop()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASSTCharacter_StopCrouchDrop),NULL);
	}
	void ASSTCharacter::StaticRegisterNativesASSTCharacter()
	{
		UClass* Class = ASSTCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDash", &ASSTCharacter::execCanDash },
			{ "CrouchDrop", &ASSTCharacter::execCrouchDrop },
			{ "Dash", &ASSTCharacter::execDash },
			{ "GetSSTCharacterMovement", &ASSTCharacter::execGetSSTCharacterMovement },
			{ "JumpOrDrop", &ASSTCharacter::execJumpOrDrop },
			{ "ReleaseJump", &ASSTCharacter::execReleaseJump },
			{ "StopCrouchDrop", &ASSTCharacter::execStopCrouchDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASSTCharacter_CanDash_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SSTCharacter_eventCanDash_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacter_eventCanDash_Parms), &Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Can override in blueprint for custom dash checking on this character */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Can override in blueprint for custom dash checking on this character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "CanDash", nullptr, nullptr, Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers), sizeof(SSTCharacter_eventCanDash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers) < 2048);
	static_assert(sizeof(SSTCharacter_eventCanDash_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASSTCharacter_CanDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called for crouch/drop input */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Called for crouch/drop input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "CrouchDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASSTCharacter_CrouchDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASSTCharacter_Dash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_Dash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called for dash input */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Called for dash input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "Dash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_Dash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_Dash_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASSTCharacter_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics
	{
		struct SSTCharacter_eventGetSSTCharacterMovement_Parms
		{
			USSTCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSTCharacter_eventGetSSTCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "GetSSTCharacterMovement", nullptr, nullptr, Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::SSTCharacter_eventGetSSTCharacterMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::SSTCharacter_eventGetSSTCharacterMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called when jump pressed, which could also be a drop-down command */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Called when jump pressed, which could also be a drop-down command" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "JumpOrDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASSTCharacter_JumpOrDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Called when releasing the jump button */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Called when releasing the jump button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "ReleaseJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASSTCharacter_ReleaseJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called when releasing crouch/drop input */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Called when releasing crouch/drop input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "StopCrouchDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASSTCharacter);
	UClass* Z_Construct_UClass_ASSTCharacter_NoRegister()
	{
		return ASSTCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASSTCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SSTCharacterMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SSTCharacterMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchDropAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchDropAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DashAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropThroughPlatformJumpLockout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropThroughPlatformJumpLockout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASSTCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SST,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASSTCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASSTCharacter_CanDash, "CanDash" }, // 1853650998
		{ &Z_Construct_UFunction_ASSTCharacter_CrouchDrop, "CrouchDrop" }, // 614058702
		{ &Z_Construct_UFunction_ASSTCharacter_Dash, "Dash" }, // 1166184519
		{ &Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement, "GetSSTCharacterMovement" }, // 3145420912
		{ &Z_Construct_UFunction_ASSTCharacter_JumpOrDrop, "JumpOrDrop" }, // 4167979899
		{ &Z_Construct_UFunction_ASSTCharacter_ReleaseJump, "ReleaseJump" }, // 3210905712
		{ &Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop, "StopCrouchDrop" }, // 722835683
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extends the default ACharacter to provide:\n * - A custom character movement component, supporting dash, wallslide, etc.\n * - A FollowCamera component, which follows the character and can be modified via CameraTrigger objects.\n * - Input bindings for left/right motion, Jump, Dash, Crouch, and platform-drop\n * \n * USSTCharacterMovementComponent should remain the sole authority on movement for this character. \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SSTCharacter.h" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Extends the default ACharacter to provide:\n- A custom character movement component, supporting dash, wallslide, etc.\n- A FollowCamera component, which follows the character and can be modified via CameraTrigger objects.\n- Input bindings for left/right motion, Jump, Dash, Crouch, and platform-drop\n\nUSSTCharacterMovementComponent should remain the sole authority on movement for this character." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Custom CharacterMovementComponent */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Custom CharacterMovementComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent = { "SSTCharacterMovementComponent", nullptr, (EPropertyFlags)0x004400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, SSTCharacterMovementComponent), Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Camera Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, FollowCamera), Z_Construct_UClass_UFollowCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Crouch/Drop Input Action */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Crouch/Drop Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction = { "CrouchDropAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, CrouchDropAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Time in seconds after dropping through a platform before the button becomes usable for jump input */" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ToolTip", "Time in seconds after dropping through a platform before the button becomes usable for jump input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout = { "DropThroughPlatformJumpLockout", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, DropThroughPlatformJumpLockout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout_MetaData), Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASSTCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASSTCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSTCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASSTCharacter_Statics::ClassParams = {
		&ASSTCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASSTCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASSTCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASSTCharacter()
	{
		if (!Z_Registration_Info_UClass_ASSTCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASSTCharacter.OuterSingleton, Z_Construct_UClass_ASSTCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASSTCharacter.OuterSingleton;
	}
	template<> SST_API UClass* StaticClass<ASSTCharacter>()
	{
		return ASSTCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASSTCharacter);
	ASSTCharacter::~ASSTCharacter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASSTCharacter, ASSTCharacter::StaticClass, TEXT("ASSTCharacter"), &Z_Registration_Info_UClass_ASSTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASSTCharacter), 2637455880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_386328957(TEXT("/Script/SST"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
