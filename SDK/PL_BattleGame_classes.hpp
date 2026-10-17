#pragma once

// Paladins (8.1.5838.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleGame.BattleObject
// 0x0000 (0x0060 - 0x0060)
class UBattleObject : public UTgObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class BattleGame.BattleObject"));
		return ptr;
	}

};


// Class BattleGame.BattlePlayerController
// 0x0000 (0x1638 - 0x1638)
class ABattlePlayerController : public ATgPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class BattleGame.BattlePlayerController"));
		return ptr;
	}


	void BattlePlayerControllerFunction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
