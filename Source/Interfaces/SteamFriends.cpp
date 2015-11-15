/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-15
    Notes:
        Information about friends.
        Not properly wrapped.
*/

#include "Interface.h"
#include "..\Macros.h"
#include "CSteamID.h"

#pragma region Methods
const char *GetPersonaName()
{
    return "";
}
void SetPersonaName(const char *pchPersonaName)
{
}
uint32_t GetPersonaState()
{
    // k_EPersonaStateOnline
    return 1;
}
void SetPersonaState(uint32_t ePersonaState)
{
}
bool AddFriend(CSteamID steamIDFriend)
{
    return false;
}
bool RemoveFriend(CSteamID steamIDFriend)
{
    return false;
}
bool HasFriend(CSteamID steamIDFriend)
{
    return false;
}
uint32_t GetFriendRelationship(CSteamID steamIDFriend)
{
    // k_EFriendRelationshipFriend
    return 3;
}
uint32_t GetFriendPersonaState(CSteamID steamIDFriend)
{
    // k_EPersonaStateOffline
    return 0;
}
bool Deprecated_GetFriendGamePlayed(CSteamID steamIDFriend, int32_t *pnGameID, uint32_t *punGameIP, uint16_t *pusGamePort)
{
    return false;
}
const char *GetFriendPersonaName(CSteamID steamIDFriend)
{
    return "Friend";
}
int32_t AddFriendByName(const char *pchEmailOrAccountName)
{
    return 0;
}
int GetFriendCount()
{
    return 0;
}
CSteamID GetFriendByIndex(int iFriend)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}
void SendMsgToFriend(CSteamID steamIDFriend, uint32_t eFriendMsgType, const char *pchMsgBody)
{

}
void SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{

}
const char *GetFriendRegValue(CSteamID steamIDFriend, const char *pchKey)
{
    return "";
}
const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)
{
    return "";
}
int GetChatMessage(CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, uint32_t *peFriendMsgType)
{
    return 0;
}
bool SendMsgToFriend2(CSteamID steamIDFriend, uint32_t eFriendMsgType, const void *pvMsgBody, int cubMsgBody)
{
    return false;
}
int GetChatIDOfChatHistoryStart(CSteamID steamIDFriend)
{
    return 0;
}
void SetChatHistoryStart(CSteamID steamIDFriend, int iChatID)
{
}
void ClearChatHistory(CSteamID steamIDFriend)
{
}
int32_t InviteFriendByEmail(const char *pchEmailOrAccountName)
{
    return 0;
}
uint32_t GetBlockedFriendCount()
{
    return 0;
}
bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort)
{
    return false;
}
bool GetFriendGamePlayed2(CSteamID steamDIFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort, uint16_t *pusQueryPort)
{
    return false;
}

int GetClanCount()
{
    return 0;
}
const char *GetClanName(CSteamID steamIDClan)
{
    return "ayria";
}
bool InviteFriendToClan(CSteamID steamIDfriend, CSteamID steamIDclan)
{
    return false;
}
bool AcknowledgeInviteToClan(CSteamID steamID, bool)
{
    return false;
}
int GetFriendCountFromSource(CSteamID steamIDSource)
{
    return 0;
}
CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}

int GetFriendAvatar(CSteamID steamIDFriend)
{
    return 0;
}
CSteamID GetClanByIndex(int iClan)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}
bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
    return false;
}
void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)
{
}
void ActivateGameOverlay(const char *pchDialog)
{
}

void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)
{
}
void ActivateGameOverlayToWebPage(const char *pchURL)
{
}
void ActivateGameOverlayToStore(uint32_t nAppID)
{
}
void SetPlayedWith(CSteamID steamIDUserPlayedWith)
{
}

const char *GetClanTag(CSteamID steamIDClan)
{
    return "aya";
}
void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)
{
}

int GetSmallFriendAvatar(CSteamID steamIDFriend)
{
    return 0;
}
int GetMediumFriendAvatar(CSteamID steamIDFriend)
{
    return 0;
}
int GetLargeFriendAvatar(CSteamID steamIDFriend)
{
    return 0;
}

bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)
{
    return false;
}
uint64_t RequestClanOfficerList(CSteamID steamIDClan)
{
    return 0;
}
CSteamID GetClanOwner(CSteamID steamIDClan)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}
int GetClanOfficerCount(CSteamID steamIDClan)
{
    return 0;
}
CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}
uint32_t GetUserRestrictions()
{
    // k_nUserRestrictionNone
    return 0;
}

bool SetRichPresence(const char *pchKey, const char *pchValue)
{
    return false;
}
void ClearRichPresence()
{
}
const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)
{
    return "";
}
int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)
{
    return 0;
}
const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)
{
    return "";
}
bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)
{
    return false;
}
int GetCoplayFriendCount()
{
    return 0;
}
CSteamID GetCoplayFriend(int iCoplayFriend)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}
int GetFriendCoplayTime(CSteamID steamIDFriend)
{
    return 0;
}
uint32_t GetFriendCoplayGame(CSteamID steamIDFriend)
{
    return Global::ApplicationID;
}

bool GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting)
{
    return false;
}
uint64_t DownloadClanActivityCounts(CSteamID groupIDs[], int nIds)
{
    return 0;
}
uint64_t JoinClanChatRoom(CSteamID groupID)
{
    return 0;
}
bool LeaveClanChatRoom(CSteamID groupID)
{
    return true;
}
int GetClanChatMemberCount(CSteamID groupID)
{
    return 0;
}
CSteamID GetChatMemberByIndex(CSteamID groupID, int iIndex)
{
    return CSteamID((uint64_t)0x1100001DEADC0DE);
}
bool SendClanChatMessage(CSteamID groupID, const char *cszMessage)
{
    return false;
}
int GetClanChatMessage(CSteamID groupID, int iChatID, void *pvData, int cubData, uint32_t *peChatEntryType, CSteamID *pSteamIDChatter)
{
    return 0;
}
bool IsClanChatAdmin(CSteamID groupID, CSteamID userID)
{
    return false;
}
bool IsClanChatWindowOpenInSteam(CSteamID groupID)
{
    return false;
}
bool OpenClanChatWindowInSteam(CSteamID groupID)
{
    return false;
}
bool CloseClanChatWindowInSteam(CSteamID groupID)
{
    return false;
}
bool SetListenForFriendsMessages(bool bListen)
{
    return false;
}
bool ReplyToFriendMessage(CSteamID friendID, const char *cszMessage)
{
    return false;
}
int GetFriendMessage(CSteamID friendID, int iChatID, void *pvData, int cubData, uint32_t *peChatEntryType)
{
    return 0;
}

void RequestFriendRichPresence(CSteamID steamIDFriend)
{
}
uint64_t GetFollowerCount(CSteamID steamID)
{
    return 0;
}
uint64_t IsFollowing(CSteamID steamID)
{
    return 0;
}
uint64_t EnumerateFollowingList(uint32_t unStartIndex)
{
    return 0;
}

const char *GetPlayerNickname(CSteamID steamIDPlayer)
{
    return "nickname";
}
int GetFriendSteamLevel(CSteamID steamIDFriend)
{
    return 42;
}
int16_t GetFriendsGroupCount()
{
    return 0;
}
int16_t GetFriendsGroupIDByIndex(int32_t Index)
{
    return 0;
}
const char * GetFriendsGroupName(int16_t GroupID)
{
    return "friendGroup";
}
uint32_t GetFriendsGroupMembersCount(int16_t GroupID)
{
    return 0;
}
uint32_t GetFriendsGroupMembersList(int16_t, CSteamID *, int32_t)
{
    return 0;
}

#pragma endregion

void INTERFACE_STEAMFRIENDS001::Initialize()
{
    Methods = new void *[26];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = SetPersonaState;
    Methods[4] = AddFriend;
    Methods[5] = RemoveFriend;
    Methods[6] = HasFriend;
    Methods[7] = GetFriendRelationship;
    Methods[8] = GetFriendPersonaState;
    Methods[9] = Deprecated_GetFriendGamePlayed;
    Methods[10] = GetFriendPersonaName;
    Methods[11] = AddFriendByName;
    Methods[12] = GetFriendByIndex;
    Methods[13] = SendMsgToFriend;
    Methods[14] = SetFriendRegValue;
    Methods[15] = GetFriendRegValue;
    Methods[16] = GetFriendPersonaNameHistory;
    Methods[17] = GetChatMessage;
    Methods[18] = SendMsgToFriend2;
    Methods[19] = GetChatIDOfChatHistoryStart;
    Methods[20] = SetChatHistoryStart;
    Methods[21] = ClearChatHistory;
    Methods[22] = InviteFriendByEmail;
    Methods[23] = GetBlockedFriendCount;
    Methods[24] = GetFriendGamePlayed;
    Methods[25] = GetFriendGamePlayed2;


    Initialized = true;
}
void INTERFACE_STEAMFRIENDS002::Initialize()
{
    Methods = new void *[29];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = SetPersonaState;
    Methods[4] = GetFriendCount;
    Methods[5] = GetFriendByIndex;
    Methods[6] = GetFriendRelationship;
    Methods[7] = GetFriendPersonaState;
    Methods[8] = GetFriendPersonaName;
    Methods[9] = SetFriendRegValue;
    Methods[10] = GetFriendRegValue;
    Methods[11] = GetFriendGamePlayed;
    Methods[12] = GetFriendPersonaNameHistory;
    Methods[13] = AddFriend;
    Methods[14] = RemoveFriend;
    Methods[15] = HasFriend;
    Methods[16] = AddFriendByName;
    Methods[17] = InviteFriendByEmail;
    Methods[18] = GetChatMessage;
    Methods[19] = SendMsgToFriend2;
    Methods[20] = GetChatIDOfChatHistoryStart;
    Methods[21] = SetChatHistoryStart;
    Methods[22] = ClearChatHistory;
    Methods[23] = GetClanCount;
    Methods[24] = GetClanName;
    Methods[25] = InviteFriendToClan;
    Methods[26] = AcknowledgeInviteToClan;
    Methods[27] = GetFriendCountFromSource;
    Methods[28] = GetFriendFromSourceByIndex;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS003::Initialize()
{
    Methods = new void *[20];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendAvatar;
    Methods[9] = GetFriendGamePlayed;
    Methods[10] = GetFriendPersonaNameHistory;
    Methods[11] = HasFriend;
    Methods[12] = GetClanCount;
    Methods[13] = GetClanByIndex;
    Methods[14] = GetClanName;
    Methods[15] = GetFriendCountFromSource;
    Methods[16] = GetFriendFromSourceByIndex;
    Methods[17] = IsUserInSource;
    Methods[18] = SetInGameVoiceSpeaking;
    Methods[19] = ActivateGameOverlay;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS004::Initialize()
{
    Methods = new void *[20];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendAvatar;
    Methods[9] = GetFriendGamePlayed;
    Methods[10] = GetFriendPersonaNameHistory;
    Methods[11] = HasFriend;
    Methods[12] = GetClanCount;
    Methods[13] = GetClanByIndex;
    Methods[14] = GetClanName;
    Methods[15] = GetFriendCountFromSource;
    Methods[16] = GetFriendFromSourceByIndex;
    Methods[17] = IsUserInSource;
    Methods[18] = SetInGameVoiceSpeaking;
    Methods[19] = ActivateGameOverlay;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS005::Initialize()
{
    Methods = new void *[24];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendAvatar;
    Methods[9] = GetFriendGamePlayed;
    Methods[10] = GetFriendPersonaNameHistory;
    Methods[11] = HasFriend;
    Methods[12] = GetClanCount;
    Methods[13] = GetClanByIndex;
    Methods[14] = GetClanName;
    Methods[15] = GetFriendCountFromSource;
    Methods[16] = GetFriendFromSourceByIndex;
    Methods[17] = IsUserInSource;
    Methods[18] = SetInGameVoiceSpeaking;
    Methods[19] = ActivateGameOverlay;
    Methods[20] = ActivateGameOverlayToUser;
    Methods[21] = ActivateGameOverlayToWebPage;
    Methods[22] = ActivateGameOverlayToStore;
    Methods[23] = SetPlayedWith;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS006::Initialize()
{
    Methods = new void *[26];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendAvatar;
    Methods[9] = GetFriendGamePlayed;
    Methods[10] = GetFriendPersonaNameHistory;
    Methods[11] = HasFriend;
    Methods[12] = GetClanCount;
    Methods[13] = GetClanByIndex;
    Methods[14] = GetClanName;
    Methods[15] = GetClanTag;
    Methods[16] = GetFriendCountFromSource;
    Methods[17] = GetFriendFromSourceByIndex;
    Methods[18] = IsUserInSource;
    Methods[19] = SetInGameVoiceSpeaking;
    Methods[20] = ActivateGameOverlay;
    Methods[21] = ActivateGameOverlayToUser;
    Methods[22] = ActivateGameOverlayToWebPage;
    Methods[23] = ActivateGameOverlayToStore;
    Methods[24] = SetPlayedWith;
    Methods[25] = ActivateGameOverlayInviteDialog;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS007::Initialize()
{
    Methods = new void *[28];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetFriendCountFromSource;
    Methods[16] = GetFriendFromSourceByIndex;
    Methods[17] = IsUserInSource;
    Methods[18] = SetInGameVoiceSpeaking;
    Methods[19] = ActivateGameOverlay;
    Methods[20] = ActivateGameOverlayToUser;
    Methods[21] = ActivateGameOverlayToWebPage;
    Methods[22] = ActivateGameOverlayToStore;
    Methods[23] = SetPlayedWith;
    Methods[24] = ActivateGameOverlayInviteDialog;
    Methods[25] = GetSmallFriendAvatar;
    Methods[26] = GetMediumFriendAvatar;
    Methods[27] = GetLargeFriendAvatar;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS008::Initialize()
{
    Methods = new void *[34];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetFriendCountFromSource;
    Methods[16] = GetFriendFromSourceByIndex;
    Methods[17] = IsUserInSource;
    Methods[18] = SetInGameVoiceSpeaking;
    Methods[19] = ActivateGameOverlay;
    Methods[20] = ActivateGameOverlayToUser;
    Methods[21] = ActivateGameOverlayToWebPage;
    Methods[22] = ActivateGameOverlayToStore;
    Methods[23] = SetPlayedWith;
    Methods[24] = ActivateGameOverlayInviteDialog;
    Methods[25] = GetSmallFriendAvatar;
    Methods[26] = GetMediumFriendAvatar;
    Methods[27] = GetLargeFriendAvatar;
    Methods[28] = RequestUserInformation;
    Methods[29] = RequestClanOfficerList;
    Methods[30] = GetClanOwner;
    Methods[31] = GetClanOfficerCount;
    Methods[32] = GetClanOfficerByIndex;
    Methods[33] = GetUserRestrictions;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS009::Initialize()
{
    Methods = new void *[44];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetFriendCountFromSource;
    Methods[16] = GetFriendFromSourceByIndex;
    Methods[17] = IsUserInSource;
    Methods[18] = SetInGameVoiceSpeaking;
    Methods[19] = ActivateGameOverlay;
    Methods[20] = ActivateGameOverlayToUser;
    Methods[21] = ActivateGameOverlayToWebPage;
    Methods[22] = ActivateGameOverlayToStore;
    Methods[23] = SetPlayedWith;
    Methods[24] = ActivateGameOverlayInviteDialog;
    Methods[25] = GetSmallFriendAvatar;
    Methods[26] = GetMediumFriendAvatar;
    Methods[27] = GetLargeFriendAvatar;
    Methods[28] = RequestUserInformation;
    Methods[29] = RequestClanOfficerList;
    Methods[30] = GetClanOwner;
    Methods[31] = GetClanOfficerCount;
    Methods[32] = GetClanOfficerByIndex;
    Methods[33] = GetUserRestrictions;
    Methods[34] = SetRichPresence;
    Methods[35] = ClearRichPresence;
    Methods[36] = GetFriendRichPresence;
    Methods[37] = GetFriendRichPresenceKeyCount;
    Methods[38] = GetFriendRichPresenceKeyByIndex;
    Methods[39] = InviteUserToGame;
    Methods[40] = GetCoplayFriendCount;
    Methods[41] = GetCoplayFriend;
    Methods[42] = GetFriendCoplayTime;
    Methods[43] = GetFriendCoplayGame;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS010::Initialize()
{
    Methods = new void *[59];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetClanActivityCounts;
    Methods[16] = DownloadClanActivityCounts;
    Methods[17] = GetFriendCountFromSource;
    Methods[18] = GetFriendFromSourceByIndex;
    Methods[19] = IsUserInSource;
    Methods[20] = SetInGameVoiceSpeaking;
    Methods[21] = ActivateGameOverlay;
    Methods[22] = ActivateGameOverlayToUser;
    Methods[23] = ActivateGameOverlayToWebPage;
    Methods[24] = ActivateGameOverlayToStore;
    Methods[25] = SetPlayedWith;
    Methods[26] = ActivateGameOverlayInviteDialog;
    Methods[27] = GetSmallFriendAvatar;
    Methods[28] = GetMediumFriendAvatar;
    Methods[29] = GetLargeFriendAvatar;
    Methods[30] = RequestUserInformation;
    Methods[31] = RequestClanOfficerList;
    Methods[32] = GetClanOwner;
    Methods[33] = GetClanOfficerCount;
    Methods[34] = GetClanOfficerByIndex;
    Methods[35] = GetUserRestrictions;
    Methods[36] = SetRichPresence;
    Methods[37] = ClearRichPresence;
    Methods[38] = GetFriendRichPresence;
    Methods[39] = GetFriendRichPresenceKeyCount;
    Methods[40] = GetFriendRichPresenceKeyByIndex;
    Methods[41] = InviteUserToGame;
    Methods[42] = GetCoplayFriendCount;
    Methods[43] = GetCoplayFriend;
    Methods[44] = GetFriendCoplayTime;
    Methods[45] = GetFriendCoplayGame;
    Methods[46] = JoinClanChatRoom;
    Methods[47] = LeaveClanChatRoom;
    Methods[48] = GetClanChatMemberCount;
    Methods[49] = GetChatMemberByIndex;
    Methods[50] = SendClanChatMessage;
    Methods[51] = GetClanChatMessage;
    Methods[52] = IsClanChatAdmin;
    Methods[53] = IsClanChatWindowOpenInSteam;
    Methods[54] = OpenClanChatWindowInSteam;
    Methods[55] = CloseClanChatWindowInSteam;
    Methods[56] = SetListenForFriendsMessages;
    Methods[57] = ReplyToFriendMessage;
    Methods[58] = GetFriendMessage;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS011::Initialize()
{
    Methods = new void *[63];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetClanActivityCounts;
    Methods[16] = DownloadClanActivityCounts;
    Methods[17] = GetFriendCountFromSource;
    Methods[18] = GetFriendFromSourceByIndex;
    Methods[19] = IsUserInSource;
    Methods[20] = SetInGameVoiceSpeaking;
    Methods[21] = ActivateGameOverlay;
    Methods[22] = ActivateGameOverlayToUser;
    Methods[23] = ActivateGameOverlayToWebPage;
    Methods[24] = ActivateGameOverlayToStore;
    Methods[25] = SetPlayedWith;
    Methods[26] = ActivateGameOverlayInviteDialog;
    Methods[27] = GetSmallFriendAvatar;
    Methods[28] = GetMediumFriendAvatar;
    Methods[29] = GetLargeFriendAvatar;
    Methods[30] = RequestUserInformation;
    Methods[31] = RequestClanOfficerList;
    Methods[32] = GetClanOwner;
    Methods[33] = GetClanOfficerCount;
    Methods[34] = GetClanOfficerByIndex;
    Methods[35] = GetUserRestrictions;
    Methods[36] = SetRichPresence;
    Methods[37] = ClearRichPresence;
    Methods[38] = GetFriendRichPresence;
    Methods[39] = GetFriendRichPresenceKeyCount;
    Methods[40] = GetFriendRichPresenceKeyByIndex;
    Methods[41] = RequestFriendRichPresence;
    Methods[42] = InviteUserToGame;
    Methods[43] = GetCoplayFriendCount;
    Methods[44] = GetCoplayFriend;
    Methods[45] = GetFriendCoplayTime;
    Methods[46] = GetFriendCoplayGame;
    Methods[47] = JoinClanChatRoom;
    Methods[48] = LeaveClanChatRoom;
    Methods[49] = GetClanChatMemberCount;
    Methods[50] = GetChatMemberByIndex;
    Methods[51] = SendClanChatMessage;
    Methods[52] = GetClanChatMessage;
    Methods[53] = IsClanChatAdmin;
    Methods[54] = IsClanChatWindowOpenInSteam;
    Methods[55] = OpenClanChatWindowInSteam;
    Methods[56] = CloseClanChatWindowInSteam;
    Methods[57] = SetListenForFriendsMessages;
    Methods[58] = ReplyToFriendMessage;
    Methods[59] = GetFriendMessage;
    Methods[60] = GetFollowerCount;
    Methods[61] = IsFollowing;
    Methods[62] = EnumerateFollowingList;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS012::Initialize()
{
    Methods = new void *[63];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetClanActivityCounts;
    Methods[16] = DownloadClanActivityCounts;
    Methods[17] = GetFriendCountFromSource;
    Methods[18] = GetFriendFromSourceByIndex;
    Methods[19] = IsUserInSource;
    Methods[20] = SetInGameVoiceSpeaking;
    Methods[21] = ActivateGameOverlay;
    Methods[22] = ActivateGameOverlayToUser;
    Methods[23] = ActivateGameOverlayToWebPage;
    Methods[24] = ActivateGameOverlayToStore;
    Methods[25] = SetPlayedWith;
    Methods[26] = ActivateGameOverlayInviteDialog;
    Methods[27] = GetSmallFriendAvatar;
    Methods[28] = GetMediumFriendAvatar;
    Methods[29] = GetLargeFriendAvatar;
    Methods[30] = RequestUserInformation;
    Methods[31] = RequestClanOfficerList;
    Methods[32] = GetClanOwner;
    Methods[33] = GetClanOfficerCount;
    Methods[34] = GetClanOfficerByIndex;
    Methods[35] = GetUserRestrictions;
    Methods[36] = SetRichPresence;
    Methods[37] = ClearRichPresence;
    Methods[38] = GetFriendRichPresence;
    Methods[39] = GetFriendRichPresenceKeyCount;
    Methods[40] = GetFriendRichPresenceKeyByIndex;
    Methods[41] = RequestFriendRichPresence;
    Methods[42] = InviteUserToGame;
    Methods[43] = GetCoplayFriendCount;
    Methods[44] = GetCoplayFriend;
    Methods[45] = GetFriendCoplayTime;
    Methods[46] = GetFriendCoplayGame;
    Methods[47] = JoinClanChatRoom;
    Methods[48] = LeaveClanChatRoom;
    Methods[49] = GetClanChatMemberCount;
    Methods[50] = GetChatMemberByIndex;
    Methods[51] = SendClanChatMessage;
    Methods[52] = GetClanChatMessage;
    Methods[53] = IsClanChatAdmin;
    Methods[54] = IsClanChatWindowOpenInSteam;
    Methods[55] = OpenClanChatWindowInSteam;
    Methods[56] = CloseClanChatWindowInSteam;
    Methods[57] = SetListenForFriendsMessages;
    Methods[58] = ReplyToFriendMessage;
    Methods[59] = GetFriendMessage;
    Methods[60] = GetFollowerCount;
    Methods[61] = IsFollowing;
    Methods[62] = EnumerateFollowingList;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS013::Initialize()
{
    Methods = new void *[63];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = HasFriend;
    Methods[11] = GetClanCount;
    Methods[12] = GetClanByIndex;
    Methods[13] = GetClanName;
    Methods[14] = GetClanTag;
    Methods[15] = GetClanActivityCounts;
    Methods[16] = DownloadClanActivityCounts;
    Methods[17] = GetFriendCountFromSource;
    Methods[18] = GetFriendFromSourceByIndex;
    Methods[19] = IsUserInSource;
    Methods[20] = SetInGameVoiceSpeaking;
    Methods[21] = ActivateGameOverlay;
    Methods[22] = ActivateGameOverlayToUser;
    Methods[23] = ActivateGameOverlayToWebPage;
    Methods[24] = ActivateGameOverlayToStore;
    Methods[25] = SetPlayedWith;
    Methods[26] = ActivateGameOverlayInviteDialog;
    Methods[27] = GetSmallFriendAvatar;
    Methods[28] = GetMediumFriendAvatar;
    Methods[29] = GetLargeFriendAvatar;
    Methods[30] = RequestUserInformation;
    Methods[31] = RequestClanOfficerList;
    Methods[32] = GetClanOwner;
    Methods[33] = GetClanOfficerCount;
    Methods[34] = GetClanOfficerByIndex;
    Methods[35] = GetUserRestrictions;
    Methods[36] = SetRichPresence;
    Methods[37] = ClearRichPresence;
    Methods[38] = GetFriendRichPresence;
    Methods[39] = GetFriendRichPresenceKeyCount;
    Methods[40] = GetFriendRichPresenceKeyByIndex;
    Methods[41] = RequestFriendRichPresence;
    Methods[42] = InviteUserToGame;
    Methods[43] = GetCoplayFriendCount;
    Methods[44] = GetCoplayFriend;
    Methods[45] = GetFriendCoplayTime;
    Methods[46] = GetFriendCoplayGame;
    Methods[47] = JoinClanChatRoom;
    Methods[48] = LeaveClanChatRoom;
    Methods[49] = GetClanChatMemberCount;
    Methods[50] = GetChatMemberByIndex;
    Methods[51] = SendClanChatMessage;
    Methods[52] = GetClanChatMessage;
    Methods[53] = IsClanChatAdmin;
    Methods[54] = IsClanChatWindowOpenInSteam;
    Methods[55] = OpenClanChatWindowInSteam;
    Methods[56] = CloseClanChatWindowInSteam;
    Methods[57] = SetListenForFriendsMessages;
    Methods[58] = ReplyToFriendMessage;
    Methods[59] = GetFriendMessage;
    Methods[60] = GetFollowerCount;
    Methods[61] = IsFollowing;
    Methods[62] = EnumerateFollowingList;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS014::Initialize()
{
    Methods = new void *[64];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = GetPlayerNickname;
    Methods[11] = HasFriend;
    Methods[12] = GetClanCount;
    Methods[13] = GetClanByIndex;
    Methods[14] = GetClanName;
    Methods[15] = GetClanTag;
    Methods[16] = GetClanActivityCounts;
    Methods[17] = DownloadClanActivityCounts;
    Methods[18] = GetFriendCountFromSource;
    Methods[19] = GetFriendFromSourceByIndex;
    Methods[20] = IsUserInSource;
    Methods[21] = SetInGameVoiceSpeaking;
    Methods[22] = ActivateGameOverlay;
    Methods[23] = ActivateGameOverlayToUser;
    Methods[24] = ActivateGameOverlayToWebPage;
    Methods[25] = ActivateGameOverlayToStore;
    Methods[26] = SetPlayedWith;
    Methods[27] = ActivateGameOverlayInviteDialog;
    Methods[28] = GetSmallFriendAvatar;
    Methods[29] = GetMediumFriendAvatar;
    Methods[30] = GetLargeFriendAvatar;
    Methods[31] = RequestUserInformation;
    Methods[32] = RequestClanOfficerList;
    Methods[33] = GetClanOwner;
    Methods[34] = GetClanOfficerCount;
    Methods[35] = GetClanOfficerByIndex;
    Methods[36] = GetUserRestrictions;
    Methods[37] = SetRichPresence;
    Methods[38] = ClearRichPresence;
    Methods[39] = GetFriendRichPresence;
    Methods[40] = GetFriendRichPresenceKeyCount;
    Methods[41] = GetFriendRichPresenceKeyByIndex;
    Methods[42] = RequestFriendRichPresence;
    Methods[43] = InviteUserToGame;
    Methods[44] = GetCoplayFriendCount;
    Methods[45] = GetCoplayFriend;
    Methods[46] = GetFriendCoplayTime;
    Methods[47] = GetFriendCoplayGame;
    Methods[48] = JoinClanChatRoom;
    Methods[49] = LeaveClanChatRoom;
    Methods[50] = GetClanChatMemberCount;
    Methods[51] = GetChatMemberByIndex;
    Methods[52] = SendClanChatMessage;
    Methods[53] = GetClanChatMessage;
    Methods[54] = IsClanChatAdmin;
    Methods[55] = IsClanChatWindowOpenInSteam;
    Methods[56] = OpenClanChatWindowInSteam;
    Methods[57] = CloseClanChatWindowInSteam;
    Methods[58] = SetListenForFriendsMessages;
    Methods[59] = ReplyToFriendMessage;
    Methods[60] = GetFriendMessage;
    Methods[61] = GetFollowerCount;
    Methods[62] = IsFollowing;
    Methods[63] = EnumerateFollowingList;

    Initialized = true;
}
void INTERFACE_STEAMFRIENDS015::Initialize()
{
    Methods = new void *[70];

    Methods[0] = GetPersonaName;
    Methods[1] = SetPersonaName;
    Methods[2] = GetPersonaState;
    Methods[3] = GetFriendCount;
    Methods[4] = GetFriendByIndex;
    Methods[5] = GetFriendRelationship;
    Methods[6] = GetFriendPersonaState;
    Methods[7] = GetFriendPersonaName;
    Methods[8] = GetFriendGamePlayed;
    Methods[9] = GetFriendPersonaNameHistory;
    Methods[10] = GetFriendSteamLevel;
    Methods[11] = GetPlayerNickname;
    Methods[12] = GetFriendsGroupCount;
    Methods[13] = GetFriendsGroupIDByIndex;
    Methods[14] = GetFriendsGroupName;
    Methods[15] = GetFriendsGroupMembersCount;
    Methods[16] = GetFriendsGroupMembersList;
    Methods[17] = HasFriend;
    Methods[18] = GetClanCount;
    Methods[19] = GetClanByIndex;
    Methods[20] = GetClanName;
    Methods[21] = GetClanTag;
    Methods[22] = GetClanActivityCounts;
    Methods[23] = DownloadClanActivityCounts;
    Methods[24] = GetFriendCountFromSource;
    Methods[25] = GetFriendFromSourceByIndex;
    Methods[26] = IsUserInSource;
    Methods[27] = SetInGameVoiceSpeaking;
    Methods[28] = ActivateGameOverlay;
    Methods[29] = ActivateGameOverlayToUser;
    Methods[30] = ActivateGameOverlayToWebPage;
    Methods[31] = ActivateGameOverlayToStore;
    Methods[32] = SetPlayedWith;
    Methods[33] = ActivateGameOverlayInviteDialog;
    Methods[34] = GetSmallFriendAvatar;
    Methods[35] = GetMediumFriendAvatar;
    Methods[36] = GetLargeFriendAvatar;
    Methods[37] = RequestUserInformation;
    Methods[38] = RequestClanOfficerList;
    Methods[39] = GetClanOwner;
    Methods[40] = GetClanOfficerCount;
    Methods[41] = GetClanOfficerByIndex;
    Methods[42] = GetUserRestrictions;
    Methods[43] = SetRichPresence;
    Methods[44] = ClearRichPresence;
    Methods[45] = GetFriendRichPresence;
    Methods[46] = GetFriendRichPresenceKeyCount;
    Methods[47] = GetFriendRichPresenceKeyByIndex;
    Methods[48] = RequestFriendRichPresence;
    Methods[49] = InviteUserToGame;
    Methods[50] = GetCoplayFriendCount;
    Methods[51] = GetCoplayFriend;
    Methods[52] = GetFriendCoplayTime;
    Methods[53] = GetFriendCoplayGame;
    Methods[54] = JoinClanChatRoom;
    Methods[55] = LeaveClanChatRoom;
    Methods[56] = GetClanChatMemberCount;
    Methods[57] = GetChatMemberByIndex;
    Methods[58] = SendClanChatMessage;
    Methods[59] = GetClanChatMessage;
    Methods[60] = IsClanChatAdmin;
    Methods[61] = IsClanChatWindowOpenInSteam;
    Methods[62] = OpenClanChatWindowInSteam;
    Methods[63] = CloseClanChatWindowInSteam;
    Methods[64] = SetListenForFriendsMessages;
    Methods[65] = ReplyToFriendMessage;
    Methods[66] = GetFriendMessage;
    Methods[67] = GetFollowerCount;
    Methods[68] = IsFollowing;
    Methods[69] = EnumerateFollowingList;

    Initialized = true;
}
