// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoomsdayPenguins/Penguin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePenguin() {}
// Cross Module References
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_APenguin();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_APenguin_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DoomsdayPenguins();
// End Cross Module References
	void APenguin::StaticRegisterNativesAPenguin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APenguin);
	UClass* Z_Construct_UClass_APenguin_NoRegister()
	{
		return APenguin::StaticClass();
	}
	struct Z_Construct_UClass_APenguin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseXInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseXInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseYInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseYInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriftInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DriftInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APenguin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DoomsdayPenguins,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Penguin.h" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_Lives_MetaData[] = {
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, Lives), METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_Lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_Lives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, ForwardInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_UpInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_UpInput = { "UpInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, UpInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_UpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_UpInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_RightInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_RightInput = { "RightInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, RightInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_RightInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_RightInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput = { "ShootInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, ShootInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput = { "ReloadInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, ReloadInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput = { "MouseXInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, MouseXInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput = { "MouseYInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, MouseYInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput = { "RestartInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, RestartInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_DriftInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_DriftInput = { "DriftInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, DriftInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_DriftInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_DriftInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APenguin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_Lives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_UpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_RightInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_DriftInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APenguin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APenguin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APenguin_Statics::ClassParams = {
		&APenguin::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APenguin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APenguin()
	{
		if (!Z_Registration_Info_UClass_APenguin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APenguin.OuterSingleton, Z_Construct_UClass_APenguin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APenguin.OuterSingleton;
	}
	template<> DOOMSDAYPENGUINS_API UClass* StaticClass<APenguin>()
	{
		return APenguin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APenguin);
	APenguin::~APenguin() {}
	struct Z_CompiledInDeferFile_FID_Users_larss_Documents_Github_repositories_Inventory_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_larss_Documents_Github_repositories_Inventory_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APenguin, APenguin::StaticClass, TEXT("APenguin"), &Z_Registration_Info_UClass_APenguin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APenguin), 1743987683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_larss_Documents_Github_repositories_Inventory_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_215466933(TEXT("/Script/DoomsdayPenguins"),
		Z_CompiledInDeferFile_FID_Users_larss_Documents_Github_repositories_Inventory_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_larss_Documents_Github_repositories_Inventory_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
