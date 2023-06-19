// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseAttributeModifier.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseAttributeModifier() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeModifier();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	TEMPESTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifierProperties();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeModifierProperties;
class UScriptStruct* FAttributeModifierProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeModifierProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeModifierProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeModifierProperties, Z_Construct_UPackage__Script_TempestCombatFramework(), TEXT("AttributeModifierProperties"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeModifierProperties.OuterSingleton;
}
template<> TEMPESTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FAttributeModifierProperties>()
{
	return FAttributeModifierProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeToModify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIndefinite_MetaData[];
#endif
		static void NewProp_bIndefinite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndefinite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModificationDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModificationInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeModifierProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AttributeToModify_MetaData[] = {
		{ "Category", "Base Attribute Modifier Properties" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AttributeToModify = { "AttributeToModify", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeModifierProperties, AttributeToModify), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AttributeToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AttributeToModify_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite_MetaData[] = {
		{ "Category", "Base Attribute Modifier Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite_SetBit(void* Obj)
	{
		((FAttributeModifierProperties*)Obj)->bIndefinite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite = { "bIndefinite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAttributeModifierProperties), &Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationDuration_MetaData[] = {
		{ "Category", "Base Attribute Modifier Properties" },
		{ "EditCondition", "!bIndefinite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationDuration = { "ModificationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeModifierProperties, ModificationDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationInterval_MetaData[] = {
		{ "Category", "Base Attribute Modifier Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationInterval = { "ModificationInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeModifierProperties, ModificationInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AmountToAdd_MetaData[] = {
		{ "Category", "Base Attribute Modifier Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AmountToAdd = { "AmountToAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeModifierProperties, AmountToAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AmountToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AmountToAdd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AttributeToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_bIndefinite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_ModificationInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewProp_AmountToAdd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
		nullptr,
		&NewStructOps,
		"AttributeModifierProperties",
		sizeof(FAttributeModifierProperties),
		alignof(FAttributeModifierProperties),
		Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifierProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeModifierProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeModifierProperties.InnerSingleton, Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeModifierProperties.InnerSingleton;
	}
	static FName NAME_UTempestBaseAttributeModifier_ConstructAttributeModifier = FName(TEXT("ConstructAttributeModifier"));
	void UTempestBaseAttributeModifier::ConstructAttributeModifier()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAttributeModifier_ConstructAttributeModifier),NULL);
	}
	static FName NAME_UTempestBaseAttributeModifier_StartAttributeModifier = FName(TEXT("StartAttributeModifier"));
	void UTempestBaseAttributeModifier::StartAttributeModifier()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAttributeModifier_StartAttributeModifier),NULL);
	}
	void UTempestBaseAttributeModifier::StaticRegisterNativesUTempestBaseAttributeModifier()
	{
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Modifier Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeModifier, nullptr, "ConstructAttributeModifier", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Modifier Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeModifier, nullptr, "StartAttributeModifier", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseAttributeModifier);
	UClass* Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister()
	{
		return UTempestBaseAttributeModifier::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseAttributeModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModiferProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModiferProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseAttributeModifier_ConstructAttributeModifier, "ConstructAttributeModifier" }, // 2637982505
		{ &Z_Construct_UFunction_UTempestBaseAttributeModifier_StartAttributeModifier, "StartAttributeModifier" }, // 372445389
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/TempestBaseAttributeModifier.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::NewProp_ModiferProperties_MetaData[] = {
		{ "Category", "Attribute Modifier Initialization" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::NewProp_ModiferProperties = { "ModiferProperties", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAttributeModifier, ModiferProperties), Z_Construct_UScriptStruct_FAttributeModifierProperties, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::NewProp_ModiferProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::NewProp_ModiferProperties_MetaData)) }; // 1559468285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::NewProp_ModiferProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseAttributeModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::ClassParams = {
		&UTempestBaseAttributeModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseAttributeModifier()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseAttributeModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseAttributeModifier.OuterSingleton, Z_Construct_UClass_UTempestBaseAttributeModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseAttributeModifier.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseAttributeModifier>()
	{
		return UTempestBaseAttributeModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseAttributeModifier);
	UTempestBaseAttributeModifier::~UTempestBaseAttributeModifier() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics::ScriptStructInfo[] = {
		{ FAttributeModifierProperties::StaticStruct, Z_Construct_UScriptStruct_FAttributeModifierProperties_Statics::NewStructOps, TEXT("AttributeModifierProperties"), &Z_Registration_Info_UScriptStruct_AttributeModifierProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeModifierProperties), 1559468285U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseAttributeModifier, UTempestBaseAttributeModifier::StaticClass, TEXT("UTempestBaseAttributeModifier"), &Z_Registration_Info_UClass_UTempestBaseAttributeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseAttributeModifier), 3182800656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_2512977482(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeModifier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
