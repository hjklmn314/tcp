// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Notifies/ANS_SetAllowedInputs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_SetAllowedInputs() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UANS_SetAllowedInputs();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UANS_SetAllowedInputs_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_TempestCombatFramework_EInputBufferType();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputBufferType;
	static UEnum* EInputBufferType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputBufferType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputBufferType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TempestCombatFramework_EInputBufferType, Z_Construct_UPackage__Script_TempestCombatFramework(), TEXT("EInputBufferType"));
		}
		return Z_Registration_Info_UEnum_EInputBufferType.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UEnum* StaticEnum<EInputBufferType>()
	{
		return EInputBufferType_StaticEnum();
	}
	struct Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::Enumerators[] = {
		{ "EInputBufferType::NoBuffer", (int64)EInputBufferType::NoBuffer },
		{ "EInputBufferType::LastRegisteredInput", (int64)EInputBufferType::LastRegisteredInput },
		{ "EInputBufferType::InstantInputFire", (int64)EInputBufferType::InstantInputFire },
		{ "EInputBufferType::HighestPriorityInput", (int64)EInputBufferType::HighestPriorityInput },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HighestPriorityInput.DisplayName", "Highest Priority Input" },
		{ "HighestPriorityInput.Name", "EInputBufferType::HighestPriorityInput" },
		{ "InstantInputFire.DisplayName", "Instant Input Fire" },
		{ "InstantInputFire.Name", "EInputBufferType::InstantInputFire" },
		{ "LastRegisteredInput.DisplayName", "Last Registered Input" },
		{ "LastRegisteredInput.Name", "EInputBufferType::LastRegisteredInput" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
		{ "NoBuffer.DisplayName", "No Buffer" },
		{ "NoBuffer.Name", "EInputBufferType::NoBuffer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TempestCombatFramework,
		nullptr,
		"EInputBufferType",
		"EInputBufferType",
		Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TempestCombatFramework_EInputBufferType()
	{
		if (!Z_Registration_Info_UEnum_EInputBufferType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputBufferType.InnerSingleton, Z_Construct_UEnum_TempestCombatFramework_EInputBufferType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputBufferType.InnerSingleton;
	}
	DEFINE_FUNCTION(UANS_SetAllowedInputs::execGetBufferingObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseObject**)Z_Param__Result=P_THIS->GetBufferingObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UANS_SetAllowedInputs::execSetBufferingObject)
	{
		P_GET_OBJECT(UTempestBaseObject,Z_Param_NewBufferingObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBufferingObject(Z_Param_NewBufferingObject);
		P_NATIVE_END;
	}
	void UANS_SetAllowedInputs::StaticRegisterNativesUANS_SetAllowedInputs()
	{
		UClass* Class = UANS_SetAllowedInputs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBufferingObject", &UANS_SetAllowedInputs::execGetBufferingObject },
			{ "SetBufferingObject", &UANS_SetAllowedInputs::execSetBufferingObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics
	{
		struct ANS_SetAllowedInputs_eventGetBufferingObject_Parms
		{
			UTempestBaseObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANS_SetAllowedInputs_eventGetBufferingObject_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buffer Type" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UANS_SetAllowedInputs, nullptr, "GetBufferingObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::ANS_SetAllowedInputs_eventGetBufferingObject_Parms), Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics
	{
		struct ANS_SetAllowedInputs_eventSetBufferingObject_Parms
		{
			UTempestBaseObject* NewBufferingObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBufferingObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::NewProp_NewBufferingObject = { "NewBufferingObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANS_SetAllowedInputs_eventSetBufferingObject_Parms, NewBufferingObject), Z_Construct_UClass_UTempestBaseObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::NewProp_NewBufferingObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buffer Type" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UANS_SetAllowedInputs, nullptr, "SetBufferingObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::ANS_SetAllowedInputs_eventSetBufferingObject_Parms), Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_SetAllowedInputs);
	UClass* Z_Construct_UClass_UANS_SetAllowedInputs_NoRegister()
	{
		return UANS_SetAllowedInputs::StaticClass();
	}
	struct Z_Construct_UClass_UANS_SetAllowedInputs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllowedInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInputs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyInputBufferType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyInputBufferType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotifyInputBufferType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferingObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferingObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_SetAllowedInputs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UANS_SetAllowedInputs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UANS_SetAllowedInputs_GetBufferingObject, "GetBufferingObject" }, // 1616658645
		{ &Z_Construct_UFunction_UANS_SetAllowedInputs_SetBufferingObject, "SetBufferingObject" }, // 864932757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_SetAllowedInputs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANS_SetAllowedInputs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs_Inner = { "AllowedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs_MetaData[] = {
		{ "Category", "Buffer Type" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs = { "AllowedInputs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_SetAllowedInputs, AllowedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType_MetaData[] = {
		{ "Category", "Buffer Type" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType = { "NotifyInputBufferType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_SetAllowedInputs, NotifyInputBufferType), Z_Construct_UEnum_TempestCombatFramework_EInputBufferType, METADATA_PARAMS(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType_MetaData)) }; // 76229133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_BufferingObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Notifies/ANS_SetAllowedInputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_BufferingObject = { "BufferingObject", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_SetAllowedInputs, BufferingObject), Z_Construct_UClass_UTempestBaseObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_BufferingObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_BufferingObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_SetAllowedInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_AllowedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_NotifyInputBufferType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SetAllowedInputs_Statics::NewProp_BufferingObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_SetAllowedInputs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_SetAllowedInputs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_SetAllowedInputs_Statics::ClassParams = {
		&UANS_SetAllowedInputs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UANS_SetAllowedInputs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::PropPointers),
		0,
		0x041130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SetAllowedInputs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANS_SetAllowedInputs()
	{
		if (!Z_Registration_Info_UClass_UANS_SetAllowedInputs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_SetAllowedInputs.OuterSingleton, Z_Construct_UClass_UANS_SetAllowedInputs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_SetAllowedInputs.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UANS_SetAllowedInputs>()
	{
		return UANS_SetAllowedInputs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_SetAllowedInputs);
	UANS_SetAllowedInputs::~UANS_SetAllowedInputs() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics::EnumInfo[] = {
		{ EInputBufferType_StaticEnum, TEXT("EInputBufferType"), &Z_Registration_Info_UEnum_EInputBufferType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 76229133U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_SetAllowedInputs, UANS_SetAllowedInputs::StaticClass, TEXT("UANS_SetAllowedInputs"), &Z_Registration_Info_UClass_UANS_SetAllowedInputs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_SetAllowedInputs), 3922378836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_3358862248(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_SetAllowedInputs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
