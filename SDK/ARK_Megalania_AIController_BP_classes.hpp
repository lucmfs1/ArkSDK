#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Megalania_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalania_AIController_BP.Megalania_AIController_BP_C
// 0x0000 (0x0911 - 0x0911)
class AMegalania_AIController_BP_C : public ADino_AIController_BP_Climber_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalania_AIController_BP.Megalania_AIController_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Megalania_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif