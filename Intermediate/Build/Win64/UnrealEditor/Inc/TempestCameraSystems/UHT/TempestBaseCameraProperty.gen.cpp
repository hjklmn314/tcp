// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCameraSystems/Public/Objects/TempestBaseCameraProperty.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseCameraProperty() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraMode_NoRegister();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraProperty();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	UPackage* Z_Construct_UPackage__Script_TempestCameraSystems();
// End Cross Module References
	struct TempestBaseCameraProperty_eventTickCameraProperty_Parms
	{
		float TickValue;
	};
	static FName NAME_UTempestBaseCameraProperty_ConstructCameraProperty = FName(TEXT("ConstructCameraProperty"));
	void UTempestBaseCameraProperty::ConstructCameraProperty()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraProperty_ConstructCameraProperty),NULL);
	}
	static FName NAME_UTempestBaseCameraProperty_StartCameraProperty = FName(TEXT("StartCameraProperty"));
	void UTempestBaseCameraProperty::StartCameraProperty()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraProperty_StartCameraProperty),NULL);
	}
	static FName NAME_UTempestBaseCameraProperty_TickCameraProperty = FName(TEXT("TickCameraProperty"));
	void UTempestBaseCameraProperty::TickCameraProperty(float TickValue)
	{
		TempestBaseCameraProperty_eventTickCameraProperty_Parms Parms;
		Parms.TickValue=TickValue;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraProperty_TickCameraProperty),&Parms);
	}
	void UTempestBaseCameraProperty::StaticRegisterNativesUTempestBaseCameraProperty()
	{
	}
	struct Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraProperty, nullptr, "ConstructCameraProperty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraProperty, nullptr, "StartCameraProperty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::NewProp_TickValue = { "TickValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraProperty_eventTickCameraProperty_Parms, TickValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::NewProp_TickValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraProperty, nullptr, "TickCameraProperty", nullptr, nullptr, sizeof(TempestBaseCameraProperty_eventTickCameraProperty_Parms), Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseCameraProperty);
	UClass* Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister()
	{
		return UTempestBaseCameraProperty::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseCameraProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePassed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseCameraProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCameraSystems,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseCameraProperty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseCameraProperty_ConstructCameraProperty, "ConstructCameraProperty" }, // 4224271076
		{ &Z_Construct_UFunction_UTempestBaseCameraProperty_StartCameraProperty, "StartCameraProperty" }, // 198260694
		{ &Z_Construct_UFunction_UTempestBaseCameraProperty_TickCameraProperty, "TickCameraProperty" }, // 981883626
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraProperty_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestBaseCameraProperty.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraProperty, PropertyType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_PropertyType_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_CameraMode_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraProperty, CameraMode), Z_Construct_UClass_UTempestBaseCameraMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_CameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_CameraMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_TimePassed_MetaData[] = {
		{ "Category", "Tick Values" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraProperty.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_TimePassed = { "TimePassed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraProperty, TimePassed), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_TimePassed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_TimePassed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseCameraProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_PropertyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_CameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraProperty_Statics::NewProp_TimePassed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseCameraProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseCameraProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseCameraProperty_Statics::ClassParams = {
		&UTempestBaseCameraProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseCameraProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseCameraProperty()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseCameraProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseCameraProperty.OuterSingleton, Z_Construct_UClass_UTempestBaseCameraProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseCameraProperty.OuterSingleton;
	}
	template<> TEMPESTCAMERASYSTEMS_API UClass* StaticClass<UTempestBaseCameraProperty>()
	{
		return UTempestBaseCameraProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseCameraProperty);
	UTempestBaseCameraProperty::~UTempestBaseCameraProperty() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraProperty_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseCameraProperty, UTempestBaseCameraProperty::StaticClass, TEXT("UTempestBaseCameraProperty"), &Z_Registration_Info_UClass_UTempestBaseCameraProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseCameraProperty), 3720534138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraProperty_h_282692354(TEXT("/Script/TempestCameraSystems"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraProperty_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
