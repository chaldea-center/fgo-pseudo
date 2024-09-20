void __fastcall UserSaveData___ctor(UserSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserSaveData__DeleteAndInitContinueData(bool isClearAccountData, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1

  UserSaveData__DeleteContinueData((const MethodInfo *)isClearAccountData);
  UserSaveData__InitLoad(v3);
  UserSaveData__DeleteData(isClearAccountData, v4);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall UserSaveData__DeleteContinueData(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5AC0D & 1) == 0 )
  {
    sub_1B885B0(&AgeVerificationMenu_TypeInfo);
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventSuperBossMaster___);
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    sub_1B885B0(&EventInfoCircleProgressControl_TypeInfo);
    sub_1B885B0(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1B885B0(&FavoriteChangeListViewManager_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    sub_1B885B0(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    sub_1B885B0(&MyRoomParamsManager_TypeInfo);
    sub_1B885B0(&MyRoomStateMaterial_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    sub_1B885B0(&SupportServantListViewManager_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    sub_1B885B0(&UserServantCoinListViewManager_TypeInfo);
    sub_1B885B0(&clsQuestCheck_TypeInfo);
    byte_4A5AC0D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__DeleteContinueData(0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteContinueData(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventSuperBossMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v2);
  }
  EventSuperBossMaster__DeleteContinueData((EventSuperBossMaster_o *)Instance, 0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteContinueData(0LL);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeVerificationMenu__DeleteContinueData(0LL);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__DeleteContinueData(0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteContinueData(0LL);
  EventRewardSaveData__DeleteContinueData(0LL);
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
  EventInfoCircleProgressControl__DeleteContinueData(0LL);
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
  EventInfoPointRiverProgressControl__DeleteContinueData(0LL);
  ShopRootComponent__DeleteContinueData(0LL);
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  ScrTerminalListTop__DeleteContinueData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__DeleteContinueData(0LL);
  QuestAfterAction__DeleteContinueData(0LL);
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
  EquipGraphListViewManager__DeleteContinueData(0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  UserPresentListViewManager__DeleteContinueData(0LL);
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  FollowerSelectItemListViewManager__DeleteContinueData(0LL);
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__DeleteContinueData(0LL);
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__DeleteContinueData(0LL);
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__DeleteContinueData(0LL);
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
  FavoriteChangeListViewManager__DeleteContinueData(0LL);
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
  MaterialCollectionServantListViewManager__DeleteContinueData(0LL);
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
  MaterialEventLogListViewManager__DeleteContinueData(0LL);
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
  PartyServantListViewManager__DeleteContinueData(0LL);
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
  BonusSelectSummonPartyServantListViewManager__DeleteContinueData(0LL);
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
  ServantListViewManager__DeleteContinueData(0LL);
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
  ServantOperationListViewManager__DeleteContinueData(0LL);
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
  SupportServantEquipListViewManager__DeleteContinueData(0LL);
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  SupportServantListViewManager__DeleteContinueData(0LL);
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
  UserServantCoinListViewManager__DeleteContinueData(0LL);
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
  CoinRoomCoinListViewManager__DeleteContinueData(0LL);
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
  clsQuestCheck__DeleteContinueData(0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  AutoOrganizationManager__DeleteContinueData(0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__DeleteContinueData(0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ScriptManager__DeleteDialogKey(0LL);
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
  BattleResultBondsComponent__DeleteGetJoinSvtData(0LL);
  if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
}


void __fastcall UserSaveData__DeleteData(bool isClearAccountData, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0

  if ( (byte_4A5AC0C & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&CombineResultFormManager_TypeInfo);
    sub_1B885B0(&EventRandomMissionClearManager_TypeInfo);
    sub_1B885B0(&LastUsedDeckNumberManager_TypeInfo);
    sub_1B885B0(&MaterialBranchRouteManager_TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OtherUserNewManager_TypeInfo);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    sub_1B885B0(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1B885B0(&ServantProfileLimitCountManager_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    sub_1B885B0(&UserServantLockManager_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    sub_1B885B0(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1B885B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4A5AC0C = 1;
  }
  if ( isClearAccountData )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__DeleteSaveData(0LL);
    v3 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    AccountingManager__ClearAll((const MethodInfo *)v3);
  }
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  UserServantLockManager__DeleteSaveData(0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__DeleteSaveData(0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__DeleteSaveData(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteSaveData(0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__DeleteSaveData(0LL);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__DeleteSaveData(0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__DeleteSaveData(0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__DeleteSaveData(0LL);
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__DeleteSaveData(0LL);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__DeleteSaveData(0LL);
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  CombineResultFormManager__DeleteSaveData(0LL);
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__DeleteSaveData(0LL);
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__DeleteSaveData(0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  LastUsedDeckNumberManager__DeleteSaveData(0LL);
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__DeleteSaveData(0LL);
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__DeleteSaveData(0LL);
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__DeleteSaveData(0LL);
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  WarBoardMessageHistoryManager__DeleteSaveData(0LL);
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  WarBoardMovieHistoryManager__DeleteSaveData(0LL);
}


void __fastcall UserSaveData__DeleteSaveData(bool clearAsset, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A5AC0B & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC0B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__InitLoad(v3);
  UserSaveData__DeleteData(1, v4);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
  if ( clearAsset )
    AssetStorageCache__ClearCacheAll(1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserSaveData__InitContinueData(bool isClearAccountData, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UserSaveData__InitLoad((const MethodInfo *)isClearAccountData);
  UserSaveData__DeleteData(isClearAccountData, v3);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall UserSaveData__InitLoad(const MethodInfo *method)
{
  if ( (byte_4A5AC0E & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    sub_1B885B0(&FavoriteChangeListViewManager_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    sub_1B885B0(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    sub_1B885B0(&ServantFilterSelectMenu_TypeInfo);
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    sub_1B885B0(&ServantSortSelectMenu_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    sub_1B885B0(&UserServantCoinListViewManager_TypeInfo);
    byte_4A5AC0E = 1;
  }
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
  EquipGraphListViewManager__InitLoad(0LL);
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
  ServantFilterSelectMenu__InitLoad(0LL);
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
  ServantSortSelectMenu__InitLoad(0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  UserPresentListViewManager__InitLoad(0LL);
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__InitLoad(0LL);
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__InitLoad(0LL);
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  FollowerSelectItemListViewManager__InitLoad(0LL);
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__InitLoad(0LL);
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
  PartyServantListViewManager__InitLoad(0LL);
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
  BonusSelectSummonPartyServantListViewManager__InitLoad(0LL);
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
  FavoriteChangeListViewManager__InitLoad(0LL);
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
  MaterialCollectionServantListViewManager__InitLoad(0LL);
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
  MaterialEventLogListViewManager__InitLoad(0LL);
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
  ServantListViewManager__InitLoad(0LL);
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
  ServantOperationListViewManager__InitLoad(0LL);
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
  SupportServantEquipListViewManager__InitLoad(0LL);
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
  UserServantCoinListViewManager__InitLoad(0LL);
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
  CoinRoomCoinListViewManager__InitLoad(0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  AutoOrganizationManager__InitLoad(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitLoad(0LL);
}


void __fastcall UserSaveData__Save(const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__Save(0LL);
}