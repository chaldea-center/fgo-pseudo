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
  Il2CppObject *Instance; // x0
  __int64 v36; // x1

  if ( (byte_4C219EA & 1) == 0 )
  {
    sub_1C3B764(&AgeVerificationMenu_TypeInfo, v1);
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v2);
    sub_1C3B764(&BattleData_TypeInfo, v3);
    sub_1C3B764(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1C3B764(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v5);
    sub_1C3B764(&CoinRoomCoinListViewManager_TypeInfo, v6);
    sub_1C3B764(&CombineServantListViewManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventSuperBossMaster___, v8);
    sub_1C3B764(&EquipGraphListViewManager_TypeInfo, v9);
    sub_1C3B764(&EventInfoCircleProgressControl_TypeInfo, v10);
    sub_1C3B764(&EventInfoPointRiverProgressControl_TypeInfo, v11);
    sub_1C3B764(&FavoriteChangeListViewManager_TypeInfo, v12);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v13);
    sub_1C3B764(&FriendOperationItemListViewManager_TypeInfo, v14);
    sub_1C3B764(&MaterialCollectionServantListViewManager_TypeInfo, v15);
    sub_1C3B764(&MaterialEventLogListViewManager_TypeInfo, v16);
    sub_1C3B764(&MyRoomParamsManager_TypeInfo, v17);
    sub_1C3B764(&MyRoomStateMaterial_TypeInfo, v18);
    sub_1C3B764(&OptionManager_TypeInfo, v19);
    sub_1C3B764(&PartyServantListViewManager_TypeInfo, v20);
    sub_1C3B764(&ScrTerminalListTop_TypeInfo, v21);
    sub_1C3B764(&ScriptManager_TypeInfo, v22);
    sub_1C3B764(&ServantCommentManager_TypeInfo, v23);
    sub_1C3B764(&ServantListViewManager_TypeInfo, v24);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v25);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C3B764(&SupportServantEquipListViewManager_TypeInfo, v27);
    sub_1C3B764(&SupportServantListViewManager_TypeInfo, v28);
    sub_1C3B764(&SvtEqCombineListViewManager_TypeInfo, v29);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v30);
    sub_1C3B764(&TutorialFlag_TypeInfo, v31);
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, v32);
    sub_1C3B764(&UserServantCoinListViewManager_TypeInfo, v33);
    sub_1C3B764(&clsQuestCheck_TypeInfo, v34);
    byte_4C219EA = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__DeleteContinueData(0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteContinueData(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventSuperBossMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v36);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  AccountingManager_c *v23; // x0

  if ( (byte_4C219E9 & 1) == 0 )
  {
    sub_1C3B764(&AccountingManager_TypeInfo, method);
    sub_1C3B764(&CombineResultFormManager_TypeInfo, v3);
    sub_1C3B764(&EventRandomMissionClearManager_TypeInfo, v4);
    sub_1C3B764(&LastUsedDeckNumberManager_TypeInfo, v5);
    sub_1C3B764(&MaterialBranchRouteManager_TypeInfo, v6);
    sub_1C3B764(&MaterialGroupClearHistoryManager_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&OtherUserNewManager_TypeInfo, v9);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v10);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v11);
    sub_1C3B764(&ServantCommentManager_TypeInfo, v12);
    sub_1C3B764(&ServantProfileEventJoinManager_TypeInfo, v13);
    sub_1C3B764(&ServantProfileLimitCountManager_TypeInfo, v14);
    sub_1C3B764(&UserCommandCodeCollectionManager_TypeInfo, v15);
    sub_1C3B764(&UserCommandCodeNewManager_TypeInfo, v16);
    sub_1C3B764(&UserEquipNewManager_TypeInfo, v17);
    sub_1C3B764(&UserServantCollectionManager_TypeInfo, v18);
    sub_1C3B764(&UserServantLockManager_TypeInfo, v19);
    sub_1C3B764(&UserServantNewManager_TypeInfo, v20);
    sub_1C3B764(&WarBoardMessageHistoryManager_TypeInfo, v21);
    sub_1C3B764(&WarBoardMovieHistoryManager_TypeInfo, v22);
    byte_4C219E9 = 1;
  }
  if ( isClearAccountData )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__DeleteSaveData(0LL);
    v23 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    AccountingManager__ClearAll((const MethodInfo *)v23);
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

  if ( (byte_4C219E8 & 1) == 0 )
  {
    sub_1C3B764(&DataManager_TypeInfo, method);
    byte_4C219E8 = 1;
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
  __int64 v20; // x1

  if ( (byte_4C219EB & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v1);
    sub_1C3B764(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v2);
    sub_1C3B764(&CoinRoomCoinListViewManager_TypeInfo, v3);
    sub_1C3B764(&CombineServantListViewManager_TypeInfo, v4);
    sub_1C3B764(&EquipGraphListViewManager_TypeInfo, v5);
    sub_1C3B764(&FavoriteChangeListViewManager_TypeInfo, v6);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v7);
    sub_1C3B764(&FriendOperationItemListViewManager_TypeInfo, v8);
    sub_1C3B764(&MaterialCollectionServantListViewManager_TypeInfo, v9);
    sub_1C3B764(&MaterialEventLogListViewManager_TypeInfo, v10);
    sub_1C3B764(&PartyServantListViewManager_TypeInfo, v11);
    sub_1C3B764(&ServantFilterSelectMenu_TypeInfo, v12);
    sub_1C3B764(&ServantListViewManager_TypeInfo, v13);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v14);
    sub_1C3B764(&ServantSortSelectMenu_TypeInfo, v15);
    sub_1C3B764(&SupportServantEquipListViewManager_TypeInfo, v16);
    sub_1C3B764(&SvtEqCombineListViewManager_TypeInfo, v17);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v18);
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, v19);
    sub_1C3B764(&UserServantCoinListViewManager_TypeInfo, v20);
    byte_4C219EB = 1;
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