// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "src/FirstPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFirstPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirstPlayerController();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirstPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Green_Sample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFirstPlayerController ***************************************************
void AFirstPlayerController::StaticRegisterNativesAFirstPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFirstPlayerController;
UClass* AFirstPlayerController::GetPrivateStaticClass()
{
	using TClass = AFirstPlayerController;
	if (!Z_Registration_Info_UClass_AFirstPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FirstPlayerController"),
			Z_Registration_Info_UClass_AFirstPlayerController.InnerSingleton,
			StaticRegisterNativesAFirstPlayerController,
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
	return Z_Registration_Info_UClass_AFirstPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFirstPlayerController_NoRegister()
{
	return AFirstPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFirstPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "src/FirstPlayerController.h" },
		{ "ModuleRelativePath", "Private/src/FirstPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If you prefer the controller to own the mapping context, assign it here in the editor. */" },
#endif
		{ "ModuleRelativePath", "Private/src/FirstPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you prefer the controller to own the mapping context, assign it here in the editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingPriority_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Priority when adding the mapping context. 0 is fine if you don\xef\xbf\xbdt layer others. */" },
#endif
		{ "ModuleRelativePath", "Private/src/FirstPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority when adding the mapping context. 0 is fine if you don\xef\xbf\xbdt layer others." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockMouseToViewport_MetaData[] = {
		{ "Category", "Input|Mouse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional mouse settings */" },
#endif
		{ "ModuleRelativePath", "Private/src/FirstPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional mouse settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMouse_MetaData[] = {
		{ "Category", "Input|Mouse" },
		{ "ModuleRelativePath", "Private/src/FirstPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingPriority;
	static void NewProp_bLockMouseToViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMouseToViewport;
	static void NewProp_bShowMouse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_MappingPriority = { "MappingPriority", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPlayerController, MappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingPriority_MetaData), NewProp_MappingPriority_MetaData) };
void Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bLockMouseToViewport_SetBit(void* Obj)
{
	((AFirstPlayerController*)Obj)->bLockMouseToViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bLockMouseToViewport = { "bLockMouseToViewport", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPlayerController), &Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bLockMouseToViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockMouseToViewport_MetaData), NewProp_bLockMouseToViewport_MetaData) };
void Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bShowMouse_SetBit(void* Obj)
{
	((AFirstPlayerController*)Obj)->bShowMouse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bShowMouse = { "bShowMouse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPlayerController), &Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bShowMouse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMouse_MetaData), NewProp_bShowMouse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_MappingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bLockMouseToViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPlayerController_Statics::NewProp_bShowMouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirstPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Green_Sample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPlayerController_Statics::ClassParams = {
	&AFirstPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFirstPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPlayerController_Statics::PropPointers),
	0,
	0x008003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPlayerController()
{
	if (!Z_Registration_Info_UClass_AFirstPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPlayerController.OuterSingleton, Z_Construct_UClass_AFirstPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPlayerController);
AFirstPlayerController::~AFirstPlayerController() {}
// ********** End Class AFirstPlayerController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_FirstPlayerController_h__Script_Green_Sample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPlayerController, AFirstPlayerController::StaticClass, TEXT("AFirstPlayerController"), &Z_Registration_Info_UClass_AFirstPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPlayerController), 3602817797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_FirstPlayerController_h__Script_Green_Sample_3650152794(TEXT("/Script/Green_Sample"),
	Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_FirstPlayerController_h__Script_Green_Sample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_FirstPlayerController_h__Script_Green_Sample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
