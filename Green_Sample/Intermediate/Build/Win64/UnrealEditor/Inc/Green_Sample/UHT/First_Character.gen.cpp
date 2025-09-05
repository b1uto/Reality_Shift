// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "src/First_Character.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFirst_Character() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirst_Character();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirst_Character_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Green_Sample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFirst_Character Function DoDashStart ************************************
struct Z_Construct_UFunction_AFirst_Character_DoDashStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirst_Character_DoDashStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirst_Character, nullptr, "DoDashStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoDashStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirst_Character_DoDashStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirst_Character_DoDashStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirst_Character_DoDashStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirst_Character::execDoDashStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDashStart();
	P_NATIVE_END;
}
// ********** End Class AFirst_Character Function DoDashStart **************************************

// ********** Begin Class AFirst_Character Function DoDashStop *************************************
struct Z_Construct_UFunction_AFirst_Character_DoDashStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirst_Character_DoDashStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirst_Character, nullptr, "DoDashStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoDashStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirst_Character_DoDashStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirst_Character_DoDashStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirst_Character_DoDashStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirst_Character::execDoDashStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDashStop();
	P_NATIVE_END;
}
// ********** End Class AFirst_Character Function DoDashStop ***************************************

// ********** Begin Class AFirst_Character Function DoDrop *****************************************
struct Z_Construct_UFunction_AFirst_Character_DoDrop_Statics
{
	struct First_Character_eventDoDrop_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(First_Character_eventDoDrop_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirst_Character, nullptr, "DoDrop", Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::First_Character_eventDoDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::First_Character_eventDoDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirst_Character_DoDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirst_Character_DoDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirst_Character::execDoDrop)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDrop(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class AFirst_Character Function DoDrop *******************************************

// ********** Begin Class AFirst_Character Function DoJumpStart ************************************
struct Z_Construct_UFunction_AFirst_Character_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirst_Character_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirst_Character, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirst_Character_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirst_Character_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirst_Character_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirst_Character::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AFirst_Character Function DoJumpStart **************************************

// ********** Begin Class AFirst_Character Function DoJumpStop *************************************
struct Z_Construct_UFunction_AFirst_Character_DoJumpStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirst_Character_DoJumpStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirst_Character, nullptr, "DoJumpStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoJumpStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirst_Character_DoJumpStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFirst_Character_DoJumpStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirst_Character_DoJumpStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirst_Character::execDoJumpStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStop();
	P_NATIVE_END;
}
// ********** End Class AFirst_Character Function DoJumpStop ***************************************

// ********** Begin Class AFirst_Character Function DoMove *****************************************
struct Z_Construct_UFunction_AFirst_Character_DoMove_Statics
{
	struct First_Character_eventDoMove_Parms
	{
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called move input\n" },
#endif
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called move input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirst_Character_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(First_Character_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirst_Character_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirst_Character_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirst_Character_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirst_Character, nullptr, "DoMove", Z_Construct_UFunction_AFirst_Character_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirst_Character_DoMove_Statics::First_Character_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirst_Character_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirst_Character_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFirst_Character_DoMove_Statics::First_Character_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirst_Character_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirst_Character_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirst_Character::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AFirst_Character Function DoMove *******************************************

// ********** Begin Class AFirst_Character *********************************************************
void AFirst_Character::StaticRegisterNativesAFirst_Character()
{
	UClass* Class = AFirst_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoDashStart", &AFirst_Character::execDoDashStart },
		{ "DoDashStop", &AFirst_Character::execDoDashStop },
		{ "DoDrop", &AFirst_Character::execDoDrop },
		{ "DoJumpStart", &AFirst_Character::execDoJumpStart },
		{ "DoJumpStop", &AFirst_Character::execDoJumpStop },
		{ "DoMove", &AFirst_Character::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFirst_Character;
UClass* AFirst_Character::GetPrivateStaticClass()
{
	using TClass = AFirst_Character;
	if (!Z_Registration_Info_UClass_AFirst_Character.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("First_Character"),
			Z_Registration_Info_UClass_AFirst_Character.InnerSingleton,
			StaticRegisterNativesAFirst_Character,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFirst_Character.InnerSingleton;
}
UClass* Z_Construct_UClass_AFirst_Character_NoRegister()
{
	return AFirst_Character::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFirst_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "src/First_Character.h" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprites_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fb_Idle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fb_Walk_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftCollisionObjectType_MetaData[] = {
		{ "Category", "VALUE" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFloorActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/src/First_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprites;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fb_Idle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fb_Walk;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveForwardAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveRightAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoftCollisionObjectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastFloorActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirst_Character_DoDashStart, "DoDashStart" }, // 3692446141
		{ &Z_Construct_UFunction_AFirst_Character_DoDashStop, "DoDashStop" }, // 1421445969
		{ &Z_Construct_UFunction_AFirst_Character_DoDrop, "DoDrop" }, // 2713744068
		{ &Z_Construct_UFunction_AFirst_Character_DoJumpStart, "DoJumpStart" }, // 435571411
		{ &Z_Construct_UFunction_AFirst_Character_DoJumpStop, "DoJumpStop" }, // 653974022
		{ &Z_Construct_UFunction_AFirst_Character_DoMove, "DoMove" }, // 604446507
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirst_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_Sprites = { "Sprites", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, Sprites), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprites_MetaData), NewProp_Sprites_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_Fb_Idle = { "Fb_Idle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, Fb_Idle), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fb_Idle_MetaData), NewProp_Fb_Idle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_Fb_Walk = { "Fb_Walk", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, Fb_Walk), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fb_Walk_MetaData), NewProp_Fb_Walk_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_MoveForwardAction = { "MoveForwardAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, MoveForwardAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveForwardAction_MetaData), NewProp_MoveForwardAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_MoveRightAction = { "MoveRightAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, MoveRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightAction_MetaData), NewProp_MoveRightAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashAction_MetaData), NewProp_DashAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_DropAction = { "DropAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, DropAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropAction_MetaData), NewProp_DropAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_SoftCollisionObjectType = { "SoftCollisionObjectType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, SoftCollisionObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftCollisionObjectType_MetaData), NewProp_SoftCollisionObjectType_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_LastFloorActor = { "LastFloorActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, LastFloorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFloorActor_MetaData), NewProp_LastFloorActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirst_Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirst_Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirst_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_Sprites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_Fb_Idle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_Fb_Walk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_MoveForwardAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_MoveRightAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_DashAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_DropAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_SoftCollisionObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_LastFloorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Character_Statics::NewProp_DefaultMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirst_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Green_Sample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirst_Character_Statics::ClassParams = {
	&AFirst_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirst_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Character_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirst_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirst_Character()
{
	if (!Z_Registration_Info_UClass_AFirst_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirst_Character.OuterSingleton, Z_Construct_UClass_AFirst_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirst_Character.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirst_Character);
AFirst_Character::~AFirst_Character() {}
// ********** End Class AFirst_Character ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirst_Character, AFirst_Character::StaticClass, TEXT("AFirst_Character"), &Z_Registration_Info_UClass_AFirst_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirst_Character), 2517061326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_1450251027(TEXT("/Script/Green_Sample"),
	Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
