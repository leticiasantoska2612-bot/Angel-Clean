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

// Function PlatformCommon.PComBrowserManager.OpenURL
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bShowNavButtons                (OptionalParm, Parm)
// bool                           bSetFocus                      (OptionalParm, Parm)

void UPComBrowserManager::OpenURL(const struct FString& URL, bool bShowNavButtons, bool bSetFocus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComBrowserManager.OpenURL"));

	UPComBrowserManager_OpenURL_Params params;
	params.URL = URL;
	params.bShowNavButtons = bShowNavButtons;
	params.bSetFocus = bSetFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendGameRequest
// (Native, Public)
// Parameters:
// struct FString                 fsRequest                      (Parm, NeedCtorLink)

void UPComGameEngine::SendGameRequest(const struct FString& fsRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SendGameRequest"));

	UPComGameEngine_SendGameRequest_Params params;
	params.fsRequest = fsRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendCtrlRequest
// (Native, Public)
// Parameters:
// struct FString                 fsRequest                      (Parm, NeedCtorLink)

void UPComGameEngine::SendCtrlRequest(const struct FString& fsRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SendCtrlRequest"));

	UPComGameEngine_SendCtrlRequest_Params params;
	params.fsRequest = fsRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendMarshalAll
// (Native, Public)
// Parameters:
// bool                           bLowPriority                   (Parm)

void UPComGameEngine::SendMarshalAll(bool bLowPriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SendMarshalAll"));

	UPComGameEngine_SendMarshalAll_Params params;
	params.bLowPriority = bLowPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendMarshal
// (Native, Public)
// Parameters:
// struct FUniqueNetId            qwPlayerId                     (Parm)
// bool                           bLowPriority                   (Parm)

void UPComGameEngine::SendMarshal(const struct FUniqueNetId& qwPlayerId, bool bLowPriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SendMarshal"));

	UPComGameEngine_SendMarshal_Params params;
	params.qwPlayerId = qwPlayerId;
	params.bLowPriority = bLowPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.ClearMarshal
// (Native, Public)

void UPComGameEngine::ClearMarshal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.ClearMarshal"));

	UPComGameEngine_ClearMarshal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SetFieldString
// (Native, Public)
// Parameters:
// int                            nToken                         (Parm)
// struct FString                 StrValue                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFieldString(int nToken, const struct FString& StrValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SetFieldString"));

	UPComGameEngine_SetFieldString_Params params;
	params.nToken = nToken;
	params.StrValue = StrValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFieldFloat
// (Native, Public)
// Parameters:
// int                            nToken                         (Parm)
// float                          FloatValue                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFieldFloat(int nToken, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SetFieldFloat"));

	UPComGameEngine_SetFieldFloat_Params params;
	params.nToken = nToken;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFieldInt
// (Native, Public)
// Parameters:
// int                            nToken                         (Parm)
// int                            IntValue                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFieldInt(int nToken, int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SetFieldInt"));

	UPComGameEngine_SetFieldInt_Params params;
	params.nToken = nToken;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFunction
// (Native, Public)
// Parameters:
// int                            nFunction                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFunction(int nFunction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameEngine.SetFunction"));

	UPComGameEngine_SetFunction_Params params;
	params.nFunction = nFunction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FString                 InRequest                      (Parm, NeedCtorLink)
// class UWebRequest*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UWebRequest* UPComOpenBroadcaster::DecodeFacebookRTMPUrl(const struct FString& InRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl"));

	UPComOpenBroadcaster_DecodeFacebookRTMPUrl_Params params;
	params.InRequest = InRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.Tick
// (Final, Native, Public)

void UPComOpenBroadcaster::Tick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.Tick"));

	UPComOpenBroadcaster_Tick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
// (Native, Public)

void UPComOpenBroadcaster::ForceStopStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming"));

	UPComOpenBroadcaster_ForceStopStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
// (Native, Public)

void UPComOpenBroadcaster::StopStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.StopStreaming"));

	UPComOpenBroadcaster_StopStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
// (Native, Public)
// Parameters:
// struct FString                 InServer                       (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)

void UPComOpenBroadcaster::StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming"));

	UPComOpenBroadcaster_StartRTMPStreaming_Params params;
	params.InServer = InServer;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
// (Native, Public)

void UPComOpenBroadcaster::StartFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming"));

	UPComOpenBroadcaster_StartFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
// (Native, Public)

void UPComOpenBroadcaster::QueueFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming"));

	UPComOpenBroadcaster_QueueFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
// (Native, Public, HasOutParms)
// Parameters:
// struct FPComOpenBroadcasterSettings InSettings                     (Const, Parm, OutParm)

void UPComOpenBroadcaster::SetStreamSettings(struct FPComOpenBroadcasterSettings* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings"));

	UPComOpenBroadcaster_SetStreamSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSettings != nullptr)
		*InSettings = params.InSettings;
}


// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComOpenBroadcaster::IsStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.IsStreaming"));

	UPComOpenBroadcaster_IsStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
// (Public, Delegate)

void UPComOpenBroadcaster::CloseWebBrowser()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser"));

	UPComOpenBroadcaster_CloseWebBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
// (Public, Delegate)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UPComOpenBroadcaster::OpenWebBrowser(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser"));

	UPComOpenBroadcaster_OpenWebBrowser_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComOpenBroadcaster::IsWebBrowserLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded"));

	UPComOpenBroadcaster_IsWebBrowserLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
// (Public, Delegate)

void UPComOpenBroadcaster::PreloadWebBrowser()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser"));

	UPComOpenBroadcaster_PreloadWebBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.Init
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FString                 OutError                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameViewportClient::Init(struct FString* OutError)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.Init"));

	UPComGameViewportClient_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutError != nullptr)
		*OutError = params.OutError;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
// (Defined, Exec, Public)

void UPComGameViewportClient::StartFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming"));

	UPComGameViewportClient_StartFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
// (Defined, Exec, Public)

void UPComGameViewportClient::StopRTMPStreaming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming"));

	UPComGameViewportClient_StopRTMPStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
// (Defined, Exec, Public)
// Parameters:
// struct FString                 InServer                       (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)

void UPComGameViewportClient::StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming"));

	UPComGameViewportClient_StartRTMPStreaming_Params params;
	params.InServer = InServer;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
// (Defined, Exec, Public, HasDefaults)
// Parameters:
// bool                           bAllowWebcam                   (Parm)
// bool                           bAllowMicrophone               (Parm)
// bool                           bAllowDesktopAudio             (Parm)

void UPComGameViewportClient::SetRTMPSettings(bool bAllowWebcam, bool bAllowMicrophone, bool bAllowDesktopAudio)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.SetRTMPSettings"));

	UPComGameViewportClient_SetRTMPSettings_Params params;
	params.bAllowWebcam = bAllowWebcam;
	params.bAllowMicrophone = bAllowMicrophone;
	params.bAllowDesktopAudio = bAllowDesktopAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion
// (Final, Native, Public)

void UPComGameViewportClient::CheckGameSettingsVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion"));

	UPComGameViewportClient_CheckGameSettingsVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration
// (Native, Public)
// Parameters:
// int                            OldGameSettingsVersion         (Parm)

void UPComGameViewportClient::HandleGameSettingsMigration(int OldGameSettingsVersion)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration"));

	UPComGameViewportClient_HandleGameSettingsMigration_Params params;
	params.OldGameSettingsVersion = OldGameSettingsVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPComGameViewportClient::GetCurrentGameSettingsVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion"));

	UPComGameViewportClient_GetCurrentGameSettingsVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
// (Final, Native, Public)

void UPComGameViewportClient::InitDynamicResolutionScaler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler"));

	UPComGameViewportClient_InitDynamicResolutionScaler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         PComImageDownloadedDelegate    (Parm, NeedCtorLink)

void UPComImageDownloader::SetPComImageDownloadedDelegate(const struct FScriptDelegate& PComImageDownloadedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate"));

	UPComImageDownloader_SetPComImageDownloadedDelegate_Params params;
	params.PComImageDownloadedDelegate = PComImageDownloadedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
// (Public, Delegate)
// Parameters:
// struct FPComImageDownload      CachedEntry                    (Parm, NeedCtorLink)

void UPComImageDownloader::OnPComImageDownloaded(const struct FPComImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded"));

	UPComImageDownloader_OnPComImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComInputLightingEffect::IsLogitechSdkVersionValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid"));

	UPComInputLightingEffect_IsLogitechSdkVersionValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
// (Native, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// float                          CurrentTime                    (Parm)

void UPComInputLightingEffect::SetCurrentTime(const struct FName& InPresetName, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComInputLightingEffect.SetCurrentTime"));

	UPComInputLightingEffect_SetCurrentTime_Params params;
	params.InPresetName = InPresetName;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.StopPreset
// (Native, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void UPComInputLightingEffect::StopPreset(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComInputLightingEffect.StopPreset"));

	UPComInputLightingEffect_StopPreset_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.PlayPreset
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void UPComInputLightingEffect::PlayPreset(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComInputLightingEffect.PlayPreset"));

	UPComInputLightingEffect_PlayPreset_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.DisableSystem
// (Native, Public)

void UPComInputLightingEffect::DisableSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComInputLightingEffect.DisableSystem"));

	UPComInputLightingEffect_DisableSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
// (Native, Public)

void UPComInputLightingEffect::TryEnableSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComInputLightingEffect.TryEnableSystem"));

	UPComInputLightingEffect_TryEnableSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
// (Native, Public)
// Parameters:
// struct FPComImageDownload      CachedEntry                    (Parm, NeedCtorLink)

void UPComJsonHandler::OnImageDownloaded(const struct FPComImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComJsonHandler.OnImageDownloaded"));

	UPComJsonHandler_OnImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit
// (Final, Native, Public)
// Parameters:
// struct FString                 FileNameWithExtension          (Parm, NeedCtorLink)
// struct FString                 FileContents                   (Parm, NeedCtorLink)
// struct FString                 SubfolderName                  (Parm, NeedCtorLink)

void UPComPerformanceCaptureBase::CreateFileAndExit(const struct FString& FileNameWithExtension, const struct FString& FileContents, const struct FString& SubfolderName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit"));

	UPComPerformanceCaptureBase_CreateFileAndExit_Params params;
	params.FileNameWithExtension = FileNameWithExtension;
	params.FileContents = FileContents;
	params.SubfolderName = SubfolderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Const, Parm, NeedCtorLink)
// struct FString                 FileContents                   (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::GetPerfStats(TArray<struct FPComPerformanceCaptureStat> PerfStats, struct FString* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats"));

	UPComPerformanceCaptureBase_GetPerfStats_Params params;
	params.PerfStats = PerfStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 FileContents                   (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::GetStatsToCollect(struct FString* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect"));

	UPComPerformanceCaptureBase_GetStatsToCollect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 MapNameStr                     (Parm, OutParm, NeedCtorLink)
// struct FString                 FormattedDate                  (Parm, OutParm, NeedCtorLink)
// struct FString                 FormattedTime                  (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::GetMapNameAndTime(struct FString* MapNameStr, struct FString* FormattedDate, struct FString* FormattedTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime"));

	UPComPerformanceCaptureBase_GetMapNameAndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapNameStr != nullptr)
		*MapNameStr = params.MapNameStr;
	if (FormattedDate != nullptr)
		*FormattedDate = params.FormattedDate;
	if (FormattedTime != nullptr)
		*FormattedTime = params.FormattedTime;
}


// Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::StopCycleStats(TArray<struct FPComPerformanceCaptureStat>* PerfStats)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats"));

	UPComPerformanceCaptureBase_StopCycleStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerfStats != nullptr)
		*PerfStats = params.PerfStats;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::GetPerformanceData(TArray<struct FPComPerformanceCaptureStat>* PerfStats)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData"));

	UPComPerformanceCaptureBase_GetPerformanceData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerfStats != nullptr)
		*PerfStats = params.PerfStats;
}


// Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify
// (Final, Native, Public)

void UPComPerformanceCaptureBase::EnableStatNotify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify"));

	UPComPerformanceCaptureBase_EnableStatNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats
// (Final, Native, Public)

void UPComPerformanceCaptureBase::EnableNonCycleStats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats"));

	UPComPerformanceCaptureBase_EnableNonCycleStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera
// (Final, Native, Public)
// Parameters:
// class APlayerController*       PlayerController               (Parm)
// class AActor*                  Node                           (Parm)

void UPComPerformanceCaptureBase::MoveCamera(class APlayerController* PlayerController, class AActor* Node)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera"));

	UPComPerformanceCaptureBase_MoveCamera_Params params;
	params.PlayerController = PlayerController;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings
// (Final, Native, Public)

void UPComPerformanceCaptureBase::InitializePerformanceCaptureSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings"));

	UPComPerformanceCaptureBase_InitializePerformanceCaptureSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
// (Final, Native, Public)

void APComPerformanceCaptureGame::DoNextAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction"));

	APComPerformanceCaptureGame_DoNextAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes
// (Final, Native, Public)

void APComPerformanceCaptureGame::CollectNodes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes"));

	APComPerformanceCaptureGame_CollectNodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
// (Defined, Event, Public)

void APComPerformanceCaptureGame::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay"));

	APComPerformanceCaptureGame_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.TestPictureInPicture
// (Defined, Public, HasDefaults)

void UPComPictureInPicture::TestPictureInPicture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.TestPictureInPicture"));

	UPComPictureInPicture_TestPictureInPicture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.DebugRender
// (Final, Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UPComPictureInPicture::DebugRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.DebugRender"));

	UPComPictureInPicture_DebugRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.IsViewDescReady
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPComPipViewDesc        ViewDesc                       (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPictureInPicture::IsViewDescReady(struct FPComPipViewDesc* ViewDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.IsViewDescReady"));

	UPComPictureInPicture_IsViewDescReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewDesc != nullptr)
		*ViewDesc = params.ViewDesc;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPicture.IsViewReady
// (Final, Native, Public)
// Parameters:
// struct FName                   ViewName                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPictureInPicture::IsViewReady(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.IsViewReady"));

	UPComPictureInPicture_IsViewReady_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPicture.RequestRender
// (Final, Native, Public)
// Parameters:
// struct FName                   ViewName                       (Parm)

void UPComPictureInPicture::RequestRender(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.RequestRender"));

	UPComPictureInPicture_RequestRender_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.RemoveView
// (Final, Native, Public)
// Parameters:
// struct FName                   ViewName                       (Parm)

void UPComPictureInPicture::RemoveView(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.RemoveView"));

	UPComPictureInPicture_RemoveView_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.AddView
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPComPipViewDesc        InViewDesc                     (Const, Parm, OutParm, NeedCtorLink)

void UPComPictureInPicture::AddView(struct FPComPipViewDesc* InViewDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.AddView"));

	UPComPictureInPicture_AddView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InViewDesc != nullptr)
		*InViewDesc = params.InViewDesc;
}


// Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget
// (Final, Native, Public)

void UPComPictureInPicture::InitializeRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget"));

	UPComPictureInPicture_InitializeRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetSkyColor
// (Native, Public, HasOutParms)
// Parameters:
// struct FColor                  InSkyColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetSkyColor(struct FColor* InSkyColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetSkyColor"));

	UPComPictureInPictureScene_SetSkyColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSkyColor != nullptr)
		*InSkyColor = params.InSkyColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness
// (Native, Public)
// Parameters:
// float                          InSkyBrightness                (Parm)

void UPComPictureInPictureScene::SetSkyBrightness(float InSkyBrightness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness"));

	UPComPictureInPictureScene_SetSkyBrightness_Params params;
	params.InSkyBrightness = InSkyBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor
// (Native, Public, HasOutParms)
// Parameters:
// struct FColor                  LightColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetBounceLightColor(struct FColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor"));

	UPComPictureInPictureScene_SetBounceLightColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness
// (Native, Public)
// Parameters:
// float                          InLightBrightness              (Parm)

void UPComPictureInPictureScene::SetBounceLightBrightness(float InLightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness"));

	UPComPictureInPictureScene_SetBounceLightBrightness_Params params;
	params.InLightBrightness = InLightBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection
// (Native, Public, HasOutParms)
// Parameters:
// struct FRotator                InLightDir                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetBounceLightDirection(struct FRotator* InLightDir)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection"));

	UPComPictureInPictureScene_SetBounceLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLightDir != nullptr)
		*InLightDir = params.InLightDir;
}


// Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bInEnableBoundLight            (Parm)
// float                          InBounceLightBrightness        (OptionalParm, Parm)
// struct FRotator                BounceLightDir                 (OptionalParm, Parm)

void UPComPictureInPictureScene::EnableDirectionalBounceLight(bool bInEnableBoundLight, float InBounceLightBrightness, const struct FRotator& BounceLightDir)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight"));

	UPComPictureInPictureScene_EnableDirectionalBounceLight_Params params;
	params.bInEnableBoundLight = bInEnableBoundLight;
	params.InBounceLightBrightness = InBounceLightBrightness;
	params.BounceLightDir = BounceLightDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightColor
// (Native, Public, HasOutParms)
// Parameters:
// struct FColor                  LightColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetLightColor(struct FColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetLightColor"));

	UPComPictureInPictureScene_SetLightColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness
// (Native, Public)
// Parameters:
// float                          InLightBrightness              (Parm)

void UPComPictureInPictureScene::SetLightBrightness(float InLightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness"));

	UPComPictureInPictureScene_SetLightBrightness_Params params;
	params.InLightBrightness = InLightBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightDirection
// (Native, Public, HasOutParms)
// Parameters:
// struct FRotator                InLightDir                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetLightDirection(struct FRotator* InLightDir)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.SetLightDirection"));

	UPComPictureInPictureScene_SetLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLightDir != nullptr)
		*InLightDir = params.InLightDir;
}


// Function PlatformCommon.PComPictureInPictureScene.GetLightDirection
// (Native, Public)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UPComPictureInPictureScene::GetLightDirection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.GetLightDirection"));

	UPComPictureInPictureScene_GetLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPictureScene.RemoveComponent
// (Native, Public)
// Parameters:
// class UActorComponent*         Component                      (Parm, EditInline)

void UPComPictureInPictureScene::RemoveComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.RemoveComponent"));

	UPComPictureInPictureScene_RemoveComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.AddComponent
// (Native, Public, HasOutParms)
// Parameters:
// class UActorComponent*         Component                      (Parm, EditInline)
// struct FMatrix                 LocalToWorld                   (Const, Parm, OutParm)

void UPComPictureInPictureScene::AddComponent(class UActorComponent* Component, struct FMatrix* LocalToWorld)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.AddComponent"));

	UPComPictureInPictureScene_AddComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalToWorld != nullptr)
		*LocalToWorld = params.LocalToWorld;
}


// Function PlatformCommon.PComPictureInPictureScene.InitScene
// (Native, Public)

void UPComPictureInPictureScene::InitScene()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPictureInPictureScene.InitScene"));

	UPComPictureInPictureScene_InitScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
// (Defined, Exec, Event, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void APComPlayerController::PlayTestInputLightingEffect(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect"));

	APComPlayerController_PlayTestInputLightingEffect_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
// (Native, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// float                          InCurrentTime                  (Parm)

void APComPlayerController::SetCurrentTimeForInputLightingEffect(const struct FName& InPresetName, float InCurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect"));

	APComPlayerController_SetCurrentTimeForInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.InCurrentTime = InCurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
// (Native, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void APComPlayerController::StopInputLightingEffect(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.StopInputLightingEffect"));

	APComPlayerController_StopInputLightingEffect_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void APComPlayerController::PlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PlayInputLightingEffect"));

	APComPlayerController_PlayInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
// (Defined, Net, NetReliable, Simulated, Event, HasOptionalParms, Public, NetClient)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void APComPlayerController::ClientPlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect"));

	APComPlayerController_ClientPlayInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TryAutoLogin
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::TryAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.TryAutoLogin"));

	APComPlayerController_TryAutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
// (Defined, Event, Public)

void APComPlayerController::TryAutoLoginDelayed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed"));

	APComPlayerController_TryAutoLoginDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
// (Defined, Simulated, Event, Public)

void APComPlayerController::SetAsNewPartyHost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.SetAsNewPartyHost"));

	APComPlayerController_SetAsNewPartyHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bAllowed                       (Parm)

void APComPlayerController::ToggleGameSessionInvitesAllowed(bool bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed"));

	APComPlayerController_ToggleGameSessionInvitesAllowed_Params params;
	params.bAllowed = bAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bAllowed                       (Parm)

void APComPlayerController::TogglePartySessionInvitesAllowed(bool bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed"));

	APComPlayerController_TogglePartySessionInvitesAllowed_Params params;
	params.bAllowed = bAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
// (Defined, Simulated, Event, Public)

void APComPlayerController::UpdateMCTSWithNewPartyInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo"));

	APComPlayerController_UpdateMCTSWithNewPartyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsHostOfParty
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsHostOfParty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.IsHostOfParty"));

	APComPlayerController_IsHostOfParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FOnlineFriend>   PeoplePicked                   (Parm, NeedCtorLink)

void APComPlayerController::OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete"));

	APComPlayerController_OnPeoplePickerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PeoplePicked = PeoplePicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnReadFriendsListComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete"));

	APComPlayerController_OnReadFriendsListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
// (Defined, Simulated, Exec, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ShowPeoplePickerUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI"));

	APComPlayerController_ShowPeoplePickerUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
// (Defined, Public)

void APComPlayerController::JoinCustomMatchForInviteDelay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay"));

	APComPlayerController_JoinCustomMatchForInviteDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
// (Defined, Event, Public)

void APComPlayerController::JoinCustomMatchFromInvite()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite"));

	APComPlayerController_JoinCustomMatchFromInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnJoinSessionForReceivedInviteComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete"));

	APComPlayerController_OnJoinSessionForReceivedInviteComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnPrivilegeCheckForGameSessionJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin"));

	APComPlayerController_OnPrivilegeCheckForGameSessionJoin_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnPrivilegeLevelCheckedCompleteForPartyJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin"));

	APComPlayerController_OnPrivilegeLevelCheckedCompleteForPartyJoin_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnGameDestroyedForPartyJoin(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin"));

	APComPlayerController_OnGameDestroyedForPartyJoin_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnAlternatePrivilegeLevelCheckedComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete"));

	APComPlayerController_OnAlternatePrivilegeLevelCheckedComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void APComPlayerController::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnGameInviteAccepted"));

	APComPlayerController_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function PlatformCommon.PComPlayerController.JoinPartySession
// (Defined, Event, Public)
// Parameters:
// unsigned char                  PartySessionGuid               (Parm)

void APComPlayerController::JoinPartySession(unsigned char PartySessionGuid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.JoinPartySession"));

	APComPlayerController_JoinPartySession_Params params;
	params.PartySessionGuid = PartySessionGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnPartySessionDestroyed(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed"));

	APComPlayerController_OnPartySessionDestroyed_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DestroyPartySession
// (Defined, Simulated, Exec, Event, Public)

void APComPlayerController::DestroyPartySession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.DestroyPartySession"));

	APComPlayerController_DestroyPartySession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
// (Defined, Event, Public)
// Parameters:
// struct FUniqueNetId            InPlayerId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::InvitePlayerToParty(const struct FUniqueNetId& InPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.InvitePlayerToParty"));

	APComPlayerController_InvitePlayerToParty_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
// (Defined, Event, Public, HasDefaults)
// Parameters:
// struct FString                 InPlayerName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::InvitePlayerToPartyByName(const struct FString& InPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName"));

	APComPlayerController_InvitePlayerToPartyByName_Params params;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bSuccessful                    (Parm)

void APComPlayerController::OnCreatePartySessionComplete(const struct FName& SessionName, bool bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete"));

	APComPlayerController_OnCreatePartySessionComplete_Params params;
	params.SessionName = SessionName;
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CreatePartySession
// (Defined, Simulated, Exec, Event, Public)

void APComPlayerController::CreatePartySession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CreatePartySession"));

	APComPlayerController_CreatePartySession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
// (Defined, Event, Public)
// Parameters:
// TArray<struct FUniqueNetId>    EnemyIds                       (Parm, NeedCtorLink)

void APComPlayerController::UnregisterP2PEnemiesForCustomMatch(TArray<struct FUniqueNetId> EnemyIds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch"));

	APComPlayerController_UnregisterP2PEnemiesForCustomMatch_Params params;
	params.EnemyIds = EnemyIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResult> Results                        (Parm, NeedCtorLink)

void APComPlayerController::OnGetVoicePermissionsForUsersComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete"));

	APComPlayerController_OnGetVoicePermissionsForUsersComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
// (Defined, Simulated, Public)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnGetSessionMemberInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete"));

	APComPlayerController_OnGetSessionMemberInfoComplete_Params params;
	params.SessionListInfo = SessionListInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
// (Defined, Simulated, Public)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnGetUserConnectionInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete"));

	APComPlayerController_OnGetUserConnectionInfoComplete_Params params;
	params.SessionListInfo = SessionListInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
// (Simulated, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> APComPlayerController::GetUserNamesForPS4P2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections"));

	APComPlayerController_GetUserNamesForPS4P2PConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
// (Simulated, Native, Public)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)

void APComPlayerController::CloseConnectionsToInvalidPeers(TArray<struct FSessionMemberInfo> SessionListInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers"));

	APComPlayerController_CloseConnectionsToInvalidPeers_Params params;
	params.SessionListInfo = SessionListInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.EstablishPeers
// (Defined, Simulated, Exec, Event, Public)

void APComPlayerController::EstablishPeers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.EstablishPeers"));

	APComPlayerController_EstablishPeers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.LostP2PConnection
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)

void APComPlayerController::LostP2PConnection(const struct FUniqueNetId& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.LostP2PConnection"));

	APComPlayerController_LostP2PConnection_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            ControllerId                   (Parm, OutParm)

void APComPlayerController::GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId"));

	APComPlayerController_GetControllerIdFromNetId_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;
}


// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
// (Defined, Event, Public)

void APComPlayerController::PairLoggedInUserAndCurrentController()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController"));

	APComPlayerController_PairLoggedInUserAndCurrentController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsInGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.IsInGame"));

	APComPlayerController_IsInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.IsPackageInstalled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsPackageInstalled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.IsPackageInstalled"));

	APComPlayerController_IsPackageInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
// (Defined, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FSessionUpdateInfo      SessionChanges                 (Parm, NeedCtorLink)

void APComPlayerController::OnMultiplayerSessionChange(const struct FName& SessionName, const struct FSessionUpdateInfo& SessionChanges)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange"));

	APComPlayerController_OnMultiplayerSessionChange_Params params;
	params.SessionName = SessionName;
	params.SessionChanges = SessionChanges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CheckFilterText
// (Defined, Event, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CheckFilterText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CheckFilterText"));

	APComPlayerController_CheckFilterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds
// (Defined, Event, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds"));

	APComPlayerController_CanCommunicateTextWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CanCommunicateText
// (Defined, Event, HasOptionalParms, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CanCommunicateText"));

	APComPlayerController_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnTextFilterApplied
// (Native, Public)
// Parameters:
// struct FString                 OriginalText                   (Parm, NeedCtorLink)
// struct FString                 FilteredText                   (Parm, NeedCtorLink)
// bool                           bCensorCompletely              (Parm)

void APComPlayerController::OnTextFilterApplied(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnTextFilterApplied"));

	APComPlayerController_OnTextFilterApplied_Params params;
	params.OriginalText = OriginalText;
	params.FilteredText = FilteredText;
	params.bCensorCompletely = bCensorCompletely;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bForceRequest                  (OptionalParm, Parm)

void APComPlayerController::RequestUpdateFriendsList(bool bForceRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList"));

	APComPlayerController_RequestUpdateFriendsList_Params params;
	params.bForceRequest = bForceRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends
// (Native, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::UpdateMctsWithFriends(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends"));

	APComPlayerController_UpdateMctsWithFriends_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse
// (Native, Public)
// Parameters:
// bool                           bAuthorized                    (Parm)
// struct FQWord                  qwOrderId                      (Parm)

void APComPlayerController::OnContentPurchaseResponse(bool bAuthorized, const struct FQWord& qwOrderId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse"));

	APComPlayerController_OnContentPurchaseResponse_Params params;
	params.bAuthorized = bAuthorized;
	params.qwOrderId = qwOrderId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void APComPlayerController::OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds"));

	APComPlayerController_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked"));

	APComPlayerController_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
// (Defined, Event, Public)

void APComPlayerController::ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ClearOnlineDelegates"));

	APComPlayerController_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
// (Defined, Event, Public)

void APComPlayerController::RegisterOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates"));

	APComPlayerController_RegisterOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
// (Defined, Net, NetReliable, Simulated, Public, NetClient)

void APComPlayerController::ClientRestablishP2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections"));

	APComPlayerController_ClientRestablishP2PConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
// (Defined, Net, NetReliable, Public, NetServer)

void APComPlayerController::ServerReEstablishP2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections"));

	APComPlayerController_ServerReEstablishP2PConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsReconnect
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsReconnect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.IsReconnect"));

	APComPlayerController_IsReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
// (Defined, Simulated, Event, Public)

void APComPlayerController::RestablishVoiceForReconnect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect"));

	APComPlayerController_RestablishVoiceForReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnJoinOnlineGameCompleteForReceivedSessionInfo(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo"));

	APComPlayerController_OnJoinOnlineGameCompleteForReceivedSessionInfo_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
// (Defined, Net, NetReliable, Simulated, Event, Public, NetClient)
// Parameters:
// unsigned char                  PlatformSpecificInfo           (Parm)
// TEnumAsByte<EConsoleType>      ConsoleType                    (Parm)

void APComPlayerController::ReceiveSessionInfo(unsigned char PlatformSpecificInfo, TEnumAsByte<EConsoleType> ConsoleType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ReceiveSessionInfo"));

	APComPlayerController_ReceiveSessionInfo_Params params;
	params.PlatformSpecificInfo = PlatformSpecificInfo;
	params.ConsoleType = ConsoleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete"));

	APComPlayerController_OnCreateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
// (Defined, Exec, Event, HasOptionalParms, Public, HasOutParms)
// Parameters:
// bool                           bCustomMatch                   (Parm)
// int                            MaxPlayers                     (Parm)
// bool                           bPrivate                       (Parm)
// TArray<struct FUniqueNetId>    ReservedMembers                (OptionalParm, Parm, OutParm, NeedCtorLink)

void APComPlayerController::ChooseThisControllerForSessionScout(bool bCustomMatch, int MaxPlayers, bool bPrivate, TArray<struct FUniqueNetId>* ReservedMembers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout"));

	APComPlayerController_ChooseThisControllerForSessionScout_Params params;
	params.bCustomMatch = bCustomMatch;
	params.MaxPlayers = MaxPlayers;
	params.bPrivate = bPrivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReservedMembers != nullptr)
		*ReservedMembers = params.ReservedMembers;
}


// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
// (Defined, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete"));

	APComPlayerController_OnDestroyOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
// (Defined, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete"));

	APComPlayerController_OnEndOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
// (Defined, Public)

void APComPlayerController::FinishQuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu"));

	APComPlayerController_FinishQuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
// (Defined, Public)
// Parameters:
// bool                           bWasFromMenu                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CleanupOnlineSubsystemSession(bool bWasFromMenu)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession"));

	APComPlayerController_CleanupOnlineSubsystemSession_Params params;
	params.bWasFromMenu = bWasFromMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.QuitToMainMenu
// (Defined, Simulated, Event, Public)

void APComPlayerController::QuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.QuitToMainMenu"));

	APComPlayerController_QuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession
// (Defined, Net, NetReliable, Event, Public, NetServer)
// Parameters:
// class APawn*                   P                              (Parm)

void APComPlayerController::ServerAcknowledgePossession(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession"));

	APComPlayerController_ServerAcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.AcknowledgePossession
// (Defined, Public)
// Parameters:
// class APawn*                   P                              (Parm)

void APComPlayerController::AcknowledgePossession(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.AcknowledgePossession"));

	APComPlayerController_AcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead
// (Native, Public)

void APComPlayerController::OnAllMarketplaceProductDetailsRead()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead"));

	APComPlayerController_OnAllMarketplaceProductDetailsRead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
// (Native, Public)

void APComPlayerController::LeaveMatchQueue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.LeaveMatchQueue"));

	APComPlayerController_LeaveMatchQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdatePartyUI
// (Native, Public)

void APComPlayerController::UpdatePartyUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdatePartyUI"));

	APComPlayerController_UpdatePartyUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
// (Native, Public)

void APComPlayerController::TryOpenPartyUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.TryOpenPartyUI"));

	APComPlayerController_TryOpenPartyUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
// (Native, Public)

void APComPlayerController::ShowCustomGameDisallowedPopup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup"));

	APComPlayerController_ShowCustomGameDisallowedPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
// (Native, Public)

void APComPlayerController::ShowPackageNotInstalledForPartyInviteWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning"));

	APComPlayerController_ShowPackageNotInstalledForPartyInviteWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
// (Native, Public)

void APComPlayerController::ShowPartyNoLongerAvailableWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning"));

	APComPlayerController_ShowPartyNoLongerAvailableWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
// (Native, Public)
// Parameters:
// bool                           bPartySession                  (Parm)

void APComPlayerController::ShowPartyFullWarning(bool bPartySession)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowPartyFullWarning"));

	APComPlayerController_ShowPartyFullWarning_Params params;
	params.bPartySession = bPartySession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
// (Native, Public)

void APComPlayerController::ShowUnableToReadFriendsListWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning"));

	APComPlayerController_ShowUnableToReadFriendsListWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
// (Native, Public)

void APComPlayerController::ShowNoFriendsForPartyInviteWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning"));

	APComPlayerController_ShowNoFriendsForPartyInviteWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
// (Native, Public)

void APComPlayerController::ShowControllerDisconnectedWarning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning"));

	APComPlayerController_ShowControllerDisconnectedWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ShouldPartySessionsBePublic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic"));

	APComPlayerController_ShouldPartySessionsBePublic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession
// (Native, Public)

void APComPlayerController::CreateOrJoinPartySession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession"));

	APComPlayerController_CreateOrJoinPartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ArePartySessionInvitesAllowed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed"));

	APComPlayerController_ArePartySessionInvitesAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
// (Simulated, Native, Public)
// Parameters:
// struct FString                 SessionGuid                    (Parm, NeedCtorLink)
// bool                           bIsHost                        (Parm)

void APComPlayerController::UpdateMCTSSession(const struct FString& SessionGuid, bool bIsHost)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdateMCTSSession"));

	APComPlayerController_UpdateMCTSSession_Params params;
	params.SessionGuid = SessionGuid;
	params.bIsHost = bIsHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
// (Native, Public)
// Parameters:
// bool                           bBlockInput                    (Parm)

void APComPlayerController::BlockPartySceneInput(bool bBlockInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.BlockPartySceneInput"));

	APComPlayerController_BlockPartySceneInput_Params params;
	params.bBlockInput = bBlockInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FOnlineFriend>   FriendList                     (Parm, OutParm, NeedCtorLink)
// TArray<struct FSessionMemberInfo> SessionMemberList              (Parm, OutParm, NeedCtorLink)

void APComPlayerController::FilterFriendListForPeoplePicker(TArray<struct FOnlineFriend>* FriendList, TArray<struct FSessionMemberInfo>* SessionMemberList)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker"));

	APComPlayerController_FilterFriendListForPeoplePicker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendList != nullptr)
		*FriendList = params.FriendList;
	if (SessionMemberList != nullptr)
		*SessionMemberList = params.SessionMemberList;
}


// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
// (Simulated, Native, Public)

void APComPlayerController::ShowPrivilegeMessageAndDeclineInvite()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite"));

	APComPlayerController_ShowPrivilegeMessageAndDeclineInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ConnectToPeers
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, OutParm, NeedCtorLink)

void APComPlayerController::ConnectToPeers(TArray<struct FSessionMemberInfo>* SessionListInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ConnectToPeers"));

	APComPlayerController_ConnectToPeers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionListInfo != nullptr)
		*SessionListInfo = params.SessionListInfo;
}


// Function PlatformCommon.PComPlayerController.TryJoinSession
// (Native, Public)

void APComPlayerController::TryJoinSession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.TryJoinSession"));

	APComPlayerController_TryJoinSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
// (Native, Public)
// Parameters:
// unsigned char                  PlatformSpecificInfo           (Parm)

void APComPlayerController::MCTSSetSessionId(unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.MCTSSetSessionId"));

	APComPlayerController_MCTSSetSessionId_Params params;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsInCustomMatch
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsInCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.IsInCustomMatch"));

	APComPlayerController_IsInCustomMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.SendSessionEnd
// (Native, Public)

void APComPlayerController::SendSessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.SendSessionEnd"));

	APComPlayerController_SendSessionEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SendSessionStart
// (Native, Public)
// Parameters:
// int                            GameModeId                     (Parm)

void APComPlayerController::SendSessionStart(int GameModeId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.SendSessionStart"));

	APComPlayerController_SendSessionStart_Params params;
	params.GameModeId = GameModeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
// (Native, Public)
// Parameters:
// struct FUniqueNetId            RemoteNetId                    (Parm)
// bool                           bIsTalking                     (Parm)

void APComPlayerController::OnRemoteTalkerStatusChange(const struct FUniqueNetId& RemoteNetId, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange"));

	APComPlayerController_OnRemoteTalkerStatusChange_Params params;
	params.RemoteNetId = RemoteNetId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 CurrentUser                    (Parm, NeedCtorLink)
// struct FString                 LoggedInUser                   (Parm, NeedCtorLink)

void APComPlayerController::OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnCurrentUserChanged"));

	APComPlayerController_OnCurrentUserChanged_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CurrentUser = CurrentUser;
	params.LoggedInUser = LoggedInUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
// (Native, Public)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void APComPlayerController::OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnConnectionStatusChange"));

	APComPlayerController_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void APComPlayerController::OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnLoginStatusChange"));

	APComPlayerController_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
// (Defined, Simulated, Public)

void APComPlayerController::OnMarketplaceItemPurchased()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased"));

	APComPlayerController_OnMarketplaceItemPurchased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
// (Defined, Event, Public, HasOutParms)
// Parameters:
// TArray<struct FOnlineContent>  ContentList                    (Parm, OutParm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> APComPlayerController::GetPlayerDLCLicenses(TArray<struct FOnlineContent>* ContentList)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses"));

	APComPlayerController_GetPlayerDLCLicenses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentList != nullptr)
		*ContentList = params.ContentList;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
// (Defined, Public)

void APComPlayerController::OnReadPlayerMarketplaceInventoryComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete"));

	APComPlayerController_OnReadPlayerMarketplaceInventoryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void APComPlayerController::PlayerReceivedURLTokenAndSignatureForPortalInventory(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory"));

	APComPlayerController_PlayerReceivedURLTokenAndSignatureForPortalInventory_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken
// (Defined, Event, Public)

void APComPlayerController::ProcessPortalInventoryWithAuthToken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken"));

	APComPlayerController_ProcessPortalInventoryWithAuthToken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
// (Defined, Exec, Public)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::DumpStoreCatalog(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.DumpStoreCatalog"));

	APComPlayerController_DumpStoreCatalog_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpConumables
// (Defined, Exec, Public)

void APComPlayerController::DumpConumables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.DumpConumables"));

	APComPlayerController_DumpConumables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpDurables
// (Defined, Exec, Public)

void APComPlayerController::DumpDurables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.DumpDurables"));

	APComPlayerController_DumpDurables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpGameProducts
// (Defined, Exec, Public)

void APComPlayerController::DumpGameProducts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.DumpGameProducts"));

	APComPlayerController_DumpGameProducts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
// (Defined, Public)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::OnReadAdditionalProductDetailsComplete(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete"));

	APComPlayerController_OnReadAdditionalProductDetailsComplete_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FMarketplaceProductDetails> ProductList                    (Parm, OutParm, NeedCtorLink)

void APComPlayerController::OnReadDetailsForProductIdListComplete(TArray<struct FMarketplaceProductDetails>* ProductList)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete"));

	APComPlayerController_OnReadDetailsForProductIdListComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProductList != nullptr)
		*ProductList = params.ProductList;
}


// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
// (Defined, Public)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::OnReadAvailableProductsComplete(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete"));

	APComPlayerController_OnReadAvailableProductsComplete_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RefreshStoreData
// (Defined, Event, Public)

void APComPlayerController::RefreshStoreData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.RefreshStoreData"));

	APComPlayerController_RefreshStoreData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsLoggedIntoOSS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS"));

	APComPlayerController_IsLoggedIntoOSS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bForceLoginAfter               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ShowConsoleLoginUI(int ControllerId, bool bForceLoginAfter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI"));

	APComPlayerController_ShowConsoleLoginUI_Params params;
	params.ControllerId = ControllerId;
	params.bForceLoginAfter = bForceLoginAfter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad
// (Defined, Event, Public)

void APComPlayerController::CacheLoggedInGamepad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad"));

	APComPlayerController_CacheLoggedInGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin
// (Native, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void APComPlayerController::PlayerReceivedTokenForLogin(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin"));

	APComPlayerController_PlayerReceivedTokenForLogin_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void APComPlayerController::PlayerReceivedURLTokenAndSignatureForLogin(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin"));

	APComPlayerController_PlayerReceivedURLTokenAndSignatureForLogin_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin
// (Defined, Event, Public)

void APComPlayerController::GetOSSTokenAndSignatureForLogin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin"));

	APComPlayerController_GetOSSTokenAndSignatureForLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetTokenURL
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APComPlayerController::GetTokenURL()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.GetTokenURL"));

	APComPlayerController_GetTokenURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.BeginLogin
// (Exec, Native, Public)

void APComPlayerController::BeginLogin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.BeginLogin"));

	APComPlayerController_BeginLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> Items                          (Parm, OutParm, NeedCtorLink)

void APComPlayerController::PlayerRetrievedOSSInventory(TArray<struct FMarketplaceInventoryItem>* Items)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory"));

	APComPlayerController_PlayerRetrievedOSSInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession
// (Native, Public)

void APComPlayerController::ValidateCreatedPartySession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession"));

	APComPlayerController_ValidateCreatedPartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateClientAuthToken
// (Native, Public)
// Parameters:
// struct FString                 Token                          (Parm, NeedCtorLink)

void APComPlayerController::UpdateClientAuthToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdateClientAuthToken"));

	APComPlayerController_UpdateClientAuthToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateClientToken
// (Native, Public)
// Parameters:
// struct FString                 Token                          (Parm, NeedCtorLink)

void APComPlayerController::UpdateClientToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdateClientToken"));

	APComPlayerController_UpdateClientToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeJoin
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nMatchId                       (Parm)
// struct FString                 fsName                         (Parm, NeedCtorLink)
// struct FString                 fsPassword                     (OptionalParm, Parm, NeedCtorLink)

void APComPlayerController::ChallengeJoin(int nMatchId, const struct FString& fsName, const struct FString& fsPassword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ChallengeJoin"));

	APComPlayerController_ChallengeJoin_Params params;
	params.nMatchId = nMatchId;
	params.fsName = fsName;
	params.fsPassword = fsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeCreate
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nQueue                         (Parm)
// struct FString                 fsName                         (Parm, NeedCtorLink)
// struct FString                 fsPassword                     (OptionalParm, Parm, NeedCtorLink)

void APComPlayerController::ChallengeCreate(int nQueue, const struct FString& fsName, const struct FString& fsPassword)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ChallengeCreate"));

	APComPlayerController_ChallengeCreate_Params params;
	params.nQueue = nQueue;
	params.fsName = fsName;
	params.fsPassword = fsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateDatacenterPing
// (Native, Public)

void APComPlayerController::UpdateDatacenterPing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.UpdateDatacenterPing"));

	APComPlayerController_UpdateDatacenterPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TestVideoPlayer
// (Defined, Exec, Public)

void APComPlayerController::TestVideoPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.TestVideoPlayer"));

	APComPlayerController_TestVideoPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.AddCheats
// (Defined, Simulated, Public)

void APComPlayerController::AddCheats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.AddCheats"));

	APComPlayerController_AddCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientAddCheats
// (Native, Public)

void APComPlayerController::ClientAddCheats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerController.ClientAddCheats"));

	APComPlayerController_ClientAddCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.Jump
// (Defined, Exec, Public)

void UPComPlayerInput::Jump()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.Jump"));

	UPComPlayerInput_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindCommand
// (Defined, Exec, HasOptionalParms, Public, HasDefaults)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlternate                     (OptionalParm, Parm)

void UPComPlayerInput::UnbindCommand(const struct FString& Command, bool bGamepad, int nAlternate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.UnbindCommand"));

	UPComPlayerInput_UnbindCommand_Params params;
	params.Command = Command;
	params.bGamepad = bGamepad;
	params.nAlternate = nAlternate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
// (Defined, Exec, Event, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UPComPlayerInput::UnbindCommandAll(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.UnbindCommandAll"));

	UPComPlayerInput_UnbindCommandAll_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindKey
// (Defined, Exec, Public, HasOutParms)
// Parameters:
// struct FName                   BindName                       (Const, Parm, OutParm)

void UPComPlayerInput::UnbindKey(struct FName* BindName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.UnbindKey"));

	UPComPlayerInput_UnbindKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BindName != nullptr)
		*BindName = params.BindName;
}


// Function PlatformCommon.PComPlayerInput.SetCommandBind
// (Defined, Event, Public, HasDefaults)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlternate                     (Parm)
// struct FString                 ExtendedBinding                (Const, Parm, NeedCtorLink)

void UPComPlayerInput::SetCommandBind(const struct FString& Command, bool bGamepad, int nAlternate, const struct FString& ExtendedBinding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.SetCommandBind"));

	UPComPlayerInput_SetCommandBind_Params params;
	params.Command = Command;
	params.bGamepad = bGamepad;
	params.nAlternate = nAlternate;
	params.ExtendedBinding = ExtendedBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetBindExtended
// (Defined, Exec, Public, HasDefaults)
// Parameters:
// struct FString                 ExtendedBinding                (Const, Parm, NeedCtorLink)
// struct FString                 Command                        (Parm, NeedCtorLink)

void UPComPlayerInput::SetBindExtended(const struct FString& ExtendedBinding, const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.SetBindExtended"));

	UPComPlayerInput_SetBindExtended_Params params;
	params.ExtendedBinding = ExtendedBinding;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
// (Defined, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComPlayerInput::GetDisplayLookSensitivityY()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY"));

	UPComPlayerInput_GetDisplayLookSensitivityY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
// (Defined, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComPlayerInput::GetDisplayLookSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity"));

	UPComPlayerInput_GetDisplayLookSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.SetAimAcceleration
// (Defined, Exec, Public)
// Parameters:
// float                          fLookAccel                     (Parm)

void UPComPlayerInput::SetAimAcceleration(float fLookAccel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.SetAimAcceleration"));

	UPComPlayerInput_SetAimAcceleration_Params params;
	params.fLookAccel = fLookAccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          fSensitivity                   (Parm)
// float                          fSensitivityY                  (OptionalParm, Parm)

void UPComPlayerInput::SetLookSensitivity(float fSensitivity, float fSensitivityY)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.SetLookSensitivity"));

	UPComPlayerInput_SetLookSensitivity_Params params;
	params.fSensitivity = fSensitivity;
	params.fSensitivityY = fSensitivityY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetMouseInput
// (Defined, Exec, Public)
// Parameters:
// bool                           bInvert                        (Parm)
// bool                           bSmooth                        (Parm)
// float                          fSensitivity                   (Parm)

void UPComPlayerInput::SetMouseInput(bool bInvert, bool bSmooth, float fSensitivity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.SetMouseInput"));

	UPComPlayerInput_SetMouseInput_Params params;
	params.bInvert = bInvert;
	params.bSmooth = bSmooth;
	params.fSensitivity = fSensitivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetDirty
// (Defined, Simulated, Public)

void UPComPlayerInput::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.SetDirty"));

	UPComPlayerInput_SetDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
// (Native, Public)

void UPComPlayerInput::ReadMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.ReadMouseSettings"));

	UPComPlayerInput_ReadMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
// (Native, Public)

void UPComPlayerInput::StoreMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.StoreMouseSettings"));

	UPComPlayerInput_StoreMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   Key                            (Const, Parm, OutParm)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::GetKeybindWithCurrentModifiers(struct FName* Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers"));

	UPComPlayerInput_GetKeybindWithCurrentModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBind
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FName                   Key                            (Const, Parm, OutParm)
// struct FKeyBind                ModifierKeyBind                (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComPlayerInput::GetBind(struct FName* Key, struct FKeyBind* ModifierKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.GetBind"));

	UPComPlayerInput_GetBind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (ModifierKeyBind != nullptr)
		*ModifierKeyBind = params.ModifierKeyBind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
// (Native, Public, HasOutParms)
// Parameters:
// struct FKeyBind                Bind                           (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComPlayerInput::KeybindToExtendedString(struct FKeyBind* Bind)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.KeybindToExtendedString"));

	UPComPlayerInput_KeybindToExtendedString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bind != nullptr)
		*Bind = params.Bind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
// (Native, Public)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::ExtendedStringToKeybind(const struct FString& Str, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind"));

	UPComPlayerInput_ExtendedStringToKeybind_Params params;
	params.Str = Str;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlternate                     (OptionalParm, Parm)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::GetBindFromCommand(const struct FString& Cmd, bool bGamepad, int nAlternate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.GetBindFromCommand"));

	UPComPlayerInput_GetBindFromCommand_Params params;
	params.Cmd = Cmd;
	params.bGamepad = bGamepad;
	params.nAlternate = nAlternate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBindExtended
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FKeyBind                Bind                           (Parm, OutParm, NeedCtorLink)
// bool                           bExactMatch                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPlayerInput::GetBindExtended(const struct FString& Str, bool bExactMatch, struct FKeyBind* Bind)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.GetBindExtended"));

	UPComPlayerInput_GetBindExtended_Params params;
	params.Str = Str;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bind != nullptr)
		*Bind = params.Bind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
// (Native, Public)

void UPComPlayerInput::ResetKeysToDefault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPlayerInput.ResetKeysToDefault"));

	UPComPlayerInput_ResetKeysToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          RewindTime                     (Parm)
// struct FVector                 LocationToCheck                (Parm)
// float                          RadiusToCheck                  (Parm)
// struct FPComPositionHistoryData PastDataUsed                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPositionHistoryServerComponent::IsInSphere(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere"));

	UPComPositionHistoryServerComponent_IsInSphere_Params params;
	params.RewindTime = RewindTime;
	params.LocationToCheck = LocationToCheck;
	params.RadiusToCheck = RadiusToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastDataUsed != nullptr)
		*PastDataUsed = params.PastDataUsed;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          RewindTime                     (Parm)
// struct FVector                 LocationToCheck                (Parm)
// float                          RadiusToCheck                  (Parm)
// struct FPComPositionHistoryData PastDataUsed                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPositionHistoryServerComponent::IsOverlapping(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping"));

	UPComPositionHistoryServerComponent_IsOverlapping_Params params;
	params.RewindTime = RewindTime;
	params.LocationToCheck = LocationToCheck;
	params.RadiusToCheck = RadiusToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastDataUsed != nullptr)
		*PastDataUsed = params.PastDataUsed;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// float                          RewindTime                     (Parm)
// bool                           bUseClientTimeStamps           (OptionalParm, Parm)
// struct FPComPositionHistoryData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPComPositionHistoryData UPComPositionHistoryServerComponent::GetPastData(float RewindTime, bool bUseClientTimeStamps)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData"));

	UPComPositionHistoryServerComponent_GetPastData_Params params;
	params.RewindTime = RewindTime;
	params.bUseClientTimeStamps = bUseClientTimeStamps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.RecordData
// (Final, Native, Public)

void UPComPositionHistoryServerComponent::RecordData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComPositionHistoryServerComponent.RecordData"));

	UPComPositionHistoryServerComponent_RecordData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
// (Defined, Simulated, Public)

void APComRepInfo_Game::CreateMusicThemePlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer"));

	APComRepInfo_Game_CreateMusicThemePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
// (Defined, Simulated, Public)

void APComRepInfo_Game::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComRepInfo_Game.PostBeginPlay"));

	APComRepInfo_Game_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
// (Native, Public)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void APComRepInfo_Game::PlayMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent"));

	APComRepInfo_Game_PlayMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLogTickFlags
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// int                            nFlags                         (Parm)
// bool                           bSet                           (OptionalParm, Parm)

void UPComSupportCommands::scLogTickFlags(int nFlags, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scLogTickFlags"));

	UPComSupportCommands_scLogTickFlags_Params params;
	params.nFlags = nFlags;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
// (Defined, Exec, Public)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::scPerfAlwaysRelevantLimit(int feet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit"));

	UPComSupportCommands_scPerfAlwaysRelevantLimit_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
// (Defined, Exec, Public)
// Parameters:
// int                            Flags                          (Parm)
// int                            alternate1                     (Parm)
// int                            alternate2                     (Parm)

void UPComSupportCommands::scGPerfServerFlags(int Flags, int alternate1, int alternate2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scGPerfServerFlags"));

	UPComSupportCommands_scGPerfServerFlags_Params params;
	params.Flags = Flags;
	params.alternate1 = alternate1;
	params.alternate2 = alternate2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
// (Defined, Exec, Public)
// Parameters:
// float                          thresh1                        (Parm)
// float                          thesh2                         (Parm)

void UPComSupportCommands::scPerfPhysThreshold(float thresh1, float thesh2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold"));

	UPComSupportCommands_scPerfPhysThreshold_Params params;
	params.thresh1 = thresh1;
	params.thesh2 = thesh2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfTickRate
// (Defined, Exec, Public)
// Parameters:
// int                            tickHz                         (Parm)
// int                            altTickHz                      (Parm)

void UPComSupportCommands::scPerfTickRate(int tickHz, int altTickHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scPerfTickRate"));

	UPComSupportCommands_scPerfTickRate_Params params;
	params.tickHz = tickHz;
	params.altTickHz = altTickHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
// (Defined, Exec, Public)
// Parameters:
// int                            Mode                           (Parm)

void UPComSupportCommands::scPerfDebugRelevMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode"));

	UPComSupportCommands_scPerfDebugRelevMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
// (Defined, Exec, Public)
// Parameters:
// int                            skips                          (Parm)

void UPComSupportCommands::scPerfDebugSkip(int skips)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scPerfDebugSkip"));

	UPComSupportCommands_scPerfDebugSkip_Params params;
	params.skips = skips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
// (Defined, Exec, Public)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::scPerfDebugFeet(int feet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scPerfDebugFeet"));

	UPComSupportCommands_scPerfDebugFeet_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scDemoStop
// (Defined, Exec, Public)

void UPComSupportCommands::scDemoStop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scDemoStop"));

	UPComSupportCommands_scDemoStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scDemoRec
// (Defined, Exec, Public)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::scDemoRec(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scDemoRec"));

	UPComSupportCommands_scDemoRec_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scTimer
// (Defined, Exec, Public)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::scTimer(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scTimer"));

	UPComSupportCommands_scTimer_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scTime
// (Defined, Exec, Public)
// Parameters:
// int                            nSeconds                       (Parm)

void UPComSupportCommands::scTime(int nSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scTime"));

	UPComSupportCommands_scTime_Params params;
	params.nSeconds = nSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scScore
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// int                            nTeam                          (Parm)
// int                            nCount                         (OptionalParm, Parm)

void UPComSupportCommands::scScore(int nTeam, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scScore"));

	UPComSupportCommands_scScore_Params params;
	params.nTeam = nTeam;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scEndGame
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)

void UPComSupportCommands::scEndGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scEndGame"));

	UPComSupportCommands_scEndGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scStartGame
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)

void UPComSupportCommands::scStartGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scStartGame"));

	UPComSupportCommands_scStartGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLogMark
// (Defined, Exec, Public)
// Parameters:
// struct FString                 Comment                        (Parm, NeedCtorLink)

void UPComSupportCommands::scLogMark(const struct FString& Comment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scLogMark"));

	UPComSupportCommands_scLogMark_Params params;
	params.Comment = Comment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLog
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// struct FString                 LogName                        (Parm, NeedCtorLink)
// bool                           bEnabled                       (OptionalParm, Parm)

void UPComSupportCommands::scLog(const struct FString& LogName, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.scLog"));

	UPComSupportCommands_scLog_Params params;
	params.LogName = LogName;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmmf
// (Defined, Exec, Public)

void UPComSupportCommands::gmmf()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmmf"));

	UPComSupportCommands_gmmf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
// (Native, Public)
// Parameters:
// int                            Flags                          (Parm)
// bool                           bSet                           (Parm)

void UPComSupportCommands::SetLogServerTickStatsFlags(int Flags, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags"));

	UPComSupportCommands_SetLogServerTickStatsFlags_Params params;
	params.Flags = Flags;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
// (Native, Public)
// Parameters:
// float                          fThresh1                       (Parm)
// float                          fThresh2                       (Parm)

void UPComSupportCommands::GPerfDebugPhysicsThreshold(float fThresh1, float fThresh2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold"));

	UPComSupportCommands_GPerfDebugPhysicsThreshold_Params params;
	params.fThresh1 = fThresh1;
	params.fThresh2 = fThresh2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
// (Native, Public)
// Parameters:
// int                            tickHz                         (Parm)
// int                            altTickHz                      (Parm)

void UPComSupportCommands::GPerfDebugTickRate(int tickHz, int altTickHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate"));

	UPComSupportCommands_GPerfDebugTickRate_Params params;
	params.tickHz = tickHz;
	params.altTickHz = altTickHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
// (Native, Public)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::GPerfAllRelevantLimit(int feet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit"));

	UPComSupportCommands_GPerfAllRelevantLimit_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
// (Native, Public)
// Parameters:
// int                            Flags                          (Parm)
// int                            alternate1                     (Parm)
// int                            alternate2                     (Parm)

void UPComSupportCommands::GPerfServerFlags(int Flags, int alternate1, int alternate2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfServerFlags"));

	UPComSupportCommands_GPerfServerFlags_Params params;
	params.Flags = Flags;
	params.alternate1 = alternate1;
	params.alternate2 = alternate2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
// (Native, Public)
// Parameters:
// int                            Mode                           (Parm)

void UPComSupportCommands::GPerfDebugRelevMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode"));

	UPComSupportCommands_GPerfDebugRelevMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
// (Native, Public)
// Parameters:
// int                            skips                          (Parm)

void UPComSupportCommands::GPerfDebugSkips(int skips)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfDebugSkips"));

	UPComSupportCommands_GPerfDebugSkips_Params params;
	params.skips = skips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
// (Native, Public)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::GPerfDebugFeet(int feet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.GPerfDebugFeet"));

	UPComSupportCommands_GPerfDebugFeet_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmDiag
// (Exec, Native, Public)
// Parameters:
// int                            Code                           (Parm)
// int                            Route                          (Parm)

void UPComSupportCommands::gmDiag(int Code, int Route)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmDiag"));

	UPComSupportCommands_gmDiag_Params params;
	params.Code = Code;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmC
// (Exec, Native, Public)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::gmC(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmC"));

	UPComSupportCommands_gmC_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmCommand
// (Exec, Native, Public)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::gmCommand(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmCommand"));

	UPComSupportCommands_gmCommand_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume
// (Exec, Native, Public)

void UPComSupportCommands::gmMatchLobbyResume()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume"));

	UPComSupportCommands_gmMatchLobbyResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause
// (Exec, Native, Public)

void UPComSupportCommands::gmMatchLobbyPause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause"));

	UPComSupportCommands_gmMatchLobbyPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchNext
// (Exec, Native, Public)
// Parameters:
// int                            nMapId                         (Parm)

void UPComSupportCommands::gmMatchNext(int nMapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmMatchNext"));

	UPComSupportCommands_gmMatchNext_Params params;
	params.nMapId = nMapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchForce
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            nQueueId                       (OptionalParm, Parm)

void UPComSupportCommands::gmMatchForce(int nQueueId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComSupportCommands.gmMatchForce"));

	UPComSupportCommands_gmMatchForce_Params params;
	params.nQueueId = nQueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComUIManagerBase.DebugDraw
// (Defined, Event, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UPComUIManagerBase::DebugDraw(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComUIManagerBase.DebugDraw"));

	UPComUIManagerBase_DebugDraw_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime
// (Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComUtilityFunctions::STATIC_GetGDeltaTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime"));

	UPComUtilityFunctions_GetGDeltaTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComUtilityFunctions.IsAWithStop
// (Native, Static, Public)
// Parameters:
// class UObject*                 InObject                       (Parm)
// class UClass*                  SomeBase                       (Const, Parm)
// class UClass*                  StopAtBase                     (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComUtilityFunctions::STATIC_IsAWithStop(class UObject* InObject, class UClass* SomeBase, class UClass* StopAtBase)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComUtilityFunctions.IsAWithStop"));

	UPComUtilityFunctions_IsAWithStop_Params params;
	params.InObject = InObject;
	params.SomeBase = SomeBase;
	params.StopAtBase = StopAtBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 InVector                       (Const, Parm, OutParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UPComUtilityFunctions::STATIC_FakeNetSerialize(struct FVector* InVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize"));

	UPComUtilityFunctions_FakeNetSerialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVector != nullptr)
		*InVector = params.InVector;

	return params.ReturnValue;
}


// Function PlatformCommon.PComVideoPlayer.DestroyMe
// (Defined, Public)

void APComVideoPlayer::DestroyMe()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.DestroyMe"));

	APComVideoPlayer_DestroyMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.TestOnVideoError
// (Defined, Public)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void APComVideoPlayer::TestOnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.TestOnVideoError"));

	APComVideoPlayer_TestOnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.TestVideoPlayer
// (Defined, Static, HasOptionalParms, Public)
// Parameters:
// class AActor*                  SpawningActor                  (Parm)
// struct FString                 InURL                          (OptionalParm, Parm, NeedCtorLink)

void APComVideoPlayer::STATIC_TestVideoPlayer(class AActor* SpawningActor, const struct FString& InURL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.TestVideoPlayer"));

	APComVideoPlayer_TestVideoPlayer_Params params;
	params.SpawningActor = SpawningActor;
	params.InURL = InURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.StopVideoSession
// (Simulated, Native, Public)

void APComVideoPlayer::StopVideoSession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.StopVideoSession"));

	APComVideoPlayer_StopVideoSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.Initialize
// (Simulated, Native, Public)

void APComVideoPlayer::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.Initialize"));

	APComVideoPlayer_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void APComVideoPlayer::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.NativePostRenderFor"));

	APComVideoPlayer_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.OnVideoError
// (Public, Delegate)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void APComVideoPlayer::OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.OnVideoError"));

	APComVideoPlayer_OnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.OnVideoFinished
// (Public, Delegate)

void APComVideoPlayer::OnVideoFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComVideoPlayer.OnVideoFinished"));

	APComVideoPlayer_OnVideoFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
// (Native, Public)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void UPComMusicThemePlayer::UpdateReplicatedMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent"));

	UPComMusicThemePlayer_UpdateReplicatedMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FMusicTrackStruct       NewMusicTrack                  (Const, Parm, NeedCtorLink)
// float                          fDuration                      (Const, OptionalParm, Parm)

void UPComMusicThemePlayer::UpdateMusicTrack(const struct FMusicTrackStruct& NewMusicTrack, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack"));

	UPComMusicThemePlayer_UpdateMusicTrack_Params params;
	params.NewMusicTrack = NewMusicTrack;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.StopMusic
// (Native, Public)

void UPComMusicThemePlayer::StopMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.StopMusic"));

	UPComMusicThemePlayer_StopMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
// (Native, Public)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void UPComMusicThemePlayer::PlayMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent"));

	UPComMusicThemePlayer_PlayMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
// (Native, Public)

void UPComMusicThemePlayer::PlayDefaultMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic"));

	UPComMusicThemePlayer_PlayDefaultMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
// (Native, Public)

void UPComMusicThemePlayer::OnThemeLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded"));

	UPComMusicThemePlayer_OnThemeLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
// (Native, Public)
// Parameters:
// struct FString                 themepath                      (Const, Parm, NeedCtorLink)

void UPComMusicThemePlayer::LoadTheme(const struct FString& themepath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.LoadTheme"));

	UPComMusicThemePlayer_LoadTheme_Params params;
	params.themepath = themepath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComMusicThemePlayer::GetDefaultThemePath()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath"));

	UPComMusicThemePlayer_GetDefaultThemePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
// (Native, Public)

void UPComMusicThemePlayer::LoadDefaultTheme()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme"));

	UPComMusicThemePlayer_LoadDefaultTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.Init
// (Native, Public)

void UPComMusicThemePlayer::Init()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemePlayer.Init"));

	UPComMusicThemePlayer_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void APComMusicThemeSyncActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent"));

	APComMusicThemeSyncActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
// (Native, Public)
// Parameters:
// struct FName                   EventName                      (Parm)

void APComMusicThemeSyncActor::UpdateMusicEventClient(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient"));

	APComMusicThemeSyncActor_UpdateMusicEventClient_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
// (Native, Public)
// Parameters:
// struct FName                   EventName                      (Parm)

void APComMusicThemeSyncActor::UpdateMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent"));

	APComMusicThemeSyncActor_UpdateMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
