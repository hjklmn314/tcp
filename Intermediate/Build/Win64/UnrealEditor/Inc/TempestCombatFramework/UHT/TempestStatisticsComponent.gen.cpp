// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestStatisticsComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestStatisticsComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestStatisticsComponent();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestStatisticsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestStatisticsComponent::execGetStatisticOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StatisticClass);
		P_GET_OBJECT_REF(UTempestBaseStatisticObject,Z_Param_Out_FoundStatistic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStatisticOfClass(Z_Param_StatisticClass,Z_Param_Out_FoundStatistic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestStatisticsComponent::execGetStatisticOfGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_StatisticGameplayTag);
		P_GET_OBJECT_REF(UTempestBaseStatisticObject,Z_Param_Out_FoundStatistic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStatisticOfGameplayTag(Z_Param_StatisticGameplayTag,Z_Param_Out_FoundStatistic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestStatisticsComponent::execConstructStatisticOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StatisticClassToCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructStatisticOfClass(Z_Param_StatisticClassToCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestStatisticsComponent::execInitializeStatisticsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStatisticsComponent_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTempestStatisticsComponent_InitializeStatisticsComponent = FName(TEXT("InitializeStatisticsComponent"));
	void UTempestStatisticsComponent::InitializeStatisticsComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestStatisticsComponent_InitializeStatisticsComponent),NULL);
	}
	void UTempestStatisticsComponent::StaticRegisterNativesUTempestStatisticsComponent()
	{
		UClass* Class = UTempestStatisticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructStatisticOfClass", &UTempestStatisticsComponent::execConstructStatisticOfClass },
			{ "GetStatisticOfClass", &UTempestStatisticsComponent::execGetStatisticOfClass },
			{ "GetStatisticOfGameplayTag", &UTempestStatisticsComponent::execGetStatisticOfGameplayTag },
			{ "InitializeStatisticsComponent", &UTempestStatisticsComponent::execInitializeStatisticsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics
	{
		struct TempestStatisticsComponent_eventConstructStatisticOfClass_Parms
		{
			TSubclassOf<UTempestBaseStatisticObject>  StatisticClassToCreate;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StatisticClassToCreate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::NewProp_StatisticClassToCreate = { "StatisticClassToCreate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestStatisticsComponent_eventConstructStatisticOfClass_Parms, StatisticClassToCreate), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::NewProp_StatisticClassToCreate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistics Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestStatisticsComponent, nullptr, "ConstructStatisticOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::TempestStatisticsComponent_eventConstructStatisticOfClass_Parms), Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics
	{
		struct TempestStatisticsComponent_eventGetStatisticOfClass_Parms
		{
			TSubclassOf<UTempestBaseStatisticObject>  StatisticClass;
			UTempestBaseStatisticObject* FoundStatistic;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StatisticClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundStatistic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::NewProp_StatisticClass = { "StatisticClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestStatisticsComponent_eventGetStatisticOfClass_Parms, StatisticClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::NewProp_FoundStatistic = { "FoundStatistic", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestStatisticsComponent_eventGetStatisticOfClass_Parms, FoundStatistic), Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::NewProp_StatisticClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::NewProp_FoundStatistic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistics Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestStatisticsComponent, nullptr, "GetStatisticOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::TempestStatisticsComponent_eventGetStatisticOfClass_Parms), Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics
	{
		struct TempestStatisticsComponent_eventGetStatisticOfGameplayTag_Parms
		{
			FGameplayTag StatisticGameplayTag;
			UTempestBaseStatisticObject* FoundStatistic;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatisticGameplayTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundStatistic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::NewProp_StatisticGameplayTag = { "StatisticGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestStatisticsComponent_eventGetStatisticOfGameplayTag_Parms, StatisticGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::NewProp_FoundStatistic = { "FoundStatistic", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestStatisticsComponent_eventGetStatisticOfGameplayTag_Parms, FoundStatistic), Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::NewProp_StatisticGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::NewProp_FoundStatistic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistics Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestStatisticsComponent, nullptr, "GetStatisticOfGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::TempestStatisticsComponent_eventGetStatisticOfGameplayTag_Parms), Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Statistics Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestStatisticsComponent, nullptr, "InitializeStatisticsComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestStatisticsComponent);
	UClass* Z_Construct_UClass_UTempestStatisticsComponent_NoRegister()
	{
		return UTempestStatisticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestStatisticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvialableStatistics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvialableStatistics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvialableStatistics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestStatisticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestStatisticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestStatisticsComponent_ConstructStatisticOfClass, "ConstructStatisticOfClass" }, // 1539417498
		{ &Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfClass, "GetStatisticOfClass" }, // 1725485119
		{ &Z_Construct_UFunction_UTempestStatisticsComponent_GetStatisticOfGameplayTag, "GetStatisticOfGameplayTag" }, // 165782824
		{ &Z_Construct_UFunction_UTempestStatisticsComponent_InitializeStatisticsComponent, "InitializeStatisticsComponent" }, // 104110231
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestStatisticsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestStatisticsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics_Inner = { "AvialableStatistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseStatisticObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics_MetaData[] = {
		{ "Category", "Statistics Base Info" },
		{ "ModuleRelativePath", "Public/Components/TempestStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics = { "AvialableStatistics", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestStatisticsComponent, AvialableStatistics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestStatisticsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestStatisticsComponent_Statics::NewProp_AvialableStatistics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestStatisticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestStatisticsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestStatisticsComponent_Statics::ClassParams = {
		&UTempestStatisticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestStatisticsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestStatisticsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestStatisticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestStatisticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestStatisticsComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestStatisticsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestStatisticsComponent.OuterSingleton, Z_Construct_UClass_UTempestStatisticsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestStatisticsComponent.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestStatisticsComponent>()
	{
		return UTempestStatisticsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestStatisticsComponent);
	UTempestStatisticsComponent::~UTempestStatisticsComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestStatisticsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestStatisticsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestStatisticsComponent, UTempestStatisticsComponent::StaticClass, TEXT("UTempestStatisticsComponent"), &Z_Registration_Info_UClass_UTempestStatisticsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestStatisticsComponent), 3174074832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestStatisticsComponent_h_865929113(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestStatisticsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestStatisticsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
