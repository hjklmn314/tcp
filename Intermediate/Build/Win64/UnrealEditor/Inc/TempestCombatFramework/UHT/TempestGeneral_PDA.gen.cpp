// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/DataAssets/TempestGeneral_PDA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestGeneral_PDA() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestGeneral_PDA();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestGeneral_PDA_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	void UTempestGeneral_PDA::StaticRegisterNativesUTempestGeneral_PDA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestGeneral_PDA);
	UClass* Z_Construct_UClass_UTempestGeneral_PDA_NoRegister()
	{
		return UTempestGeneral_PDA::StaticClass();
	}
	struct Z_Construct_UClass_UTempestGeneral_PDA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToCreate_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesToCreate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToCreate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToCreate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestGeneral_PDA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestGeneral_PDA_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/TempestGeneral_PDA.h" },
		{ "ModuleRelativePath", "Public/DataAssets/TempestGeneral_PDA.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_Inner_MetaData[] = {
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/TempestGeneral_PDA.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_Inner = { "AttributesToCreate", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_MetaData[] = {
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/TempestGeneral_PDA.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate = { "AttributesToCreate", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestGeneral_PDA, AttributesToCreate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestGeneral_PDA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestGeneral_PDA_Statics::NewProp_AttributesToCreate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestGeneral_PDA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestGeneral_PDA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestGeneral_PDA_Statics::ClassParams = {
		&UTempestGeneral_PDA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTempestGeneral_PDA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestGeneral_PDA_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestGeneral_PDA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestGeneral_PDA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestGeneral_PDA()
	{
		if (!Z_Registration_Info_UClass_UTempestGeneral_PDA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestGeneral_PDA.OuterSingleton, Z_Construct_UClass_UTempestGeneral_PDA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestGeneral_PDA.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestGeneral_PDA>()
	{
		return UTempestGeneral_PDA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestGeneral_PDA);
	UTempestGeneral_PDA::~UTempestGeneral_PDA() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_DataAssets_TempestGeneral_PDA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_DataAssets_TempestGeneral_PDA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestGeneral_PDA, UTempestGeneral_PDA::StaticClass, TEXT("UTempestGeneral_PDA"), &Z_Registration_Info_UClass_UTempestGeneral_PDA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestGeneral_PDA), 654714567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_DataAssets_TempestGeneral_PDA_h_1455695069(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_DataAssets_TempestGeneral_PDA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_DataAssets_TempestGeneral_PDA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
