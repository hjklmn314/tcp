// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCameraSystems/Public/Components/TempestCameraModeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestCameraModeComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraMode_NoRegister();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestCameraModeComponent();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestCameraModeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCameraSystems();
// End Cross Module References
	DEFINE_FUNCTION(UTempestCameraModeComponent::execConstructCameraModeOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewCameraModeClass);
		P_GET_OBJECT_REF(UTempestBaseCameraMode,Z_Param_Out_CreatedCameraMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructCameraModeOfClass(Z_Param_NewCameraModeClass,Z_Param_Out_CreatedCameraMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCameraModeComponent::execSetCameraModeOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewCameraModeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraModeOfClass(Z_Param_NewCameraModeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCameraModeComponent::execInitializeCameraModeComponent)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraComponent);
		P_GET_OBJECT(USpringArmComponent,Z_Param_NewSpringArmComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCameraModeComponent_Implementation(Z_Param_NewCameraComponent,Z_Param_NewSpringArmComponent);
		P_NATIVE_END;
	}
	struct TempestCameraModeComponent_eventInitializeCameraModeComponent_Parms
	{
		UCameraComponent* NewCameraComponent;
		USpringArmComponent* NewSpringArmComponent;
	};
	static FName NAME_UTempestCameraModeComponent_InitializeCameraModeComponent = FName(TEXT("InitializeCameraModeComponent"));
	void UTempestCameraModeComponent::InitializeCameraModeComponent(UCameraComponent* NewCameraComponent, USpringArmComponent* NewSpringArmComponent)
	{
		TempestCameraModeComponent_eventInitializeCameraModeComponent_Parms Parms;
		Parms.NewCameraComponent=NewCameraComponent;
		Parms.NewSpringArmComponent=NewSpringArmComponent;
		ProcessEvent(FindFunctionChecked(NAME_UTempestCameraModeComponent_InitializeCameraModeComponent),&Parms);
	}
	void UTempestCameraModeComponent::StaticRegisterNativesUTempestCameraModeComponent()
	{
		UClass* Class = UTempestCameraModeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructCameraModeOfClass", &UTempestCameraModeComponent::execConstructCameraModeOfClass },
			{ "InitializeCameraModeComponent", &UTempestCameraModeComponent::execInitializeCameraModeComponent },
			{ "SetCameraModeOfClass", &UTempestCameraModeComponent::execSetCameraModeOfClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics
	{
		struct TempestCameraModeComponent_eventConstructCameraModeOfClass_Parms
		{
			TSubclassOf<UTempestBaseCameraMode>  NewCameraModeClass;
			UTempestBaseCameraMode* CreatedCameraMode;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewCameraModeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedCameraMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::NewProp_NewCameraModeClass = { "NewCameraModeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCameraModeComponent_eventConstructCameraModeOfClass_Parms, NewCameraModeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::NewProp_CreatedCameraMode = { "CreatedCameraMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCameraModeComponent_eventConstructCameraModeOfClass_Parms, CreatedCameraMode), Z_Construct_UClass_UTempestBaseCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::NewProp_NewCameraModeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::NewProp_CreatedCameraMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCameraModeComponent, nullptr, "ConstructCameraModeOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::TempestCameraModeComponent_eventConstructCameraModeOfClass_Parms), Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSpringArmComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewCameraComponent = { "NewCameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCameraModeComponent_eventInitializeCameraModeComponent_Parms, NewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewSpringArmComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewSpringArmComponent = { "NewSpringArmComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCameraModeComponent_eventInitializeCameraModeComponent_Parms, NewSpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewSpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewSpringArmComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::NewProp_NewSpringArmComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCameraModeComponent, nullptr, "InitializeCameraModeComponent", nullptr, nullptr, sizeof(TempestCameraModeComponent_eventInitializeCameraModeComponent_Parms), Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics
	{
		struct TempestCameraModeComponent_eventSetCameraModeOfClass_Parms
		{
			TSubclassOf<UTempestBaseCameraMode>  NewCameraModeClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewCameraModeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::NewProp_NewCameraModeClass = { "NewCameraModeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCameraModeComponent_eventSetCameraModeOfClass_Parms, NewCameraModeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::NewProp_NewCameraModeClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCameraModeComponent, nullptr, "SetCameraModeOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::TempestCameraModeComponent_eventSetCameraModeOfClass_Parms), Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestCameraModeComponent);
	UClass* Z_Construct_UClass_UTempestCameraModeComponent_NoRegister()
	{
		return UTempestCameraModeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestCameraModeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCameraMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestCameraModeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCameraSystems,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestCameraModeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestCameraModeComponent_ConstructCameraModeOfClass, "ConstructCameraModeOfClass" }, // 2484726274
		{ &Z_Construct_UFunction_UTempestCameraModeComponent_InitializeCameraModeComponent, "InitializeCameraModeComponent" }, // 1090407570
		{ &Z_Construct_UFunction_UTempestCameraModeComponent_SetCameraModeOfClass, "SetCameraModeOfClass" }, // 542752481
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCameraModeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestCameraModeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CurrentCameraMode_MetaData[] = {
		{ "Category", "BaseVariables" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CurrentCameraMode = { "CurrentCameraMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCameraModeComponent, CurrentCameraMode), Z_Construct_UClass_UTempestBaseCameraMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CurrentCameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CurrentCameraMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "BaseVariables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCameraModeComponent, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "BaseVariables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestCameraModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCameraModeComponent, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_SpringArmComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestCameraModeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CurrentCameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCameraModeComponent_Statics::NewProp_SpringArmComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestCameraModeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestCameraModeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestCameraModeComponent_Statics::ClassParams = {
		&UTempestCameraModeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestCameraModeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCameraModeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestCameraModeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCameraModeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestCameraModeComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestCameraModeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestCameraModeComponent.OuterSingleton, Z_Construct_UClass_UTempestCameraModeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestCameraModeComponent.OuterSingleton;
	}
	template<> TEMPESTCAMERASYSTEMS_API UClass* StaticClass<UTempestCameraModeComponent>()
	{
		return UTempestCameraModeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestCameraModeComponent);
	UTempestCameraModeComponent::~UTempestCameraModeComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Components_TempestCameraModeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Components_TempestCameraModeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestCameraModeComponent, UTempestCameraModeComponent::StaticClass, TEXT("UTempestCameraModeComponent"), &Z_Registration_Info_UClass_UTempestCameraModeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestCameraModeComponent), 2675902236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Components_TempestCameraModeComponent_h_4133968819(TEXT("/Script/TempestCameraSystems"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Components_TempestCameraModeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Components_TempestCameraModeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
