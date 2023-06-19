// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseStatisticObject.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseStatisticObject() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStatisticObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	struct TempestBaseStatisticObject_eventTickStatistic_Parms
	{
		float DeltaTime;
	};
	struct TempestBaseStatisticObject_eventUpdateStatisticValueBy_Parms
	{
		float NewStatisticValue;
	};
	static FName NAME_UTempestBaseStatisticObject_ConstructStatistic = FName(TEXT("ConstructStatistic"));
	void UTempestBaseStatisticObject::ConstructStatistic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStatisticObject_ConstructStatistic),NULL);
	}
	static FName NAME_UTempestBaseStatisticObject_ResetStatisticValue = FName(TEXT("ResetStatisticValue"));
	void UTempestBaseStatisticObject::ResetStatisticValue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStatisticObject_ResetStatisticValue),NULL);
	}
	static FName NAME_UTempestBaseStatisticObject_TickStatistic = FName(TEXT("TickStatistic"));
	void UTempestBaseStatisticObject::TickStatistic(float DeltaTime)
	{
		TempestBaseStatisticObject_eventTickStatistic_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStatisticObject_TickStatistic),&Parms);
	}
	static FName NAME_UTempestBaseStatisticObject_UpdateStatisticValueBy = FName(TEXT("UpdateStatisticValueBy"));
	void UTempestBaseStatisticObject::UpdateStatisticValueBy(float NewStatisticValue)
	{
		TempestBaseStatisticObject_eventUpdateStatisticValueBy_Parms Parms;
		Parms.NewStatisticValue=NewStatisticValue;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStatisticObject_UpdateStatisticValueBy),&Parms);
	}
	void UTempestBaseStatisticObject::StaticRegisterNativesUTempestBaseStatisticObject()
	{
	}
	struct Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistic Base Functions" },
		{ "Comment", "/* Statistic Base Functions */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
		{ "ToolTip", "Statistic Base Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStatisticObject, nullptr, "ConstructStatistic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistic Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStatisticObject, nullptr, "ResetStatisticValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStatisticObject_eventTickStatistic_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistic Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStatisticObject, nullptr, "TickStatistic", nullptr, nullptr, sizeof(TempestBaseStatisticObject_eventTickStatistic_Parms), Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStatisticValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::NewProp_NewStatisticValue = { "NewStatisticValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStatisticObject_eventUpdateStatisticValueBy_Parms, NewStatisticValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::NewProp_NewStatisticValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistic Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStatisticObject, nullptr, "UpdateStatisticValueBy", nullptr, nullptr, sizeof(TempestBaseStatisticObject_eventUpdateStatisticValueBy_Parms), Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseStatisticObject);
	UClass* Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister()
	{
		return UTempestBaseStatisticObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseStatisticObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatisticGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticCurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StatisticCurrentValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseStatisticObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseStatisticObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseStatisticObject_ConstructStatistic, "ConstructStatistic" }, // 3928571840
		{ &Z_Construct_UFunction_UTempestBaseStatisticObject_ResetStatisticValue, "ResetStatisticValue" }, // 459582205
		{ &Z_Construct_UFunction_UTempestBaseStatisticObject_TickStatistic, "TickStatistic" }, // 3309628087
		{ &Z_Construct_UFunction_UTempestBaseStatisticObject_UpdateStatisticValueBy, "UpdateStatisticValueBy" }, // 3194506743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStatisticObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestBaseStatisticObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticGameplayTag_MetaData[] = {
		{ "Category", "Statistic Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticGameplayTag = { "StatisticGameplayTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStatisticObject, StatisticGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticGameplayTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticCurrentValue_MetaData[] = {
		{ "Category", "Statistic Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStatisticObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticCurrentValue = { "StatisticCurrentValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStatisticObject, StatisticCurrentValue), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticCurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticCurrentValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseStatisticObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStatisticObject_Statics::NewProp_StatisticCurrentValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseStatisticObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseStatisticObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseStatisticObject_Statics::ClassParams = {
		&UTempestBaseStatisticObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseStatisticObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStatisticObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseStatisticObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseStatisticObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseStatisticObject.OuterSingleton, Z_Construct_UClass_UTempestBaseStatisticObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseStatisticObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseStatisticObject>()
	{
		return UTempestBaseStatisticObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseStatisticObject);
	UTempestBaseStatisticObject::~UTempestBaseStatisticObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStatisticObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStatisticObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseStatisticObject, UTempestBaseStatisticObject::StaticClass, TEXT("UTempestBaseStatisticObject"), &Z_Registration_Info_UClass_UTempestBaseStatisticObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseStatisticObject), 4110081867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStatisticObject_h_4141207946(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStatisticObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStatisticObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
