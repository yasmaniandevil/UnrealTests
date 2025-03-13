// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProjectCCNY/Public/CPlusClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIRSTPROJECTCCNY_API UClass* Z_Construct_UClass_ACPlusClass();
FIRSTPROJECTCCNY_API UClass* Z_Construct_UClass_ACPlusClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProjectCCNY();
// End Cross Module References

// Begin Class ACPlusClass
void ACPlusClass::StaticRegisterNativesACPlusClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlusClass);
UClass* Z_Construct_UClass_ACPlusClass_NoRegister()
{
	return ACPlusClass::StaticClass();
}
struct Z_Construct_UClass_ACPlusClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPlusClass.h" },
		{ "ModuleRelativePath", "Public/CPlusClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPlusClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProjectCCNY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlusClass_Statics::ClassParams = {
	&ACPlusClass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlusClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlusClass()
{
	if (!Z_Registration_Info_UClass_ACPlusClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlusClass.OuterSingleton, Z_Construct_UClass_ACPlusClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlusClass.OuterSingleton;
}
template<> FIRSTPROJECTCCNY_API UClass* StaticClass<ACPlusClass>()
{
	return ACPlusClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusClass);
ACPlusClass::~ACPlusClass() {}
// End Class ACPlusClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_batni_Documents_CCNY_UnrealGIT_Test_UnrealTests_FirstProjectCCNY_Source_FirstProjectCCNY_Public_CPlusClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlusClass, ACPlusClass::StaticClass, TEXT("ACPlusClass"), &Z_Registration_Info_UClass_ACPlusClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlusClass), 1250848587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_batni_Documents_CCNY_UnrealGIT_Test_UnrealTests_FirstProjectCCNY_Source_FirstProjectCCNY_Public_CPlusClass_h_162292299(TEXT("/Script/FirstProjectCCNY"),
	Z_CompiledInDeferFile_FID_Users_batni_Documents_CCNY_UnrealGIT_Test_UnrealTests_FirstProjectCCNY_Source_FirstProjectCCNY_Public_CPlusClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_batni_Documents_CCNY_UnrealGIT_Test_UnrealTests_FirstProjectCCNY_Source_FirstProjectCCNY_Public_CPlusClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
