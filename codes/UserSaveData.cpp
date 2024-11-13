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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  Il2CppObject *Instance; // x0
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1

  if ( (byte_4B15C91 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&BattleData_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CoinRoomCoinListViewManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventSuperBossMaster___, v15, v16);
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, v19, v20);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v21, v22);
    sub_1BCA7E0(&FavoriteChangeListViewManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&MyRoomStateMaterial_TypeInfo, v35, v36);
    sub_1BCA7E0(&OptionManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&PartyServantListViewManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v41, v42);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&ServantListViewManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52);
    sub_1BCA7E0(&SupportServantEquipListViewManager_TypeInfo, v53, v54);
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v55, v56);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v57, v58);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v59, v60);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v61, v62);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v63, v64);
    sub_1BCA7E0(&UserServantCoinListViewManager_TypeInfo, v65, v66);
    sub_1BCA7E0(&clsQuestCheck_TypeInfo, v67, v68);
    byte_4B15C91 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
  TutorialFlag__DeleteContinueData(0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v69);
  OptionManager__DeleteContinueData(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventSuperBossMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v71);
  }
  EventSuperBossMaster__DeleteContinueData((EventSuperBossMaster_o *)Instance, 0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v72);
  ServantCommentManager__DeleteContinueData(0LL);
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v73);
  AgeVerificationMenu__DeleteContinueData(0LL);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v74);
  BattleData__DeleteContinueData(0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v75);
  ScriptManager__DeleteContinueData(0LL);
  EventRewardSaveData__DeleteContinueData(0LL);
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v76);
  EventInfoCircleProgressControl__DeleteContinueData(0LL);
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v77);
  EventInfoPointRiverProgressControl__DeleteContinueData(0LL);
  ShopRootComponent__DeleteContinueData(0LL);
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v78);
  ScrTerminalListTop__DeleteContinueData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v79);
  TerminalPramsManager__DeleteContinueData(0LL);
  QuestAfterAction__DeleteContinueData(0LL);
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v80);
  EquipGraphListViewManager__DeleteContinueData(0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v81);
  UserPresentListViewManager__DeleteContinueData(0LL);
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v82);
  FollowerSelectItemListViewManager__DeleteContinueData(0LL);
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v83);
  CombineServantListViewManager__DeleteContinueData(0LL);
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v84);
  SvtEqCombineListViewManager__DeleteContinueData(0LL);
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v85);
  FriendOperationItemListViewManager__DeleteContinueData(0LL);
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v86);
  FavoriteChangeListViewManager__DeleteContinueData(0LL);
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v87);
  MaterialCollectionServantListViewManager__DeleteContinueData(0LL);
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v88);
  MaterialEventLogListViewManager__DeleteContinueData(0LL);
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v89);
  PartyServantListViewManager__DeleteContinueData(0LL);
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v90);
  BonusSelectSummonPartyServantListViewManager__DeleteContinueData(0LL);
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v91);
  ServantListViewManager__DeleteContinueData(0LL);
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v92);
  ServantOperationListViewManager__DeleteContinueData(0LL);
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v93);
  SupportServantEquipListViewManager__DeleteContinueData(0LL);
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v94);
  SupportServantListViewManager__DeleteContinueData(0LL);
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v95);
  UserServantCoinListViewManager__DeleteContinueData(0LL);
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v96);
  CoinRoomCoinListViewManager__DeleteContinueData(0LL);
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v97);
  clsQuestCheck__DeleteContinueData(0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v98);
  AutoOrganizationManager__DeleteContinueData(0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v99);
  MyRoomParamsManager__DeleteContinueData(0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ScriptManager__DeleteDialogKey(0LL);
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v100);
  BattleResultBondsComponent__DeleteGetJoinSvtData(0LL);
  if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v101);
  MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
}


void __fastcall UserSaveData__DeleteData(bool isClearAccountData, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  AccountingManager_c *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1

  if ( (byte_4B15C90 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&UserCommandCodeNewManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v40, v41);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v42, v43);
    byte_4B15C90 = 1;
  }
  if ( isClearAccountData )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    NetworkManager__DeleteSaveData(0LL);
    v45 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v44);
    AccountingManager__ClearAll((const MethodInfo *)v45);
  }
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, method);
  UserServantLockManager__DeleteSaveData(0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v46);
  UserServantNewManager__DeleteSaveData(0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v47);
  UserServantCollectionManager__DeleteSaveData(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v48);
  ServantCommentManager__DeleteSaveData(0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v49);
  UserEquipNewManager__DeleteSaveData(0LL);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v50);
  OtherUserNewManager__DeleteSaveData(0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v51);
  UserCommandCodeNewManager__DeleteSaveData(0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v52);
  UserCommandCodeCollectionManager__DeleteSaveData(0LL);
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v53);
  ServantProfileLimitCountManager__DeleteSaveData(0LL);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v54);
  ServantProfileEventJoinManager__DeleteSaveData(0LL);
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v55);
  CombineResultFormManager__DeleteSaveData(0LL);
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v56);
  ServantCharaGraphEXOpenManager__DeleteSaveData(0LL);
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v57);
  QuestHintDialogOpenManager__DeleteSaveData(0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v58);
  LastUsedDeckNumberManager__DeleteSaveData(0LL);
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v59);
  MaterialBranchRouteManager__DeleteSaveData(0LL);
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v60);
  EventRandomMissionClearManager__DeleteSaveData(0LL);
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v61);
  MaterialGroupClearHistoryManager__DeleteSaveData(0LL);
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v62);
  WarBoardMessageHistoryManager__DeleteSaveData(0LL);
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v63);
  WarBoardMovieHistoryManager__DeleteSaveData(0LL);
}


void __fastcall UserSaveData__DeleteSaveData(bool clearAsset, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1

  if ( (byte_4B15C8F & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15C8F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__InitLoad(v4);
  UserSaveData__DeleteData(1, v5);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1

  if ( (byte_4B15C92 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&CoinRoomCoinListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&FavoriteChangeListViewManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&PartyServantListViewManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantFilterSelectMenu_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantListViewManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantSortSelectMenu_TypeInfo, v29, v30);
    sub_1BCA7E0(&SupportServantEquipListViewManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&UserServantCoinListViewManager_TypeInfo, v39, v40);
    byte_4B15C92 = 1;
  }
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1);
  EquipGraphListViewManager__InitLoad(0LL);
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v41);
  ServantFilterSelectMenu__InitLoad(0LL);
  if ( !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo, v42);
  ServantSortSelectMenu__InitLoad(0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v43);
  UserPresentListViewManager__InitLoad(0LL);
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v44);
  CombineServantListViewManager__InitLoad(0LL);
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v45);
  SvtEqCombineListViewManager__InitLoad(0LL);
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v46);
  FollowerSelectItemListViewManager__InitLoad(0LL);
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v47);
  FriendOperationItemListViewManager__InitLoad(0LL);
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v48);
  PartyServantListViewManager__InitLoad(0LL);
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v49);
  BonusSelectSummonPartyServantListViewManager__InitLoad(0LL);
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v50);
  FavoriteChangeListViewManager__InitLoad(0LL);
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v51);
  MaterialCollectionServantListViewManager__InitLoad(0LL);
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v52);
  MaterialEventLogListViewManager__InitLoad(0LL);
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v53);
  ServantListViewManager__InitLoad(0LL);
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v54);
  ServantOperationListViewManager__InitLoad(0LL);
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v55);
  SupportServantEquipListViewManager__InitLoad(0LL);
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v56);
  UserServantCoinListViewManager__InitLoad(0LL);
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v57);
  CoinRoomCoinListViewManager__InitLoad(0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v58);
  AutoOrganizationManager__InitLoad(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59);
  TerminalPramsManager__InitLoad(0LL);
}


void __fastcall UserSaveData__Save(const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__Save(0LL);
}