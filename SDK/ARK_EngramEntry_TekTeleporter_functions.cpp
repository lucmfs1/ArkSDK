// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekTeleporter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekTeleporter.EngramEntry_TekTeleporter_C.ExecuteUbergraph_EngramEntry_TekTeleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekTeleporter_C::ExecuteUbergraph_EngramEntry_TekTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekTeleporter.EngramEntry_TekTeleporter_C.ExecuteUbergraph_EngramEntry_TekTeleporter");

	UEngramEntry_TekTeleporter_C_ExecuteUbergraph_EngramEntry_TekTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif