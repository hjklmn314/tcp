// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseConditionObject.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseConditionObject() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseConditionObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseConditionObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	struct TempestBaseConditionObject_eventGetConditionResult_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseConditionObject_eventGetConditionResult_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UTempestBaseConditionObject_GetConditionResult = FName(TEXT("GetConditionResult"));
	bool UTempestBaseConditionObject::GetConditionResult()
	{
		TempestBaseConditionObject_eventGetConditionResult_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseConditionObject_GetConditionResult),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTempestBaseConditionObject::StaticRegisterNativesUTempestBaseConditionObject()
	{
	}
	struct Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseConditionObject_eventGetConditionResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseConditionObject_eventGetConditionResult_Parms), &Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseConditionObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseConditionObject, nullptr, "GetConditionResult", nullptr, nullptr, sizeof(TempestBaseConditionObject_eventGetConditionResult_Parms), Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseConditionObject);
	UClass* Z_Construct_UClass_UTempestBaseConditionObject_NoRegister()
	{
		return UTempestBaseConditionObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseConditionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionGameplayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseConditionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseConditionObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseConditionObject_GetConditionResult, "GetConditionResult" }, // 2232680475
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseConditionObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestBaseConditionObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseConditionObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseConditionObject_Statics::NewProp_ConditionGameplayTag_MetaData[] = {
		{ "Category", "Condition Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseConditionObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseConditionObject_Statics::NewProp_ConditionGameplayTag = { "ConditionGameplayTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseConditionObject, ConditionGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseConditionObject_Statics::NewProp_ConditionGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseConditionObject_Statics::NewProp_ConditionGameplayTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseConditionObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseConditionObject_Statics::NewProp_ConditionGameplayTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseConditionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseConditionObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseConditionObject_Statics::ClassParams = {
		&UTempestBaseConditionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseConditionObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseConditionObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseConditionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseConditionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseConditionObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseConditionObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseConditionObject.OuterSingleton, Z_Construct_UClass_UTempestBaseConditionObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseConditionObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseConditionObject>()
	{
		return UTempestBaseConditionObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseConditionObject);
	UTempestBaseConditionObject::~UTempestBaseConditionObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseConditionObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseConditionObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseConditionObject, UTempestBaseConditionObject::StaticClass, TEXT("UTempestBaseConditionObject"), &Z_Registration_Info_UClass_UTempestBaseConditionObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseConditionObject), 2980088004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseConditionObject_h_3393071561(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseConditionObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseConditionObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
