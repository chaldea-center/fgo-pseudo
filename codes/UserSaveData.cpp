void UserSaveData___ctor(UserSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserSaveData__DeleteAndInitContinueData(bool isClearAccountData, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1

  UserSaveData__DeleteContinueData((const MethodInfo *)isClearAccountData);
  UserSaveData__InitLoad(v3);
  UserSaveData__DeleteData(isClearAccountData, v4);
  UnityEngine_PlayerPrefs__Save(0);
}


void UserSaveData__DeleteContinueData(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D30426 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&AutoOrganizationManager_TypeInfo);
    sub_1C93AD4(&BattleData_TypeInfo);
    sub_1C93AD4(&BattleResultBondsComponent_TypeInfo);
    sub_1C93AD4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C93AD4(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventSuperBossMaster___);
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C93AD4(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C93AD4(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_1C93AD4(&MaterialEventLogListViewManager_TypeInfo);
    sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
    sub_1C93AD4(&MyRoomStateMaterial_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&ServantListViewManager_TypeInfo);
    sub_1C93AD4(&ServantOperationListViewManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C93AD4(&SupportServantListViewManager_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    sub_1C93AD4(&UserServantCoinListViewManager_TypeInfo);
    sub_1C93AD4(&clsQuestCheck_TypeInfo);
    byte_4D30426 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__DeleteContinueData(0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteContinueData(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventSuperBossMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v2);
  }
  EventSuperBossMaster__DeleteContinueData((EventSuperBossMaster_o *)Instance, 0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteContinueData(0);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeVerificationMenu__DeleteContinueData(0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__DeleteContinueData(0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteContinueData(0);
  EventRewardSaveData__DeleteContinueData(0);
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
  EventInfoCircleProgressControl__DeleteContinueData(0);
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
  EventInfoPointRiverProgressControl__DeleteContinueData(0);
  ShopRootComponent__DeleteContinueData(0);
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  ScrTerminalListTop__DeleteContinueData(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__DeleteContinueData(0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData(0);
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
  EquipGraphListViewManager__DeleteContinueData(0);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  UserPresentListViewManager__DeleteContinueData(0);
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  FollowerSelectItemListViewManager__DeleteContinueData(0);
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__DeleteContinueData(0);
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__DeleteContinueData(0);
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__DeleteContinueData(0);
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
  FavoriteChangeListViewManager__DeleteContinueData(0);
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
  MaterialCollectionServantListViewManager__DeleteContinueData(0);
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
  MaterialEventLogListViewManager__DeleteContinueData(0);
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
  PartyServantListViewManager__DeleteContinueData(0);
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
  BonusSelectSummonPartyServantListViewManager__DeleteContinueData(0);
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
  ServantListViewManager__DeleteContinueData(0);
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
  ServantOperationListViewManager__DeleteContinueData(0);
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
  SupportServantEquipListViewManager__DeleteContinueData(0);
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  SupportServantListViewManager__DeleteContinueData(0);
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
  UserServantCoinListViewManager__DeleteContinueData(0);
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
  CoinRoomCoinListViewManager__DeleteContinueData(0);
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
  clsQuestCheck__DeleteContinueData(0);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  AutoOrganizationManager__DeleteContinueData(0);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__DeleteContinueData(0);
  ScriptManager__ClearSelectRouteArray(0);
  ScriptManager__ClearSelectRouteArrayInCollection(0);
  ScriptManager__DeleteDialogKey(0);
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
  BattleResultBondsComponent__DeleteGetJoinSvtData(0);
  if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial__ClearMaterialFinishReadQuest(0);
}


void UserSaveData__DeleteData(bool isClearAccountData, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0

  if ( (byte_4D30425 & 1) == 0 )
  {
    sub_1C93AD4(&AccountingManager_TypeInfo);
    sub_1C93AD4(&CombineResultFormManager_TypeInfo);
    sub_1C93AD4(&EventRandomMissionClearManager_TypeInfo);
    sub_1C93AD4(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C93AD4(&MaterialBranchRouteManager_TypeInfo);
    sub_1C93AD4(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C93AD4(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&OtherUserNewManager_TypeInfo);
    sub_1C93AD4(&QuestFocusStateManager_TypeInfo);
    sub_1C93AD4(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C93AD4(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C93AD4(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C93AD4(&TipsArchiveStateManager_TypeInfo);
    sub_1C93AD4(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C93AD4(&UserCommandCodeNewManager_TypeInfo);
    sub_1C93AD4(&UserEquipNewManager_TypeInfo);
    sub_1C93AD4(&UserMissionNewManager_TypeInfo);
    sub_1C93AD4(&UserServantCollectionManager_TypeInfo);
    sub_1C93AD4(&UserServantLockManager_TypeInfo);
    sub_1C93AD4(&UserServantNewManager_TypeInfo);
    sub_1C93AD4(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4D30425 = 1;
  }
  if ( isClearAccountData )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__DeleteSaveData(0);
    v3 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    AccountingManager__ClearAll((const MethodInfo *)v3);
  }
  BattleUseContinueRequest__DeleteSaveData(0);
  BattleCommandSpellRequest__DeleteSaveData(0);
  BattleUseContinueItemRequest__DeleteSaveData(0);
  BattleUseItemRequest__DeleteSaveData(0);
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  UserServantLockManager__DeleteSaveData(0);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__DeleteSaveData(0);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__DeleteSaveData(0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteSaveData(0);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__DeleteSaveData(0);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__DeleteSaveData(0);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__DeleteSaveData(0);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__DeleteSaveData(0);
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__DeleteSaveData(0);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__DeleteSaveData(0);
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  CombineResultFormManager__DeleteSaveData(0);
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__DeleteSaveData(0);
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__DeleteSaveData(0);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  LastUsedDeckNumberManager__DeleteSaveData(0);
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__DeleteSaveData(0);
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__DeleteSaveData(0);
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__DeleteSaveData(0);
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  WarBoardMovieHistoryManager__DeleteSaveData(0);
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager__DeleteSaveData(0);
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  QuestFocusStateManager__DeleteSaveData(0);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__DeleteSaveData(0);
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  UserMissionNewManager__DeleteSaveData(0);
}


void UserSaveData__DeleteSaveData(bool clearAsset, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D30424 & 1) == 0 )
  {
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30424 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  UserSaveData__InitLoad(v3);
  UserSaveData__DeleteData(1, v4);
  UnityEngine_PlayerPrefs__Save(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
  if ( clearAsset )
    AssetStorageCache__ClearCacheAll(1, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserSaveData__InitContinueData(bool isClearAccountData, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UserSaveData__InitLoad((const MethodInfo *)isClearAccountData);
  UserSaveData__DeleteData(isClearAccountData, v3);
  UnityEngine_PlayerPrefs__Save(0);
}


void UserSaveData__InitLoad(const MethodInfo *method)
{
  if ( (byte_4D30427 & 1) == 0 )
  {
    sub_1C93AD4(&AutoOrganizationManager_TypeInfo);
    sub_1C93AD4(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    sub_1C93AD4(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C93AD4(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_1C93AD4(&MaterialEventLogListViewManager_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_TypeInfo);
    sub_1C93AD4(&ServantFilterSelectMenu_TypeInfo);
    sub_1C93AD4(&ServantListViewManager_TypeInfo);
    sub_1C93AD4(&ServantOperationListViewManager_TypeInfo);
    sub_1C93AD4(&ServantSortSelectMenu_TypeInfo);
    sub_1C93AD4(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    sub_1C93AD4(&UserServantCoinListViewManager_TypeInfo);
    byte_4D30427 = 1;
  }
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
  EquipGraphListViewManager__InitLoad(0);
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
  ServantFilterSelectMenu__InitLoad(0);
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
  ServantSortSelectMenu__InitLoad(0);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  UserPresentListViewManager__InitLoad(0);
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  CombineServantListViewManager__InitLoad(0);
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__InitLoad(0);
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  FollowerSelectItemListViewManager__InitLoad(0);
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__InitLoad(0);
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
  PartyServantListViewManager__InitLoad(0);
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
  FavoriteChangeListViewManager__InitLoad(0);
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
  MaterialCollectionServantListViewManager__InitLoad(0);
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
  MaterialEventLogListViewManager__InitLoad(0);
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
  ServantListViewManager__InitLoad(0);
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
  ServantOperationListViewManager__InitLoad(0);
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
  SupportServantEquipListViewManager__InitLoad(0);
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
  UserServantCoinListViewManager__InitLoad(0);
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
  CoinRoomCoinListViewManager__InitLoad(0);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  AutoOrganizationManager__InitLoad(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitLoad(0);
}


void UserSaveData__Save(const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__Save(0);
}