#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_Melee_Human_ElectricStun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Human_ElectricStun.DmgType_Melee_Human_ElectricStun_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Human_ElectricStun_C : public UDmgType_Melee_Human_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Human_ElectricStun.DmgType_Melee_Human_ElectricStun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif