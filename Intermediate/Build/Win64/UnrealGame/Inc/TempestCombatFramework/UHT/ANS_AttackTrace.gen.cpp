// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Notifies/ANS_AttackTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_AttackTrace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UANS_AttackTrace();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UANS_AttackTrace_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	void UANS_AttackTrace::StaticRegisterNativesUANS_AttackTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_AttackTrace);
	UClass* Z_Construct_UClass_UANS_AttackTrace_NoRegister()
	{
		return UANS_AttackTrace::StaticClass();
	}
	struct Z_Construct_UClass_UANS_AttackTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_AttackTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AttackTrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANS_AttackTrace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_AttackTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AttackTrace_Statics::NewProp_AttackProperty_MetaData[] = {
		{ "Category", "Attack Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_AttackTrace.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_AttackTrace_Statics::NewProp_AttackProperty = { "AttackProperty", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AttackTrace, AttackProperty), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UANS_AttackTrace_Statics::NewProp_AttackProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AttackTrace_Statics::NewProp_AttackProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_AttackTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AttackTrace_Statics::NewProp_AttackProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_AttackTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_AttackTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_AttackTrace_Statics::ClassParams = {
		&UANS_AttackTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UANS_AttackTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AttackTrace_Statics::PropPointers),
		0,
		0x049130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UANS_AttackTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AttackTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANS_AttackTrace()
	{
		if (!Z_Registration_Info_UClass_UANS_AttackTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_AttackTrace.OuterSingleton, Z_Construct_UClass_UANS_AttackTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_AttackTrace.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UANS_AttackTrace>()
	{
		return UANS_AttackTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_AttackTrace);
	UANS_AttackTrace::~UANS_AttackTrace() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_AttackTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_AttackTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_AttackTrace, UANS_AttackTrace::StaticClass, TEXT("UANS_AttackTrace"), &Z_Registration_Info_UClass_UANS_AttackTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_AttackTrace), 2734344665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_AttackTrace_h_2925759116(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_AttackTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_AttackTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
