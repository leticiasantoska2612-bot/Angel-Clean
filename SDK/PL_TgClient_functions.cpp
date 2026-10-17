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

// Function TgClient.TgBrowserManager.AccountLink
// (Defined, Event, Public)

void UTgBrowserManager::AccountLink()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.AccountLink"));

	UTgBrowserManager_AccountLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.LaunchTournament
// (Defined, Event, Public)

void UTgBrowserManager::LaunchTournament()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.LaunchTournament"));

	UTgBrowserManager_LaunchTournament_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.TwitchSignup
// (Defined, Event, Public)

void UTgBrowserManager::TwitchSignup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.TwitchSignup"));

	UTgBrowserManager_TwitchSignup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.TwitchHelp
// (Defined, Event, Public)

void UTgBrowserManager::TwitchHelp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.TwitchHelp"));

	UTgBrowserManager_TwitchHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.PlayerStats
// (Defined, Event, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgBrowserManager::PlayerStats(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.PlayerStats"));

	UTgBrowserManager_PlayerStats_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RecruitPromo
// (Defined, Event, Public)

void UTgBrowserManager::RecruitPromo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.RecruitPromo"));

	UTgBrowserManager_RecruitPromo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.TwitterPromo
// (Defined, Event, Public)

void UTgBrowserManager::TwitterPromo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.TwitterPromo"));

	UTgBrowserManager_TwitterPromo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.FacebookPromo
// (Defined, Event, Public)

void UTgBrowserManager::FacebookPromo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.FacebookPromo"));

	UTgBrowserManager_FacebookPromo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RankedRules
// (Defined, Event, Public)

void UTgBrowserManager::RankedRules()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.RankedRules"));

	UTgBrowserManager_RankedRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.GodPack
// (Defined, Event, Public)

void UTgBrowserManager::GodPack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.GodPack"));

	UTgBrowserManager_GodPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.SubmitBugReport
// (Defined, Event, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgBrowserManager::SubmitBugReport(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.SubmitBugReport"));

	UTgBrowserManager_SubmitBugReport_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RecoverUsername
// (Defined, Event, Public)

void UTgBrowserManager::RecoverUsername()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.RecoverUsername"));

	UTgBrowserManager_RecoverUsername_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RecoverPassword
// (Defined, Event, Public)

void UTgBrowserManager::RecoverPassword()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.RecoverPassword"));

	UTgBrowserManager_RecoverPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.CreateAccount
// (Defined, Event, Public)

void UTgBrowserManager::CreateAccount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.CreateAccount"));

	UTgBrowserManager_CreateAccount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.ActivateKey
// (Defined, Event, Public)

void UTgBrowserManager::ActivateKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.ActivateKey"));

	UTgBrowserManager_ActivateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Support
// (Defined, Event, Public)

void UTgBrowserManager::Support()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.Support"));

	UTgBrowserManager_Support_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Booster
// (Defined, Event, Public)

void UTgBrowserManager::Booster()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.Booster"));

	UTgBrowserManager_Booster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Store
// (Defined, Event, Public)

void UTgBrowserManager::Store()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.Store"));

	UTgBrowserManager_Store_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Gold
// (Defined, Event, Public)

void UTgBrowserManager::Gold()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.Gold"));

	UTgBrowserManager_Gold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Alert
// (Defined, Event, Public)

void UTgBrowserManager::Alert()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.Alert"));

	UTgBrowserManager_Alert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.SetContainer
// (Native, Public)
// Parameters:
// class UUIWebBrowser*           pContainer                     (Parm)

void UTgBrowserManager::SetContainer(class UUIWebBrowser* pContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.SetContainer"));

	UTgBrowserManager_SetContainer_Params params;
	params.pContainer = pContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.ResizeView
// (Native, Public)

void UTgBrowserManager::ResizeView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.ResizeView"));

	UTgBrowserManager_ResizeView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Close
// (Native, Public)

void UTgBrowserManager::Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.Close"));

	UTgBrowserManager_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.OpenVideo
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bAddName                       (OptionalParm, Parm)

void UTgBrowserManager::OpenVideo(const struct FString& URL, bool bAddName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.OpenVideo"));

	UTgBrowserManager_OpenVideo_Params params;
	params.URL = URL;
	params.bAddName = bAddName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.OpenURL
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bShowNavButtons                (OptionalParm, Parm)
// bool                           bSetFocus                      (OptionalParm, Parm)

void UTgBrowserManager::OpenURL(const struct FString& URL, bool bShowNavButtons, bool bSetFocus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.OpenURL"));

	UTgBrowserManager_OpenURL_Params params;
	params.URL = URL;
	params.bShowNavButtons = bShowNavButtons;
	params.bSetFocus = bSetFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.ExternalOpenURL
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bAddLang                       (OptionalParm, Parm)

void UTgBrowserManager::ExternalOpenURL(const struct FString& URL, bool bAddLang)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.ExternalOpenURL"));

	UTgBrowserManager_ExternalOpenURL_Params params;
	params.URL = URL;
	params.bAddLang = bAddLang;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.IsBrowserLoaded
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgBrowserManager::IsBrowserLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBrowserManager.IsBrowserLoaded"));

	UTgBrowserManager_IsBrowserLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.TestShowCursor
// (Defined, Exec, Public)
// Parameters:
// bool                           bShow                          (Parm)

void ATgClientHUD::TestShowCursor(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.TestShowCursor"));

	ATgClientHUD_TestShowCursor_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.DebugPictureInPicture
// (Defined, Exec, Public)

void ATgClientHUD::DebugPictureInPicture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.DebugPictureInPicture"));

	ATgClientHUD_DebugPictureInPicture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.CreateTestPortraits
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPComPictureInPictureScene* Scene                          (Parm)
// struct FString                 BotName                        (Const, Parm, OutParm, NeedCtorLink)
// struct FVector                 ViewOffset                     (Parm)
// struct FVector                 LookAtOffset                   (Parm)
// float                          FOV                            (Parm)

void ATgClientHUD::CreateTestPortraits(class UPComPictureInPictureScene* Scene, const struct FVector& ViewOffset, const struct FVector& LookAtOffset, float FOV, struct FString* BotName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.CreateTestPortraits"));

	ATgClientHUD_CreateTestPortraits_Params params;
	params.Scene = Scene;
	params.ViewOffset = ViewOffset;
	params.LookAtOffset = LookAtOffset;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BotName != nullptr)
		*BotName = params.BotName;
}


// Function TgClient.TgClientHUD.TestPictureInPicturePortraits
// (Defined, Exec, Public)
// Parameters:
// struct FString                 BotName                        (Parm, NeedCtorLink)

void ATgClientHUD::TestPictureInPicturePortraits(const struct FString& BotName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.TestPictureInPicturePortraits"));

	ATgClientHUD_TestPictureInPicturePortraits_Params params;
	params.BotName = BotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.TestPictureInPictureBasic
// (Defined, Exec, Public)

void ATgClientHUD::TestPictureInPictureBasic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.TestPictureInPictureBasic"));

	ATgClientHUD_TestPictureInPictureBasic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.PostRender
// (Defined, Event, Public)

void ATgClientHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.PostRender"));

	ATgClientHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.PostBeginPlay
// (Defined, Simulated, Public)

void ATgClientHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.PostBeginPlay"));

	ATgClientHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.IsHidden
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::IsHidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.IsHidden"));

	ATgClientHUD_IsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.SetGamepadForced
// (Defined, Exec, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void ATgClientHUD::SetGamepadForced(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.SetGamepadForced"));

	ATgClientHUD_SetGamepadForced_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.TogglePushToTalk
// (Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void ATgClientHUD::TogglePushToTalk(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.TogglePushToTalk"));

	ATgClientHUD_TogglePushToTalk_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ToggleDevMenu
// (Exec, Native, Public)

void ATgClientHUD::ToggleDevMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ToggleDevMenu"));

	ATgClientHUD_ToggleDevMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.LogLTIPrices
// (Exec, Native, Public)
// Parameters:
// int                            nLTI                           (Parm)

void ATgClientHUD::LogLTIPrices(int nLTI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.LogLTIPrices"));

	ATgClientHUD_LogLTIPrices_Params params;
	params.nLTI = nLTI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.LogItemPrices
// (Exec, Native, Public)
// Parameters:
// int                            nItemId                        (Parm)

void ATgClientHUD::LogItemPrices(int nItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.LogItemPrices"));

	ATgClientHUD_LogItemPrices_Params params;
	params.nItemId = nItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.DumpScenesToLog
// (Exec, Native, Public)

void ATgClientHUD::DumpScenesToLog()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.DumpScenesToLog"));

	ATgClientHUD_DumpScenesToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.TestDidIt
// (Exec, Native, Public)
// Parameters:
// int                            nActivityId                    (Parm)
// int                            nCount                         (Parm)

void ATgClientHUD::TestDidIt(int nActivityId, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.TestDidIt"));

	ATgClientHUD_TestDidIt_Params params;
	params.nActivityId = nActivityId;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ResetViewCenterPoint
// (Exec, Native, Public)

void ATgClientHUD::ResetViewCenterPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ResetViewCenterPoint"));

	ATgClientHUD_ResetViewCenterPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ShowHUD
// (Exec, Native, Public)

void ATgClientHUD::ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ShowHUD"));

	ATgClientHUD_ShowHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.HideHUD
// (Exec, Native, Public)

void ATgClientHUD::HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.HideHUD"));

	ATgClientHUD_HideHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ToggleHUD
// (Exec, Native, Public)

void ATgClientHUD::ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ToggleHUD"));

	ATgClientHUD_ToggleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.TryToBack
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::TryToBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.TryToBack"));

	ATgClientHUD_TryToBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.ShowHit
// (Native, Public, HasOutParms)
// Parameters:
// class AActor*                  Target                         (Parm)
// float                          fDamageAmount                  (Parm)
// bool                           bIsShieldHit                   (Parm)
// struct FExtraDamageInfo        ExtraInfo                      (Const, Parm, OutParm)

void ATgClientHUD::ShowHit(class AActor* Target, float fDamageAmount, bool bIsShieldHit, struct FExtraDamageInfo* ExtraInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ShowHit"));

	ATgClientHUD_ShowHit_Params params;
	params.Target = Target;
	params.fDamageAmount = fDamageAmount;
	params.bIsShieldHit = bIsShieldHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraInfo != nullptr)
		*ExtraInfo = params.ExtraInfo;
}


// Function TgClient.TgClientHUD.ShowCursor
// (Native, Public)
// Parameters:
// bool                           bShow                          (Parm)

void ATgClientHUD::ShowCursor(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ShowCursor"));

	ATgClientHUD_ShowCursor_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.EndDoubleClick
// (Native, Public)

void ATgClientHUD::EndDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.EndDoubleClick"));

	ATgClientHUD_EndDoubleClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.IsLoggedIn
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.IsLoggedIn"));

	ATgClientHUD_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.IsInGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.IsInGame"));

	ATgClientHUD_IsInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.RemoveSceneFromStack
// (Native, HasOptionalParms, Public)
// Parameters:
// class UTgGfxScene*             pScene                         (Parm)
// bool                           bPopAll                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::RemoveSceneFromStack(class UTgGfxScene* pScene, bool bPopAll)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.RemoveSceneFromStack"));

	ATgClientHUD_RemoveSceneFromStack_Params params;
	params.pScene = pScene;
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.PopToScene
// (Native, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::PopToScene(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.PopToScene"));

	ATgClientHUD_PopToScene_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.ClearScenes
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  ePreviousState                 (OptionalParm, Parm)
// unsigned char                  eTargetState                   (OptionalParm, Parm)

void ATgClientHUD::ClearScenes(unsigned char ePreviousState, unsigned char eTargetState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.ClearScenes"));

	ATgClientHUD_ClearScenes_Params params;
	params.ePreviousState = ePreviousState;
	params.eTargetState = eTargetState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.PopScene
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nIndex                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::PopScene(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.PopScene"));

	ATgClientHUD_PopScene_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.PushScene
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// bool                           bSkipPrivilegeCheck            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::PushScene(const struct FString& sName, bool bSkipPrivilegeCheck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.PushScene"));

	ATgClientHUD_PushScene_Params params;
	params.sName = sName;
	params.bSkipPrivilegeCheck = bSkipPrivilegeCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.Initialize
// (Native, Public)

void ATgClientHUD::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgClientHUD.Initialize"));

	ATgClientHUD_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgData_Cards.Initialize
// (Native, Public)
// Parameters:
// class UUIGameMoviePlayer*      pMoviePlayer                   (Parm)

void UTgData_Cards::Initialize(class UUIGameMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgData_Cards.Initialize"));

	UTgData_Cards_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Unsubscribe
// (Native, Public)

void UTgDataChunk::usc_Unsubscribe()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.usc_Unsubscribe"));

	UTgDataChunk_usc_Unsubscribe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Subscribe
// (Native, Public)

void UTgDataChunk::usc_Subscribe()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.usc_Subscribe"));

	UTgDataChunk_usc_Subscribe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate
// (Public, Delegate)

void UTgDataChunk::usc_Unsubscribe_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate"));

	UTgDataChunk_usc_Unsubscribe_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Subscribe_Delegate
// (Public, Delegate)

void UTgDataChunk::usc_Subscribe_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.usc_Subscribe_Delegate"));

	UTgDataChunk_usc_Subscribe_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.GetPlayerController
// (Native, Public)
// Parameters:
// class ATgPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgPlayerController* UTgDataChunk::GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.GetPlayerController"));

	UTgDataChunk_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.NotifyMapChange
// (Native, Public)

void UTgDataChunk::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.NotifyMapChange"));

	UTgDataChunk_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.IsSubscribed
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDataChunk::IsSubscribed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.IsSubscribed"));

	UTgDataChunk_IsSubscribed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.SetDirty
// (Native, Public)

void UTgDataChunk::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.SetDirty"));

	UTgDataChunk_SetDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.GetField
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FASValue                NewValue                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDataChunk::GetField(const struct FString& FieldName, struct FASValue* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.GetField"));

	UTgDataChunk_GetField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.SetField
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FASValue                NewValue                       (Const, Parm, OutParm, NeedCtorLink)
// bool                           bCreateIfMissing               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDataChunk::SetField(const struct FString& FieldName, bool bCreateIfMissing, struct FASValue* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.SetField"));

	UTgDataChunk_SetField_Params params;
	params.FieldName = FieldName;
	params.bCreateIfMissing = bCreateIfMissing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.AddField
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FASValue                NewValue                       (Const, Parm, OutParm, NeedCtorLink)

void UTgDataChunk::AddField(const struct FString& FieldName, struct FASValue* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.AddField"));

	UTgDataChunk_AddField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function TgClient.TgDataChunk.ClearDelegates
// (Native, Public)

void UTgDataChunk::ClearDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.ClearDelegates"));

	UTgDataChunk_ClearDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.SetDelegates
// (Native, Public)

void UTgDataChunk::SetDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.SetDelegates"));

	UTgDataChunk_SetDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.RemoveChild
// (Native, HasOptionalParms, Public)
// Parameters:
// class UTgDataChunk*            Child                          (Parm)
// bool                           bClearDelegates                (OptionalParm, Parm)

void UTgDataChunk::RemoveChild(class UTgDataChunk* Child, bool bClearDelegates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.RemoveChild"));

	UTgDataChunk_RemoveChild_Params params;
	params.Child = Child;
	params.bClearDelegates = bClearDelegates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.AddChild
// (Native, Public)
// Parameters:
// class UTgDataChunk*            Child                          (Parm)

void UTgDataChunk::AddChild(class UTgDataChunk* Child)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.AddChild"));

	UTgDataChunk_AddChild_Params params;
	params.Child = Child;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.DataUpdateEvent
// (Native, Public)

void UTgDataChunk::DataUpdateEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.DataUpdateEvent"));

	UTgDataChunk_DataUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.Update
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           bSkipCallback                  (OptionalParm, Parm)

void UTgDataChunk::Update(float DeltaTime, bool bSkipCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.Update"));

	UTgDataChunk_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.bSkipCallback = bSkipCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgDataChunk::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataChunk.InitializeData"));

	UTgDataChunk_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataHandler.NotifyMapChange
// (Native, Public)

void UTgDataHandler::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataHandler.NotifyMapChange"));

	UTgDataHandler_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataHandler.Update
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UTgDataHandler::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataHandler.Update"));

	UTgDataHandler_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataHandler.InitializeDataHandler
// (Native, Public)
// Parameters:
// class UUIMoviePlayer*          mp                             (Parm)

void UTgDataHandler::InitializeDataHandler(class UUIMoviePlayer* mp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataHandler.InitializeDataHandler"));

	UTgDataHandler_InitializeDataHandler_Params params;
	params.mp = mp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.Init
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FString                 OutError                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameViewportClient::Init(struct FString* OutError)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.Init"));

	UTgGameViewportClient_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutError != nullptr)
		*OutError = params.OutError;

	return params.ReturnValue;
}


// Function TgClient.TgGameViewportClient.LayoutPlayers
// (Defined, Event, Public)

void UTgGameViewportClient::LayoutPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.LayoutPlayers"));

	UTgGameViewportClient_LayoutPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.GetSubtitleRegion
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FVector2D               MinPos                         (Parm, OutParm)
// struct FVector2D               MaxPos                         (Parm, OutParm)

void UTgGameViewportClient::GetSubtitleRegion(struct FVector2D* MinPos, struct FVector2D* MaxPos)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.GetSubtitleRegion"));

	UTgGameViewportClient_GetSubtitleRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinPos != nullptr)
		*MinPos = params.MinPos;
	if (MaxPos != nullptr)
		*MaxPos = params.MaxPos;
}


// Function TgClient.TgGameViewportClient.PostRender
// (Defined, Event, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UTgGameViewportClient::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.PostRender"));

	UTgGameViewportClient_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.GameSessionEnded
// (Defined, Event, Public)

void UTgGameViewportClient::GameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.GameSessionEnded"));

	UTgGameViewportClient_GameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.InitTgGameViewportClient
// (Native, Public)

void UTgGameViewportClient::InitTgGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.InitTgGameViewportClient"));

	UTgGameViewportClient_InitTgGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameViewportClient::IsGfxMovieCapturingMouseInput()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput"));

	UTgGameViewportClient_IsGfxMovieCapturingMouseInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameViewportClient.NativeGameSessionEnded
// (Native, Public)

void UTgGameViewportClient::NativeGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.NativeGameSessionEnded"));

	UTgGameViewportClient_NativeGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.DrawTransition
// (Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UTgGameViewportClient::DrawTransition(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameViewportClient.DrawTransition"));

	UTgGameViewportClient_DrawTransition_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.Reinit
// (Defined, Event, Public)

void UTgGfxFriendManagement::Reinit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.Reinit"));

	UTgGfxFriendManagement_Reinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.ASC_Reinit
// (Final, Defined, Public)

void UTgGfxFriendManagement::ASC_Reinit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.ASC_Reinit"));

	UTgGfxFriendManagement_ASC_Reinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.ErrorFeedback
// (Defined, Event, Public)
// Parameters:
// struct FString                 ErrMsg                         (Parm, NeedCtorLink)

void UTgGfxFriendManagement::ErrorFeedback(const struct FString& ErrMsg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.ErrorFeedback"));

	UTgGfxFriendManagement_ErrorFeedback_Params params;
	params.ErrMsg = ErrMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.ASC_ErrorFeedback
// (Final, Defined, Public)
// Parameters:
// struct FString                 ErrMsg                         (Parm, NeedCtorLink)

void UTgGfxFriendManagement::ASC_ErrorFeedback(const struct FString& ErrMsg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.ASC_ErrorFeedback"));

	UTgGfxFriendManagement_ASC_ErrorFeedback_Params params;
	params.ErrMsg = ErrMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_Resize
// (Native, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxFriendManagement::USC_Resize(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_Resize"));

	UTgGfxFriendManagement_USC_Resize_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_ToggleDND
// (Native, Public)

void UTgGfxFriendManagement::USC_ToggleDND()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_ToggleDND"));

	UTgGfxFriendManagement_USC_ToggleDND_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage
// (Native, Public)
// Parameters:
// struct FString                 sStatus                        (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_UpdateStatusMessage(const struct FString& sStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage"));

	UTgGfxFriendManagement_USC_UpdateStatusMessage_Params params;
	params.sStatus = sStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_InviteToClan
// (Native, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_InviteToClan(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_InviteToClan"));

	UTgGfxFriendManagement_USC_InviteToClan_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_BlockByString
// (Native, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_BlockByString(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_BlockByString"));

	UTgGfxFriendManagement_USC_BlockByString_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString
// (Native, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_InviteFriendByString(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString"));

	UTgGfxFriendManagement_USC_InviteFriendByString_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)
// struct FString                 sPlayerNote                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_AddPlayerNote(int nPlayerId, const struct FString& sPlayerNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote"));

	UTgGfxFriendManagement_USC_AddPlayerNote_Params params;
	params.nPlayerId = nPlayerId;
	params.sPlayerNote = sPlayerNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_RemoveBlocked(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked"));

	UTgGfxFriendManagement_USC_RemoveBlocked_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_PartyKick
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_PartyKick(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_PartyKick"));

	UTgGfxFriendManagement_USC_PartyKick_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_PartyInvite
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_PartyInvite(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_PartyInvite"));

	UTgGfxFriendManagement_USC_PartyInvite_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_WatchFriend
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_WatchFriend(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_WatchFriend"));

	UTgGfxFriendManagement_USC_WatchFriend_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_SpectatePlayer(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer"));

	UTgGfxFriendManagement_USC_SpectatePlayer_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan
// (Native, Public)

void UTgGfxFriendManagement::USC_ViewPlayerClan()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan"));

	UTgGfxFriendManagement_USC_ViewPlayerClan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile
// (Native, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_ViewPlayerProfile(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile"));

	UTgGfxFriendManagement_USC_ViewPlayerProfile_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests
// (Native, Public)

void UTgGfxFriendManagement::USC_CancelAllFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests"));

	UTgGfxFriendManagement_USC_CancelAllFriendRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_CancelFriendRequest(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest"));

	UTgGfxFriendManagement_USC_CancelFriendRequest_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests
// (Native, Public)

void UTgGfxFriendManagement::USC_AcceptAllFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests"));

	UTgGfxFriendManagement_USC_AcceptAllFriendRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_AcceptFriendRequest(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest"));

	UTgGfxFriendManagement_USC_AcceptFriendRequest_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite
// (Native, Public)
// Parameters:
// int                            nClanId                        (Parm)

void UTgGfxFriendManagement::USC_CancelClanInvite(int nClanId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite"));

	UTgGfxFriendManagement_USC_CancelClanInvite_Params params;
	params.nClanId = nClanId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite
// (Native, Public)
// Parameters:
// int                            nClanId                        (Parm)

void UTgGfxFriendManagement::USC_AcceptClanInvite(int nClanId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite"));

	UTgGfxFriendManagement_USC_AcceptClanInvite_Params params;
	params.nClanId = nClanId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelInvite
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_CancelInvite(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelInvite"));

	UTgGfxFriendManagement_USC_CancelInvite_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_InviteFriend
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_InviteFriend(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_InviteFriend"));

	UTgGfxFriendManagement_USC_InviteFriend_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_GetListData
// (Native, Public)
// Parameters:
// int                            nId                            (Parm)

void UTgGfxFriendManagement::USC_GetListData(int nId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_GetListData"));

	UTgGfxFriendManagement_USC_GetListData_Params params;
	params.nId = nId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_SearchByString
// (Native, Public)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_SearchByString(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_SearchByString"));

	UTgGfxFriendManagement_USC_SearchByString_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_MessageFriend
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_MessageFriend(int nPlayerId, const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_MessageFriend"));

	UTgGfxFriendManagement_USC_MessageFriend_Params params;
	params.nPlayerId = nPlayerId;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_RemoveFriend
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_RemoveFriend(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_RemoveFriend"));

	UTgGfxFriendManagement_USC_RemoveFriend_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_GetFriendsData
// (Native, Public)

void UTgGfxFriendManagement::USC_GetFriendsData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_GetFriendsData"));

	UTgGfxFriendManagement_USC_GetFriendsData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_Resize_Delegate
// (Public, Delegate)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxFriendManagement::USC_Resize_Delegate(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_Resize_Delegate"));

	UTgGfxFriendManagement_USC_Resize_Delegate_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_ToggleDND_Delegate
// (Public, Delegate)

void UTgGfxFriendManagement::USC_ToggleDND_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_ToggleDND_Delegate"));

	UTgGfxFriendManagement_USC_ToggleDND_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage_Delegate
// (Public, Delegate)
// Parameters:
// struct FString                 sStatus                        (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_UpdateStatusMessage_Delegate(const struct FString& sStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage_Delegate"));

	UTgGfxFriendManagement_USC_UpdateStatusMessage_Delegate_Params params;
	params.sStatus = sStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_InviteToClan_Delegate
// (Public, Delegate)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_InviteToClan_Delegate(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_InviteToClan_Delegate"));

	UTgGfxFriendManagement_USC_InviteToClan_Delegate_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_BlockByString_Delegate
// (Public, Delegate)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_BlockByString_Delegate(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_BlockByString_Delegate"));

	UTgGfxFriendManagement_USC_BlockByString_Delegate_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString_Delegate
// (Public, Delegate)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_InviteFriendByString_Delegate(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString_Delegate"));

	UTgGfxFriendManagement_USC_InviteFriendByString_Delegate_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)
// struct FString                 sPlayerNote                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_AddPlayerNote_Delegate(int nPlayerId, const struct FString& sPlayerNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote_Delegate"));

	UTgGfxFriendManagement_USC_AddPlayerNote_Delegate_Params params;
	params.nPlayerId = nPlayerId;
	params.sPlayerNote = sPlayerNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_RemoveBlocked_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked_Delegate"));

	UTgGfxFriendManagement_USC_RemoveBlocked_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_PartyKick_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_PartyKick_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_PartyKick_Delegate"));

	UTgGfxFriendManagement_USC_PartyKick_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_PartyInvite_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_PartyInvite_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_PartyInvite_Delegate"));

	UTgGfxFriendManagement_USC_PartyInvite_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_WatchFriend_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_WatchFriend_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_WatchFriend_Delegate"));

	UTgGfxFriendManagement_USC_WatchFriend_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_SpectatePlayer_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer_Delegate"));

	UTgGfxFriendManagement_USC_SpectatePlayer_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan_Delegate
// (Public, Delegate)

void UTgGfxFriendManagement::USC_ViewPlayerClan_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan_Delegate"));

	UTgGfxFriendManagement_USC_ViewPlayerClan_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile_Delegate
// (Public, Delegate)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_ViewPlayerProfile_Delegate(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile_Delegate"));

	UTgGfxFriendManagement_USC_ViewPlayerProfile_Delegate_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests_Delegate
// (Public, Delegate)

void UTgGfxFriendManagement::USC_CancelAllFriendRequests_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests_Delegate"));

	UTgGfxFriendManagement_USC_CancelAllFriendRequests_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_CancelFriendRequest_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest_Delegate"));

	UTgGfxFriendManagement_USC_CancelFriendRequest_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests_Delegate
// (Public, Delegate)

void UTgGfxFriendManagement::USC_AcceptAllFriendRequests_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests_Delegate"));

	UTgGfxFriendManagement_USC_AcceptAllFriendRequests_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_AcceptFriendRequest_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest_Delegate"));

	UTgGfxFriendManagement_USC_AcceptFriendRequest_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite_Delegate
// (Public, Delegate)
// Parameters:
// int                            nClanId                        (Parm)

void UTgGfxFriendManagement::USC_CancelClanInvite_Delegate(int nClanId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite_Delegate"));

	UTgGfxFriendManagement_USC_CancelClanInvite_Delegate_Params params;
	params.nClanId = nClanId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite_Delegate
// (Public, Delegate)
// Parameters:
// int                            nClanId                        (Parm)

void UTgGfxFriendManagement::USC_AcceptClanInvite_Delegate(int nClanId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite_Delegate"));

	UTgGfxFriendManagement_USC_AcceptClanInvite_Delegate_Params params;
	params.nClanId = nClanId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_CancelInvite_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_CancelInvite_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_CancelInvite_Delegate"));

	UTgGfxFriendManagement_USC_CancelInvite_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_InviteFriend_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_InviteFriend_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_InviteFriend_Delegate"));

	UTgGfxFriendManagement_USC_InviteFriend_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_GetListData_Delegate
// (Public, Delegate)
// Parameters:
// int                            nId                            (Parm)

void UTgGfxFriendManagement::USC_GetListData_Delegate(int nId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_GetListData_Delegate"));

	UTgGfxFriendManagement_USC_GetListData_Delegate_Params params;
	params.nId = nId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_SearchByString_Delegate
// (Public, Delegate)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_SearchByString_Delegate(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_SearchByString_Delegate"));

	UTgGfxFriendManagement_USC_SearchByString_Delegate_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_MessageFriend_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxFriendManagement::USC_MessageFriend_Delegate(int nPlayerId, const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_MessageFriend_Delegate"));

	UTgGfxFriendManagement_USC_MessageFriend_Delegate_Params params;
	params.nPlayerId = nPlayerId;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_RemoveFriend_Delegate
// (Public, Delegate)
// Parameters:
// int                            nPlayerId                      (Parm)

void UTgGfxFriendManagement::USC_RemoveFriend_Delegate(int nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_RemoveFriend_Delegate"));

	UTgGfxFriendManagement_USC_RemoveFriend_Delegate_Params params;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFriendManagement.USC_GetFriendsData_Delegate
// (Public, Delegate)

void UTgGfxFriendManagement::USC_GetFriendsData_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxFriendManagement.USC_GetFriendsData_Delegate"));

	UTgGfxFriendManagement_USC_GetFriendsData_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgRewardCenterManager.Initialize
// (Native, Public)
// Parameters:
// class UUIGameMoviePlayer*      pMoviePlayer                   (Parm)

void UTgRewardCenterManager::Initialize(class UUIGameMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgRewardCenterManager.Initialize"));

	UTgRewardCenterManager_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgStreamManager.GetFeatureDescription
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            Count                          (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgStreamManager::GetFeatureDescription(int Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetFeatureDescription"));

	UTgStreamManager_GetFeatureDescription_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.GetFeatureName
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            Count                          (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgStreamManager::GetFeatureName(int Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetFeatureName"));

	UTgStreamManager_GetFeatureName_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.HaveFeature
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::HaveFeature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.HaveFeature"));

	UTgStreamManager_HaveFeature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.IsLiveAtIndex
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::IsLiveAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.IsLiveAtIndex"));

	UTgStreamManager_IsLiveAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.GetDescriptionAtIndex
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgStreamManager::GetDescriptionAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetDescriptionAtIndex"));

	UTgStreamManager_GetDescriptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.GetViewersAtIndex
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgStreamManager::GetViewersAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetViewersAtIndex"));

	UTgStreamManager_GetViewersAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.GetTitleAtIndex
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgStreamManager::GetTitleAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetTitleAtIndex"));

	UTgStreamManager_GetTitleAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.IsStream
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::IsStream(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.IsStream"));

	UTgStreamManager_IsStream_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.GetTypeCountWatching
// (Defined, Public)
// Parameters:
// TEnumAsByte<ESTREAMTYPE>       Type                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgStreamManager::GetTypeCountWatching(TEnumAsByte<ESTREAMTYPE> Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetTypeCountWatching"));

	UTgStreamManager_GetTypeCountWatching_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.GetTypeCount
// (Defined, Public)
// Parameters:
// TEnumAsByte<ESTREAMTYPE>       Type                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgStreamManager::GetTypeCount(TEnumAsByte<ESTREAMTYPE> Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.GetTypeCount"));

	UTgStreamManager_GetTypeCount_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.LiveSort
// (Defined, Public, Delegate)
// Parameters:
// struct FGameStream             A                              (Parm, NeedCtorLink)
// struct FGameStream             B                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgStreamManager::LiveSort(const struct FGameStream& A, const struct FGameStream& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.LiveSort"));

	UTgStreamManager_LiveSort_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.FeaturedSort
// (Defined, Public, Delegate)
// Parameters:
// struct FGameStream             A                              (Parm, NeedCtorLink)
// struct FGameStream             B                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgStreamManager::FeaturedSort(const struct FGameStream& A, const struct FGameStream& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.FeaturedSort"));

	UTgStreamManager_FeaturedSort_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.ViewerSort
// (Defined, Public, Delegate)
// Parameters:
// struct FGameStream             A                              (Parm, NeedCtorLink)
// struct FGameStream             B                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgStreamManager::ViewerSort(const struct FGameStream& A, const struct FGameStream& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.ViewerSort"));

	UTgStreamManager_ViewerSort_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.ResolveChannelName
// (Defined, Event, Public)
// Parameters:
// struct FString                 sChannel                       (Parm, NeedCtorLink)

void UTgStreamManager::ResolveChannelName(const struct FString& sChannel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.ResolveChannelName"));

	UTgStreamManager_ResolveChannelName_Params params;
	params.sChannel = sChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgStreamManager.CompleteUpdate
// (Event, Public)

void UTgStreamManager::CompleteUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.CompleteUpdate"));

	UTgStreamManager_CompleteUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgStreamManager.ViewStreamIndex
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            surfaceId                      (Parm)
// int                            Index                          (Parm)
// bool                           external                       (OptionalParm, Parm)
// float                          X                              (OptionalParm, Parm)
// float                          Y                              (OptionalParm, Parm)
// float                          Width                          (OptionalParm, Parm)
// float                          Height                         (OptionalParm, Parm)
// float                          widthReal                      (OptionalParm, Parm)
// float                          heightReal                     (OptionalParm, Parm)
// bool                           joinChat                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::ViewStreamIndex(int surfaceId, int Index, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal, bool joinChat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.ViewStreamIndex"));

	UTgStreamManager_ViewStreamIndex_Params params;
	params.surfaceId = surfaceId;
	params.Index = Index;
	params.external = external;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;
	params.joinChat = joinChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.HasSpecialStreams
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::HasSpecialStreams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.HasSpecialStreams"));

	UTgStreamManager_HasSpecialStreams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.OpenPlayerStream
// (Native, Public)
// Parameters:
// int                            nPlayerId                      (Parm)
// bool                           external                       (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::OpenPlayerStream(int nPlayerId, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.OpenPlayerStream"));

	UTgStreamManager_OpenPlayerStream_Params params;
	params.nPlayerId = nPlayerId;
	params.external = external;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.OpenStream
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            surfaceId                      (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           external                       (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// bool                           joinChat                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::OpenStream(int surfaceId, const struct FString& URL, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal, bool joinChat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.OpenStream"));

	UTgStreamManager_OpenStream_Params params;
	params.surfaceId = surfaceId;
	params.URL = URL;
	params.external = external;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;
	params.joinChat = joinChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgStreamManager.LoadStreams
// (Native, Public)

void UTgStreamManager::LoadStreams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgStreamManager.LoadStreams"));

	UTgStreamManager_LoadStreams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.IsPaused
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgSynchronizedTimer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSynchronizedTimer.IsPaused"));

	UTgSynchronizedTimer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSynchronizedTimer.IsRunning
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgSynchronizedTimer::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSynchronizedTimer.IsRunning"));

	UTgSynchronizedTimer_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSynchronizedTimer.EventCallback
// (Native, Public)
// Parameters:
// int                            nTimerId                       (Parm)
// TEnumAsByte<ETGT_EVENT>        eEvent                         (Parm)

void UTgSynchronizedTimer::EventCallback(int nTimerId, TEnumAsByte<ETGT_EVENT> eEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSynchronizedTimer.EventCallback"));

	UTgSynchronizedTimer_EventCallback_Params params;
	params.nTimerId = nTimerId;
	params.eEvent = eEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.ExpireTimer
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bFromCallback                  (OptionalParm, Parm)

void UTgSynchronizedTimer::ExpireTimer(bool bFromCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSynchronizedTimer.ExpireTimer"));

	UTgSynchronizedTimer_ExpireTimer_Params params;
	params.bFromCallback = bFromCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.UpdateTimer
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          fElapsed                       (Parm)
// float                          fTotal                         (Parm)
// bool                           bPaused                        (OptionalParm, Parm)
// bool                           bFromCallback                  (OptionalParm, Parm)

void UTgSynchronizedTimer::UpdateTimer(float fElapsed, float fTotal, bool bPaused, bool bFromCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSynchronizedTimer.UpdateTimer"));

	UTgSynchronizedTimer_UpdateTimer_Params params;
	params.fElapsed = fElapsed;
	params.fTotal = fTotal;
	params.bPaused = bPaused;
	params.bFromCallback = bFromCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.StartTimer
// (Native, Public)
// Parameters:
// float                          fSeconds                       (Parm)

void UTgSynchronizedTimer::StartTimer(float fSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSynchronizedTimer.StartTimer"));

	UTgSynchronizedTimer_StartTimer_Params params;
	params.fSeconds = fSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIDataShop.GetMarketplaceProductsByType
// (Defined, Event, Public, HasOutParms)
// Parameters:
// class UUIGameMoviePlayer*      pMoviePlayer                   (Parm)
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)
// TArray<struct FMarketplaceProductDetails> AvailableProducts              (Parm, OutParm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UUIDataShop::GetMarketplaceProductsByType(class UUIGameMoviePlayer* pMoviePlayer, TEnumAsByte<EMediaItemType> MediaType, TArray<struct FMarketplaceProductDetails>* AvailableProducts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataShop.GetMarketplaceProductsByType"));

	UUIDataShop_GetMarketplaceProductsByType_Params params;
	params.pMoviePlayer = pMoviePlayer;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableProducts != nullptr)
		*AvailableProducts = params.AvailableProducts;

	return params.ReturnValue;
}


// Function TgClient.UIDataShop.StoreDLCItemData
// (Native, Public)

void UUIDataShop::StoreDLCItemData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataShop.StoreDLCItemData"));

	UUIDataShop_StoreDLCItemData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudSpectator.SendGraphData
// (Final, Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UUIHudSpectator::SendGraphData(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudSpectator.SendGraphData"));

	UUIHudSpectator_SendGraphData_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudSpectator.UpdateGraph
// (Exec, Native, Public)

void UUIHudSpectator::UpdateGraph()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudSpectator.UpdateGraph"));

	UUIHudSpectator_UpdateGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudSpectator.Initialize
// (Native, Public)
// Parameters:
// class UUIGameMoviePlayer*      pParentMovie                   (Parm)

void UUIHudSpectator::Initialize(class UUIGameMoviePlayer* pParentMovie)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudSpectator.Initialize"));

	UUIHudSpectator_Initialize_Params params;
	params.pParentMovie = pParentMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.SetMarketplaceVisibility
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           Visible                        (Parm)
// unsigned char                  IconPosition                   (OptionalParm, Parm)

void UUIMoviePlayer::SetMarketplaceVisibility(bool Visible, unsigned char IconPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.SetMarketplaceVisibility"));

	UUIMoviePlayer_SetMarketplaceVisibility_Params params;
	params.Visible = Visible;
	params.IconPosition = IconPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_ClipboardCopy
// (Defined, Exec, Public)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UUIMoviePlayer::usc_ClipboardCopy(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_ClipboardCopy"));

	UUIMoviePlayer_usc_ClipboardCopy_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_ClipboardPaste
// (Defined, Exec, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::usc_ClipboardPaste()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_ClipboardPaste"));

	UUIMoviePlayer_usc_ClipboardPaste_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.InitOSSRef
// (Defined, Public)

void UUIMoviePlayer::InitOSSRef()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.InitOSSRef"));

	UUIMoviePlayer_InitOSSRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.Init
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UUIMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.Init"));

	UUIMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_IME_Exists
// (Exec, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIMoviePlayer::usc_IME_Exists()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_IME_Exists"));

	UUIMoviePlayer_usc_IME_Exists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.usc_IME_SetEnabled
// (Exec, Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIMoviePlayer::usc_IME_SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_IME_SetEnabled"));

	UUIMoviePlayer_usc_IME_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.usc_TranslateMsg
// (Exec, Native, Public)
// Parameters:
// struct FString                 Identifier                     (Parm, NeedCtorLink)
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::usc_TranslateMsg(const struct FString& Identifier, const struct FString& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_TranslateMsg"));

	UUIMoviePlayer_usc_TranslateMsg_Params params;
	params.Identifier = Identifier;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.usc_TranslateMsgId
// (Exec, Native, Public)
// Parameters:
// int                            nId                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::usc_TranslateMsgId(int nId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_TranslateMsgId"));

	UUIMoviePlayer_usc_TranslateMsgId_Params params;
	params.nId = nId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.ShowTransitionScene
// (Exec, Native, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UUIMoviePlayer::ShowTransitionScene(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.ShowTransitionScene"));

	UUIMoviePlayer_ShowTransitionScene_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_toggle_key_capture
// (Native, Public)
// Parameters:
// bool                           bCapture                       (Parm)

void UUIMoviePlayer::usc_toggle_key_capture(bool bCapture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_toggle_key_capture"));

	UUIMoviePlayer_usc_toggle_key_capture_Params params;
	params.bCapture = bCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_toggle_cursor
// (Native, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UUIMoviePlayer::usc_toggle_cursor(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_toggle_cursor"));

	UUIMoviePlayer_usc_toggle_cursor_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_Console_Command
// (Native, Public)
// Parameters:
// struct FString                 Cmd                            (Parm, NeedCtorLink)

void UUIMoviePlayer::usc_Console_Command(const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_Console_Command"));

	UUIMoviePlayer_usc_Console_Command_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_Data_Handler_Created
// (Native, Public)

void UUIMoviePlayer::usc_Data_Handler_Created()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.usc_Data_Handler_Created"));

	UUIMoviePlayer_usc_Data_Handler_Created_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.QuitGame
// (Native, Public)

void UUIMoviePlayer::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.QuitGame"));

	UUIMoviePlayer_QuitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.UnregisterEngineCallbacks
// (Native, Public)

void UUIMoviePlayer::UnregisterEngineCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.UnregisterEngineCallbacks"));

	UUIMoviePlayer_UnregisterEngineCallbacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.RegisterEngineCallbacks
// (Native, Public)

void UUIMoviePlayer::RegisterEngineCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.RegisterEngineCallbacks"));

	UUIMoviePlayer_RegisterEngineCallbacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.GetTranslatedKeyBind
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// int                            nAlternate                     (OptionalParm, Parm)
// bool                           bLocalizeKB                    (OptionalParm, Parm)
// bool                           bLocalizeMouse                 (OptionalParm, Parm)
// bool                           bLocalizeGamepad               (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::GetTranslatedKeyBind(const struct FString& Command, int nAlternate, bool bLocalizeKB, bool bLocalizeMouse, bool bLocalizeGamepad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.GetTranslatedKeyBind"));

	UUIMoviePlayer_GetTranslatedKeyBind_Params params;
	params.Command = Command;
	params.nAlternate = nAlternate;
	params.bLocalizeKB = bLocalizeKB;
	params.bLocalizeMouse = bLocalizeMouse;
	params.bLocalizeGamepad = bLocalizeGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.UpdateViewportForSafeAreas
// (Native, Public)

void UUIMoviePlayer::UpdateViewportForSafeAreas()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.UpdateViewportForSafeAreas"));

	UUIMoviePlayer_UpdateViewportForSafeAreas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.NativeTick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUIMoviePlayer::NativeTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.NativeTick"));

	UUIMoviePlayer_NativeTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.InitializeDataHandler
// (Native, Public)

void UUIMoviePlayer::InitializeDataHandler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.InitializeDataHandler"));

	UUIMoviePlayer_InitializeDataHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.PostInit
// (Native, Public)

void UUIMoviePlayer::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.PostInit"));

	UUIMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.OnClose
// (Native, Event, Public)

void UUIMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.OnClose"));

	UUIMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.GetPlayerOwner
// (Native, Public)
// Parameters:
// class ATgPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgPlayerController* UUIMoviePlayer::GetPlayerOwner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.GetPlayerOwner"));

	UUIMoviePlayer_GetPlayerOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.GetHUD
// (Native, Public)
// Parameters:
// class ATgClientHUD*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgClientHUD* UUIMoviePlayer::GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIMoviePlayer.GetHUD"));

	UUIMoviePlayer_GetHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDevMenuMoviePlayer.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDevMenuMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.FilterButtonInput"));

	UTgDevMenuMoviePlayer_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDevMenuMoviePlayer.OnClose
// (Defined, Event, Public)

void UTgDevMenuMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.OnClose"));

	UTgDevMenuMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.PostInit
// (Defined, Public)

void UTgDevMenuMoviePlayer::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.PostInit"));

	UTgDevMenuMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.usc_FillCommands
// (Defined, Public)
// Parameters:
// struct FString                 MenuName                       (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::usc_FillCommands(const struct FString& MenuName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.usc_FillCommands"));

	UTgDevMenuMoviePlayer_usc_FillCommands_Params params;
	params.MenuName = MenuName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.AddSubMenu
// (Native, Public)
// Parameters:
// struct FString                 Section                        (Parm, NeedCtorLink)
// struct FString                 submenuname                    (Parm, NeedCtorLink)
// struct FString                 DisplayName                    (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::AddSubMenu(const struct FString& Section, const struct FString& submenuname, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.AddSubMenu"));

	UTgDevMenuMoviePlayer_AddSubMenu_Params params;
	params.Section = Section;
	params.submenuname = submenuname;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.AddCommand
// (Native, Public)
// Parameters:
// struct FString                 Section                        (Parm, NeedCtorLink)
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 DisplayName                    (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::AddCommand(const struct FString& Section, const struct FString& Command, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.AddCommand"));

	UTgDevMenuMoviePlayer_AddCommand_Params params;
	params.Section = Section;
	params.Command = Command;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.FillSubMenuCommands
// (Native, Public)
// Parameters:
// struct FString                 submenuname                    (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::FillSubMenuCommands(const struct FString& submenuname)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.FillSubMenuCommands"));

	UTgDevMenuMoviePlayer_FillSubMenuCommands_Params params;
	params.submenuname = submenuname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.FillMenuCommands
// (Native, Public)

void UTgDevMenuMoviePlayer::FillMenuCommands()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDevMenuMoviePlayer.FillMenuCommands"));

	UTgDevMenuMoviePlayer_FillMenuCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.OnClose
// (Defined, Event, Public)

void UUIGAPeachStartup::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGAPeachStartup.OnClose"));

	UUIGAPeachStartup_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.PostInit
// (Defined, Public)

void UUIGAPeachStartup::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGAPeachStartup.PostInit"));

	UUIGAPeachStartup_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.UpdateViewportForSafeAreas
// (Native, Public)

void UUIGAPeachStartup::UpdateViewportForSafeAreas()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGAPeachStartup.UpdateViewportForSafeAreas"));

	UUIGAPeachStartup_UpdateViewportForSafeAreas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIData_DLCItem.GetInventoryItems
// (Defined, Event, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> InventoryItems                 (Parm, OutParm, NeedCtorLink)

void UUIData_DLCItem::STATIC_GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIData_DLCItem.GetInventoryItems"));

	UUIData_DLCItem_GetInventoryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryItems != nullptr)
		*InventoryItems = params.InventoryItems;
}


// Function TgClient.UIData_RealMoneyItem.GetInventoryItems
// (Defined, Event, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> InventoryItems                 (Parm, OutParm, NeedCtorLink)

void UUIData_RealMoneyItem::STATIC_GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIData_RealMoneyItem.GetInventoryItems"));

	UUIData_RealMoneyItem_GetInventoryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryItems != nullptr)
		*InventoryItems = params.InventoryItems;
}


// Function TgClient.UIDataItem.OnTeamModelUpdated
// (Native, Public)

void UUIDataItem::OnTeamModelUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataItem.OnTeamModelUpdated"));

	UUIDataItem_OnTeamModelUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIDataGoalsManager.GetDailyQuestStreakCount
// (Native, Public)
// Parameters:
// struct Fdword                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct Fdword UUIDataGoalsManager::GetDailyQuestStreakCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataGoalsManager.GetDailyQuestStreakCount"));

	UUIDataGoalsManager_GetDailyQuestStreakCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoalsManager.GetDailyLoginBonusDay
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataGoalsManager::GetDailyLoginBonusDay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataGoalsManager.GetDailyLoginBonusDay"));

	UUIDataGoalsManager_GetDailyLoginBonusDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoalsManager.GetDailyLoginBonusClaimsAvailable
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataGoalsManager::GetDailyLoginBonusClaimsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataGoalsManager.GetDailyLoginBonusClaimsAvailable"));

	UUIDataGoalsManager_GetDailyLoginBonusClaimsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoalsManager.GetDailyLoginsCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataGoalsManager::GetDailyLoginsCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataGoalsManager.GetDailyLoginsCount"));

	UUIDataGoalsManager_GetDailyLoginsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoalsManager.GetDailyLoginsQuest
// (Native, Public)
// Parameters:
// class UUIData_Quest*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIData_Quest* UUIDataGoalsManager::GetDailyLoginsQuest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataGoalsManager.GetDailyLoginsQuest"));

	UUIDataGoalsManager_GetDailyLoginsQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoalsManager.GetChampionQuest
// (Native, Public)
// Parameters:
// class UUIData_Quest*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIData_Quest* UUIDataGoalsManager::GetChampionQuest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataGoalsManager.GetChampionQuest"));

	UUIDataGoalsManager_GetChampionQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataManager.StoreOfflineData
// (Native, Public)

void UUIDataManager::StoreOfflineData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIDataManager.StoreOfflineData"));

	UUIDataManager_StoreOfflineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBlinder.Draw
// (Native, Public)
// Parameters:
// class UCanvas*                 DestinationCanvas              (Parm)
// float                          BlindnessFactor                (Parm)

void UTgBlinder::Draw(class UCanvas* DestinationCanvas, float BlindnessFactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgBlinder.Draw"));

	UTgBlinder_Draw_Params params;
	params.DestinationCanvas = DestinationCanvas;
	params.BlindnessFactor = BlindnessFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.AddNamedAreas
// (Defined, Event, Public)

void ATgGameHUD::AddNamedAreas()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.AddNamedAreas"));

	ATgGameHUD_AddNamedAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PlayDeviceFailResponse
// (Defined, Public)
// Parameters:
// TEnumAsByte<EDeviceFailType>   failType                       (Parm)
// bool                           IsAbility                      (Parm)

void ATgGameHUD::PlayDeviceFailResponse(TEnumAsByte<EDeviceFailType> failType, bool IsAbility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PlayDeviceFailResponse"));

	ATgGameHUD_PlayDeviceFailResponse_Params params;
	params.failType = failType;
	params.IsAbility = IsAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ShowTargetingMap
// (Defined, Public)
// Parameters:
// bool                           bShow                          (Parm)

void ATgGameHUD::ShowTargetingMap(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ShowTargetingMap"));

	ATgGameHUD_ShowTargetingMap_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.HoverMap
// (Defined, Exec, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// struct FString                 MapName                        (Parm, NeedCtorLink)

void ATgGameHUD::HoverMap(float X, float Y, const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.HoverMap"));

	ATgGameHUD_HoverMap_Params params;
	params.X = X;
	params.Y = Y;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PingMap
// (Defined, Exec, Public, HasDefaults)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// struct FString                 Type                           (Parm, NeedCtorLink)
// struct FString                 MapName                        (Parm, NeedCtorLink)

void ATgGameHUD::PingMap(float X, float Y, const struct FString& Type, const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PingMap"));

	ATgGameHUD_PingMap_Params params;
	params.X = X;
	params.Y = Y;
	params.Type = Type;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.GetMapByName
// (Defined, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// class UTgMiniMap*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgMiniMap* ATgGameHUD::GetMapByName(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.GetMapByName"));

	ATgGameHUD_GetMapByName_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameHUD.UpdateMMTimer
// (Defined, Exec, Public)
// Parameters:
// float                          fNew                           (Parm)

void ATgGameHUD::UpdateMMTimer(float fNew)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdateMMTimer"));

	ATgGameHUD_UpdateMMTimer_Params params;
	params.fNew = fNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.SetCosmeticWheelVarsMouse
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          fSelectionDelay                (OptionalParm, Parm)
// bool                           bAllowInnerSelection           (OptionalParm, Parm)
// float                          fDeselectionDelay              (OptionalParm, Parm)

void ATgGameHUD::SetCosmeticWheelVarsMouse(float fSelectionDelay, bool bAllowInnerSelection, float fDeselectionDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.SetCosmeticWheelVarsMouse"));

	ATgGameHUD_SetCosmeticWheelVarsMouse_Params params;
	params.fSelectionDelay = fSelectionDelay;
	params.bAllowInnerSelection = bAllowInnerSelection;
	params.fDeselectionDelay = fDeselectionDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.SetCosmeticWheelVarsGamepad
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          fSelectionDelay                (OptionalParm, Parm)
// bool                           bAllowInnerSelection           (OptionalParm, Parm)
// float                          fDeselectionDelay              (OptionalParm, Parm)

void ATgGameHUD::SetCosmeticWheelVarsGamepad(float fSelectionDelay, bool bAllowInnerSelection, float fDeselectionDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.SetCosmeticWheelVarsGamepad"));

	ATgGameHUD_SetCosmeticWheelVarsGamepad_Params params;
	params.fSelectionDelay = fSelectionDelay;
	params.bAllowInnerSelection = bAllowInnerSelection;
	params.fDeselectionDelay = fDeselectionDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.DrawMiniMap
// (Defined, Simulated, Public)
// Parameters:
// class UCanvas*                 theCanvas                      (Parm)

void ATgGameHUD::DrawMiniMap(class UCanvas* theCanvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.DrawMiniMap"));

	ATgGameHUD_DrawMiniMap_Params params;
	params.theCanvas = theCanvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PreDemoRewind
// (Defined, Simulated, Event, Public)

void ATgGameHUD::PreDemoRewind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PreDemoRewind"));

	ATgGameHUD_PreDemoRewind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostRender
// (Defined, Event, Public)

void ATgGameHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PostRender"));

	ATgGameHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ATgGameHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PostBeginPlay"));

	ATgGameHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UnblockLeavingMatch
// (Native, Public)

void ATgGameHUD::UnblockLeavingMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UnblockLeavingMatch"));

	ATgGameHUD_UnblockLeavingMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.AddNamedArea
// (Native, Public)
// Parameters:
// class ATgNamedPOIActor*        pPOI                           (Parm)
// int                            nCount                         (Parm)

void ATgGameHUD::AddNamedArea(class ATgNamedPOIActor* pPOI, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.AddNamedArea"));

	ATgGameHUD_AddNamedArea_Params params;
	params.pPOI = pPOI;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PrecacheSpray
// (Exec, Native, Public)
// Parameters:
// int                            nSprayId                       (Parm)

void ATgGameHUD::PrecacheSpray(int nSprayId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PrecacheSpray"));

	ATgGameHUD_PrecacheSpray_Params params;
	params.nSprayId = nSprayId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PrecacheMountSkin
// (Exec, Native, Public)
// Parameters:
// int                            nMountSkinId                   (Parm)

void ATgGameHUD::PrecacheMountSkin(int nMountSkinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PrecacheMountSkin"));

	ATgGameHUD_PrecacheMountSkin_Params params;
	params.nMountSkinId = nMountSkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PrecacheVoicePack
// (Exec, Native, Public)
// Parameters:
// int                            nVoicePackId                   (Parm)

void ATgGameHUD::PrecacheVoicePack(int nVoicePackId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PrecacheVoicePack"));

	ATgGameHUD_PrecacheVoicePack_Params params;
	params.nVoicePackId = nVoicePackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.CleanupPotGClassModel
// (Exec, Native, Public)

void ATgGameHUD::CleanupPotGClassModel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.CleanupPotGClassModel"));

	ATgGameHUD_CleanupPotGClassModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ChangePotGCameraTransform
// (Exec, Native, Public)
// Parameters:
// float                          fXOffset                       (Parm)
// float                          fYOffset                       (Parm)
// float                          fZOffset                       (Parm)
// float                          fYawOffset                     (Parm)
// float                          fPitchOffset                   (Parm)
// float                          fRollOffset                    (Parm)

void ATgGameHUD::ChangePotGCameraTransform(float fXOffset, float fYOffset, float fZOffset, float fYawOffset, float fPitchOffset, float fRollOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ChangePotGCameraTransform"));

	ATgGameHUD_ChangePotGCameraTransform_Params params;
	params.fXOffset = fXOffset;
	params.fYOffset = fYOffset;
	params.fZOffset = fZOffset;
	params.fYawOffset = fYawOffset;
	params.fPitchOffset = fPitchOffset;
	params.fRollOffset = fRollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.EnablePotGCamera
// (Exec, Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void ATgGameHUD::EnablePotGCamera(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.EnablePotGCamera"));

	ATgGameHUD_EnablePotGCamera_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ChangePotGClassModel
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nIndex                         (Parm)
// int                            nClassId                       (Parm)
// int                            nSkinId                        (Parm)
// int                            nDeviceId                      (Parm)
// int                            nDeviceSkinId                  (Parm)
// TEnumAsByte<ELobbyAnimPose>    pose                           (Parm)
// bool                           bAsync                         (OptionalParm, Parm)

void ATgGameHUD::ChangePotGClassModel(int nIndex, int nClassId, int nSkinId, int nDeviceId, int nDeviceSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ChangePotGClassModel"));

	ATgGameHUD_ChangePotGClassModel_Params params;
	params.nIndex = nIndex;
	params.nClassId = nClassId;
	params.nSkinId = nSkinId;
	params.nDeviceId = nDeviceId;
	params.nDeviceSkinId = nDeviceSkinId;
	params.pose = pose;
	params.bAsync = bAsync;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ToggleDeathRecap
// (Exec, Native, Public)

void ATgGameHUD::ToggleDeathRecap()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ToggleDeathRecap"));

	ATgGameHUD_ToggleDeathRecap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ToggleScoreBoard
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bAcceptsInput                  (OptionalParm, Parm)

void ATgGameHUD::ToggleScoreBoard(bool bAcceptsInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ToggleScoreBoard"));

	ATgGameHUD_ToggleScoreBoard_Params params;
	params.bAcceptsInput = bAcceptsInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ViewScoreboard
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bShow                          (Parm)
// bool                           bAcceptsInput                  (OptionalParm, Parm)
// class UTgGfxScene*             pScene                         (OptionalParm, Parm)

void ATgGameHUD::ViewScoreboard(bool bShow, bool bAcceptsInput, class UTgGfxScene* pScene)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ViewScoreboard"));

	ATgGameHUD_ViewScoreboard_Params params;
	params.bShow = bShow;
	params.bAcceptsInput = bAcceptsInput;
	params.pScene = pScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ToggleMinimap
// (Exec, Native, Public)

void ATgGameHUD::ToggleMinimap()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ToggleMinimap"));

	ATgGameHUD_ToggleMinimap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ToggleVGS
// (Exec, Native, Public)

void ATgGameHUD::ToggleVGS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ToggleVGS"));

	ATgGameHUD_ToggleVGS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PurchaseCard
// (Exec, Native, Public)
// Parameters:
// int                            nId                            (Parm)

void ATgGameHUD::PurchaseCard(int nId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PurchaseCard"));

	ATgGameHUD_PurchaseCard_Params params;
	params.nId = nId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.OpenDeckMenu
// (Exec, Native, Public)

void ATgGameHUD::OpenDeckMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.OpenDeckMenu"));

	ATgGameHUD_OpenDeckMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.OpenBurnMenu
// (Exec, Native, Public)

void ATgGameHUD::OpenBurnMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.OpenBurnMenu"));

	ATgGameHUD_OpenBurnMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ToggleCosmeticWheel
// (Exec, Native, Public)

void ATgGameHUD::ToggleCosmeticWheel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.ToggleCosmeticWheel"));

	ATgGameHUD_ToggleCosmeticWheel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.OpenCosmeticWheel
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bShouldOpen                    (OptionalParm, Parm)

void ATgGameHUD::OpenCosmeticWheel(bool bShouldOpen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.OpenCosmeticWheel"));

	ATgGameHUD_OpenCosmeticWheel_Params params;
	params.bShouldOpen = bShouldOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.OnRoundSetupStarted
// (Native, Public)

void ATgGameHUD::OnRoundSetupStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.OnRoundSetupStarted"));

	ATgGameHUD_OnRoundSetupStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdateRoundSetupTimer
// (Native, Public)
// Parameters:
// float                          SetupTimeRemaining             (Parm)
// float                          TimeStamp                      (Parm)

void ATgGameHUD::UpdateRoundSetupTimer(float SetupTimeRemaining, float TimeStamp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdateRoundSetupTimer"));

	ATgGameHUD_UpdateRoundSetupTimer_Params params;
	params.SetupTimeRemaining = SetupTimeRemaining;
	params.TimeStamp = TimeStamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.EndMission
// (Native, Public)
// Parameters:
// bool                           bPlayerAttacker                (Parm)
// TEnumAsByte<EGAME_WIN_STATE>   finalWinState                  (Parm)

void ATgGameHUD::EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.EndMission"));

	ATgGameHUD_EndMission_Params params;
	params.bPlayerAttacker = bPlayerAttacker;
	params.finalWinState = finalWinState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PingWorldLocation
// (Native, Public)
// Parameters:
// struct FVector                 PingLocation                   (Parm)
// TEnumAsByte<EPING_TYPE>        Type                           (Parm)

void ATgGameHUD::PingWorldLocation(const struct FVector& PingLocation, TEnumAsByte<EPING_TYPE> Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PingWorldLocation"));

	ATgGameHUD_PingWorldLocation_Params params;
	params.PingLocation = PingLocation;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdateReleaseTimeRemaining
// (Native, Public)
// Parameters:
// float                          fTimeRemaining                 (Parm)

void ATgGameHUD::UpdateReleaseTimeRemaining(float fTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdateReleaseTimeRemaining"));

	ATgGameHUD_UpdateReleaseTimeRemaining_Params params;
	params.fTimeRemaining = fTimeRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdatePlayerReady
// (Native, Public)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)

void ATgGameHUD::UpdatePlayerReady(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdatePlayerReady"));

	ATgGameHUD_UpdatePlayerReady_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdatePlayerStatUI
// (Native, Public)
// Parameters:
// class ATgPawn*                 changedPawn                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgGameHUD::UpdatePlayerStatUI(class ATgPawn* changedPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdatePlayerStatUI"));

	ATgGameHUD_UpdatePlayerStatUI_Params params;
	params.changedPawn = changedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameHUD.UpdateHoverTarget
// (Native, Public)

void ATgGameHUD::UpdateHoverTarget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdateHoverTarget"));

	ATgGameHUD_UpdateHoverTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdateDebugDraws
// (Native, Public)

void ATgGameHUD::UpdateDebugDraws()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdateDebugDraws"));

	ATgGameHUD_UpdateDebugDraws_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdateOverlay
// (Native, Public)

void ATgGameHUD::UpdateOverlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.UpdateOverlay"));

	ATgGameHUD_UpdateOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.InitOverlayMoviePlayer
// (Native, Public)

void ATgGameHUD::InitOverlayMoviePlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.InitOverlayMoviePlayer"));

	ATgGameHUD_InitOverlayMoviePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostRenderDebugDraws
// (Native, Public)

void ATgGameHUD::PostRenderDebugDraws()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PostRenderDebugDraws"));

	ATgGameHUD_PostRenderDebugDraws_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.FinishIntro
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgGameHUD::FinishIntro()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.FinishIntro"));

	ATgGameHUD_FinishIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameHUD.PlayIntro
// (Native, Public)

void ATgGameHUD::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameHUD.PlayIntro"));

	ATgGameHUD_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleCursor
// (Defined, Exec, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void ATgSpectatorHUD::ToggleCursor(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.ToggleCursor"));

	ATgSpectatorHUD_ToggleCursor_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ValidateSceneForSpectate
// (Defined, Public)
// Parameters:
// struct FString                 SceneName                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgSpectatorHUD::ValidateSceneForSpectate(const struct FString& SceneName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.ValidateSceneForSpectate"));

	ATgSpectatorHUD_ValidateSceneForSpectate_Params params;
	params.SceneName = SceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSpectatorHUD.ToggleHUD
// (Exec, Native, Public)

void ATgSpectatorHUD::ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.ToggleHUD"));

	ATgSpectatorHUD_ToggleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ATgSpectatorHUD::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.Tick"));

	ATgSpectatorHUD_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SetVisibilityMode
// (Defined, Exec, Public)
// Parameters:
// unsigned char                  Mode                           (Parm)

void ATgSpectatorHUD::SetVisibilityMode(unsigned char Mode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.SetVisibilityMode"));

	ATgSpectatorHUD_SetVisibilityMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
// (Defined, Exec, Public)

void ATgSpectatorHUD::ToggleVisibilityMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.ToggleVisibilityMode"));

	ATgSpectatorHUD_ToggleVisibilityMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
// (Exec, Native, Public)

void ATgSpectatorHUD::ToggleSecretMessage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.ToggleSecretMessage"));

	ATgSpectatorHUD_ToggleSecretMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SetSpectatorStatsMode
// (Exec, Native, Public)
// Parameters:
// int                            nNum                           (Parm)

void ATgSpectatorHUD::SetSpectatorStatsMode(int nNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.SetSpectatorStatsMode"));

	ATgSpectatorHUD_SetSpectatorStatsMode_Params params;
	params.nNum = nNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SetSpectatorTeamMode
// (Exec, Native, Public)
// Parameters:
// int                            nNum                           (Parm)

void ATgSpectatorHUD::SetSpectatorTeamMode(int nNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.SetSpectatorTeamMode"));

	ATgSpectatorHUD_SetSpectatorTeamMode_Params params;
	params.nNum = nNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SetSpectatorSkillsMode
// (Exec, Native, Public)
// Parameters:
// int                            nNum                           (Parm)

void ATgSpectatorHUD::SetSpectatorSkillsMode(int nNum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.SetSpectatorSkillsMode"));

	ATgSpectatorHUD_SetSpectatorSkillsMode_Params params;
	params.nNum = nNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleBans
// (Exec, Native, Public)

void ATgSpectatorHUD::ToggleBans()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.ToggleBans"));

	ATgSpectatorHUD_ToggleBans_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.EndMission
// (Native, Public)
// Parameters:
// bool                           bPlayerAttacker                (Parm)
// TEnumAsByte<EGAME_WIN_STATE>   finalWinState                  (Parm)

void ATgSpectatorHUD::EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.EndMission"));

	ATgSpectatorHUD_EndMission_Params params;
	params.bPlayerAttacker = bPlayerAttacker;
	params.finalWinState = finalWinState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
// (Native, Public)
// Parameters:
// unsigned char                  Mode                           (Parm)

void ATgSpectatorHUD::UpdateSpectatorViewMode(unsigned char Mode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode"));

	ATgSpectatorHUD_UpdateSpectatorViewMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
// (Native, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void ATgSpectatorHUD::UpdateSpectatorViewTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget"));

	ATgSpectatorHUD_UpdateSpectatorViewTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataGroup_Game.NotifyMapChange
// (Native, Public)

void UTgDataGroup_Game::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataGroup_Game.NotifyMapChange"));

	UTgDataGroup_Game_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataGroup_Game.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgDataGroup_Game::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgDataGroup_Game.InitializeData"));

	UTgDataGroup_Game_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_set_cast_mode
// (Native, Public)
// Parameters:
// int                            nCastMode                      (Parm)

void UTgGameDC_Device::usc_set_cast_mode(int nCastMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.usc_set_cast_mode"));

	UTgGameDC_Device_usc_set_cast_mode_Params params;
	params.nCastMode = nCastMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate
// (Public, Delegate)

void UTgGameDC_Device::usc_set_cast_mode_delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate"));

	UTgGameDC_Device_usc_set_cast_mode_delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip
// (Native, Public)
// Parameters:
// int                            nRank                          (Parm)

void UTgGameDC_Device::usc_get_mode_tooltip(int nRank)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.usc_get_mode_tooltip"));

	UTgGameDC_Device_usc_get_mode_tooltip_Params params;
	params.nRank = nRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate
// (Public, Delegate)

void UTgGameDC_Device::usc_get_mode_tooltip_delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate"));

	UTgGameDC_Device_usc_get_mode_tooltip_delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.NotifyMapChange
// (Native, Public)

void UTgGameDC_Device::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.NotifyMapChange"));

	UTgGameDC_Device_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateCastMode
// (Native, Public)

void UTgGameDC_Device::UpdateCastMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdateCastMode"));

	UTgGameDC_Device_UpdateCastMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateInstanceCount
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::UpdateInstanceCount(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdateInstanceCount"));

	UTgGameDC_Device_UpdateInstanceCount_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdatePtsAlloc
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::UpdatePtsAlloc(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdatePtsAlloc"));

	UTgGameDC_Device_UpdatePtsAlloc_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateCooldown
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::UpdateCooldown(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdateCooldown"));

	UTgGameDC_Device_UpdateCooldown_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateCanFire
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::UpdateCanFire(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdateCanFire"));

	UTgGameDC_Device_UpdateCanFire_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateSelected
// (Native, Public)
// Parameters:
// bool                           bSelected                      (Parm)

void UTgGameDC_Device::UpdateSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdateSelected"));

	UTgGameDC_Device_UpdateSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateValues
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::UpdateValues(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.UpdateValues"));

	UTgGameDC_Device_UpdateValues_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.DeviceChangeEvent
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)
// TEnumAsByte<EDeviceChangeEvent> Event                          (Parm)

void UTgGameDC_Device::DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.DeviceChangeEvent"));

	UTgGameDC_Device_DeviceChangeEvent_Params params;
	params.Dev = Dev;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Device::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Device.InitializeData"));

	UTgGameDC_Device_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.SetEmpty
// (Native, Public)
// Parameters:
// TEnumAsByte<ETG_EQUIP_POINT>   eSlot                          (Parm)

void UTgGameDC_DeviceList::SetEmpty(TEnumAsByte<ETG_EQUIP_POINT> eSlot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.SetEmpty"));

	UTgGameDC_DeviceList_SetEmpty_Params params;
	params.eSlot = eSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_DeviceList::UpdatePtsAlloc(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc"));

	UTgGameDC_DeviceList_UpdatePtsAlloc_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.UpdateSelected
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_DeviceList::UpdateSelected(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.UpdateSelected"));

	UTgGameDC_DeviceList_UpdateSelected_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.UpdateDevice
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_DeviceList::UpdateDevice(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.UpdateDevice"));

	UTgGameDC_DeviceList_UpdateDevice_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)
// TEnumAsByte<EDeviceChangeEvent> Event                          (Parm)

void UTgGameDC_DeviceList::DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent"));

	UTgGameDC_DeviceList_DeviceChangeEvent_Params params;
	params.Dev = Dev;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.GetDeviceChunk
// (Native, Public)
// Parameters:
// class ATgDevice*               Dev                            (Parm)
// class UTgGameDC_Device*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgGameDC_Device* UTgGameDC_DeviceList::GetDeviceChunk(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.GetDeviceChunk"));

	UTgGameDC_DeviceList_GetDeviceChunk_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_DeviceList.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_DeviceList::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_DeviceList.InitializeData"));

	UTgGameDC_DeviceList_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Effect.NotifyMapChange
// (Native, Public)

void UTgGameDC_Effect::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Effect.NotifyMapChange"));

	UTgGameDC_Effect_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Effect.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Effect::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Effect.InitializeData"));

	UTgGameDC_Effect_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_EffectList.UpdateEffects
// (Native, Public)
// Parameters:
// class ATgEffectManager*        effectManager                  (Parm)
// int                            indexChanged                   (Parm)

void UTgGameDC_EffectList::UpdateEffects(class ATgEffectManager* effectManager, int indexChanged)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_EffectList.UpdateEffects"));

	UTgGameDC_EffectList_UpdateEffects_Params params;
	params.effectManager = effectManager;
	params.indexChanged = indexChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_EffectList.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_EffectList::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_EffectList.InitializeData"));

	UTgGameDC_EffectList_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.UpdateGameCapturePoint
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)
// int                            Taskforce                      (Parm)

void UTgGameDC_Game::UpdateGameCapturePoint(int Index, int Taskforce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Game.UpdateGameCapturePoint"));

	UTgGameDC_Game_UpdateGameCapturePoint_Params params;
	params.Index = Index;
	params.Taskforce = Taskforce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.UpdateGameClock
// (Native, Public)

void UTgGameDC_Game::UpdateGameClock()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Game.UpdateGameClock"));

	UTgGameDC_Game_UpdateGameClock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.NotifyMapChange
// (Native, Public)

void UTgGameDC_Game::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Game.NotifyMapChange"));

	UTgGameDC_Game_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Game::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Game.InitializeData"));

	UTgGameDC_Game_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.NotifyMapChange
// (Native, Public)

void UTgGameDC_MapEntity::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_MapEntity.NotifyMapChange"));

	UTgGameDC_MapEntity_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.UpdateMapPosition
// (Native, Public)
// Parameters:
// struct FVector                 Location                       (Parm)
// struct FRotator                Rotation                       (Parm)

void UTgGameDC_MapEntity::UpdateMapPosition(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_MapEntity.UpdateMapPosition"));

	UTgGameDC_MapEntity_UpdateMapPosition_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition
// (Native, Public)
// Parameters:
// class AActor*                  gameActor                      (Parm)

void UTgGameDC_MapEntity::UpdateActorMapPosition(class AActor* gameActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition"));

	UTgGameDC_MapEntity_UpdateActorMapPosition_Params params;
	params.gameActor = gameActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_MapEntity::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_MapEntity.InitializeData"));

	UTgGameDC_MapEntity_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate
// (Native, Public)

void UTgGameDC_Player::USC_ForceStatsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate"));

	UTgGameDC_Player_USC_ForceStatsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate
// (Public, Delegate)

void UTgGameDC_Player::USC_ForceStatsUpdate_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate"));

	UTgGameDC_Player_USC_ForceStatsUpdate_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.NotifyMapChange
// (Native, Public)

void UTgGameDC_Player::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.NotifyMapChange"));

	UTgGameDC_Player_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.UpdateItemStoreItems
// (Native, Public)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)

void UTgGameDC_Player::UpdateItemStoreItems(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.UpdateItemStoreItems"));

	UTgGameDC_Player_UpdateItemStoreItems_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.UpdateStats
// (Native, Public)
// Parameters:
// class ATgPawn*                 changedPawn                    (Parm)

void UTgGameDC_Player::UpdateStats(class ATgPawn* changedPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.UpdateStats"));

	UTgGameDC_Player_UpdateStats_Params params;
	params.changedPawn = changedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.UpdatePlayer
// (Native, Public)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)

void UTgGameDC_Player::UpdatePlayer(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.UpdatePlayer"));

	UTgGameDC_Player_UpdatePlayer_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.SetDirty
// (Native, Public)

void UTgGameDC_Player::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.SetDirty"));

	UTgGameDC_Player_SetDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Player::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Player.InitializeData"));

	UTgGameDC_Player_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
// (Native, Public)
// Parameters:
// class UTgGameDC_MapEntity*     entity                         (Parm)

void UTgGameDC_LocalPlayer::UpdateSpectatorViewTarget(class UTgGameDC_MapEntity* entity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget"));

	UTgGameDC_LocalPlayer_UpdateSpectatorViewTarget_Params params;
	params.entity = entity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList
// (Native, Public)
// Parameters:
// TArray<int>                    nItemIds                       (Parm, NeedCtorLink)

void UTgGameDC_LocalPlayer::SetVendorItemList(TArray<int> nItemIds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList"));

	UTgGameDC_LocalPlayer_SetVendorItemList_Params params;
	params.nItemIds = nItemIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_LocalPlayer.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_LocalPlayer::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_LocalPlayer.InitializeData"));

	UTgGameDC_LocalPlayer_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats
// (Native, Public)

void UTgGameDC_PlayerVitals::UpdateCoreStats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats"));

	UTgGameDC_PlayerVitals_UpdateCoreStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone
// (Native, Public)

void UTgGameDC_PlayerVitals::UpdateDamageDone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone"));

	UTgGameDC_PlayerVitals_UpdateDamageDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange
// (Native, Public)

void UTgGameDC_PlayerVitals::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange"));

	UTgGameDC_PlayerVitals_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_PlayerVitals::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_PlayerVitals.InitializeData"));

	UTgGameDC_PlayerVitals_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Tower.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Tower::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Tower.InitializeData"));

	UTgGameDC_Tower_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Target.UpdateTarget
// (Native, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm)
// bool                           bHovered                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameDC_Target::UpdateTarget(class AActor* NewTarget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Target.UpdateTarget"));

	UTgGameDC_Target_UpdateTarget_Params params;
	params.NewTarget = NewTarget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Target.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Target::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Target.InitializeData"));

	UTgGameDC_Target_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.UpdatePlayerSurrender
// (Native, Public)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameDC_Team::UpdatePlayerSurrender(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Team.UpdatePlayerSurrender"));

	UTgGameDC_Team_UpdatePlayerSurrender_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems
// (Native, Public)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameDC_Team::UpdatePlayerItemStoreItems(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems"));

	UTgGameDC_Team_UpdatePlayerItemStoreItems_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Team.UpdatePlayerStat
// (Native, Public)
// Parameters:
// class ATgPawn*                 changedPawn                    (Parm)

void UTgGameDC_Team::UpdatePlayerStat(class ATgPawn* changedPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Team.UpdatePlayerStat"));

	UTgGameDC_Team_UpdatePlayerStat_Params params;
	params.changedPawn = changedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.UpdateMembers
// (Native, Public)
// Parameters:
// class ATgRepInfo_TaskForce*    tfri                           (Parm)

void UTgGameDC_Team::UpdateMembers(class ATgRepInfo_TaskForce* tfri)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Team.UpdateMembers"));

	UTgGameDC_Team_UpdateMembers_Params params;
	params.tfri = tfri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.NotifyMapChange
// (Native, Public)

void UTgGameDC_Team::NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Team.NotifyMapChange"));

	UTgGameDC_Team_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Team::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Team.InitializeData"));

	UTgGameDC_Team_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDataHandler.InitializeDataHandler
// (Native, Public)
// Parameters:
// class UUIMoviePlayer*          mp                             (Parm)

void UTgGameDataHandler::InitializeDataHandler(class UUIMoviePlayer* mp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDataHandler.InitializeDataHandler"));

	UTgGameDataHandler_InitializeDataHandler_Params params;
	params.mp = mp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.TokenReplace
// (Defined, Event, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 sValue                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgGameDC_Chat::TokenReplace(const struct FString& Message, const struct FString& Token, const struct FString& sValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.TokenReplace"));

	UTgGameDC_Chat_TokenReplace_Params params;
	params.Message = Message;
	params.Token = Token;
	params.sValue = sValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Chat.SubmitDeferredMessages
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nChannel                       (OptionalParm, Parm)

void UTgGameDC_Chat::SubmitDeferredMessages(int nChannel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.SubmitDeferredMessages"));

	UTgGameDC_Chat_SubmitDeferredMessages_Params params;
	params.nChannel = nChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayAnnouncerSound
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nMsgId                         (Parm)
// bool                           bForce                         (OptionalParm, Parm)

void UTgGameDC_Chat::PlayAnnouncerSound(int nMsgId, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.PlayAnnouncerSound"));

	UTgGameDC_Chat_PlayAnnouncerSound_Params params;
	params.nMsgId = nMsgId;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayVGSPOTG
// (Native, Public)
// Parameters:
// struct Fdword                  ePref                          (Parm)
// struct Fdword                  dwBotId                        (Parm)
// struct Fdword                  dwSkinId                       (Parm)
// struct FString                 customSuffix                   (Parm, NeedCtorLink)

void UTgGameDC_Chat::PlayVGSPOTG(const struct Fdword& ePref, const struct Fdword& dwBotId, const struct Fdword& dwSkinId, const struct FString& customSuffix)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.PlayVGSPOTG"));

	UTgGameDC_Chat_PlayVGSPOTG_Params params;
	params.ePref = ePref;
	params.dwBotId = dwBotId;
	params.dwSkinId = dwSkinId;
	params.customSuffix = customSuffix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayVGSSound
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nMsgId                         (Parm)
// struct Fdword                  ePref                          (Parm)
// struct Fdword                  dwBotId                        (Parm)
// struct Fdword                  dwSkinId                       (Parm)
// struct FString                 customSuffix                   (Parm, NeedCtorLink)
// int                            nSourcePlayerId                (OptionalParm, Parm)

void UTgGameDC_Chat::PlayVGSSound(int nMsgId, const struct Fdword& ePref, const struct Fdword& dwBotId, const struct Fdword& dwSkinId, const struct FString& customSuffix, int nSourcePlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.PlayVGSSound"));

	UTgGameDC_Chat_PlayVGSSound_Params params;
	params.nMsgId = nMsgId;
	params.ePref = ePref;
	params.dwBotId = dwBotId;
	params.dwSkinId = dwSkinId;
	params.customSuffix = customSuffix;
	params.nSourcePlayerId = nSourcePlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayMessageSound
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nMsgId                         (Parm)
// TEnumAsByte<ETG_CHAT_PRIORITY> ePriority                      (OptionalParm, Parm)

void UTgGameDC_Chat::PlayMessageSound(int nMsgId, TEnumAsByte<ETG_CHAT_PRIORITY> ePriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.PlayMessageSound"));

	UTgGameDC_Chat_PlayMessageSound_Params params;
	params.nMsgId = nMsgId;
	params.ePriority = ePriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddAlert
// (Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTgGameDC_Chat::AddAlert(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.AddAlert"));

	UTgGameDC_Chat_AddAlert_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue
// (Native, Public)

void UTgGameDC_Chat::UpdateMessageSoundQueue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue"));

	UTgGameDC_Chat_UpdateMessageSoundQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.Update
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           bSkipCallback                  (OptionalParm, Parm)

void UTgGameDC_Chat::Update(float DeltaTime, bool bSkipCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.Update"));

	UTgGameDC_Chat_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.bSkipCallback = bSkipCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddPopupMsg
// (Native, Public)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)

void UTgGameDC_Chat::AddPopupMsg(const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.AddPopupMsg"));

	UTgGameDC_Chat_AddPopupMsg_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddCombatMsg
// (Native, Public)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)

void UTgGameDC_Chat::AddCombatMsg(const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.AddCombatMsg"));

	UTgGameDC_Chat_AddCombatMsg_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddLocalChatMsg
// (Native, Public)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)
// struct FString                 senderName                     (Parm, NeedCtorLink)

void UTgGameDC_Chat::AddLocalChatMsg(const struct FString& msg, const struct FString& senderName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.AddLocalChatMsg"));

	UTgGameDC_Chat_AddLocalChatMsg_Params params;
	params.msg = msg;
	params.senderName = senderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddChatMsg
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)
// struct FString                 senderName                     (Parm, NeedCtorLink)
// struct Fdword                  dwSenderId                     (Parm)
// int                            nChannel                       (Parm)
// bool                           bIsFeedback                    (Parm)
// bool                           bIsVGS                         (OptionalParm, Parm)
// int                            nMsgId                         (OptionalParm, Parm)

void UTgGameDC_Chat::AddChatMsg(const struct FString& msg, const struct FString& senderName, const struct Fdword& dwSenderId, int nChannel, bool bIsFeedback, bool bIsVGS, int nMsgId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.AddChatMsg"));

	UTgGameDC_Chat_AddChatMsg_Params params;
	params.msg = msg;
	params.senderName = senderName;
	params.dwSenderId = dwSenderId;
	params.nChannel = nChannel;
	params.bIsFeedback = bIsFeedback;
	params.bIsVGS = bIsVGS;
	params.nMsgId = nMsgId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.InitializeData
// (Native, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Chat::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGameDC_Chat.InitializeData"));

	UTgGameDC_Chat_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.CheckSpectatorState
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgMiniMap::CheckSpectatorState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.CheckSpectatorState"));

	UTgMiniMap_CheckSpectatorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.UpdateMapSize
// (Defined, Simulated, Public)
// Parameters:
// int                            newX                           (Parm)

void UTgMiniMap::UpdateMapSize(int newX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.UpdateMapSize"));

	UTgMiniMap_UpdateMapSize_Params params;
	params.newX = newX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.UpdateMiniMapTexture
// (Defined, Simulated, Public)

void UTgMiniMap::UpdateMiniMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.UpdateMiniMapTexture"));

	UTgMiniMap_UpdateMiniMapTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.CreateMiniMapTexture
// (Defined, Simulated, Public)

void UTgMiniMap::CreateMiniMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.CreateMiniMapTexture"));

	UTgMiniMap_CreateMiniMapTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.Clear
// (Native, Public)

void UTgMiniMap::Clear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.Clear"));

	UTgMiniMap_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.RemoveAllEntities
// (Native, Public)

void UTgMiniMap::RemoveAllEntities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.RemoveAllEntities"));

	UTgMiniMap_RemoveAllEntities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.VerifyMapLocation
// (Native, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgMiniMap::VerifyMapLocation(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.VerifyMapLocation"));

	UTgMiniMap_VerifyMapLocation_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.GetRepInfosForLocation
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 mapLoc                         (Parm)
// TArray<class AReplicationInfo*> repInfos                       (Parm, OutParm, NeedCtorLink)

void UTgMiniMap::GetRepInfosForLocation(const struct FVector& mapLoc, TArray<class AReplicationInfo*>* repInfos)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.GetRepInfosForLocation"));

	UTgMiniMap_GetRepInfosForLocation_Params params;
	params.mapLoc = mapLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (repInfos != nullptr)
		*repInfos = params.repInfos;
}


// Function TgClient.TgMiniMap.WorldToMap
// (Native, Public)
// Parameters:
// struct FVector                 Loc                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UTgMiniMap::WorldToMap(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.WorldToMap"));

	UTgMiniMap_WorldToMap_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.MapToWorld
// (Native, Public)
// Parameters:
// struct FVector                 Loc                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UTgMiniMap::MapToWorld(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.MapToWorld"));

	UTgMiniMap_MapToWorld_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.ClearHover
// (Native, Public)

void UTgMiniMap::ClearHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.ClearHover"));

	UTgMiniMap_ClearHover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.HoverMap
// (Native, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UTgMiniMap::HoverMap(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.HoverMap"));

	UTgMiniMap_HoverMap_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.PingMap
// (Native, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// TEnumAsByte<EPING_TYPE>        Pt                             (Parm)

void UTgMiniMap::PingMap(float X, float Y, TEnumAsByte<EPING_TYPE> Pt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.PingMap"));

	UTgMiniMap_PingMap_Params params;
	params.X = X;
	params.Y = Y;
	params.Pt = Pt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.ShouldRender
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgMiniMap::ShouldRender()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.ShouldRender"));

	UTgMiniMap_ShouldRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.PingWorldLocation
// (Native, Public)
// Parameters:
// struct FVector                 PingLocation                   (Parm)
// TEnumAsByte<EPING_TYPE>        Pt                             (Parm)

void UTgMiniMap::PingWorldLocation(const struct FVector& PingLocation, TEnumAsByte<EPING_TYPE> Pt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.PingWorldLocation"));

	UTgMiniMap_PingWorldLocation_Params params;
	params.PingLocation = PingLocation;
	params.Pt = Pt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.Init
// (Native, Public)
// Parameters:
// class ATgPlayerController*     PC                             (Parm)

void UTgMiniMap::Init(class ATgPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.Init"));

	UTgMiniMap_Init_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.Draw
// (Native, Public)
// Parameters:
// class UCanvas*                 theCanvas                      (Parm)

void UTgMiniMap::Draw(class UCanvas* theCanvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgMiniMap.Draw"));

	UTgMiniMap_Draw_Params params;
	params.theCanvas = theCanvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CheckPermissionForOnlineScene
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// struct FString                 sScene                         (Parm, NeedCtorLink)
// unsigned char                  ControlledId                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> Hint                           (Parm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)

void UUIGameMoviePlayer::CheckPermissionForOnlineScene(const struct FString& sScene, unsigned char ControlledId, TEnumAsByte<EFeaturePrivilegeLevel> Hint, bool bAttemptToResolve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CheckPermissionForOnlineScene"));

	UUIGameMoviePlayer_CheckPermissionForOnlineScene_Params params;
	params.sScene = sScene;
	params.ControlledId = ControlledId;
	params.Hint = Hint;
	params.bAttemptToResolve = bAttemptToResolve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnPermissionForOnlineScene
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void UUIGameMoviePlayer::OnPermissionForOnlineScene(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnPermissionForOnlineScene"));

	UUIGameMoviePlayer_OnPermissionForOnlineScene_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.NativeOpenURL
// (Defined, Event, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::NativeOpenURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.NativeOpenURL"));

	UUIGameMoviePlayer_NativeOpenURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnAccountPickerCompleteForLogin
// (Defined, Public)
// Parameters:
// bool                           bForceLogin                    (Parm)

void UUIGameMoviePlayer::OnAccountPickerCompleteForLogin(bool bForceLogin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnAccountPickerCompleteForLogin"));

	UUIGameMoviePlayer_OnAccountPickerCompleteForLogin_Params params;
	params.bForceLogin = bForceLogin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.IsAccountPickerOpen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::IsAccountPickerOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.IsAccountPickerOpen"));

	UUIGameMoviePlayer_IsAccountPickerOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.ReadOnlinePlayerData
// (Defined, Event, Public)
// Parameters:
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)

void UUIGameMoviePlayer::ReadOnlinePlayerData(TArray<struct FString> PlayerIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ReadOnlinePlayerData"));

	UUIGameMoviePlayer_ReadOnlinePlayerData_Params params;
	params.PlayerIDs = PlayerIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnUserAccountInfoRetrieved
// (Defined, Public)
// Parameters:
// bool                           bSuccessful                    (Parm)
// struct FUserAccountInfo        AccountInfo                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnUserAccountInfoRetrieved"));

	UUIGameMoviePlayer_OnUserAccountInfoRetrieved_Params params;
	params.bSuccessful = bSuccessful;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.GetAccountInfo
// (Defined, Exec, Event, Public)

void UUIGameMoviePlayer::GetAccountInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.GetAccountInfo"));

	UUIGameMoviePlayer_GetAccountInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CanShowContentPurchaseUI
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::CanShowContentPurchaseUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CanShowContentPurchaseUI"));

	UUIGameMoviePlayer_CanShowContentPurchaseUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.ShowContentPurchaseUI
// (Defined, Exec, Event, Public)
// Parameters:
// struct FString                 SignedOffer                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::ShowContentPurchaseUI(const struct FString& SignedOffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowContentPurchaseUI"));

	UUIGameMoviePlayer_ShowContentPurchaseUI_Params params;
	params.SignedOffer = SignedOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowProductDetailsUI
// (Defined, Exec, Event, Public)
// Parameters:
// struct FString                 ProductID                      (Parm, NeedCtorLink)

void UUIGameMoviePlayer::usc_ShowProductDetailsUI(const struct FString& ProductID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_ShowProductDetailsUI"));

	UUIGameMoviePlayer_usc_ShowProductDetailsUI_Params params;
	params.ProductID = ProductID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowGameDetailsUI
// (Defined, Exec, Event, Public)

void UUIGameMoviePlayer::usc_ShowGameDetailsUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_ShowGameDetailsUI"));

	UUIGameMoviePlayer_usc_ShowGameDetailsUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUIForProduct
// (Defined, Exec, Event, Public)
// Parameters:
// int                            ParentProductType              (Parm)
// int                            RequestedProductTypes          (Parm)
// struct FString                 ProductID                      (Parm, NeedCtorLink)

void UUIGameMoviePlayer::usc_ShowContentMarketPlaceUIForProduct(int ParentProductType, int RequestedProductTypes, const struct FString& ProductID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUIForProduct"));

	UUIGameMoviePlayer_usc_ShowContentMarketPlaceUIForProduct_Params params;
	params.ParentProductType = ParentProductType;
	params.RequestedProductTypes = RequestedProductTypes;
	params.ProductID = ProductID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUI
// (Defined, Exec, Event, Public)
// Parameters:
// int                            ParentProductType              (Parm)
// int                            RequestedProductTypes          (Parm)

void UUIGameMoviePlayer::usc_ShowContentMarketPlaceUI(int ParentProductType, int RequestedProductTypes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUI"));

	UUIGameMoviePlayer_usc_ShowContentMarketPlaceUI_Params params;
	params.ParentProductType = ParentProductType;
	params.RequestedProductTypes = RequestedProductTypes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.updatePlayerMute
// (Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUIGameMoviePlayer::updatePlayerMute(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.updatePlayerMute"));

	UUIGameMoviePlayer_updatePlayerMute_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowGamercard
// (Defined, Event, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)

void UUIGameMoviePlayer::ShowGamercard(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowGamercard"));

	UUIGameMoviePlayer_ShowGamercard_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowGamerCardByUserName
// (Defined, Event, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (Parm)

void UUIGameMoviePlayer::ShowGamerCardByUserName(const struct FString& UserName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowGamerCardByUserName"));

	UUIGameMoviePlayer_ShowGamerCardByUserName_Params params;
	params.UserName = UserName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.IsPlayerMuted
// (Defined, Event, Public)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::IsPlayerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.IsPlayerMuted"));

	UUIGameMoviePlayer_IsPlayerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.UnmutePlayer
// (Defined, Event, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            ConsoleId                      (Parm)

void UUIGameMoviePlayer::UnmutePlayer(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UnmutePlayer"));

	UUIGameMoviePlayer_UnmutePlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.MutePlayer
// (Defined, Event, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            ConsoleId                      (Parm)

void UUIGameMoviePlayer::MutePlayer(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.MutePlayer"));

	UUIGameMoviePlayer_MutePlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UnregisterLocalTalker
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)

void UUIGameMoviePlayer::UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UnregisterLocalTalker"));

	UUIGameMoviePlayer_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.RegisterLocalTalker
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)

void UUIGameMoviePlayer::RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.RegisterLocalTalker"));

	UUIGameMoviePlayer_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ToggleAlienFX
// (Defined, Exec, Public)

void UUIGameMoviePlayer::ToggleAlienFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ToggleAlienFX"));

	UUIGameMoviePlayer_ToggleAlienFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.WidgetUnloaded
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.WidgetUnloaded"));

	UUIGameMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.WidgetInitialized"));

	UUIGameMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.CheckControllerConnected
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::CheckControllerConnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CheckControllerConnected"));

	UUIGameMoviePlayer_CheckControllerConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnComponentKeyboardInputComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUIGameMoviePlayer::OnComponentKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnComponentKeyboardInputComplete"));

	UUIGameMoviePlayer_OnComponentKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnTextFieldKeyboardInputComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUIGameMoviePlayer::OnTextFieldKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnTextFieldKeyboardInputComplete"));

	UUIGameMoviePlayer_OnTextFieldKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowComponentKeyboardUI
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UUIComponent*            CallingComponent               (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)

void UUIGameMoviePlayer::ShowComponentKeyboardUI(class UUIComponent* CallingComponent, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowComponentKeyboardUI"));

	UUIGameMoviePlayer_ShowComponentKeyboardUI_Params params;
	params.CallingComponent = CallingComponent;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowKeyboardUI
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              FocusedTextField               (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)

void UUIGameMoviePlayer::ShowKeyboardUI(class UGFxObject* FocusedTextField, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowKeyboardUI"));

	UUIGameMoviePlayer_ShowKeyboardUI_Params params;
	params.FocusedTextField = FocusedTextField;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelledWrapper
// (Defined, Public)

void UUIGameMoviePlayer::OnAccountPickerCancelledWrapper()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelledWrapper"));

	UUIGameMoviePlayer_OnAccountPickerCancelledWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnClose
// (Defined, Event, Public)

void UUIGameMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnClose"));

	UUIGameMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.InitOSSRef
// (Defined, Public)

void UUIGameMoviePlayer::InitOSSRef()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.InitOSSRef"));

	UUIGameMoviePlayer_InitOSSRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.Init
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UUIGameMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.Init"));

	UUIGameMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.FindUIScene
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   sName                          (Const, Parm, OutParm)
// class UUIScene*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIScene* UUIGameMoviePlayer::FindUIScene(struct FName* sName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.FindUIScene"));

	UUIGameMoviePlayer_FindUIScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sName != nullptr)
		*sName = params.sName;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.FindScene
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   sName                          (Const, Parm, OutParm)
// class UTgGfxScene*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgGfxScene* UUIGameMoviePlayer::FindScene(struct FName* sName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.FindScene"));

	UUIGameMoviePlayer_FindScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sName != nullptr)
		*sName = params.sName;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.NativeAllowButtonInput
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::NativeAllowButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.NativeAllowButtonInput"));

	UUIGameMoviePlayer_NativeAllowButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.ShowErrorMessage
// (Native, Public)
// Parameters:
// struct FString                 sTitle                         (Parm, NeedCtorLink)
// struct FString                 sError                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::ShowErrorMessage(const struct FString& sTitle, const struct FString& sError)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowErrorMessage"));

	UUIGameMoviePlayer_ShowErrorMessage_Params params;
	params.sTitle = sTitle;
	params.sError = sError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelled
// (Native, Public)

void UUIGameMoviePlayer::OnAccountPickerCancelled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelled"));

	UUIGameMoviePlayer_OnAccountPickerCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowNoFriendsForProfileViewWarning
// (Native, Public)

void UUIGameMoviePlayer::ShowNoFriendsForProfileViewWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowNoFriendsForProfileViewWarning"));

	UUIGameMoviePlayer_ShowNoFriendsForProfileViewWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowPartyRequiresPremiumAccountWarning
// (Native, Public)

void UUIGameMoviePlayer::ShowPartyRequiresPremiumAccountWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowPartyRequiresPremiumAccountWarning"));

	UUIGameMoviePlayer_ShowPartyRequiresPremiumAccountWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UnloadScene
// (Final, Defined, Event, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIGameMoviePlayer::UnloadScene(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UnloadScene"));

	UUIGameMoviePlayer_UnloadScene_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.LoadScene
// (Final, Defined, Event, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// struct FString                 sPath                          (Parm, NeedCtorLink)
// int                            nDepth                         (Parm)

void UUIGameMoviePlayer::LoadScene(const struct FString& sName, const struct FString& sPath, int nDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.LoadScene"));

	UUIGameMoviePlayer_LoadScene_Params params;
	params.sName = sName;
	params.sPath = sPath;
	params.nDepth = nDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnSuccessfulUserAccountInfoRetrieved
// (Native, Public)
// Parameters:
// struct FUserAccountInfo        AccountInfo                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::OnSuccessfulUserAccountInfoRetrieved(const struct FUserAccountInfo& AccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnSuccessfulUserAccountInfoRetrieved"));

	UUIGameMoviePlayer_OnSuccessfulUserAccountInfoRetrieved_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.GetDataHandler
// (Native, Public)
// Parameters:
// class UTgGameDataHandler*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgGameDataHandler* UUIGameMoviePlayer::GetDataHandler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.GetDataHandler"));

	UUIGameMoviePlayer_GetDataHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetGameData
// (Native, Public)
// Parameters:
// class UTgDataGroup_Game*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgDataGroup_Game* UUIGameMoviePlayer::GetGameData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.GetGameData"));

	UUIGameMoviePlayer_GetGameData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.HideSubtitle
// (Native, Public)

void UUIGameMoviePlayer::HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.HideSubtitle"));

	UUIGameMoviePlayer_HideSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SwitchSubtitleText
// (Native, Public)
// Parameters:
// struct FString                 sValue                         (Parm, NeedCtorLink)

void UUIGameMoviePlayer::SwitchSubtitleText(const struct FString& sValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.SwitchSubtitleText"));

	UUIGameMoviePlayer_SwitchSubtitleText_Params params;
	params.sValue = sValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowSubtitle
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 sValue                         (Parm, NeedCtorLink)
// float                          fTime                          (OptionalParm, Parm)

void UUIGameMoviePlayer::ShowSubtitle(const struct FString& sValue, float fTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowSubtitle"));

	UUIGameMoviePlayer_ShowSubtitle_Params params;
	params.sValue = sValue;
	params.fTime = fTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.NativeWidgetInitialized
// (Native, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::NativeWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.NativeWidgetInitialized"));

	UUIGameMoviePlayer_NativeWidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.NativeWidgetUnloaded
// (Native, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::NativeWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.NativeWidgetUnloaded"));

	UUIGameMoviePlayer_NativeWidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerDataComplete
// (Native, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)
// TArray<struct FOnlineProfile>  OnlineProfiles                 (Parm, NeedCtorLink)

void UUIGameMoviePlayer::OnReadOnlinePlayerDataComplete(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerDataComplete"));

	UUIGameMoviePlayer_OnReadOnlinePlayerDataComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerIDs = PlayerIDs;
	params.OnlineProfiles = OnlineProfiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.HasPlayerDisplayName
// (Native, Public)
// Parameters:
// struct FString                 OnlineID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::HasPlayerDisplayName(const struct FString& OnlineID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.HasPlayerDisplayName"));

	UUIGameMoviePlayer_HasPlayerDisplayName_Params params;
	params.OnlineID = OnlineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetPlayerDisplayName
// (Native, Public)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)
// struct FString                 OnlineID                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIGameMoviePlayer::GetPlayerDisplayName(const struct FString& PlayerName, const struct FString& OnlineID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.GetPlayerDisplayName"));

	UUIGameMoviePlayer_GetPlayerDisplayName_Params params;
	params.PlayerName = PlayerName;
	params.OnlineID = OnlineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetGamepadValueForKeyBind
// (Native, Public)
// Parameters:
// struct FString                 KeyBind                        (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIGameMoviePlayer::GetGamepadValueForKeyBind(const struct FString& KeyBind)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.GetGamepadValueForKeyBind"));

	UUIGameMoviePlayer_GetGamepadValueForKeyBind_Params params;
	params.KeyBind = KeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.UIFadeEndOfRound
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bFade                          (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)
// float                          fFailSafeTime                  (OptionalParm, Parm)

void UUIGameMoviePlayer::UIFadeEndOfRound(bool bFade, float fTime, float fDelay, float fFailSafeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UIFadeEndOfRound"));

	UUIGameMoviePlayer_UIFadeEndOfRound_Params params;
	params.bFade = bFade;
	params.fTime = fTime;
	params.fDelay = fDelay;
	params.fFailSafeTime = fFailSafeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UIFade
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bFade                          (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)
// float                          fFailSafeTime                  (OptionalParm, Parm)

void UUIGameMoviePlayer::UIFade(bool bFade, float fTime, float fDelay, float fFailSafeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UIFade"));

	UUIGameMoviePlayer_UIFade_Params params;
	params.bFade = bFade;
	params.fTime = fTime;
	params.fDelay = fDelay;
	params.fFailSafeTime = fFailSafeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.NativeTick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUIGameMoviePlayer::NativeTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.NativeTick"));

	UUIGameMoviePlayer_NativeTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ForceDirty
// (Exec, Native, Public)

void UUIGameMoviePlayer::ForceDirty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ForceDirty"));

	UUIGameMoviePlayer_ForceDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.PostInit
// (Native, Public)

void UUIGameMoviePlayer::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.PostInit"));

	UUIGameMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.InitAnnouncer
// (Native, Public)

void UUIGameMoviePlayer::InitAnnouncer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.InitAnnouncer"));

	UUIGameMoviePlayer_InitAnnouncer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnVoicePackLoaded
// (Native, Public)

void UUIGameMoviePlayer::OnVoicePackLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnVoicePackLoaded"));

	UUIGameMoviePlayer_OnVoicePackLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnAnnouncerLoaded
// (Native, Public)

void UUIGameMoviePlayer::OnAnnouncerLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnAnnouncerLoaded"));

	UUIGameMoviePlayer_OnAnnouncerLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowCardTutorial
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bForce                         (OptionalParm, Parm)
// bool                           bReset                         (OptionalParm, Parm)

void UUIGameMoviePlayer::ShowCardTutorial(bool bForce, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ShowCardTutorial"));

	UUIGameMoviePlayer_ShowCardTutorial_Params params;
	params.bForce = bForce;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SetSpecTeamName
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bEnemy                         (Parm)
// struct FString                 TeamName                       (OptionalParm, Parm, NeedCtorLink)

void UUIGameMoviePlayer::SetSpecTeamName(bool bEnemy, const struct FString& TeamName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.SetSpecTeamName"));

	UUIGameMoviePlayer_SetSpecTeamName_Params params;
	params.bEnemy = bEnemy;
	params.TeamName = TeamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.GetHUDTeamName
// (Exec, Native, Public)
// Parameters:
// bool                           bEnemy                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIGameMoviePlayer::GetHUDTeamName(bool bEnemy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.GetHUDTeamName"));

	UUIGameMoviePlayer_GetHUDTeamName_Params params;
	params.bEnemy = bEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.CloseGAPeachMovie
// (Exec, Native, Public)

void UUIGameMoviePlayer::CloseGAPeachMovie()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CloseGAPeachMovie"));

	UUIGameMoviePlayer_CloseGAPeachMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SetLoginReady
// (Exec, Native, Public)

void UUIGameMoviePlayer::SetLoginReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.SetLoginReady"));

	UUIGameMoviePlayer_SetLoginReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UpdateGamepadIcons
// (Native, Public)

void UUIGameMoviePlayer::UpdateGamepadIcons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UpdateGamepadIcons"));

	UUIGameMoviePlayer_UpdateGamepadIcons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CheckControllerDisconnected
// (Native, Public)

void UUIGameMoviePlayer::CheckControllerDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CheckControllerDisconnected"));

	UUIGameMoviePlayer_CheckControllerDisconnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.AddInitialChatMessages
// (Native, Public)

void UUIGameMoviePlayer::AddInitialChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.AddInitialChatMessages"));

	UUIGameMoviePlayer_AddInitialChatMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CloseChatTab
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 sSender                        (OptionalParm, Parm, NeedCtorLink)

void UUIGameMoviePlayer::CloseChatTab(int nChannel, const struct FString& sSender)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CloseChatTab"));

	UUIGameMoviePlayer_CloseChatTab_Params params;
	params.nChannel = nChannel;
	params.sSender = sSender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OpenChatTab
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 sName                          (OptionalParm, Parm, NeedCtorLink)
// bool                           bOpenWindow                    (OptionalParm, Parm)

void UUIGameMoviePlayer::OpenChatTab(int nChannel, const struct FString& sName, bool bOpenWindow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OpenChatTab"));

	UUIGameMoviePlayer_OpenChatTab_Params params;
	params.nChannel = nChannel;
	params.sName = sName;
	params.bOpenWindow = bOpenWindow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.AttemptAutoReplayDemoRecording
// (Native, Public)

void UUIGameMoviePlayer::AttemptAutoReplayDemoRecording()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.AttemptAutoReplayDemoRecording"));

	UUIGameMoviePlayer_AttemptAutoReplayDemoRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UpdateViewportForSafeAreas
// (Native, Public)

void UUIGameMoviePlayer::UpdateViewportForSafeAreas()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.UpdateViewportForSafeAreas"));

	UUIGameMoviePlayer_UpdateViewportForSafeAreas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.AttemptAutoLogin
// (Native, Public)

void UUIGameMoviePlayer::AttemptAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.AttemptAutoLogin"));

	UUIGameMoviePlayer_AttemptAutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.QuitGame
// (Native, Public)

void UUIGameMoviePlayer::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.QuitGame"));

	UUIGameMoviePlayer_QuitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.PromptToQuit
// (Native, Public)
// Parameters:
// bool                           bAllowLogout                   (Parm)

void UUIGameMoviePlayer::PromptToQuit(bool bAllowLogout)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.PromptToQuit"));

	UUIGameMoviePlayer_PromptToQuit_Params params;
	params.bAllowLogout = bAllowLogout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SetRenderTargetEnabled
// (Exec, Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm)
// int                            surfaceId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::SetRenderTargetEnabled(bool bEnabled, int surfaceId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.SetRenderTargetEnabled"));

	UUIGameMoviePlayer_SetRenderTargetEnabled_Params params;
	params.bEnabled = bEnabled;
	params.surfaceId = surfaceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.usc_resize_browser
// (Exec, Native, Public)
// Parameters:
// int                            surfaceId                      (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::usc_resize_browser(int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_resize_browser"));

	UUIGameMoviePlayer_usc_resize_browser_Params params;
	params.surfaceId = surfaceId;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.usc_enable_browser_input
// (Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void UUIGameMoviePlayer::usc_enable_browser_input(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_enable_browser_input"));

	UUIGameMoviePlayer_usc_enable_browser_input_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_chat_close_tab
// (Exec, Native, Public)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 Sender                         (Parm, NeedCtorLink)

void UUIGameMoviePlayer::usc_chat_close_tab(int nChannel, const struct FString& Sender)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_chat_close_tab"));

	UUIGameMoviePlayer_usc_chat_close_tab_Params params;
	params.nChannel = nChannel;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_resend_private_messages
// (Exec, Native, Public)

void UUIGameMoviePlayer::usc_resend_private_messages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_resend_private_messages"));

	UUIGameMoviePlayer_usc_resend_private_messages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_vgs_command
// (Exec, Native, Public)
// Parameters:
// int                            nId                            (Parm)
// bool                           bSubMenu                       (Parm)

void UUIGameMoviePlayer::usc_vgs_command(int nId, bool bSubMenu)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_vgs_command"));

	UUIGameMoviePlayer_usc_vgs_command_Params params;
	params.nId = nId;
	params.bSubMenu = bSubMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_toggle_player_mute
// (Exec, Native, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::usc_toggle_player_mute(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.usc_toggle_player_mute"));

	UUIGameMoviePlayer_usc_toggle_player_mute_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ViewStatsOnline
// (Exec, Native, Public)
// Parameters:
// struct FString                 sInstanceId                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::ViewStatsOnline(const struct FString& sInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ViewStatsOnline"));

	UUIGameMoviePlayer_ViewStatsOnline_Params params;
	params.sInstanceId = sInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.WatchReplay
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 sInstanceId                    (Parm, NeedCtorLink)
// struct FString                 sSpectatePassword              (OptionalParm, Parm, NeedCtorLink)

void UUIGameMoviePlayer::WatchReplay(const struct FString& sInstanceId, const struct FString& sSpectatePassword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.WatchReplay"));

	UUIGameMoviePlayer_WatchReplay_Params params;
	params.sInstanceId = sInstanceId;
	params.sSpectatePassword = sSpectatePassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.Replay
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nInstanceId                    (Parm)
// struct FString                 sSpectatePassword              (OptionalParm, Parm, NeedCtorLink)

void UUIGameMoviePlayer::Replay(int nInstanceId, const struct FString& sSpectatePassword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.Replay"));

	UUIGameMoviePlayer_Replay_Params params;
	params.nInstanceId = nInstanceId;
	params.sSpectatePassword = sSpectatePassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ToggleSkillScreen
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nBotIdOverride                 (OptionalParm, Parm)

void UUIGameMoviePlayer::ToggleSkillScreen(int nBotIdOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ToggleSkillScreen"));

	UUIGameMoviePlayer_ToggleSkillScreen_Params params;
	params.nBotIdOverride = nBotIdOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ViewSkillScreen
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bShow                          (Parm)
// int                            nBotIdOverride                 (OptionalParm, Parm)

void UUIGameMoviePlayer::ViewSkillScreen(bool bShow, int nBotIdOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.ViewSkillScreen"));

	UUIGameMoviePlayer_ViewSkillScreen_Params params;
	params.bShow = bShow;
	params.nBotIdOverride = nBotIdOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.EndLobbyPlayback
// (Exec, Native, Public)

void UUIGameMoviePlayer::EndLobbyPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.EndLobbyPlayback"));

	UUIGameMoviePlayer_EndLobbyPlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CancelPlayback
// (Exec, Native, Public)

void UUIGameMoviePlayer::CancelPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.CancelPlayback"));

	UUIGameMoviePlayer_CancelPlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnDemoReady
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bDemoRecorded                  (OptionalParm, Parm)

void UUIGameMoviePlayer::OnDemoReady(bool bDemoRecorded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.OnDemoReady"));

	UUIGameMoviePlayer_OnDemoReady_Params params;
	params.bDemoRecorded = bDemoRecorded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.DumpMctsEventProfiling
// (Exec, Native, Public)

void UUIGameMoviePlayer::DumpMctsEventProfiling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIGameMoviePlayer.DumpMctsEventProfiling"));

	UUIGameMoviePlayer_DumpMctsEventProfiling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ChangePedestalModel
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EPedestalType>     PedestalType                   (Parm)
// int                            BotId                          (Parm)
// int                            SkinId                         (Parm)
// int                            DeviceID                       (Parm)
// int                            DeviceSkinId                   (Parm)
// int                            MVPId                          (OptionalParm, Parm)
// int                            CharacterMastery               (OptionalParm, Parm)

void ATgLobbyHUD::ChangePedestalModel(TEnumAsByte<EPedestalType> PedestalType, int BotId, int SkinId, int DeviceID, int DeviceSkinId, int MVPId, int CharacterMastery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.ChangePedestalModel"));

	ATgLobbyHUD_ChangePedestalModel_Params params;
	params.PedestalType = PedestalType;
	params.BotId = BotId;
	params.SkinId = SkinId;
	params.DeviceID = DeviceID;
	params.DeviceSkinId = DeviceSkinId;
	params.MVPId = MVPId;
	params.CharacterMastery = CharacterMastery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TestDailyDealItems
// (Defined, Exec, Public)
// Parameters:
// int                            nItemId0                       (Parm)
// int                            nItemId1                       (Parm)
// int                            nItemId2                       (Parm)

void ATgLobbyHUD::TestDailyDealItems(int nItemId0, int nItemId1, int nItemId2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.TestDailyDealItems"));

	ATgLobbyHUD_TestDailyDealItems_Params params;
	params.nItemId0 = nItemId0;
	params.nItemId1 = nItemId1;
	params.nItemId2 = nItemId2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.StopMVP
// (Defined, Exec, Public)

void ATgLobbyHUD::StopMVP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.StopMVP"));

	ATgLobbyHUD_StopMVP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PlayMVP
// (Defined, Exec, Public)
// Parameters:
// int                            nDeviceId                      (Parm)

void ATgLobbyHUD::PlayMVP(int nDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.PlayMVP"));

	ATgLobbyHUD_PlayMVP_Params params;
	params.nDeviceId = nDeviceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.StopEmote
// (Defined, Exec, Public)

void ATgLobbyHUD::StopEmote()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.StopEmote"));

	ATgLobbyHUD_StopEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PlayEmote
// (Defined, Exec, Public)
// Parameters:
// int                            nDeviceId                      (Parm)

void ATgLobbyHUD::PlayEmote(int nDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.PlayEmote"));

	ATgLobbyHUD_PlayEmote_Params params;
	params.nDeviceId = nDeviceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ChangeModel
// (Defined, Exec, HasOptionalParms, Public, HasDefaults)
// Parameters:
// int                            BotId                          (Parm)
// int                            SkinId                         (Parm)
// int                            DeviceID                       (Parm)
// int                            DeviceSkinId                   (Parm)
// int                            PedestalSkinId                 (Parm)
// unsigned char                  pose                           (OptionalParm, Parm)
// TEnumAsByte<ELobbyCameraTag>   CameraTag                      (OptionalParm, Parm)
// float                          BlendTime                      (OptionalParm, Parm)
// TEnumAsByte<EViewTargetBlendFunction> BlendFunction                  (OptionalParm, Parm)
// float                          BlendExp                       (OptionalParm, Parm)
// TEnumAsByte<EModelHighlightType> HighlightType                  (OptionalParm, Parm)
// int                            MVPDeviceId                    (OptionalParm, Parm)

void ATgLobbyHUD::ChangeModel(int BotId, int SkinId, int DeviceID, int DeviceSkinId, int PedestalSkinId, unsigned char pose, TEnumAsByte<ELobbyCameraTag> CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExp, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.ChangeModel"));

	ATgLobbyHUD_ChangeModel_Params params;
	params.BotId = BotId;
	params.SkinId = SkinId;
	params.DeviceID = DeviceID;
	params.DeviceSkinId = DeviceSkinId;
	params.PedestalSkinId = PedestalSkinId;
	params.pose = pose;
	params.CameraTag = CameraTag;
	params.BlendTime = BlendTime;
	params.BlendFunction = BlendFunction;
	params.BlendExp = BlendExp;
	params.HighlightType = HighlightType;
	params.MVPDeviceId = MVPDeviceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SwitchToCards
// (Defined, Exec, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void ATgLobbyHUD::SwitchToCards(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.SwitchToCards"));

	ATgLobbyHUD_SwitchToCards_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.CheckBoostedTextureStaticMeshActors
// (Defined, Event, Public)

void ATgLobbyHUD::CheckBoostedTextureStaticMeshActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.CheckBoostedTextureStaticMeshActors"));

	ATgLobbyHUD_CheckBoostedTextureStaticMeshActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ATgLobbyHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.PostBeginPlay"));

	ATgLobbyHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TryPushScene
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// bool                           bSkipPrivilegeCheck            (OptionalParm, Parm)
// bool                           bResetStack                    (OptionalParm, Parm)

void ATgLobbyHUD::TryPushScene(const struct FString& sName, bool bSkipPrivilegeCheck, bool bResetStack)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.TryPushScene"));

	ATgLobbyHUD_TryPushScene_Params params;
	params.sName = sName;
	params.bSkipPrivilegeCheck = bSkipPrivilegeCheck;
	params.bResetStack = bResetStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TriggerLazyPrecache
// (Native, Public)

void ATgLobbyHUD::TriggerLazyPrecache()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.TriggerLazyPrecache"));

	ATgLobbyHUD_TriggerLazyPrecache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ResetSplashVersion
// (Exec, Native, Public)

void ATgLobbyHUD::ResetSplashVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.ResetSplashVersion"));

	ATgLobbyHUD_ResetSplashVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TestDynamicFeature
// (Exec, Native, Public)

void ATgLobbyHUD::TestDynamicFeature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.TestDynamicFeature"));

	ATgLobbyHUD_TestDynamicFeature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.DisplayCharacter
// (Native, Public)

void ATgLobbyHUD::DisplayCharacter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.DisplayCharacter"));

	ATgLobbyHUD_DisplayCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TestBattlePassCloseup
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nItemId1                       (OptionalParm, Parm)
// int                            nItemId2                       (OptionalParm, Parm)
// int                            nItemId3                       (OptionalParm, Parm)
// int                            nItemId4                       (OptionalParm, Parm)
// int                            nItemId5                       (OptionalParm, Parm)

void ATgLobbyHUD::TestBattlePassCloseup(int nItemId1, int nItemId2, int nItemId3, int nItemId4, int nItemId5)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.TestBattlePassCloseup"));

	ATgLobbyHUD_TestBattlePassCloseup_Params params;
	params.nItemId1 = nItemId1;
	params.nItemId2 = nItemId2;
	params.nItemId3 = nItemId3;
	params.nItemId4 = nItemId4;
	params.nItemId5 = nItemId5;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TestItemPreview
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ELobbyCameraTag>   CamTag                         (Parm)
// float                          fIntroTime                     (Parm)
// int                            nItemIdToPreview               (OptionalParm, Parm)
// int                            nTargetIndex                   (OptionalParm, Parm)

void ATgLobbyHUD::TestItemPreview(TEnumAsByte<ELobbyCameraTag> CamTag, float fIntroTime, int nItemIdToPreview, int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.TestItemPreview"));

	ATgLobbyHUD_TestItemPreview_Params params;
	params.CamTag = CamTag;
	params.fIntroTime = fIntroTime;
	params.nItemIdToPreview = nItemIdToPreview;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.GetStorePreviewMeshActor
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nTargetIndex                   (OptionalParm, Parm)
// class ATgSkeletalMeshActor_Lobby* ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgSkeletalMeshActor_Lobby* ATgLobbyHUD::GetStorePreviewMeshActor(int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.GetStorePreviewMeshActor"));

	ATgLobbyHUD_GetStorePreviewMeshActor_Params params;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.GetCurrentSprayPreviewOffset
// (Native, Public)
// Parameters:
// bool                           bFor3DSpray                    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ATgLobbyHUD::GetCurrentSprayPreviewOffset(bool bFor3DSpray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.GetCurrentSprayPreviewOffset"));

	ATgLobbyHUD_GetCurrentSprayPreviewOffset_Params params;
	params.bFor3DSpray = bFor3DSpray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.SwitchToCamera
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ELobbyCameraTag>   CamTag                         (Parm)
// TEnumAsByte<ECameraTransType>  camDirection                   (OptionalParm, Parm)
// bool                           bForce                         (OptionalParm, Parm)
// bool                           bForceCameraReset              (OptionalParm, Parm)
// struct FViewTargetTransitionParams BlendParams                    (OptionalParm, Parm)
// class ATgLobbyCamera*          ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgLobbyCamera* ATgLobbyHUD::SwitchToCamera(TEnumAsByte<ELobbyCameraTag> CamTag, TEnumAsByte<ECameraTransType> camDirection, bool bForce, bool bForceCameraReset, const struct FViewTargetTransitionParams& BlendParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.SwitchToCamera"));

	ATgLobbyHUD_SwitchToCamera_Params params;
	params.CamTag = CamTag;
	params.camDirection = camDirection;
	params.bForce = bForce;
	params.bForceCameraReset = bForceCameraReset;
	params.BlendParams = BlendParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.GetCamera
// (Exec, Native, Public)
// Parameters:
// TEnumAsByte<ELobbyCameraTag>   CamTag                         (Parm)
// class ATgLobbyCamera*          ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgLobbyCamera* ATgLobbyHUD::GetCamera(TEnumAsByte<ELobbyCameraTag> CamTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.GetCamera"));

	ATgLobbyHUD_GetCamera_Params params;
	params.CamTag = CamTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.PlayTeamEmote
// (Native, Public)
// Parameters:
// bool                           bFriendly                      (Parm)
// int                            nIndex                         (Parm)
// int                            nEmoteId                       (Parm)

void ATgLobbyHUD::PlayTeamEmote(bool bFriendly, int nIndex, int nEmoteId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.PlayTeamEmote"));

	ATgLobbyHUD_PlayTeamEmote_Params params;
	params.bFriendly = bFriendly;
	params.nIndex = nIndex;
	params.nEmoteId = nEmoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.CleanupPedestalModels
// (Native, Public)

void ATgLobbyHUD::CleanupPedestalModels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.CleanupPedestalModels"));

	ATgLobbyHUD_CleanupPedestalModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ChangeMenuModel
// (Exec, Native, Public, HasOutParms)
// Parameters:
// TEnumAsByte<EMenuContentDataType> Type                           (Parm)
// struct FMeshData               Data                           (Parm, OutParm)

void ATgLobbyHUD::ChangeMenuModel(TEnumAsByte<EMenuContentDataType> Type, struct FMeshData* Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.ChangeMenuModel"));

	ATgLobbyHUD_ChangeMenuModel_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TgClient.TgLobbyHUD.ChangeTeamModel
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bFriendly                      (Parm)
// int                            nIndex                         (Parm)
// int                            nClassId                       (Parm)
// int                            nSkinId                        (Parm)
// int                            nDeviceId                      (Parm)
// int                            nDeviceSkinId                  (Parm)
// int                            nPedestalSkinId                (Parm)
// TEnumAsByte<ELobbyAnimPose>    pose                           (Parm)
// bool                           bAsync                         (OptionalParm, Parm)
// TEnumAsByte<EModelHighlightType> HighlightType                  (OptionalParm, Parm)
// int                            MVPDeviceId                    (OptionalParm, Parm)
// int                            nCharacterXP                   (OptionalParm, Parm)
// struct FScriptDelegate         MeshUpdatedDelegate            (OptionalParm, Parm, NeedCtorLink)

void ATgLobbyHUD::ChangeTeamModel(bool bFriendly, int nIndex, int nClassId, int nSkinId, int nDeviceId, int nDeviceSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId, int nCharacterXP, const struct FScriptDelegate& MeshUpdatedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.ChangeTeamModel"));

	ATgLobbyHUD_ChangeTeamModel_Params params;
	params.bFriendly = bFriendly;
	params.nIndex = nIndex;
	params.nClassId = nClassId;
	params.nSkinId = nSkinId;
	params.nDeviceId = nDeviceId;
	params.nDeviceSkinId = nDeviceSkinId;
	params.nPedestalSkinId = nPedestalSkinId;
	params.pose = pose;
	params.bAsync = bAsync;
	params.HighlightType = HighlightType;
	params.MVPDeviceId = MVPDeviceId;
	params.nCharacterXP = nCharacterXP;
	params.MeshUpdatedDelegate = MeshUpdatedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SetModelRotation
// (Exec, Native, Public)
// Parameters:
// float                          fRotationDegrees               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgLobbyHUD::SetModelRotation(float fRotationDegrees)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.SetModelRotation"));

	ATgLobbyHUD_SetModelRotation_Params params;
	params.fRotationDegrees = fRotationDegrees;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.RotateModel
// (Exec, Native, Public)
// Parameters:
// float                          fValue                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgLobbyHUD::RotateModel(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.RotateModel"));

	ATgLobbyHUD_RotateModel_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.ChangeClassModel
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nClassId                       (Parm)
// int                            nSkinId                        (Parm)
// int                            nDeviceId                      (Parm)
// int                            nDeviceSkinId                  (Parm)
// int                            nPedestalSkinId                (Parm)
// TEnumAsByte<ELobbyAnimPose>    pose                           (Parm)
// TEnumAsByte<ECameraTransType>  camDirection                   (OptionalParm, Parm)
// bool                           bAsync                         (OptionalParm, Parm)
// TEnumAsByte<EModelHighlightType> HighlightType                  (OptionalParm, Parm)
// int                            MVPDeviceId                    (OptionalParm, Parm)

void ATgLobbyHUD::ChangeClassModel(int nClassId, int nSkinId, int nDeviceId, int nDeviceSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, TEnumAsByte<ECameraTransType> camDirection, bool bAsync, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.ChangeClassModel"));

	ATgLobbyHUD_ChangeClassModel_Params params;
	params.nClassId = nClassId;
	params.nSkinId = nSkinId;
	params.nDeviceId = nDeviceId;
	params.nDeviceSkinId = nDeviceSkinId;
	params.nPedestalSkinId = nPedestalSkinId;
	params.pose = pose;
	params.camDirection = camDirection;
	params.bAsync = bAsync;
	params.HighlightType = HighlightType;
	params.MVPDeviceId = MVPDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SetUpEOMLobby
// (Native, Public)

void ATgLobbyHUD::SetUpEOMLobby()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.SetUpEOMLobby"));

	ATgLobbyHUD_SetUpEOMLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.HaveEOMLobbyData
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgLobbyHUD::HaveEOMLobbyData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.HaveEOMLobbyData"));

	ATgLobbyHUD_HaveEOMLobbyData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.Initialize
// (Native, Public)

void ATgLobbyHUD::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgLobbyHUD.Initialize"));

	ATgLobbyHUD_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSettingsManager.GetKeybindExtended
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlt                           (Parm)
// int                            nBotId                         (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgSettingsManager::GetKeybindExtended(const struct FString& sCommand, bool bGamepad, int nAlt, int nBotId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgSettingsManager.GetKeybindExtended"));

	UTgSettingsManager_GetKeybindExtended_Params params;
	params.sCommand = sCommand;
	params.bGamepad = bGamepad;
	params.nAlt = nAlt;
	params.nBotId = nBotId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.OnKeyboardUIComplete
// (Public)
// Parameters:
// struct FString                 sResult                        (Parm, NeedCtorLink)
// unsigned char                  bCanceled                      (Parm)

void UUIComponent::OnKeyboardUIComplete(const struct FString& sResult, unsigned char bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.OnKeyboardUIComplete"));

	UUIComponent_OnKeyboardUIComplete_Params params;
	params.sResult = sResult;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.GetYMouse
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::GetYMouse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.GetYMouse"));

	UUIComponent_GetYMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.GetXMouse
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::GetXMouse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.GetXMouse"));

	UUIComponent_GetXMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.HandleAnimEvent
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            nEventType                     (Parm)
// TArray<float>                  fExtraData                     (OptionalParm, Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::HandleAnimEvent(int nEventType, TArray<float> fExtraData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.HandleAnimEvent"));

	UUIComponent_HandleAnimEvent_Params params;
	params.nEventType = nEventType;
	params.fExtraData = fExtraData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.ClearQueuedSounds
// (Native, HasOptionalParms, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (OptionalParm, Parm)

void UUIComponent::ClearQueuedSounds(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.ClearQueuedSounds"));

	UUIComponent_ClearQueuedSounds_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.QueueSound
// (Native, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// float                          fDelay                         (Parm)

void UUIComponent::QueueSound(class UAkBaseSoundObject* akSound, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.QueueSound"));

	UUIComponent_QueueSound_Params params;
	params.akSound = akSound;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.IsSoundQueued
// (Native, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIComponent::IsSoundQueued(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.IsSoundQueued"));

	UUIComponent_IsSoundQueued_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.EndAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)

void UUIComponent::EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.EndAnim"));

	UUIComponent_EndAnim_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.GetAnimationTarget
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::GetAnimationTarget(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.GetAnimationTarget"));

	UUIComponent_GetAnimationTarget_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.IsAnimating
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIComponent::IsAnimating(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.IsAnimating"));

	UUIComponent_IsAnimating_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.QueueAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)

void UUIComponent::QueueAnim(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, unsigned char eQuad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.QueueAnim"));

	UUIComponent_QueueAnim_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.eQuad = eQuad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.Animate
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)
// bool                           bEndCurrentAnim                (OptionalParm, Parm)

void UUIComponent::Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.Animate"));

	UUIComponent_Animate_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;
	params.bEndCurrentAnim = bEndCurrentAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeOut
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.FadeOut"));

	UUIComponent_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeIn
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.FadeIn"));

	UUIComponent_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.AnimateAsWell
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)

void UUIComponent::AnimateAsWell(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.AnimateAsWell"));

	UUIComponent_AnimateAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeOutAsWell
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::FadeOutAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.FadeOutAsWell"));

	UUIComponent_FadeOutAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeInAsWell
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::FadeInAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent.FadeInAsWell"));

	UUIComponent_FadeInAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_EventVault.OnCardArtLoaded
// (Native, Public)

void UUIComponent_EventVault::OnCardArtLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_EventVault.OnCardArtLoaded"));

	UUIComponent_EventVault_OnCardArtLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_EventVault.PreviewCardArt
// (Native, Public)

void UUIComponent_EventVault::PreviewCardArt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_EventVault.PreviewCardArt"));

	UUIComponent_EventVault_PreviewCardArt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_EventVault.InitCardArtManifest
// (Native, Public)

void UUIComponent_EventVault::InitCardArtManifest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_EventVault.InitCardArtManifest"));

	UUIComponent_EventVault_InitCardArtManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MojiCounter.StartStarBurstAnim
// (Defined, Event, Public)

void UUIComponent_MojiCounter::StartStarBurstAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MojiCounter.StartStarBurstAnim"));

	UUIComponent_MojiCounter_StartStarBurstAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MojiCounter.StartMaxStacksAnim
// (Defined, Event, Public)

void UUIComponent_MojiCounter::StartMaxStacksAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MojiCounter.StartMaxStacksAnim"));

	UUIComponent_MojiCounter_StartMaxStacksAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MojiCounter.UpdateStarVisibility
// (Native, Public)

void UUIComponent_MojiCounter::UpdateStarVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MojiCounter.UpdateStarVisibility"));

	UUIComponent_MojiCounter_UpdateStarVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MojiCounter.UpdateMojiMarkCounts
// (Native, Public)

void UUIComponent_MojiCounter::UpdateMojiMarkCounts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MojiCounter.UpdateMojiMarkCounts"));

	UUIComponent_MojiCounter_UpdateMojiMarkCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MojiCounter.UpdateViewTargetVisibility
// (Native, Public)

void UUIComponent_MojiCounter::UpdateViewTargetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MojiCounter.UpdateViewTargetVisibility"));

	UUIComponent_MojiCounter_UpdateViewTargetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MojiCounter.UpdateMojiTeammateArray
// (Native, Public)

void UUIComponent_MojiCounter::UpdateMojiTeammateArray()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MojiCounter.UpdateMojiTeammateArray"));

	UUIComponent_MojiCounter_UpdateMojiTeammateArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_LazarusShieldBar.HideUltTimer
// (Defined, Event, Public)
// Parameters:
// bool                           bWasUltUsed                    (Parm)

void UUIComponent_LazarusShieldBar::HideUltTimer(bool bWasUltUsed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_LazarusShieldBar.HideUltTimer"));

	UUIComponent_LazarusShieldBar_HideUltTimer_Params params;
	params.bWasUltUsed = bWasUltUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_LazarusShieldBar.ShowUltTimer
// (Defined, Event, Public)

void UUIComponent_LazarusShieldBar::ShowUltTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_LazarusShieldBar.ShowUltTimer"));

	UUIComponent_LazarusShieldBar_ShowUltTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_Targeter_Rider.UpdateVisualFromStacks
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          fDeltaTime                     (Parm)

void UUIComponent_Targeter_Rider::UpdateVisualFromStacks(float fDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_Targeter_Rider.UpdateVisualFromStacks"));

	UUIComponent_Targeter_Rider_UpdateVisualFromStacks_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_TitlesView.FadeOut
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent_TitlesView::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_TitlesView.FadeOut"));

	UUIComponent_TitlesView_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_TitlesView.FadeIn
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent_TitlesView::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_TitlesView.FadeIn"));

	UUIComponent_TitlesView_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.ClearQueuedSounds
// (Native, HasOptionalParms, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (OptionalParm, Parm)

void UUIScene::ClearQueuedSounds(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.ClearQueuedSounds"));

	UUIScene_ClearQueuedSounds_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.QueueSound
// (Native, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// float                          fDelay                         (Parm)

void UUIScene::QueueSound(class UAkBaseSoundObject* akSound, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.QueueSound"));

	UUIScene_QueueSound_Params params;
	params.akSound = akSound;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.IsSoundQueued
// (Native, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScene::IsSoundQueued(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.IsSoundQueued"));

	UUIScene_IsSoundQueued_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIScene.EndAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)

void UUIScene::EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.EndAnim"));

	UUIScene_EndAnim_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.GetAnimationTarget
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIScene::GetAnimationTarget(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.GetAnimationTarget"));

	UUIScene_GetAnimationTarget_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIScene.IsAnimating
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScene::IsAnimating(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.IsAnimating"));

	UUIScene_IsAnimating_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIScene.QueueAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)

void UUIScene::QueueAnim(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, unsigned char eQuad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.QueueAnim"));

	UUIScene_QueueAnim_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.eQuad = eQuad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.Animate
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)
// bool                           bEndCurrentAnim                (OptionalParm, Parm)

void UUIScene::Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.Animate"));

	UUIScene_Animate_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;
	params.bEndCurrentAnim = bEndCurrentAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeOutAsWell
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::FadeOutAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.FadeOutAsWell"));

	UUIScene_FadeOutAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeInAsWell
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::FadeInAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.FadeInAsWell"));

	UUIScene_FadeInAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeOut
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.FadeOut"));

	UUIScene_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeIn
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene.FadeIn"));

	UUIScene_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIEOMLAcquisition.TransitionOut
// (Defined, Event, Public)

void UUIScene_UIEOMLAcquisition::TransitionOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIEOMLAcquisition.TransitionOut"));

	UUIScene_UIEOMLAcquisition_TransitionOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIEOMLAcquisition.TransitionIn
// (Defined, Event, Public)

void UUIScene_UIEOMLAcquisition::TransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIEOMLAcquisition.TransitionIn"));

	UUIScene_UIEOMLAcquisition_TransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIFooterGamepad.Thaw
// (Final, Native, Public)

void UUIScene_UIFooterGamepad::Thaw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIFooterGamepad.Thaw"));

	UUIScene_UIFooterGamepad_Thaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIFooterGamepad.Freeze
// (Final, Native, Public)

void UUIScene_UIFooterGamepad::Freeze()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIFooterGamepad.Freeze"));

	UUIScene_UIFooterGamepad_Freeze_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIHnHAcquisition.HandleAnimState
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            nAnimState                     (Parm)
// bool                           bDelayAcquisitionState         (OptionalParm, Parm)
// bool                           bHasNextBundle                 (OptionalParm, Parm)

void UUIScene_UIHnHAcquisition::HandleAnimState(int nAnimState, bool bDelayAcquisitionState, bool bHasNextBundle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIHnHAcquisition.HandleAnimState"));

	UUIScene_UIHnHAcquisition_HandleAnimState_Params params;
	params.nAnimState = nAnimState;
	params.bDelayAcquisitionState = bDelayAcquisitionState;
	params.bHasNextBundle = bHasNextBundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIItemPreview.OnCardArtLoaded
// (Native, Public)

void UUIScene_UIItemPreview::OnCardArtLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIItemPreview.OnCardArtLoaded"));

	UUIScene_UIItemPreview_OnCardArtLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UILobbyChat.OnKeyboardUIComplete
// (Native, Public)
// Parameters:
// struct FString                 sResult                        (Parm, NeedCtorLink)
// unsigned char                  bCanceled                      (Parm)

void UUIScene_UILobbyChat::OnKeyboardUIComplete(const struct FString& sResult, unsigned char bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UILobbyChat.OnKeyboardUIComplete"));

	UUIScene_UILobbyChat_OnKeyboardUIComplete_Params params;
	params.sResult = sResult;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UISimulMedia.CompleteWatchingAd
// (Defined, Event, Public)

void UUIScene_UISimulMedia::CompleteWatchingAd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UISimulMedia.CompleteWatchingAd"));

	UUIScene_UISimulMedia_CompleteWatchingAd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UISimulMedia.OnVideoError
// (Defined, Event, Public)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void UUIScene_UISimulMedia::OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UISimulMedia.OnVideoError"));

	UUIScene_UISimulMedia_OnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UISimulMedia.DestroyVideoPlayer
// (Defined, Event, Public)

void UUIScene_UISimulMedia::DestroyVideoPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UISimulMedia.DestroyVideoPlayer"));

	UUIScene_UISimulMedia_DestroyVideoPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UISimulMedia.SpawnVideoPlayer
// (Defined, Event, Public)
// Parameters:
// class AActor*                  SpawningActor                  (Parm)

void UUIScene_UISimulMedia::SpawnVideoPlayer(class AActor* SpawningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UISimulMedia.SpawnVideoPlayer"));

	UUIScene_UISimulMedia_SpawnVideoPlayer_Params params;
	params.SpawningActor = SpawningActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UISimulMedia.AbortAd
// (Native, Public)

void UUIScene_UISimulMedia::AbortAd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UISimulMedia.AbortAd"));

	UUIScene_UISimulMedia_AbortAd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UISimulMedia.CompleteAd
// (Native, Public)

void UUIScene_UISimulMedia::CompleteAd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UISimulMedia.CompleteAd"));

	UUIScene_UISimulMedia_CompleteAd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIStore.OnDeathStampLoaded
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nTargetIndex                   (OptionalParm, Parm)

void UUIScene_UIStore::OnDeathStampLoaded(int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIStore.OnDeathStampLoaded"));

	UUIScene_UIStore_OnDeathStampLoaded_Params params;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIStore.PreviewDeathStamp
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nItemId                        (Parm)
// int                            nTargetIndex                   (OptionalParm, Parm)

void UUIScene_UIStore::PreviewDeathStamp(int nItemId, int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIStore.PreviewDeathStamp"));

	UUIScene_UIStore_PreviewDeathStamp_Params params;
	params.nItemId = nItemId;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIStore.InitDeathStampManifest
// (Native, Public)

void UUIScene_UIStore::InitDeathStampManifest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIStore.InitDeathStampManifest"));

	UUIScene_UIStore_InitDeathStampManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIStore.OnSprayLoaded
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nTargetIndex                   (OptionalParm, Parm)

void UUIScene_UIStore::OnSprayLoaded(int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIStore.OnSprayLoaded"));

	UUIScene_UIStore_OnSprayLoaded_Params params;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIStore.PreviewSpray
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            nItemId                        (Parm)
// int                            nTargetIndex                   (OptionalParm, Parm)

void UUIScene_UIStore::PreviewSpray(int nItemId, int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIStore.PreviewSpray"));

	UUIScene_UIStore_PreviewSpray_Params params;
	params.nItemId = nItemId;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIStore.InitSpraysManifest
// (Native, Public)

void UUIScene_UIStore::InitSpraysManifest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIScene_UIStore.InitSpraysManifest"));

	UUIScene_UIStore_InitSpraysManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.TriggerDailyDealWait
// (Native, Public)

void UUIInteractable_DailyDeal::TriggerDailyDealWait()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.TriggerDailyDealWait"));

	UUIInteractable_DailyDeal_TriggerDailyDealWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.OnLeaveStorefront
// (Defined, Public)

void UUIInteractable_DailyDeal::OnLeaveStorefront()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.OnLeaveStorefront"));

	UUIInteractable_DailyDeal_OnLeaveStorefront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.UnregisterLeaveStorefrontDelegate
// (Defined, Event, Public)

void UUIInteractable_DailyDeal::UnregisterLeaveStorefrontDelegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.UnregisterLeaveStorefrontDelegate"));

	UUIInteractable_DailyDeal_UnregisterLeaveStorefrontDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.RegisterLeaveStorefrontDelegate
// (Defined, Event, Public)

void UUIInteractable_DailyDeal::RegisterLeaveStorefrontDelegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.RegisterLeaveStorefrontDelegate"));

	UUIInteractable_DailyDeal_RegisterLeaveStorefrontDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.OnCardArtLoaded
// (Native, Public)

void UUIInteractable_DailyDeal::OnCardArtLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.OnCardArtLoaded"));

	UUIInteractable_DailyDeal_OnCardArtLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.ClearTextures
// (Native, Public)

void UUIInteractable_DailyDeal::ClearTextures()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.ClearTextures"));

	UUIInteractable_DailyDeal_ClearTextures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIInteractable_DailyDeal.InitCardArtManifest
// (Native, Public)

void UUIInteractable_DailyDeal::InitCardArtManifest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIInteractable_DailyDeal.InitCardArtManifest"));

	UUIInteractable_DailyDeal_InitCardArtManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_MeshActorLobbyControl.OnLocalTeamModelUpdated
// (Native, Public)

void UUIComponent_MeshActorLobbyControl::OnLocalTeamModelUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_MeshActorLobbyControl.OnLocalTeamModelUpdated"));

	UUIComponent_MeshActorLobbyControl_OnLocalTeamModelUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_ProgressBarHorizontal.IsValid
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIComponent_ProgressBarHorizontal::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_ProgressBarHorizontal.IsValid"));

	UUIComponent_ProgressBarHorizontal_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent_StoreLoadingScreens.OnCardArtLoaded
// (Native, Public)

void UUIComponent_StoreLoadingScreens::OnCardArtLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_StoreLoadingScreens.OnCardArtLoaded"));

	UUIComponent_StoreLoadingScreens_OnCardArtLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.HandleAnimState
// (Event, HasOptionalParms, Public)
// Parameters:
// int                            nAnimState                     (Parm)
// int                            nAnimGroup                     (OptionalParm, Parm)

void UTgGfxScene::HandleAnimState(int nAnimState, int nAnimGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.HandleAnimState"));

	UTgGfxScene_HandleAnimState_Params params;
	params.nAnimState = nAnimState;
	params.nAnimGroup = nAnimGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.SlamOutAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::SlamOutAnim(class UGFxObject* pObj, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.SlamOutAnim"));

	UTgGfxScene_SlamOutAnim_Params params;
	params.pObj = pObj;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.SlamInAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::SlamInAnim(class UGFxObject* pObj, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.SlamInAnim"));

	UTgGfxScene_SlamInAnim_Params params;
	params.pObj = pObj;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Highlight
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// bool                           bShow                          (Parm)
// float                          fTime                          (OptionalParm, Parm)

void UTgGfxScene::Highlight(class UGFxObject* pObj, bool bShow, float fTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.Highlight"));

	UTgGfxScene_Highlight_Params params;
	params.pObj = pObj;
	params.bShow = bShow;
	params.fTime = fTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.FadeOut
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.FadeOut"));

	UTgGfxScene_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.FadeIn
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.FadeIn"));

	UTgGfxScene_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.ClearQueuedSounds
// (Native, HasOptionalParms, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (OptionalParm, Parm)

void UTgGfxScene::ClearQueuedSounds(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.ClearQueuedSounds"));

	UTgGfxScene_ClearQueuedSounds_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.QueueSound
// (Native, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// float                          fDelay                         (Parm)

void UTgGfxScene::QueueSound(class UAkBaseSoundObject* akSound, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.QueueSound"));

	UTgGfxScene_QueueSound_Params params;
	params.akSound = akSound;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.IsSoundQueued
// (Native, Public)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxScene::IsSoundQueued(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.IsSoundQueued"));

	UTgGfxScene_IsSoundQueued_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.IsAnimatingType
// (Native, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxScene::IsAnimatingType(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.IsAnimatingType"));

	UTgGfxScene_IsAnimatingType_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.IsAnimating
// (Native, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxScene::IsAnimating(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.IsAnimating"));

	UTgGfxScene_IsAnimating_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.EndAnim
// (Native, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)

void UTgGfxScene::EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.EndAnim"));

	UTgGfxScene_EndAnim_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.CancelAnim
// (Native, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::CancelAnim(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.CancelAnim"));

	UTgGfxScene_CancelAnim_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Animate
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)
// bool                           bEndCurrentAnim                (OptionalParm, Parm)

void UTgGfxScene::Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.Animate"));

	UTgGfxScene_Animate_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;
	params.bEndCurrentAnim = bEndCurrentAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Click
// (Final, Defined, Event, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Click(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.Click"));

	UTgGfxScene_Click_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Rollout
// (Final, Defined, Event, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Rollout(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.Rollout"));

	UTgGfxScene_Rollout_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Rollover
// (Final, Defined, Event, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Rollover(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.Rollover"));

	UTgGfxScene_Rollover_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Focus
// (Final, Defined, Event, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Focus(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.Focus"));

	UTgGfxScene_Focus_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.ReceiveEvent
// (Native, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// int                            nEvent                         (Parm)

void UTgGfxScene::ReceiveEvent(class UGFxObject* pObj, int nEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.ReceiveEvent"));

	UTgGfxScene_ReceiveEvent_Params params;
	params.pObj = pObj;
	params.nEvent = nEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.DelegateEvent
// (Public, Delegate)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// int                            nEvent                         (Parm)

void UTgGfxScene::DelegateEvent(class UGFxObject* pObj, int nEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgGfxScene.DelegateEvent"));

	UTgGfxScene_DelegateEvent_Params params;
	params.pObj = pObj;
	params.nEvent = nEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIAccountLinkPopup.SetOSSRecordingEnabled
// (Defined, Event, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void UUIAccountLinkPopup::SetOSSRecordingEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIAccountLinkPopup.SetOSSRecordingEnabled"));

	UUIAccountLinkPopup_SetOSSRecordingEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudChampionSelect.GetBotSpawnName
// (Defined, Event, Public)
// Parameters:
// struct FString                 sValue                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIHudChampionSelect::GetBotSpawnName(const struct FString& sValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudChampionSelect.GetBotSpawnName"));

	UUIHudChampionSelect_GetBotSpawnName_Params params;
	params.sValue = sValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIHudCredits.CreateRewardInfo
// (Final, Native, Public)
// Parameters:
// bool                           bIsCombo                       (Parm)
// struct FUIRewardInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUIRewardInfo UUIHudCredits::CreateRewardInfo(bool bIsCombo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudCredits.CreateRewardInfo"));

	UUIHudCredits_CreateRewardInfo_Params params;
	params.bIsCombo = bIsCombo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIHudKillFeed.RemoveEntry
// (Native, Public)
// Parameters:
// int                            nNdx                           (Parm)

void UUIHudKillFeed::RemoveEntry(int nNdx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudKillFeed.RemoveEntry"));

	UUIHudKillFeed_RemoveEntry_Params params;
	params.nNdx = nNdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudKillFeed.PrepareEntry
// (Final, Native, Public)
// Parameters:
// bool                           bIncludeHHPickupElements       (Parm)
// struct FUIKILLFEED_DATA        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUIKILLFEED_DATA UUIHudKillFeed::PrepareEntry(bool bIncludeHHPickupElements)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudKillFeed.PrepareEntry"));

	UUIHudKillFeed_PrepareEntry_Params params;
	params.bIncludeHHPickupElements = bIncludeHHPickupElements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIHudKillFeed.CreateEntry
// (Final, Native, Public)
// Parameters:
// bool                           bIncludeHHPickupElements       (Parm)
// struct FUIKILLFEED_DATA        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUIKILLFEED_DATA UUIHudKillFeed::CreateEntry(bool bIncludeHHPickupElements)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudKillFeed.CreateEntry"));

	UUIHudKillFeed_CreateEntry_Params params;
	params.bIncludeHHPickupElements = bIncludeHHPickupElements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIHudMinimap.AddNamedArea
// (Native, Public)
// Parameters:
// class ATgNamedPOIActor*        pPOI                           (Parm)

void UUIHudMinimap::AddNamedArea(class ATgNamedPOIActor* pPOI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudMinimap.AddNamedArea"));

	UUIHudMinimap_AddNamedArea_Params params;
	params.pPOI = pPOI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudMap.AddNamedArea
// (Native, Public)
// Parameters:
// class ATgNamedPOIActor*        pPOI                           (Parm)

void UUIHudMap::AddNamedArea(class ATgNamedPOIActor* pPOI)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudMap.AddNamedArea"));

	UUIHudMap_AddNamedArea_Params params;
	params.pPOI = pPOI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudResult.HandleAnimState
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            nAnimState                     (Parm)
// int                            nAnimGroup                     (OptionalParm, Parm)

void UUIHudResult::HandleAnimState(int nAnimState, int nAnimGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudResult.HandleAnimState"));

	UUIHudResult_HandleAnimState_Params params;
	params.nAnimState = nAnimState;
	params.nAnimGroup = nAnimGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudScoreboard.HasCachedScalingCautEffect
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIHudScoreboard::HasCachedScalingCautEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudScoreboard.HasCachedScalingCautEffect"));

	UUIHudScoreboard_HasCachedScalingCautEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIHudTeam.TransitionTeamSidesSizing
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bSmall                         (Parm)
// float                          fAnimTime                      (OptionalParm, Parm)

void UUIHudTeam::TransitionTeamSidesSizing(bool bSmall, float fAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudTeam.TransitionTeamSidesSizing"));

	UUIHudTeam_TransitionTeamSidesSizing_Params params;
	params.bSmall = bSmall;
	params.fAnimTime = fAnimTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudTeam.TransitionStats
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)
// float                          fAnimTime                      (Parm)

void UUIHudTeam::TransitionStats(bool bShow, float fAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudTeam.TransitionStats"));

	UUIHudTeam_TransitionStats_Params params;
	params.bShow = bShow;
	params.fAnimTime = fAnimTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudTeam.TransitionTeamSides
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)
// float                          fAnimTime                      (Parm)

void UUIHudTeam::TransitionTeamSides(bool bShow, float fAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudTeam.TransitionTeamSides"));

	UUIHudTeam_TransitionTeamSides_Params params;
	params.bShow = bShow;
	params.fAnimTime = fAnimTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudTeam.TransitionTeamTop
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)
// float                          fAnimTime                      (Parm)

void UUIHudTeam::TransitionTeamTop(bool bShow, float fAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudTeam.TransitionTeamTop"));

	UUIHudTeam_TransitionTeamTop_Params params;
	params.bShow = bShow;
	params.fAnimTime = fAnimTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudTeam.HandleAnimState
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            nAnimState                     (Parm)
// int                            nAnimGroup                     (OptionalParm, Parm)

void UUIHudTeam::HandleAnimState(int nAnimState, int nAnimGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIHudTeam.HandleAnimState"));

	UUIHudTeam_HandleAnimState_Params params;
	params.nAnimState = nAnimState;
	params.nAnimGroup = nAnimGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIPurchaseGems.GetInventoryItems
// (Defined, Event, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> InventoryItems                 (Parm, OutParm, NeedCtorLink)

void UUIPurchaseGems::STATIC_GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIPurchaseGems.GetInventoryItems"));

	UUIPurchaseGems_GetInventoryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryItems != nullptr)
		*InventoryItems = params.InventoryItems;
}


// Function TgClient.UISimulMedia.UpdateSimulmediaPopupOpportunities
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUISimulMedia::UpdateSimulmediaPopupOpportunities(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UISimulMedia.UpdateSimulmediaPopupOpportunities"));

	UUISimulMedia_UpdateSimulmediaPopupOpportunities_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UISimulMedia.RemoveSimulmediaDelegate
// (Defined, Event, Public)

void UUISimulMedia::RemoveSimulmediaDelegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UISimulMedia.RemoveSimulmediaDelegate"));

	UUISimulMedia_RemoveSimulmediaDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UISimulMedia.SetOnPostAdvanceDelegateSimulmedia
// (Defined, Event, Public)

void UUISimulMedia::SetOnPostAdvanceDelegateSimulmedia()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UISimulMedia.SetOnPostAdvanceDelegateSimulmedia"));

	UUISimulMedia_SetOnPostAdvanceDelegateSimulmedia_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UISimulMedia.OnOpportunityUpdated
// (Native, Public)

void UUISimulMedia::OnOpportunityUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UISimulMedia.OnOpportunityUpdated"));

	UUISimulMedia_OnOpportunityUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_StoreLandingEntryDisplay.OnCardArtLoaded
// (Native, Public)

void UUIComponent_StoreLandingEntryDisplay::OnCardArtLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.UIComponent_StoreLandingEntryDisplay.OnCardArtLoaded"));

	UUIComponent_StoreLandingEntryDisplay_OnCardArtLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgIconGroup.OnManifestLoaded
// (Native, Public)

void UTgIconGroup::OnManifestLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TgClient.TgIconGroup.OnManifestLoaded"));

	UTgIconGroup_OnManifestLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
