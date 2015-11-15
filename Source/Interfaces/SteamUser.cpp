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
#include "CSteamID.h"

#pragma region Methods
int32_t GetHSteamUser()
{
    PrintFunction();
    // We do not pipe to steam.
    return 0;
}
void LogOn(uint64_t steamID)
{
    PrintFunction();
}
void LogOff()
{
    PrintFunction();
}
bool BLoggedOn()
{
    PrintFunction();
    return true;
}
uint32_t GetLogonState()
{
    PrintFunction();
    // k_ELogonStateLoggingOn
    return 1;
}
bool BConnected()
{
    PrintFunction();
    return true;
}
CSteamID GetSteamID()
{
    PrintFunction();
    uint32_t ApplicationID = Global::ApplicationID;
    static uint64_t PlayerID = 0x1100001DEADC0DE;

    if(PlayerID == 0x1100001DEADC0DE)
        AYRIADEVELOPER("FetchPlayerID", ApplicationID, PlayerID);

    return CSteamID(PlayerID);
}
bool IsVACBanned(uint32_t eVACBan)
{
    PrintFunction();
    uint32_t ApplicationID = Global::ApplicationID;
    bool Banned = false;

    AYRIADEVELOPER("GetPlayerBanned", ApplicationID, &Banned);
    return Banned;
}
bool RequireShowVACBannedMessage(uint32_t eVACBan)
{
    PrintFunction();
    return false;
}
void AcknowledgeVACBanning(uint32_t eVACBan)
{
    PrintFunction();
}
int NClientGameIDAdd(int nGameID)
{
    PrintFunction();
    return 0;
}
void RemoveClientGame(int nClientGameID)
{
    PrintFunction();
}
void SetClientGameServer(int nClientGameID, uint32_t unIPServer, uint16_t usPortServer)
{
    PrintFunction();
}
void SetSteam2Ticket(uint8_t *pubTicket, int cubTicket)
{
    PrintFunction();
}
void AddServerNetAddress(uint32_t unIP, uint16_t unPort)
{
    PrintFunction();
}
bool SetEmail(const char *pchEmail)
{
    PrintFunction();
    return false;
}
int GetSteamGameConnectToken(void *pBlob, int cbMaxBlob)
{
    PrintFunction();
    return 0;
}
bool SetRegistryString(uint32_t eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    PrintFunction();
    // TODO: Implement this.
    return false;
}
bool GetRegistryString(uint32_t eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    PrintFunction();
    // TODO: Implement this.
    return false;
}
bool SetRegistryInt(uint32_t eRegistrySubTree, const char *pchKey, int iValue)
{
    PrintFunction();
    // TODO: Implement this.
    return false;
}
bool GetRegistryInt(uint32_t eRegistrySubTree, const char *pchKey, int *piValue)
{
    PrintFunction();
    // TODO: Implement this.
    return false;
}
int InitiateGameConnection(void *pBlob, int cbMaxBlob, uint64_t steamID, int nGameAppID, uint32_t unIPServer, uint16_t usPortServer, bool bSecure)
{
    PrintFunction();
    return 0;
}
void TerminateGameConnection(uint32_t unIPServer, uint16_t usPortServer)
{
    PrintFunction();
}
void SetSelfAsPrimaryChatDestination()
{
    PrintFunction();
}
bool IsPrimaryChatDestination()
{
    PrintFunction();
    return false;
}
void RequestLegacyCDKey(uint32_t iAppID)
{
    PrintFunction();
}

bool SendGuestPassByEmail(const char *pchEmailAccount, uint64_t gidGuestPassID, bool bResending)
{
    PrintFunction();
    return false;
}
bool SendGuestPassByAccountID(uint32_t uAccountID, uint64_t gidGuestPassID, bool bResending)
{
    PrintFunction();
    return false;
}
bool AckGuestPass(const char *pchGuestPassCode)
{
    PrintFunction();
    return false;
}
bool RedeemGuestPass(const char *pchGuestPassCode)
{
    PrintFunction();
    return false;
}
uint32_t GetGuestPassToGiveCount()
{
    PrintFunction();
    return 0;
}
uint32_t GetGuestPassToRedeemCount()
{
    PrintFunction();
    return 0;
}
uint32_t GetGuestPassLastUpdateTime()
{
    PrintFunction();
    return 0;
}
bool GetGuestPassToGiveInfo(uint32_t nPassIndex, uint64_t *pgidGuestPassID, uint32_t* pnPackageID, uint32_t *pRTime32Created, uint32_t *pRTime32Expiration, uint32_t *pRTime32Sent, uint32_t *pRTime32Redeemed, char * pchRecipientAddress, int cRecipientAddressSize)
{
    PrintFunction();
    return false;
}
bool GetGuestPassToRedeemInfo(uint32_t nPassIndex, uint64_t *pgidGuestPassID, uint32_t* pnPackageID, uint32_t* pRTime32Created, uint32_t* pRTime32Expiration, uint32_t* pRTime32Sent, uint32_t* pRTime32Redeemed)
{
    PrintFunction();
    return false;
}
bool GetGuestPassToRedeemSenderAddress(uint32_t nPassIndex, char* pchSenderAddress, int cSenderAddressSize)
{
    PrintFunction();
    return false;
}
bool GetGuestPassToRedeemSenderName(uint32_t nPassIndex, char* pchSenderName, int cSenderNameSize)
{
    PrintFunction();
    return false;
}
void AcknowledgeMessageByGID(const char *pchMessageGID)
{
    PrintFunction();
}
bool SetLanguage(const char *pchLanguage)
{
    PrintFunction();
    return false;
}
void TrackAppUsageEvent(uint64_t gameID, uint32_t eAppUsageEvent, const char *pchExtraInfo = "")
{
    PrintFunction();
}
void SetAccountName(const char* pchAccountName)
{
    PrintFunction();
}
void SetPassword(const char* pchPassword)
{
    PrintFunction();
}
void SetAccountCreationTime(uint32_t rtime32Time)
{
    PrintFunction();
}

void RefreshSteam2Login()
{
    PrintFunction();
}

bool GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
    PrintFunction();
    return false;
}
void StartVoiceRecording()
{
    PrintFunction();
}
void StopVoiceRecording()
{
    PrintFunction();
}
uint32_t GetCompressedVoice(void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten)
{
    PrintFunction();
    // k_EVoiceResultOK
    return 0;
}
uint32_t DecompressVoice(void *pCompressed, uint32_t cbCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten)
{
    PrintFunction();
    // k_EVoiceResultOK
    return 0;
}

uint32_t GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32_t *pcbTicket)
{
    PrintFunction();
    return 0;
}
uint32_t BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, uint64_t steamID)
{
    PrintFunction();
    return 0;
}
void EndAuthSession(uint64_t steamID)
{
    PrintFunction();
}
void CancelAuthTicket(uint32_t hAuthTicket)
{
    PrintFunction();
}
uint32_t UserHasLicenseForApp(uint64_t steamID, uint32_t appID)
{
    PrintFunction();
    uint32_t ApplicationID = Global::ApplicationID;
    bool Owned = false;

    AYRIACLIENT("OwnsApplication", ApplicationID, &Owned);

    // k_EUserHasLicenseResultHasLicense = 0
    // k_EUserHasLicenseResultDoesNotHaveLicense = 1
    return Owned ? 0 : 1;
}

uint32_t GetAvailableVoice(uint32_t *pcbCompressed, uint32_t *pcbUncompressed)
{
    PrintFunction();
    // k_EVoiceResultOK
    return 0;
}
uint32_t GetVoice(bool bWantCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32_t cbUncompressedDestBufferSize, uint32_t *nUncompressBytesWritten)
{
    PrintFunction();
    // k_EVoiceResultOK
    return 0;
}
bool BIsBehindNAT()
{
    PrintFunction();
    uint64_t Result = 0;

    AYRIACLIENT("FetchNATStatus", &Result);
    return Result > 0;
}

void AdvertiseGame(uint64_t steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer)
{
    PrintFunction();
}
uint64_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude)
{
    PrintFunction();
    // TODO: Implement this when callbacks are done.
    return 0;
}
bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32_t *pcbTicket)
{
    PrintFunction();
    // TODO: Implement this when callbacks are done.
    return false;
}

uint32_t GetVoiceOptimalSampleRate()
{
    PrintFunction();
    return 44100;
}

int GetGameBadgeLevel(int nSeries, bool bFoil)
{
    PrintFunction();
    return 5;
}
int GetPlayerSteamLevel()
{
    PrintFunction();
    return 42;
}

uint64_t RequestStoreAuthURL(const char *pchRedirectURL)
{
    PrintFunction();
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
