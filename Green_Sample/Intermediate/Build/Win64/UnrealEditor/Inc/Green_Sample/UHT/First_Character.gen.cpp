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
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirst_Character();
GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirst_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_Green_Sample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFirst_Character *********************************************************
void AFirst_Character::StaticRegisterNativesAFirst_Character()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirst_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AFirst_Character, AFirst_Character::StaticClass, TEXT("AFirst_Character"), &Z_Registration_Info_UClass_AFirst_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirst_Character), 3276631441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_3619456364(TEXT("/Script/Green_Sample"),
	Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h__Script_Green_Sample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
