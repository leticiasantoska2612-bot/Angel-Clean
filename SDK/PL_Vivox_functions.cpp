// Paladins (8.1.5838.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged
// (Native, Public)
// Parameters:
// bool                           bIsActive                      (Parm)

void UVivoxOSSConnectors::OnGameChatBlockedChanged(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged"));

	UVivoxOSSConnectors_OnGameChatBlockedChanged_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.IsGameChatBlocked
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::IsGameChatBlocked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.IsGameChatBlocked"));

	UVivoxOSSConnectors_IsGameChatBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.SignalGameChatStopping
// (Defined, Event, Public)

void UVivoxOSSConnectors::SignalGameChatStopping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.SignalGameChatStopping"));

	UVivoxOSSConnectors_SignalGameChatStopping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting
// (Defined, Event, Public)

void UVivoxOSSConnectors::SignalGameChatAttempting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting"));

	UVivoxOSSConnectors_SignalGameChatAttempting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void UVivoxOSSConnectors::OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds"));

	UVivoxOSSConnectors_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds
// (Defined, Event, Public)
// Parameters:
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::CanCommunicateVoiceWithUsersByUniqueNetIds(TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds"));

	UVivoxOSSConnectors_CanCommunicateVoiceWithUsersByUniqueNetIds_Params params;
	params.Users = Users;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked
// (Native, Public)
// Parameters:
// int                            ChannelJoinCount               (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::OnPrivilegeLevelChecked(int ChannelJoinCount, unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked"));

	UVivoxOSSConnectors_OnPrivilegeLevelChecked_Params params;
	params.ChannelJoinCount = ChannelJoinCount;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.CanCommunicateVoice
// (Defined, Event, Public, HasOutParms)
// Parameters:
// int                            ChannelJoinCount               (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::CanCommunicateVoice(int ChannelJoinCount, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.CanCommunicateVoice"));

	UVivoxOSSConnectors_CanCommunicateVoice_Params params;
	params.ChannelJoinCount = ChannelJoinCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.RemoveClosure
// (Defined, Public)
// Parameters:
// class UVivoxClosure*           Closure                        (Parm)

void UVivoxOSSConnectors::RemoveClosure(class UVivoxClosure* Closure)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.RemoveClosure"));

	UVivoxOSSConnectors_RemoveClosure_Params params;
	params.Closure = Closure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates
// (Defined, Event, Public)

void UVivoxOSSConnectors::RegisterOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates"));

	UVivoxOSSConnectors_RegisterOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosure.ClearOnlineDelegates
// (Public)

void UVivoxClosure::ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosure.ClearOnlineDelegates"));

	UVivoxClosure_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosure.RegisterOnlineDelegates
// (Defined, Public)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UVivoxClosure::RegisterOnlineDelegates(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosure.RegisterOnlineDelegates"));

	UVivoxClosure_RegisterOnlineDelegates_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosure.Init
// (Defined, Protected)
// Parameters:
// class UVivoxOSSConnectors*     ParamConnector                 (Parm)

void UVivoxClosure::Init(class UVivoxOSSConnectors* ParamConnector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosure.Init"));

	UVivoxClosure_Init_Params params;
	params.ParamConnector = ParamConnector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void UVivoxClosureOnPrivilegeLevelChecked::OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked"));

	UVivoxClosureOnPrivilegeLevelChecked_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates
// (Defined, Public)

void UVivoxClosureOnPrivilegeLevelChecked::ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates"));

	UVivoxClosureOnPrivilegeLevelChecked_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates
// (Defined, Public)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UVivoxClosureOnPrivilegeLevelChecked::RegisterOnlineDelegates(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates"));

	UVivoxClosureOnPrivilegeLevelChecked_RegisterOnlineDelegates_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure
// (Defined, Public)
// Parameters:
// int                            ChannelJoinCount               (Parm)
// class UVivoxOSSConnectors*     Connector                      (Parm)

void UVivoxClosureOnPrivilegeLevelChecked::InitClosure(int ChannelJoinCount, class UVivoxOSSConnectors* Connector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure"));

	UVivoxClosureOnPrivilegeLevelChecked_InitClosure_Params params;
	params.ChannelJoinCount = ChannelJoinCount;
	params.Connector = Connector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
