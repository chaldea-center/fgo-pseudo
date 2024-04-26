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
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  UserPresentListViewManager_c *v3; // x0
  UserServantCoinListViewManager_c *v4; // x0

  if ( (byte_434FD67 & 1) == 0 )
  {
    sub_B70694(&AgeVerificationMenu_TypeInfo);
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&BattleResultBondsComponent_TypeInfo);
    sub_B70694(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_B70694(&CoinRoomCoinListViewManager_TypeInfo);
    sub_B70694(&CombineServantListViewManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventSuperBossMaster___);
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    sub_B70694(&EventInfoCircleProgressControl_TypeInfo);
    sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B70694(&FavoriteChangeListViewManager_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&FriendOperationItemListViewManager_TypeInfo);
    sub_B70694(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&MyRoomStateMaterial_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&PartyServantListViewManager_TypeInfo);
    sub_B70694(&ScrTerminalListTop_TypeInfo);
    sub_B70694(&ScriptManager_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantListViewManager_TypeInfo);
    sub_B70694(&ServantOperationListViewManager_TypeInfo);
    sub_B70694(&ShopRootComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SupportServantEquipListViewManager_TypeInfo);
    sub_B70694(&SupportServantListViewManager_TypeInfo);
    sub_B70694(&SvtEqCombineListViewManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    sub_B70694(&UserServantCoinListViewManager_TypeInfo);
    sub_B70694(&clsQuestCheck_TypeInfo);
    byte_434FD67 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__DeleteContinueData(0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__DeleteContinueData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventSuperBossMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v2);
  }
  EventSuperBossMaster__DeleteContinueData((EventSuperBossMaster_o *)Instance, 0LL);
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__DeleteContinueData(0LL);
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeVerificationMenu__DeleteContinueData(0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__DeleteContinueData(0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteContinueData(0LL);
  EventRewardSaveData__DeleteContinueData(0LL);
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
  }
  EventInfoCircleProgressControl__DeleteContinueData(0LL);
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
  }
  EventInfoPointRiverProgressControl__DeleteContinueData(0LL);
  if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
  }
  ShopRootComponent__DeleteContinueData(0LL);
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  ScrTerminalListTop__DeleteContinueData(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__DeleteContinueData(0LL);
  QuestAfterAction__DeleteContinueData(0LL);
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
  }
  EquipGraphListViewManager__DeleteContinueData(0LL);
  v3 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  UserPresentListViewManager__DeleteContinueData((const MethodInfo *)v3);
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  FollowerSelectItemListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
  }
  FavoriteChangeListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
  }
  MaterialCollectionServantListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
  }
  MaterialEventLogListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
  }
  PartyServantListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
  }
  BonusSelectSummonPartyServantListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
  }
  ServantListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
  }
  ServantOperationListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
  }
  SupportServantEquipListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  SupportServantListViewManager__DeleteContinueData(0LL);
  v4 = UserServantCoinListViewManager_TypeInfo;
  if ( (BYTE3(UserServantCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
  }
  UserServantCoinListViewManager__DeleteContinueData((const MethodInfo *)v4);
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
  }
  CoinRoomCoinListViewManager__DeleteContinueData(0LL);
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
  }
  clsQuestCheck__DeleteContinueData(0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  AutoOrganizationManager__DeleteContinueData(0LL);
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__DeleteContinueData(0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ScriptManager__DeleteDialogKey(0LL);
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
  }
  BattleResultBondsComponent__DeleteGetJoinSvtData(0LL);
  if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
  }
  MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
}


void __fastcall UserSaveData__DeleteData(bool isClearAccountData, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0

  if ( (byte_434FD66 & 1) == 0 )
  {
    sub_B70694(&AccountingManager_TypeInfo);
    sub_B70694(&CombineResultFormManager_TypeInfo);
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&LastUsedDeckNumberManager_TypeInfo);
    sub_B70694(&MaterialBranchRouteManager_TypeInfo);
    sub_B70694(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OtherUserNewManager_TypeInfo);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    sub_B70694(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantProfileEventJoinManager_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&UserCommandCodeCollectionManager_TypeInfo);
    sub_B70694(&UserCommandCodeNewManager_TypeInfo);
    sub_B70694(&UserEquipNewManager_TypeInfo);
    sub_B70694(&UserServantCollectionManager_TypeInfo);
    sub_B70694(&UserServantLockManager_TypeInfo);
    sub_B70694(&UserServantNewManager_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    sub_B70694(&WarBoardMovieHistoryManager_TypeInfo);
    byte_434FD66 = 1;
  }
  if ( isClearAccountData )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    NetworkManager__DeleteSaveData(0LL);
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__ClearAll(0LL);
  }
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  UserServantLockManager__DeleteSaveData(0LL);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__DeleteSaveData(0LL);
  v3 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v3);
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__DeleteSaveData(0LL);
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__DeleteSaveData(0LL);
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__DeleteSaveData(0LL);
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__DeleteSaveData(0LL);
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__DeleteSaveData(0LL);
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__DeleteSaveData(0LL);
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__DeleteSaveData(0LL);
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  CombineResultFormManager__DeleteSaveData(0LL);
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__DeleteSaveData(0LL);
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__DeleteSaveData(0LL);
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__DeleteSaveData(0LL);
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__DeleteSaveData(0LL);
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__DeleteSaveData(0LL);
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__DeleteSaveData(0LL);
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__DeleteSaveData(0LL);
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__DeleteSaveData(0LL);
}


void __fastcall UserSaveData__DeleteSaveData(bool clearAsset, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_434FD65 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_434FD65 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__InitLoad(v3);
  UserSaveData__DeleteData(1, v4);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
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
  UserPresentListViewManager_c *v1; // x0
  UserServantCoinListViewManager_c *v2; // x0

  if ( (byte_434FD68 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    sub_B70694(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_B70694(&CoinRoomCoinListViewManager_TypeInfo);
    sub_B70694(&CombineServantListViewManager_TypeInfo);
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    sub_B70694(&FavoriteChangeListViewManager_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&FriendOperationItemListViewManager_TypeInfo);
    sub_B70694(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    sub_B70694(&PartyServantListViewManager_TypeInfo);
    sub_B70694(&ServantFilterSelectMenu_TypeInfo);
    sub_B70694(&ServantListViewManager_TypeInfo);
    sub_B70694(&ServantOperationListViewManager_TypeInfo);
    sub_B70694(&ServantSortSelectMenu_TypeInfo);
    sub_B70694(&SupportServantEquipListViewManager_TypeInfo);
    sub_B70694(&SvtEqCombineListViewManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    sub_B70694(&UserServantCoinListViewManager_TypeInfo);
    byte_434FD68 = 1;
  }
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
  }
  EquipGraphListViewManager__InitLoad(0LL);
  if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
  }
  ServantFilterSelectMenu__InitLoad(0LL);
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
  }
  ServantSortSelectMenu__InitLoad(0LL);
  v1 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  UserPresentListViewManager__InitLoad((const MethodInfo *)v1);
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__InitLoad(0LL);
  if ( (BYTE3(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  }
  SvtEqCombineListViewManager__InitLoad(0LL);
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  FollowerSelectItemListViewManager__InitLoad(0LL);
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__InitLoad(0LL);
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
  }
  PartyServantListViewManager__InitLoad(0LL);
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
  }
  BonusSelectSummonPartyServantListViewManager__InitLoad(0LL);
  if ( (BYTE3(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
  }
  FavoriteChangeListViewManager__InitLoad(0LL);
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
  }
  MaterialCollectionServantListViewManager__InitLoad(0LL);
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
  }
  MaterialEventLogListViewManager__InitLoad(0LL);
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
  }
  ServantListViewManager__InitLoad(0LL);
  if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
  }
  ServantOperationListViewManager__InitLoad(0LL);
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
  }
  SupportServantEquipListViewManager__InitLoad(0LL);
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( (BYTE3(UserServantCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
  }
  UserServantCoinListViewManager__InitLoad((const MethodInfo *)v2);
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
  }
  CoinRoomCoinListViewManager__InitLoad(0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  AutoOrganizationManager__InitLoad(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitLoad(0LL);
}


void __fastcall UserSaveData__Save(const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__Save(0LL);
}