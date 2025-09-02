// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "src/First_Character.h"

#ifdef GREEN_SAMPLE_First_Character_generated_h
#error "First_Character.generated.h already included, missing '#pragma once' in First_Character.h"
#endif
#define GREEN_SAMPLE_First_Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFirst_Character *********************************************************
#define FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoDashStop); \
	DECLARE_FUNCTION(execDoDashStart); \
	DECLARE_FUNCTION(execDoJumpStop); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoDrop); \
	DECLARE_FUNCTION(execDoMove);


GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirst_Character_NoRegister();

#define FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirst_Character(); \
	friend struct Z_Construct_UClass_AFirst_Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GREEN_SAMPLE_API UClass* Z_Construct_UClass_AFirst_Character_NoRegister(); \
public: \
	DECLARE_CLASS2(AFirst_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Green_Sample"), Z_Construct_UClass_AFirst_Character_NoRegister) \
	DECLARE_SERIALIZER(AFirst_Character)


#define FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFirst_Character(AFirst_Character&&) = delete; \
	AFirst_Character(const AFirst_Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirst_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirst_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirst_Character) \
	NO_API virtual ~AFirst_Character();


#define FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_17_PROLOG
#define FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_INCLASS_NO_PURE_DECLS \
	FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFirst_Character;

// ********** End Class AFirst_Character ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Diss_git_Reality_Shift__Green_Sample_Source_Green_Sample_Private_src_First_Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
