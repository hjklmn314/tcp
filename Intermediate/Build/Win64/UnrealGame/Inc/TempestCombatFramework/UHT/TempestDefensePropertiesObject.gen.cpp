// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestDefensePropertiesObject.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestDefensePropertiesObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestDefensePropertiesObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestDefensePropertiesObject::execSetImpactResult)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewImpactResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImpactResult(Z_Param_NewImpactResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestDefensePropertiesObject::execSetDefensePropertyOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefensePropertyOwner(Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestDefensePropertiesObject::execGetDefensePropertyOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetDefensePropertyOwner();
		P_NATIVE_END;
	}
	static FName NAME_UTempestDefensePropertiesObject_ConstructDefenseProperty = FName(TEXT("ConstructDefenseProperty"));
	void UTempestDefensePropertiesObject::ConstructDefenseProperty()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestDefensePropertiesObject_ConstructDefenseProperty),NULL);
	}
	static FName NAME_UTempestDefensePropertiesObject_ProcessReceivedAttack = FName(TEXT("ProcessReceivedAttack"));
	void UTempestDefensePropertiesObject::ProcessReceivedAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestDefensePropertiesObject_ProcessReceivedAttack),NULL);
	}
	void UTempestDefensePropertiesObject::StaticRegisterNativesUTempestDefensePropertiesObject()
	{
		UClass* Class = UTempestDefensePropertiesObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefensePropertyOwner", &UTempestDefensePropertiesObject::execGetDefensePropertyOwner },
			{ "SetDefensePropertyOwner", &UTempestDefensePropertiesObject::execSetDefensePropertyOwner },
			{ "SetImpactResult", &UTempestDefensePropertiesObject::execSetImpactResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestDefensePropertiesObject, nullptr, "ConstructDefenseProperty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics
	{
		struct TempestDefensePropertiesObject_eventGetDefensePropertyOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestDefensePropertiesObject_eventGetDefensePropertyOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestDefensePropertiesObject, nullptr, "GetDefensePropertyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::TempestDefensePropertiesObject_eventGetDefensePropertyOwner_Parms), Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestDefensePropertiesObject, nullptr, "ProcessReceivedAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics
	{
		struct TempestDefensePropertiesObject_eventSetDefensePropertyOwner_Parms
		{
			AActor* NewOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestDefensePropertiesObject_eventSetDefensePropertyOwner_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestDefensePropertiesObject, nullptr, "SetDefensePropertyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::TempestDefensePropertiesObject_eventSetDefensePropertyOwner_Parms), Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics
	{
		struct TempestDefensePropertiesObject_eventSetImpactResult_Parms
		{
			FGameplayTag NewImpactResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewImpactResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::NewProp_NewImpactResult = { "NewImpactResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestDefensePropertiesObject_eventSetImpactResult_Parms, NewImpactResult), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::NewProp_NewImpactResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestDefensePropertiesObject, nullptr, "SetImpactResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::TempestDefensePropertiesObject_eventSetImpactResult_Parms), Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestDefensePropertiesObject);
	UClass* Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister()
	{
		return UTempestDefensePropertiesObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestDefensePropertiesObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefensePropertyOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefensePropertyOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestDefensePropertiesObject_ConstructDefenseProperty, "ConstructDefenseProperty" }, // 158706781
		{ &Z_Construct_UFunction_UTempestDefensePropertiesObject_GetDefensePropertyOwner, "GetDefensePropertyOwner" }, // 2428532780
		{ &Z_Construct_UFunction_UTempestDefensePropertiesObject_ProcessReceivedAttack, "ProcessReceivedAttack" }, // 2796988927
		{ &Z_Construct_UFunction_UTempestDefensePropertiesObject_SetDefensePropertyOwner, "SetDefensePropertyOwner" }, // 3242924320
		{ &Z_Construct_UFunction_UTempestDefensePropertiesObject_SetImpactResult, "SetImpactResult" }, // 1605648585
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestDefensePropertiesObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_DefensePropertyOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_DefensePropertyOwner = { "DefensePropertyOwner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestDefensePropertiesObject, DefensePropertyOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_DefensePropertyOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_DefensePropertyOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Objects/TempestDefensePropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestDefensePropertiesObject, ImpactResult), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_ImpactResult_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_DefensePropertyOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::NewProp_ImpactResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestDefensePropertiesObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::ClassParams = {
		&UTempestDefensePropertiesObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestDefensePropertiesObject()
	{
		if (!Z_Registration_Info_UClass_UTempestDefensePropertiesObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestDefensePropertiesObject.OuterSingleton, Z_Construct_UClass_UTempestDefensePropertiesObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestDefensePropertiesObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestDefensePropertiesObject>()
	{
		return UTempestDefensePropertiesObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestDefensePropertiesObject);
	UTempestDefensePropertiesObject::~UTempestDefensePropertiesObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestDefensePropertiesObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestDefensePropertiesObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestDefensePropertiesObject, UTempestDefensePropertiesObject::StaticClass, TEXT("UTempestDefensePropertiesObject"), &Z_Registration_Info_UClass_UTempestDefensePropertiesObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestDefensePropertiesObject), 1995408621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestDefensePropertiesObject_h_3526125388(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestDefensePropertiesObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestDefensePropertiesObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
