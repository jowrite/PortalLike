// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTALLIKEV2_API UClass* Z_Construct_UClass_AFPSProjectGameMode();
PORTALLIKEV2_API UClass* Z_Construct_UClass_AFPSProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalLikeV2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSProjectGameMode ******************************************************
void AFPSProjectGameMode::StaticRegisterNativesAFPSProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSProjectGameMode;
UClass* AFPSProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AFPSProjectGameMode;
	if (!Z_Registration_Info_UClass_AFPSProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSProjectGameMode"),
			Z_Registration_Info_UClass_AFPSProjectGameMode.InnerSingleton,
			StaticRegisterNativesAFPSProjectGameMode,
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
	return Z_Registration_Info_UClass_AFPSProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSProjectGameMode_NoRegister()
{
	return AFPSProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSProjectGameMode.h" },
		{ "ModuleRelativePath", "Public/FPSProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalLikeV2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSProjectGameMode_Statics::ClassParams = {
	&AFPSProjectGameMode::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AFPSProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSProjectGameMode.OuterSingleton, Z_Construct_UClass_AFPSProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSProjectGameMode.OuterSingleton;
}
AFPSProjectGameMode::AFPSProjectGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectGameMode);
AFPSProjectGameMode::~AFPSProjectGameMode() {}
// ********** End Class AFPSProjectGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h__Script_PortalLikeV2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectGameMode, AFPSProjectGameMode::StaticClass, TEXT("AFPSProjectGameMode"), &Z_Registration_Info_UClass_AFPSProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectGameMode), 2278930286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h__Script_PortalLikeV2_2640879412(TEXT("/Script/PortalLikeV2"),
	Z_CompiledInDeferFile_FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h__Script_PortalLikeV2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jodie_Desktop_PortalLikeV2_Source_PortalLikeV2_Public_FPSProjectGameMode_h__Script_PortalLikeV2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
