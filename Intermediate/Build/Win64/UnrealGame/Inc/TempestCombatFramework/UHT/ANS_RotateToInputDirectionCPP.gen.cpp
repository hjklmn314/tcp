// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Notifies/ANS_RotateToInputDirectionCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_RotateToInputDirectionCPP() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UANS_RotateToInputDirectionCPP();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UANS_RotateToInputDirectionCPP_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UANS_RotateToInputDirectionCPP::execSetInputDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewInputDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputDirection(Z_Param_NewInputDirection);
		P_NATIVE_END;
	}
	void UANS_RotateToInputDirectionCPP::StaticRegisterNativesUANS_RotateToInputDirectionCPP()
	{
		UClass* Class = UANS_RotateToInputDirectionCPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInputDirection", &UANS_RotateToInputDirectionCPP::execSetInputDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics
	{
		struct ANS_RotateToInputDirectionCPP_eventSetInputDirection_Parms
		{
			FVector NewInputDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::NewProp_NewInputDirection = { "NewInputDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANS_RotateToInputDirectionCPP_eventSetInputDirection_Parms, NewInputDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::NewProp_NewInputDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_RotateToInputDirectionCPP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UANS_RotateToInputDirectionCPP, nullptr, "SetInputDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::ANS_RotateToInputDirectionCPP_eventSetInputDirection_Parms), Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_RotateToInputDirectionCPP);
	UClass* Z_Construct_UClass_UANS_RotateToInputDirectionCPP_NoRegister()
	{
		return UANS_RotateToInputDirectionCPP::StaticClass();
	}
	struct Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UANS_RotateToInputDirectionCPP_SetInputDirection, "SetInputDirection" }, // 1097411833
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANS_RotateToInputDirectionCPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_RotateToInputDirectionCPP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::NewProp_InputDirection_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Notifies/ANS_RotateToInputDirectionCPP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::NewProp_InputDirection = { "InputDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_RotateToInputDirectionCPP, InputDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::NewProp_InputDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::NewProp_InputDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::NewProp_InputDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_RotateToInputDirectionCPP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::ClassParams = {
		&UANS_RotateToInputDirectionCPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::PropPointers),
		0,
		0x041130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANS_RotateToInputDirectionCPP()
	{
		if (!Z_Registration_Info_UClass_UANS_RotateToInputDirectionCPP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_RotateToInputDirectionCPP.OuterSingleton, Z_Construct_UClass_UANS_RotateToInputDirectionCPP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_RotateToInputDirectionCPP.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UANS_RotateToInputDirectionCPP>()
	{
		return UANS_RotateToInputDirectionCPP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_RotateToInputDirectionCPP);
	UANS_RotateToInputDirectionCPP::~UANS_RotateToInputDirectionCPP() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_RotateToInputDirectionCPP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_RotateToInputDirectionCPP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_RotateToInputDirectionCPP, UANS_RotateToInputDirectionCPP::StaticClass, TEXT("UANS_RotateToInputDirectionCPP"), &Z_Registration_Info_UClass_UANS_RotateToInputDirectionCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_RotateToInputDirectionCPP), 4030702793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_RotateToInputDirectionCPP_h_1696916357(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_RotateToInputDirectionCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Notifies_ANS_RotateToInputDirectionCPP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
