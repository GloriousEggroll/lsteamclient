extern const char * cppISteamFriends_SteamFriends015_GetPersonaName(void *);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends015_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends015_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends015_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends015_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends015_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends015_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends015_GetFriendSteamLevel(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends015_GetPlayerNickname(void *, CSteamID);
extern int cppISteamFriends_SteamFriends015_GetFriendsGroupCount(void *);
extern FriendsGroupID_t cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends015_GetFriendsGroupName(void *, FriendsGroupID_t);
extern int cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount(void *, FriendsGroupID_t);
extern void cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList(void *, FriendsGroupID_t, CSteamID *, int);
extern bool cppISteamFriends_SteamFriends015_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends015_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends015_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends015_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends015_GetClanTag(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_GetClanActivityCounts(void *, CSteamID, int *, int *, int *);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_DownloadClanActivityCounts(void *, CSteamID *, int);
extern int cppISteamFriends_SteamFriends015_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends015_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore(void *, AppId_t, EOverlayToStoreFlag);
extern void cppISteamFriends_SteamFriends015_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends015_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends015_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends015_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends015_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends015_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends015_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends015_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends015_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends015_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends015_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends015_RequestFriendRichPresence(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends015_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends015_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends015_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends015_GetFriendCoplayGame(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_JoinClanChatRoom(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_LeaveClanChatRoom(void *, CSteamID);
extern int cppISteamFriends_SteamFriends015_GetClanChatMemberCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends015_GetChatMemberByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends015_SendClanChatMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends015_GetClanChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *, CSteamID *);
extern bool cppISteamFriends_SteamFriends015_IsClanChatAdmin(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_SetListenForFriendsMessages(void *, bool);
extern bool cppISteamFriends_SteamFriends015_ReplyToFriendMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends015_GetFriendMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_GetFollowerCount(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_IsFollowing(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends015_EnumerateFollowingList(void *, uint32);
extern bool cppISteamFriends_SteamFriends015_IsClanPublic(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup(void *, CSteamID);
