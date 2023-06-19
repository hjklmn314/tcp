// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseBuffObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseBuffObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseBuffObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseBuffObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestBaseBuffObject::execSetDamageReceiver)
	{
		P_GET_OBJECT(AActor,Z_Param_NewDamageReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageReceiver(Z_Param_NewDamageReceiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseBuffObject::execSetDamageDealer)
	{
		P_GET_OBJECT(AActor,Z_Param_NewDamageDealer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageDealer(Z_Param_NewDamageDealer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseBuffObject::execGetDamageReceiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetDamageReceiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseBuffObject::execGetDamageDealer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetDamageDealer();
		P_NATIVE_END;
	}
	static FName NAME_UTempestBaseBuffObject_StartBuff = FName(TEXT("StartBuff"));
	void UTempestBaseBuffObject::StartBuff()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseBuffObject_StartBuff),NULL);
	}
	void UTempestBaseBuffObject::StaticRegisterNativesUTempestBaseBuffObject()
	{
		UClass* Class = UTempestBaseBuffObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamageDealer", &UTempestBaseBuffObject::execGetDamageDealer },
			{ "GetDamageReceiver", &UTempestBaseBuffObject::execGetDamageReceiver },
			{ "SetDamageDealer", &UTempestBaseBuffObject::execSetDamageDealer },
			{ "SetDamageReceiver", &UTempestBaseBuffObject::execSetDamageReceiver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics
	{
		struct TempestBaseBuffObject_eventGetDamageDealer_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseBuffObject_eventGetDamageDealer_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseBuffObject, nullptr, "GetDamageDealer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::TempestBaseBuffObject_eventGetDamageDealer_Parms), Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics
	{
		struct TempestBaseBuffObject_eventGetDamageReceiver_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseBuffObject_eventGetDamageReceiver_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseBuffObject, nullptr, "GetDamageReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::TempestBaseBuffObject_eventGetDamageReceiver_Parms), Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics
	{
		struct TempestBaseBuffObject_eventSetDamageDealer_Parms
		{
			AActor* NewDamageDealer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDamageDealer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::NewProp_NewDamageDealer = { "NewDamageDealer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseBuffObject_eventSetDamageDealer_Parms, NewDamageDealer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::NewProp_NewDamageDealer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseBuffObject, nullptr, "SetDamageDealer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::TempestBaseBuffObject_eventSetDamageDealer_Parms), Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics
	{
		struct TempestBaseBuffObject_eventSetDamageReceiver_Parms
		{
			AActor* NewDamageReceiver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDamageReceiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::NewProp_NewDamageReceiver = { "NewDamageReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseBuffObject_eventSetDamageReceiver_Parms, NewDamageReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::NewProp_NewDamageReceiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseBuffObject, nullptr, "SetDamageReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::TempestBaseBuffObject_eventSetDamageReceiver_Parms), Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseBuffObject, nullptr, "StartBuff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseBuffObject);
	UClass* Z_Construct_UClass_UTempestBaseBuffObject_NoRegister()
	{
		return UTempestBaseBuffObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseBuffObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageDealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageDealer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageReceiver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageReceiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseBuffObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseBuffObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageDealer, "GetDamageDealer" }, // 2982003414
		{ &Z_Construct_UFunction_UTempestBaseBuffObject_GetDamageReceiver, "GetDamageReceiver" }, // 3298582683
		{ &Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageDealer, "SetDamageDealer" }, // 2801304337
		{ &Z_Construct_UFunction_UTempestBaseBuffObject_SetDamageReceiver, "SetDamageReceiver" }, // 659234542
		{ &Z_Construct_UFunction_UTempestBaseBuffObject_StartBuff, "StartBuff" }, // 674945381
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseBuffObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestBaseBuffObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageDealer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageDealer = { "DamageDealer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseBuffObject, DamageDealer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageDealer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageDealer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestBaseBuffObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageReceiver = { "DamageReceiver", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseBuffObject, DamageReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageReceiver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseBuffObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageDealer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseBuffObject_Statics::NewProp_DamageReceiver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseBuffObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseBuffObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseBuffObject_Statics::ClassParams = {
		&UTempestBaseBuffObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseBuffObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseBuffObject_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseBuffObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseBuffObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseBuffObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseBuffObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseBuffObject.OuterSingleton, Z_Construct_UClass_UTempestBaseBuffObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseBuffObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseBuffObject>()
	{
		return UTempestBaseBuffObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseBuffObject);
	UTempestBaseBuffObject::~UTempestBaseBuffObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseBuffObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseBuffObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseBuffObject, UTempestBaseBuffObject::StaticClass, TEXT("UTempestBaseBuffObject"), &Z_Registration_Info_UClass_UTempestBaseBuffObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseBuffObject), 2370744789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseBuffObject_h_3953197397(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseBuffObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseBuffObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
