// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArrow_Tranq_Bolt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.UserConstructionScript
// ()

void AProjArrow_Tranq_Bolt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.UserConstructionScript");

	AProjArrow_Tranq_Bolt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.ExecuteUbergraph_ProjArrow_Tranq_Bolt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Tranq_Bolt_C::ExecuteUbergraph_ProjArrow_Tranq_Bolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.ExecuteUbergraph_ProjArrow_Tranq_Bolt");

	AProjArrow_Tranq_Bolt_C_ExecuteUbergraph_ProjArrow_Tranq_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif