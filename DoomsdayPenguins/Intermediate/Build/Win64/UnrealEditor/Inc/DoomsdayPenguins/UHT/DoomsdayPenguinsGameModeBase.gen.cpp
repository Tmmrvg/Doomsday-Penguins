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
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DoomsdayPenguins();
// End Cross Module References
	void ADoomsdayPenguinsGameModeBase::StaticRegisterNativesADoomsdayPenguinsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoomsdayPenguinsGameModeBase);
	UClass* Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_NoRegister()
	{
		return ADoomsdayPenguinsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DoomsdayPenguins,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoomsdayPenguinsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoomsdayPenguinsGameModeBase_Statics::ClassParams = {
		&ADoomsdayPenguinsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	struct Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoomsdayPenguinsGameModeBase, ADoomsdayPenguinsGameModeBase::StaticClass, TEXT("ADoomsdayPenguinsGameModeBase"), &Z_Registration_Info_UClass_ADoomsdayPenguinsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoomsdayPenguinsGameModeBase), 229014337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_3465391239(TEXT("/Script/DoomsdayPenguins"),
		Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_DoomsdayPenguinsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
