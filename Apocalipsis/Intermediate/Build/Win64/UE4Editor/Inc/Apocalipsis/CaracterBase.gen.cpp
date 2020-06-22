// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apocalipsis/CaracterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaracterBase() {}
// Cross Module References
	APOCALIPSIS_API UClass* Z_Construct_UClass_ACaracterBase_NoRegister();
	APOCALIPSIS_API UClass* Z_Construct_UClass_ACaracterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Apocalipsis();
// End Cross Module References
	DEFINE_FUNCTION(ACaracterBase::execCalcularSalud)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcularSalud(Z_Param_delta);
		P_NATIVE_END;
	}
	void ACaracterBase::StaticRegisterNativesACaracterBase()
	{
		UClass* Class = ACaracterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcularSalud", &ACaracterBase::execCalcularSalud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics
	{
		struct CaracterBase_eventCalcularSalud_Parms
		{
			float delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaracterBase_eventCalcularSalud_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Caracter Base" },
		{ "Comment", "//Funci?n para calcular la salud \n" },
		{ "ModuleRelativePath", "CaracterBase.h" },
		{ "ToolTip", "Funci?n para calcular la salud" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaracterBase, nullptr, "CalcularSalud", nullptr, nullptr, sizeof(CaracterBase_eventCalcularSalud_Parms), Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaracterBase_CalcularSalud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaracterBase_CalcularSalud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACaracterBase_NoRegister()
	{
		return ACaracterBase::StaticClass();
	}
	struct Z_Construct_UClass_ACaracterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_estaMuerto_MetaData[];
#endif
		static void NewProp_estaMuerto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_estaMuerto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Salud_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Salud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaracterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Apocalipsis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaracterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaracterBase_CalcularSalud, "CalcularSalud" }, // 906331293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaracterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CaracterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CaracterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto_MetaData[] = {
		{ "Category", "Caracter Base" },
		{ "Comment", "//Propiedad para estaMuerto\n" },
		{ "ModuleRelativePath", "CaracterBase.h" },
		{ "ToolTip", "Propiedad para estaMuerto" },
	};
#endif
	void Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto_SetBit(void* Obj)
	{
		((ACaracterBase*)Obj)->estaMuerto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto = { "estaMuerto", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACaracterBase), &Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaracterBase_Statics::NewProp_Salud_MetaData[] = {
		{ "Category", "Caracter Base" },
		{ "Comment", "//Propiedad de salud\n" },
		{ "ModuleRelativePath", "CaracterBase.h" },
		{ "ToolTip", "Propiedad de salud" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaracterBase_Statics::NewProp_Salud = { "Salud", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaracterBase, Salud), METADATA_PARAMS(Z_Construct_UClass_ACaracterBase_Statics::NewProp_Salud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaracterBase_Statics::NewProp_Salud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaracterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaracterBase_Statics::NewProp_estaMuerto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaracterBase_Statics::NewProp_Salud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaracterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaracterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaracterBase_Statics::ClassParams = {
		&ACaracterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaracterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaracterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaracterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaracterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaracterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaracterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaracterBase, 3107206623);
	template<> APOCALIPSIS_API UClass* StaticClass<ACaracterBase>()
	{
		return ACaracterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaracterBase(Z_Construct_UClass_ACaracterBase, &ACaracterBase::StaticClass, TEXT("/Script/Apocalipsis"), TEXT("ACaracterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaracterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
