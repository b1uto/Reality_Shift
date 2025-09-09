// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelSnapMovement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePixelSnapMovement() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_UPixelSnapMovement();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_UPixelSnapMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Green_Sample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPixelSnapMovement Function SetEnabled ***********************************
struct Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics
{
	struct PixelSnapMovement_eventSetEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PixelSnapMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Called to enable/disable snapping*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to enable/disable snapping" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((PixelSnapMovement_eventSetEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PixelSnapMovement_eventSetEnabled_Parms), &Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelSnapMovement, nullptr, "SetEnabled", Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::PixelSnapMovement_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::PixelSnapMovement_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelSnapMovement_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelSnapMovement_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelSnapMovement::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UPixelSnapMovement Function SetEnabled *************************************

// ********** Begin Class UPixelSnapMovement Function SetPixelSteps ********************************
struct Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics
{
	struct PixelSnapMovement_eventSetPixelSteps_Parms
	{
		float InPixels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PixelSnapMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Change pixel steps for each step*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change pixel steps for each step" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPixels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::NewProp_InPixels = { "InPixels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelSnapMovement_eventSetPixelSteps_Parms, InPixels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::NewProp_InPixels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelSnapMovement, nullptr, "SetPixelSteps", Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::PixelSnapMovement_eventSetPixelSteps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::PixelSnapMovement_eventSetPixelSteps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelSnapMovement::execSetPixelSteps)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPixels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPixelSteps(Z_Param_InPixels);
	P_NATIVE_END;
}
// ********** End Class UPixelSnapMovement Function SetPixelSteps **********************************

// ********** Begin Class UPixelSnapMovement *******************************************************
void UPixelSnapMovement::StaticRegisterNativesUPixelSnapMovement()
{
	UClass* Class = UPixelSnapMovement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetEnabled", &UPixelSnapMovement::execSetEnabled },
		{ "SetPixelSteps", &UPixelSnapMovement::execSetPixelSteps },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPixelSnapMovement;
UClass* UPixelSnapMovement::GetPrivateStaticClass()
{
	using TClass = UPixelSnapMovement;
	if (!Z_Registration_Info_UClass_UPixelSnapMovement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PixelSnapMovement"),
			Z_Registration_Info_UClass_UPixelSnapMovement.InnerSingleton,
			StaticRegisterNativesUPixelSnapMovement,
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
	return Z_Registration_Info_UClass_UPixelSnapMovement.InnerSingleton;
}
UClass* Z_Construct_UClass_UPixelSnapMovement_NoRegister()
{
	return UPixelSnapMovement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPixelSnapMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PixelSnapMovement.h" },
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "PixelSnap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Enable/disable pixel snapping movement*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable pixel snapping movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelSteps_MetaData[] = {
		{ "Category", "PixelSnap" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Pixel steps for each movement step*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pixel steps for each movement step" },
#endif
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOverride_MetaData[] = {
		{ "Category", "PixelSnap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Camera override, if null it will use the player camera manager*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera override, if null it will use the player camera manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDepth_MetaData[] = {
		{ "Category", "PixelSnap" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Min depth to start snapping, if the distance is smaller than this it will snap instantly*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min depth to start snapping, if the distance is smaller than this it will snap instantly" },
#endif
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "PixelSnap" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Min speed to move, if the distance is smaller than this it will snap instantly*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min speed to move, if the distance is smaller than this it will snap instantly" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpAlpha_MetaData[] = {
		{ "Category", "PixelSnap" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Lerp alpha for smooth movement, 0 is instant, 1 is no movement*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lerp alpha for smooth movement, 0 is instant, 1 is no movement" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweepOnMove_MetaData[] = {
		{ "Category", "PixelSnap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Sweep to keep collision*/" },
#endif
		{ "ModuleRelativePath", "Public/PixelSnapMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sweep to keep collision" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelSteps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpAlpha;
	static void NewProp_bSweepOnMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweepOnMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelSnapMovement_SetEnabled, "SetEnabled" }, // 2412725056
		{ &Z_Construct_UFunction_UPixelSnapMovement_SetPixelSteps, "SetPixelSteps" }, // 2600301842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelSnapMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UPixelSnapMovement*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPixelSnapMovement), &Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_PixelSteps = { "PixelSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPixelSnapMovement, PixelSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelSteps_MetaData), NewProp_PixelSteps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_CameraOverride = { "CameraOverride", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPixelSnapMovement, CameraOverride), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOverride_MetaData), NewProp_CameraOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_MinDepth = { "MinDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPixelSnapMovement, MinDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDepth_MetaData), NewProp_MinDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPixelSnapMovement, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_LerpAlpha = { "LerpAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPixelSnapMovement, LerpAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpAlpha_MetaData), NewProp_LerpAlpha_MetaData) };
void Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bSweepOnMove_SetBit(void* Obj)
{
	((UPixelSnapMovement*)Obj)->bSweepOnMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bSweepOnMove = { "bSweepOnMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPixelSnapMovement), &Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bSweepOnMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweepOnMove_MetaData), NewProp_bSweepOnMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelSnapMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_PixelSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_CameraOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_MinDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_LerpAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelSnapMovement_Statics::NewProp_bSweepOnMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelSnapMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPixelSnapMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Green_Sample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelSnapMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelSnapMovement_Statics::ClassParams = {
	&UPixelSnapMovement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPixelSnapMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPixelSnapMovement_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelSnapMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UPixelSnapMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPixelSnapMovement()
{
	if (!Z_Registration_Info_UClass_UPixelSnapMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelSnapMovement.OuterSingleton, Z_Construct_UClass_UPixelSnapMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPixelSnapMovement.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelSnapMovement);
UPixelSnapMovement::~UPixelSnapMovement() {}
// ********** End Class UPixelSnapMovement *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Public_PixelSnapMovement_h__Script_Green_Sample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPixelSnapMovement, UPixelSnapMovement::StaticClass, TEXT("UPixelSnapMovement"), &Z_Registration_Info_UClass_UPixelSnapMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelSnapMovement), 1104838544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Public_PixelSnapMovement_h__Script_Green_Sample_1101646774(TEXT("/Script/Green_Sample"),
	Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Public_PixelSnapMovement_h__Script_Green_Sample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Public_PixelSnapMovement_h__Script_Green_Sample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
