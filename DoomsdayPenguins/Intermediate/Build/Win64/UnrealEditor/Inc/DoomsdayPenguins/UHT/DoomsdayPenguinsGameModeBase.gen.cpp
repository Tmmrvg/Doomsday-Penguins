// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoomsdayPenguins/DoomsdayPenguinsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoomsdayPenguinsGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_NoRegister();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DoomsdayPenguins();
// End Cross Module References
	DEFINE_FUNCTION(ADoomsdayPenguinsGameModeBase::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoomsdayPenguinsGameModeBase::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoomsdayPenguinsGameModeBase::execRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart();
		P_NATIVE_END;
	}
	void ADoomsdayPenguinsGameModeBase::StaticRegisterNativesADoomsdayPenguinsGameModeBase()
	{
		UClass* Class = ADoomsdayPenguinsGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &ADoomsdayPenguinsGameModeBase::execLoadGame },
			{ "Restart", &ADoomsdayPenguinsGameModeBase::execRestart },
			{ "SaveGame", &ADoomsdayPenguinsGameModeBase::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoomsdayPenguinsGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoomsdayPenguinsGameModeBase, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoomsdayPenguinsGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoomsdayPenguinsGameModeBase, nullptr, "Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoomsdayPenguinsGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoomsdayPenguinsGameModeBase, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoomsdayPenguinsGameModeBase);
	UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_NoRegister()
	{
		return ADoomsdayPenguinsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGame_BP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGame_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_Goal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DoomsdayPenguins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_LoadGame, "LoadGame" }, // 2897482006
		{ &Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_Restart, "Restart" }, // 756924364
		{ &Z_Construct_UFunction_ADoomsdayPenguinsGameModeBase_SaveGame, "SaveGame" }, // 3340293415
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DoomsdayPenguinsGameModeBase.h" },
		{ "ModuleRelativePath", "DoomsdayPenguinsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_SaveGame_BP_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "DoomsdayPenguinsGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_SaveGame_BP = { "SaveGame_BP", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomsdayPenguinsGameModeBase, SaveGame_BP), Z_Construct_UClass_UClass, Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_SaveGame_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_SaveGame_BP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_BP_Goal_MetaData[] = {
		{ "Category", "Goal" },
		{ "ModuleRelativePath", "DoomsdayPenguinsGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_BP_Goal = { "BP_Goal", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomsdayPenguinsGameModeBase, BP_Goal), Z_Construct_UClass_UClass, Z_Construct_UClass_AGoal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_BP_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_BP_Goal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_SaveGame_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::NewProp_BP_Goal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoomsdayPenguinsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::ClassParams = {
		&ADoomsdayPenguinsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADoomsdayPenguinsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoomsdayPenguinsGameModeBase.OuterSingleton, Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoomsdayPenguinsGameModeBase.OuterSingleton;
	}
	template<> DOOMSDAYPENGUINS_API UClass* StaticClass<ADoomsdayPenguinsGameModeBase>()
	{
		return ADoomsdayPenguinsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoomsdayPenguinsGameModeBase);
	ADoomsdayPenguinsGameModeBase::~ADoomsdayPenguinsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoomsdayPenguinsGameModeBase, ADoomsdayPenguinsGameModeBase::StaticClass, TEXT("ADoomsdayPenguinsGameModeBase"), &Z_Registration_Info_UClass_ADoomsdayPenguinsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoomsdayPenguinsGameModeBase), 1250557508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_2892204120(TEXT("/Script/DoomsdayPenguins"),
		Z_CompiledInDeferFile_FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
