// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic_Game_Mode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasic_Game_Mode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_ABasic_Game_Mode();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_ABasic_Game_Mode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Green_Sample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasic_Game_Mode *********************************************************
void ABasic_Game_Mode::StaticRegisterNativesABasic_Game_Mode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasic_Game_Mode;
UClass* ABasic_Game_Mode::GetPrivateStaticClass()
{
	using TClass = ABasic_Game_Mode;
	if (!Z_Registration_Info_UClass_ABasic_Game_Mode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Basic_Game_Mode"),
			Z_Registration_Info_UClass_ABasic_Game_Mode.InnerSingleton,
			StaticRegisterNativesABasic_Game_Mode,
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
	return Z_Registration_Info_UClass_ABasic_Game_Mode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasic_Game_Mode_NoRegister()
{
	return ABasic_Game_Mode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasic_Game_Mode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Basic_Game_Mode.h" },
		{ "ModuleRelativePath", "Private/Basic_Game_Mode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasic_Game_Mode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABasic_Game_Mode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Green_Sample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasic_Game_Mode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasic_Game_Mode_Statics::ClassParams = {
	&ABasic_Game_Mode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasic_Game_Mode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasic_Game_Mode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasic_Game_Mode()
{
	if (!Z_Registration_Info_UClass_ABasic_Game_Mode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasic_Game_Mode.OuterSingleton, Z_Construct_UClass_ABasic_Game_Mode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasic_Game_Mode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasic_Game_Mode);
ABasic_Game_Mode::~ABasic_Game_Mode() {}
// ********** End Class ABasic_Game_Mode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_Basic_Game_Mode_h__Script_Green_Sample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasic_Game_Mode, ABasic_Game_Mode::StaticClass, TEXT("ABasic_Game_Mode"), &Z_Registration_Info_UClass_ABasic_Game_Mode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasic_Game_Mode), 124623379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_Basic_Game_Mode_h__Script_Green_Sample_1104635900(TEXT("/Script/Green_Sample"),
	Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_Basic_Game_Mode_h__Script_Green_Sample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_Basic_Game_Mode_h__Script_Green_Sample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
