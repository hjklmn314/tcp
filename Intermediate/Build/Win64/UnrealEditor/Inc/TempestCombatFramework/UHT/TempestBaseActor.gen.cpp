// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Actors/TempestBaseActor.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_ATempestBaseActor();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_ATempestBaseActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	void ATempestBaseActor::StaticRegisterNativesATempestBaseActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATempestBaseActor);
	UClass* Z_Construct_UClass_ATempestBaseActor_NoRegister()
	{
		return ATempestBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_ATempestBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATempestBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATempestBaseActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/TempestBaseActor.h" },
		{ "ModuleRelativePath", "Public/Actors/TempestBaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATempestBaseActor_Statics::NewProp_ActorGameplayTags_MetaData[] = {
		{ "Category", "Tempest Initialization" },
		{ "ModuleRelativePath", "Public/Actors/TempestBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATempestBaseActor_Statics::NewProp_ActorGameplayTags = { "ActorGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATempestBaseActor, ActorGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ATempestBaseActor_Statics::NewProp_ActorGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATempestBaseActor_Statics::NewProp_ActorGameplayTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATempestBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATempestBaseActor_Statics::NewProp_ActorGameplayTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATempestBaseActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ATempestBaseActor, IGameplayTagAssetInterface), false },  // 3654419898
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATempestBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATempestBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATempestBaseActor_Statics::ClassParams = {
		&ATempestBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATempestBaseActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATempestBaseActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATempestBaseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATempestBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATempestBaseActor()
	{
		if (!Z_Registration_Info_UClass_ATempestBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATempestBaseActor.OuterSingleton, Z_Construct_UClass_ATempestBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATempestBaseActor.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<ATempestBaseActor>()
	{
		return ATempestBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATempestBaseActor);
	ATempestBaseActor::~ATempestBaseActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Actors_TempestBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Actors_TempestBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATempestBaseActor, ATempestBaseActor::StaticClass, TEXT("ATempestBaseActor"), &Z_Registration_Info_UClass_ATempestBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATempestBaseActor), 1667948938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Actors_TempestBaseActor_h_647528437(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Actors_TempestBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Actors_TempestBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
