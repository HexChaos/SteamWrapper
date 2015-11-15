/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-15
    Notes:
        User account information.
        Generally useless as the wrapper can't set account info.
*/

#include "Interface.h"
#include "..\Macros.h"

#pragma region Methods
int32_t GetHSteamUser()
{
    // We do not pipe to steam.
    return 0;
}
void LogOn(uint64_t steamID)
{

}
void LogOff()
{

}
bool BLoggedOn()
{
    return true;
}
uint32_t GetLogonState()
{
    // k_ELogonStateLoggingOn
    return 1;
}
bool BConnected()
{
    return true;
}
uint64_t GetSteamID()
{
    uint32_t ApplicationID = Global::ApplicationID;
    uint64_t PlayerID = 0;

    AYRIADEVELOPER("FetchPlayerID", ApplicationID, PlayerID);
    return PlayerID;
}
bool IsVACBanned(uint32_t eVACBan)
{
    uint32_t ApplicationID = Global::ApplicationID;
    bool Banned = false;

    AYRIADEVELOPER("GetPlayerBanned", ApplicationID, &Banned);
    return Banned;
}
bool RequireShowVACBannedMessage(uint32_t eVACBan)
{
    return false;
}
void AcknowledgeVACBanning(uint32_t eVACBan)
{
}
int NClientGameIDAdd(int nGameID)
{
    return 0;
}
void RemoveClientGame(int nClientGameID)
{
}
void SetClientGameServer(int nClientGameID, uint32_t unIPServer, uint16_t usPortServer)
{

}
void SetSteam2Ticket(uint8_t *pubTicket, int cubTicket)
{

}
void AddServerNetAddress(uint32_t unIP, uint16_t unPort)
{

}
bool SetEmail(const char *pchEmail)
{
    return false;
}
int GetSteamGameConnectToken(void *pBlob, int cbMaxBlob)
{
    return 0;
}
bool SetRegistryString(uint32_t eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    // TODO: Implement this.
    return false;
}
bool GetRegistryString(uint32_t eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    // TODO: Implement this.
    return false;
}
bool SetRegistryInt(uint32_t eRegistrySubTree, const char *pchKey, int iValue)
{
    // TODO: Implement this.
    return false;
}
bool GetRegistryInt(uint32_t eRegistrySubTree, const char *pchKey, int *piValue)
{
    // TODO: Implement this.
    return false;
}
int InitiateGameConnection(void *pBlob, int cbMaxBlob, uint64_t steamID, int nGameAppID, uint32_t unIPServer, uint16_t usPortServer, bool bSecure)
{
    return 0;
}
void TerminateGameConnection(uint32_t unIPServer, uint16_t usPortServer)
{

}
void SetSelfAsPrimaryChatDestination()
{

}
bool IsPrimaryChatDestination()
{
    return false;
}
void RequestLegacyCDKey(uint32_t iAppID)
{

}

bool SendGuestPassByEmail(const char *pchEmailAccount, uint64_t gidGuestPassID, bool bResending)
{
    return false;
}
bool SendGuestPassByAccountID(uint32_t uAccountID, uint64_t gidGuestPassID, bool bResending)
{
    return false;
}
bool AckGuestPass(const char *pchGuestPassCode)
{
    return false;
}
bool RedeemGuestPass(const char *pchGuestPassCode)
{
    return false;
}
uint32_t GetGuestPassToGiveCount()
{
    return 0;
}
uint32_t GetGuestPassToRedeemCount()
{
    return 0;
}
uint32_t GetGuestPassLastUpdateTime()
{
    return 0;
}
bool GetGuestPassToGiveInfo(uint32_t nPassIndex, uint64_t *pgidGuestPassID, uint32_t* pnPackageID, uint32_t *pRTime32Created, uint32_t *pRTime32Expiration, uint32_t *pRTime32Sent, uint32_t *pRTime32Redeemed, char * pchRecipientAddress, int cRecipientAddressSize)
{
    return false;
}
bool GetGuestPassToRedeemInfo(uint32_t nPassIndex, uint64_t *pgidGuestPassID, uint32_t* pnPackageID, uint32_t* pRTime32Created, uint32_t* pRTime32Expiration, uint32_t* pRTime32Sent, uint32_t* pRTime32Redeemed)
{
    return false;
}
bool GetGuestPassToRedeemSenderAddress(uint32_t nPassIndex, char* pchSenderAddress, int cSenderAddressSize)
{
    return false;
}
bool GetGuestPassToRedeemSenderName(uint32_t nPassIndex, char* pchSenderName, int cSenderNameSize)
{
    return false;
}
void AcknowledgeMessageByGID(const char *pchMessageGID)
{

}
bool SetLanguage(const char *pchLanguage)
{
    return false;
}
void TrackAppUsageEvent(uint64_t gameID, uint32_t eAppUsageEvent, const char *pchExtraInfo = "")
{

}
void SetAccountName(const char* pchAccountName)
{

}
void SetPassword(const char* pchPassword)
{

}
void SetAccountCreationTime(uint32_t rtime32Time)
{

}

void RefreshSteam2Login()
{

}

bool GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
    return false;
}
void StartVoiceRecording()
{

}
void StopVoiceRecording()
{

}
uint32_t GetCompressedVoice(void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten)
{
    // k_EVoiceResultOK
    return 0;
}
uint32_t DecompressVoice(void *pCompressed, uint32_t cbCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten)
{
    // k_EVoiceResultOK
    return 0;
}

uint32_t GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32_t *pcbTicket)
{
    return 0;
}
uint32_t BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, uint64_t steamID)
{
    return 0;
}
void EndAuthSession(uint64_t steamID)
{

}
void CancelAuthTicket(uint32_t hAuthTicket)
{
}
uint32_t UserHasLicenseForApp(uint64_t steamID, uint32_t appID)
{
    uint32_t ApplicationID = Global::ApplicationID;
    bool Owned = false;

    AYRIACLIENT("OwnsApplication", ApplicationID, &Owned);

    // k_EUserHasLicenseResultHasLicense = 0
    // k_EUserHasLicenseResultDoesNotHaveLicense = 1
    return Owned ? 0 : 1;
}

uint32_t GetAvailableVoice(uint32_t *pcbCompressed, uint32_t *pcbUncompressed)
{
    // k_EVoiceResultOK
    return 0;
}
uint32_t GetVoice(bool bWantCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32_t cbUncompressedDestBufferSize, uint32_t *nUncompressBytesWritten)
{
    // k_EVoiceResultOK
    return 0;
}
bool BIsBehindNAT()
{
    uint64_t Result = 0;

    AYRIACLIENT("FetchNATStatus", &Result);
    return Result > 0;
}

void AdvertiseGame(uint64_t steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer)
{

}
uint64_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude)
{
    // TODO: Implement this when callbacks are done.
    return 0;
}
bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32_t *pcbTicket)
{
    // TODO: Implement this when callbacks are done.
    return false;
}

uint32_t GetVoiceOptimalSampleRate()
{
    return 44100;
}

int GetGameBadgeLevel(int nSeries, bool bFoil)
{
    return 5;
}
int GetPlayerSteamLevel()
{
    return 42;
}

uint64_t RequestStoreAuthURL(const char *pchRedirectURL)
{
    // TODO: Implement this when callbacks are done.
    return 0;
}

#pragma endregion

void INTERFACE_STEAMUSER001::Initialize()
{
    // Missing SDK info.
}
void INTERFACE_STEAMUSER002::Initialize()
{
    // Missing SDK info.
}
void INTERFACE_STEAMUSER003::Initialize()
{
    // Missing SDK info.
}
void INTERFACE_STEAMUSER004::Initialize()
{
    Methods = new void *[26];

    Methods[0] = GetHSteamUser;
    Methods[1] = LogOn;
    Methods[2] = LogOff;
    Methods[3] = BLoggedOn;
    Methods[4] = GetLogonState;
    Methods[5] = BConnected;
    Methods[6] = GetSteamID;
    Methods[7] = IsVACBanned;
    Methods[8] = RequireShowVACBannedMessage;
    Methods[9] = AcknowledgeVACBanning;
    Methods[10] = NClientGameIDAdd;
    Methods[11] = RemoveClientGame;
    Methods[12] = SetClientGameServer;
    Methods[13] = SetSteam2Ticket;
    Methods[14] = AddServerNetAddress;
    Methods[15] = SetEmail;
    Methods[16] = GetSteamGameConnectToken;
    Methods[17] = SetRegistryString;
    Methods[18] = GetRegistryString;
    Methods[19] = SetRegistryInt;
    Methods[20] = GetRegistryInt;
    Methods[21] = InitiateGameConnection;
    Methods[22] = TerminateGameConnection;
    Methods[23] = SetSelfAsPrimaryChatDestination;
    Methods[24] = IsPrimaryChatDestination;
    Methods[25] = RequestLegacyCDKey;

    Initialized = true;
}
void INTERFACE_STEAMUSER005::Initialize()
{
    Methods = new void *[43];

    Methods[0] = GetHSteamUser;
    Methods[1] = LogOn;
    Methods[2] = LogOff;
    Methods[3] = BLoggedOn;
    Methods[4] = GetLogonState;
    Methods[5] = BConnected;
    Methods[6] = GetSteamID;
    Methods[7] = IsVACBanned;
    Methods[8] = RequireShowVACBannedMessage;
    Methods[9] = AcknowledgeVACBanning;
    Methods[10] = NClientGameIDAdd;
    Methods[11] = RemoveClientGame;
    Methods[12] = SetClientGameServer;
    Methods[13] = SetSteam2Ticket;
    Methods[14] = AddServerNetAddress;
    Methods[15] = SetEmail;
    Methods[16] = GetSteamGameConnectToken;
    Methods[17] = SetRegistryString;
    Methods[18] = GetRegistryString;
    Methods[19] = SetRegistryInt;
    Methods[20] = GetRegistryInt;
    Methods[21] = InitiateGameConnection;
    Methods[22] = TerminateGameConnection;
    Methods[23] = SetSelfAsPrimaryChatDestination;
    Methods[24] = IsPrimaryChatDestination;
    Methods[25] = RequestLegacyCDKey;
    Methods[26] = SendGuestPassByEmail;
    Methods[27] = SendGuestPassByAccountID;
    Methods[28] = AckGuestPass;
    Methods[29] = RedeemGuestPass;
    Methods[30] = GetGuestPassToGiveCount;
    Methods[31] = GetGuestPassToRedeemCount;
    Methods[32] = GetGuestPassLastUpdateTime;
    Methods[33] = GetGuestPassToGiveInfo;
    Methods[34] = GetGuestPassToRedeemInfo;
    Methods[35] = GetGuestPassToRedeemSenderAddress;
    Methods[36] = GetGuestPassToRedeemSenderName;
    Methods[37] = AcknowledgeMessageByGID;
    Methods[38] = SetLanguage;
    Methods[39] = TrackAppUsageEvent;
    Methods[40] = SetAccountName;
    Methods[41] = SetPassword;
    Methods[42] = SetAccountCreationTime;

    Initialized = true;
}
void INTERFACE_STEAMUSER006::Initialize()
{
    Methods = new void *[12];

    Methods[0] = GetHSteamUser;
    Methods[1] = LogOn;
    Methods[2] = LogOff;
    Methods[3] = BLoggedOn;
    Methods[4] = GetSteamID;
    Methods[5] = SetRegistryString;
    Methods[6] = GetRegistryString;
    Methods[7] = SetRegistryInt;
    Methods[8] = GetRegistryInt;
    Methods[9] = InitiateGameConnection;
    Methods[10] = TerminateGameConnection;
    Methods[11] = TrackAppUsageEvent;

    Initialized = true;
}
void INTERFACE_STEAMUSER007::Initialize()
{
    Methods = new void *[13];

    Methods[0] = GetHSteamUser;
    Methods[1] = LogOn;
    Methods[2] = LogOff;
    Methods[3] = BLoggedOn;
    Methods[4] = GetSteamID;
    Methods[5] = SetRegistryString;
    Methods[6] = GetRegistryString;
    Methods[7] = SetRegistryInt;
    Methods[8] = GetRegistryInt;
    Methods[9] = InitiateGameConnection;
    Methods[10] = TerminateGameConnection;
    Methods[11] = TrackAppUsageEvent;
    Methods[12] = RefreshSteam2Login;

    Initialized = true;
}
void INTERFACE_STEAMUSER008::Initialize()
{
    Methods = new void *[7];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = RefreshSteam2Login;

    Initialized = true;
}
void INTERFACE_STEAMUSER009::Initialize()
{
    Methods = new void *[7];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = RefreshSteam2Login;

    Initialized = true;
}
void INTERFACE_STEAMUSER010::Initialize()
{
    Methods = new void *[6];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;

    Initialized = true;
}
void INTERFACE_STEAMUSER011::Initialize()
{
    Methods = new void *[11];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetCompressedVoice;
    Methods[10] = DecompressVoice;

    Initialized = true;
}
void INTERFACE_STEAMUSER012::Initialize()
{
    Methods = new void *[16];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetCompressedVoice;
    Methods[10] = DecompressVoice;
    Methods[11] = GetAuthSessionTicket;
    Methods[12] = BeginAuthSession;
    Methods[13] = EndAuthSession;
    Methods[14] = CancelAuthTicket;
    Methods[15] = UserHasLicenseForApp;

    Initialized = true;
}
void INTERFACE_STEAMUSER013::Initialize()
{
    Methods = new void *[18];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetAvailableVoice;
    Methods[10] = GetVoice;
    Methods[11] = DecompressVoice;
    Methods[12] = GetAuthSessionTicket;
    Methods[13] = BeginAuthSession;
    Methods[14] = EndAuthSession;
    Methods[15] = CancelAuthTicket;
    Methods[16] = UserHasLicenseForApp;
    Methods[17] = BIsBehindNAT;

    Initialized = true;
}
void INTERFACE_STEAMUSER014::Initialize()
{
    Methods = new void *[21];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetAvailableVoice;
    Methods[10] = GetVoice;
    Methods[11] = DecompressVoice;
    Methods[12] = GetAuthSessionTicket;
    Methods[13] = BeginAuthSession;
    Methods[14] = EndAuthSession;
    Methods[15] = CancelAuthTicket;
    Methods[16] = UserHasLicenseForApp;
    Methods[17] = BIsBehindNAT;
    Methods[18] = AdvertiseGame;
    Methods[19] = RequestEncryptedAppTicket;
    Methods[20] = GetEncryptedAppTicket;

    Initialized = true;
}
void INTERFACE_STEAMUSER015::Initialize()
{
    Methods = new void *[22];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetAvailableVoice;
    Methods[10] = GetVoice;
    Methods[11] = DecompressVoice;
    Methods[12] = GetVoiceOptimalSampleRate;
    Methods[13] = GetAuthSessionTicket;
    Methods[14] = BeginAuthSession;
    Methods[15] = EndAuthSession;
    Methods[16] = CancelAuthTicket;
    Methods[17] = UserHasLicenseForApp;
    Methods[18] = BIsBehindNAT;
    Methods[19] = AdvertiseGame;
    Methods[20] = RequestEncryptedAppTicket;
    Methods[21] = GetEncryptedAppTicket;

    Initialized = true;
}
void INTERFACE_STEAMUSER016::Initialize()
{
    Methods = new void *[22];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetAvailableVoice;
    Methods[10] = GetVoice;
    Methods[11] = DecompressVoice;
    Methods[12] = GetVoiceOptimalSampleRate;
    Methods[13] = GetAuthSessionTicket;
    Methods[14] = BeginAuthSession;
    Methods[15] = EndAuthSession;
    Methods[16] = CancelAuthTicket;
    Methods[17] = UserHasLicenseForApp;
    Methods[18] = BIsBehindNAT;
    Methods[19] = AdvertiseGame;
    Methods[20] = RequestEncryptedAppTicket;
    Methods[21] = GetEncryptedAppTicket;

    Initialized = true;
}
void INTERFACE_STEAMUSER017::Initialize()
{
    Methods = new void *[24];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetAvailableVoice;
    Methods[10] = GetVoice;
    Methods[11] = DecompressVoice;
    Methods[12] = GetVoiceOptimalSampleRate;
    Methods[13] = GetAuthSessionTicket;
    Methods[14] = BeginAuthSession;
    Methods[15] = EndAuthSession;
    Methods[16] = CancelAuthTicket;
    Methods[17] = UserHasLicenseForApp;
    Methods[18] = BIsBehindNAT;
    Methods[19] = AdvertiseGame;
    Methods[20] = RequestEncryptedAppTicket;
    Methods[21] = GetEncryptedAppTicket;
    Methods[22] = GetGameBadgeLevel;
    Methods[23] = GetPlayerSteamLevel;

    Initialized = true;
}
void INTERFACE_STEAMUSER018::Initialize()
{
    Methods = new void *[25];

    Methods[0] = GetHSteamUser;
    Methods[1] = BLoggedOn;
    Methods[2] = GetSteamID;
    Methods[3] = InitiateGameConnection;
    Methods[4] = TerminateGameConnection;
    Methods[5] = TrackAppUsageEvent;
    Methods[6] = GetUserDataFolder;
    Methods[7] = StartVoiceRecording;
    Methods[8] = StopVoiceRecording;
    Methods[9] = GetAvailableVoice;
    Methods[10] = GetVoice;
    Methods[11] = DecompressVoice;
    Methods[12] = GetVoiceOptimalSampleRate;
    Methods[13] = GetAuthSessionTicket;
    Methods[14] = BeginAuthSession;
    Methods[15] = EndAuthSession;
    Methods[16] = CancelAuthTicket;
    Methods[17] = UserHasLicenseForApp;
    Methods[18] = BIsBehindNAT;
    Methods[19] = AdvertiseGame;
    Methods[20] = RequestEncryptedAppTicket;
    Methods[21] = GetEncryptedAppTicket;
    Methods[22] = GetGameBadgeLevel;
    Methods[23] = GetPlayerSteamLevel;
    Methods[24] = RequestStoreAuthURL;

    Initialized = true;
}
