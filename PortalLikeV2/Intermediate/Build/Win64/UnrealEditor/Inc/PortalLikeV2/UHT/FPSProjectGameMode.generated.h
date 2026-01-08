// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectGameMode.h"

#ifdef PORTALLIKEV2_FPSProjectGameMode_generated_h
#error "FPSProjectGameMode.generated.h already included, missing '#pragma once' in FPSProjectGameMode.h"
#endif
#define PORTALLIKEV2_FPSProjectGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSProjectGameMode ******************************************************
PORTALLIKEV2_API UClass* Z_Construct_UClass_AFPSProjectGameMode_NoRegister();

#define FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectGameMode(); \
	friend struct Z_Construct_UClass_AFPSProjectGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTALLIKEV2_API UClass* Z_Construct_UClass_AFPSProjectGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalLikeV2"), Z_Construct_UClass_AFPSProjectGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFPSProjectGameMode)


#define FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSProjectGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSProjectGameMode(AFPSProjectGameMode&&) = delete; \
	AFPSProjectGameMode(const AFPSProjectGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectGameMode) \
	NO_API virtual ~AFPSProjectGameMode();


#define FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h_12_PROLOG
#define FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSProjectGameMode;

// ********** End Class AFPSProjectGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
