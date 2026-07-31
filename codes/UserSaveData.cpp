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
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1

  if ( (byte_5938096 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&AutoOrganizationManager_TypeInfo);
    sub_21FFC50(&BattleData_TypeInfo);
    sub_21FFC50(&BattleResultBondsComponent_TypeInfo);
    sub_21FFC50(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_21FFC50(&CoinRoomCoinListViewManager_TypeInfo);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventSuperBossMaster___);
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    sub_21FFC50(&EventFortificationListViewManager_TypeInfo);
    sub_21FFC50(&EventInfoCircleProgressControl_TypeInfo);
    sub_21FFC50(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_21FFC50(&EventServantFatigueListViewManager_TypeInfo);
    sub_21FFC50(&FavoriteChangeListViewManager_TypeInfo);
    sub_21FFC50(&FollowerSelectItemListViewManager_TypeInfo);
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    sub_21FFC50(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_21FFC50(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    sub_21FFC50(&MultipleViewListViewManager_TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&MyRoomStateMaterial_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&PartyServantListViewManager_TypeInfo);
    sub_21FFC50(&PhotoCampaignListViewManager_TypeInfo);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&ServantCostumeListViewManager_TypeInfo);
    sub_21FFC50(&ServantFilterSelectMenu_TypeInfo);
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    sub_21FFC50(&ServantSortSelectMenu_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SupportServantEquipListViewManager_TypeInfo);
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    sub_21FFC50(&UserServantCoinListViewManager_TypeInfo);
    sub_21FFC50(&WarehouseListViewManager_TypeInfo);
    sub_21FFC50(&clsQuestCheck_TypeInfo);
    byte_5938096 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
  TutorialFlag__DeleteContinueData(0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v2);
  OptionManager__DeleteContinueData(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventSuperBossMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  EventSuperBossMaster__DeleteContinueData((EventSuperBossMaster_o *)Instance, 0);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v5);
  ServantCommentManager__DeleteContinueData(0);
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v6);
  AgeVerificationMenu__DeleteContinueData(0);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v7);
  BattleData__DeleteContinueData(0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
  ScriptManager__DeleteContinueData(0);
  EventRewardSaveData__DeleteContinueData(0);
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v9);
  EventInfoCircleProgressControl__DeleteContinueData(0);
  if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v10);
  EventInfoPointRiverProgressControl__DeleteContinueData(0);
  ShopRootComponent__DeleteContinueData(0);
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11);
  ScrTerminalListTop__DeleteContinueData(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  TerminalPramsManager__DeleteContinueData(0);
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v13);
  QuestAfterAction__DeleteContinueData(0);
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v14);
  EquipGraphListViewManager__DeleteContinueData(0);
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v15);
  UserPresentListViewManager__DeleteContinueData(0);
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v16);
  FollowerSelectItemListViewManager__DeleteContinueData(0);
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v17);
  CombineServantListViewManager__DeleteContinueData(0);
  if ( !*(&ServantCostumeListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo, v18);
  ServantCostumeListViewManager__DeleteContinueData(0);
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v19);
  SvtEqCombineListViewManager__DeleteContinueData(0);
  if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v20);
  FriendOperationItemListViewManager__DeleteContinueData(0);
  if ( !*(&FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v21);
  FavoriteChangeListViewManager__DeleteContinueData(0);
  if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v22);
  MaterialCollectionServantListViewManager__DeleteContinueData(0);
  if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v23);
  MaterialEventLogListViewManager__DeleteContinueData(0);
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v24);
  PartyServantListViewManager__DeleteContinueData(0);
  if ( !*(&BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v25);
  BonusSelectSummonPartyServantListViewManager__DeleteContinueData(0);
  if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v26);
  ServantListViewManager__DeleteContinueData(0);
  if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v27);
  ServantOperationListViewManager__DeleteContinueData(0);
  if ( !*(&SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v28);
  SupportServantEquipListViewManager__DeleteContinueData(0);
  if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v29);
  SupportServantListViewManager__DeleteContinueData(0);
  if ( !*(&UserServantCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v30);
  UserServantCoinListViewManager__DeleteContinueData(0);
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v31);
  CoinRoomCoinListViewManager__DeleteContinueData(0);
  if ( !*(&clsQuestCheck_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v32);
  clsQuestCheck__DeleteContinueData(0);
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v33);
  AutoOrganizationManager__DeleteContinueData(0);
  if ( !*(&EventFortificationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v34);
  EventFortificationListViewManager__DeleteContinueData(0);
  if ( !*(&EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, v35);
  EventServantFatigueListViewManager__DeleteContinueData(0);
  if ( !*(&MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo, v36);
  MaterialCostumeServantListViewManager__DeleteContinueData(0);
  if ( !*(&MultipleViewListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo, v37);
  MultipleViewListViewManager__DeleteContinueData(0);
  if ( !*(&PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo, v38);
  PhotoCampaignListViewManager__DeleteContinueData(0);
  if ( !*(&RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo, v39);
  RecommendSupportEquipSelectListViewManager__DeleteContinueData(0);
  if ( !*(&RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo, v40);
  RecommendSupportServantSelectListViewManager__DeleteContinueData(0);
  if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v41);
  WarehouseListViewManager__DeleteContinueData(0);
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v42);
  MyRoomParamsManager__DeleteContinueData(0);
  if ( !*(&ServantFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v43);
  ServantFilterSelectMenu__DeleteContinueData(0);
  if ( !*(&ServantSortSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v44);
  ServantSortSelectMenu__DeleteContinueData(0);
  ScriptManager__ClearSelectRouteArray(0);
  ScriptManager__ClearSelectRouteArrayInCollection(0);
  ScriptManager__DeleteDialogKey(0);
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v45);
  BattleResultBondsComponent__DeleteGetJoinSvtData(0);
  if ( !*(&MyRoomStateMaterial_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v46);
  MyRoomStateMaterial__ClearMaterialFinishReadQuest(0);
  ExRoomMissionFilterSaveData__Delete(0);
}


void UserSaveData__DeleteData(bool isClearAccountData, const MethodInfo *method)
{
  __int64 v3; // x1
  AccountingManager_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1

  if ( (byte_5938095 & 1) == 0 )
  {
    sub_21FFC50(&AccountingManager_TypeInfo);
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&EventRandomMissionClearManager_TypeInfo);
    sub_21FFC50(&LastUsedDeckNumberManager_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&MaterialServantLimitCountManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&OtherUserNewManager_TypeInfo);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    sub_21FFC50(&QuestHintDialogOpenManager_TypeInfo);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&ServantProfileEventJoinManager_TypeInfo);
    sub_21FFC50(&ServantProfileLimitCountManager_TypeInfo);
    sub_21FFC50(&TipsArchiveStateManager_TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionManager_TypeInfo);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    sub_21FFC50(&UserEquipNewManager_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    sub_21FFC50(&UserServantLockManager_TypeInfo);
    sub_21FFC50(&UserServantNewManager_TypeInfo);
    sub_21FFC50(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5938095 = 1;
  }
  if ( isClearAccountData )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    NetworkManager__DeleteSaveData(0);
    v4 = AccountingManager_TypeInfo;
    if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v3);
    AccountingManager__ClearAll((const MethodInfo *)v4);
  }
  BattleUseContinueRequest__DeleteSaveData(0);
  BattleCommandSpellRequest__DeleteSaveData(0);
  BattleUseContinueItemRequest__DeleteSaveData(0);
  BattleUseItemRequest__DeleteSaveData(0);
  if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v5);
  UserServantLockManager__DeleteSaveData(0);
  if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v6);
  UserServantNewManager__DeleteSaveData(0);
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v7);
  UserServantCollectionManager__DeleteSaveData(0);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v8);
  ServantCommentManager__DeleteSaveData(0);
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v9);
  UserEquipNewManager__DeleteSaveData(0);
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v10);
  OtherUserNewManager__DeleteSaveData(0);
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v11);
  UserCommandCodeNewManager__DeleteSaveData(0);
  if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v12);
  UserCommandCodeCollectionManager__DeleteSaveData(0);
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v13);
  ServantProfileLimitCountManager__DeleteSaveData(0);
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v14);
  ServantProfileEventJoinManager__DeleteSaveData(0);
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v15);
  CombineResultFormManager__DeleteSaveData(0);
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v16);
  ServantCharaGraphEXOpenManager__DeleteSaveData(0);
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v17);
  QuestHintDialogOpenManager__DeleteSaveData(0);
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v18);
  LastUsedDeckNumberManager__DeleteSaveData(0);
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v19);
  MaterialBranchRouteManager__DeleteSaveData(0);
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v20);
  EventRandomMissionClearManager__DeleteSaveData(0);
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v21);
  MaterialGroupClearHistoryManager__DeleteSaveData(0);
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v22);
  WarBoardMovieHistoryManager__DeleteSaveData(0);
  if ( !*(&TipsArchiveStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo, v23);
  TipsArchiveStateManager__DeleteSaveData(0);
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v24);
  QuestFocusStateManager__DeleteSaveData(0);
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v25);
  MaterialServantLimitCountManager__DeleteSaveData(0);
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v26);
  UserMissionNewManager__DeleteSaveData(0);
}


void UserSaveData__DeleteSaveData(bool clearAsset, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1

  if ( (byte_5938094 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938094 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  UserSaveData__InitLoad(v3);
  UserSaveData__DeleteData(1, v4);
  UnityEngine_PlayerPrefs__Save(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1

  if ( (byte_5938097 & 1) == 0 )
  {
    sub_21FFC50(&AutoOrganizationManager_TypeInfo);
    sub_21FFC50(&CoinRoomCoinListViewManager_TypeInfo);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    sub_21FFC50(&FavoriteChangeListViewManager_TypeInfo);
    sub_21FFC50(&FollowerSelectItemListViewManager_TypeInfo);
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    sub_21FFC50(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    sub_21FFC50(&PartyServantListViewManager_TypeInfo);
    sub_21FFC50(&ServantFilterSelectMenu_TypeInfo);
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    sub_21FFC50(&ServantSortSelectMenu_TypeInfo);
    sub_21FFC50(&SupportServantEquipListViewManager_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    sub_21FFC50(&UserServantCoinListViewManager_TypeInfo);
    byte_5938097 = 1;
  }
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1);
  EquipGraphListViewManager__InitLoad(0);
  if ( !*(&ServantFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v2);
  ServantFilterSelectMenu__InitLoad(0);
  if ( !*(&ServantSortSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v3);
  ServantSortSelectMenu__InitLoad(0);
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v4);
  UserPresentListViewManager__InitLoad(0);
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v5);
  CombineServantListViewManager__InitLoad(0);
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v6);
  SvtEqCombineListViewManager__InitLoad(0);
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v7);
  FollowerSelectItemListViewManager__InitLoad(0);
  if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v8);
  FriendOperationItemListViewManager__InitLoad(0);
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v9);
  PartyServantListViewManager__InitLoad(0);
  if ( !*(&FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v10);
  FavoriteChangeListViewManager__InitLoad(0);
  if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v11);
  MaterialCollectionServantListViewManager__InitLoad(0);
  if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v12);
  MaterialEventLogListViewManager__InitLoad(0);
  if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v13);
  ServantListViewManager__InitLoad(0);
  if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v14);
  ServantOperationListViewManager__InitLoad(0);
  if ( !*(&SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v15);
  SupportServantEquipListViewManager__InitLoad(0);
  if ( !*(&UserServantCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v16);
  UserServantCoinListViewManager__InitLoad(0);
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v17);
  CoinRoomCoinListViewManager__InitLoad(0);
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v18);
  AutoOrganizationManager__InitLoad(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  TerminalPramsManager__InitLoad(0);
}


void UserSaveData__Save(const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__Save(0);
}