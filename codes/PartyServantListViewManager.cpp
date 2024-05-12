void __fastcall PartyServantListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct PartyServantListViewManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v18; // x20
  struct PartyServantListViewManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v27; // x20
  struct PartyServantListViewManager_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_438ED9D & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_15712/*"WarBoardPartyServant"*/);
    sub_B775C4(&StringLiteral_10796/*"PartyServant"*/);
    byte_438ED9D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyServantListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_10796/*"PartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10796/*"PartyServant"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = PartyServantListViewManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_15712/*"WarBoardPartyServant"*/;
  v9->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15712/*"WarBoardPartyServant"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->WAR_SORT_SAVE_KEY, v10, v11, v12, v13, v14, v15, v16);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v18 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v18, SORT_SAVE_KEY, 3, 0, 0LL);
  v19 = PartyServantListViewManager_TypeInfo->static_fields;
  v19->servantSortInfo = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&v19->servantSortInfo,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v27 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v27, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v28 = PartyServantListViewManager_TypeInfo->static_fields;
  v28->warServantSortInfo = v27;
  sub_B77560(
    (BattleServantConfConponent_o *)&v28->warServantSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall PartyServantListViewManager___ctor(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  this->fields.eventId = -1;
  this->fields.updateTime = -1LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyServantListViewManager__ChangeIconScale(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  PartyServantListViewManager_o *v9; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x4

  scaleType = this->fields.scaleType;
  v9 = this;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_7:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = v9->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v9->fields.scaleType,
        (this = (PartyServantListViewManager_o *)v9->fields.sort) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  PartyServantListViewManager__ModifyList(v9, 1, v13);
  PartyServantListViewManager__SetMode_32379976(v9, 2, v14);
  PartyServantListViewManager__SortItem(v9, -1, 0, -1, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList(
        PartyServantListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  EventUpValSetupInfo_o *v9; // x23
  PartyServantListViewManager_c *v11; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 v13; // x1
  void *sort; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v22; // x9
  struct ListViewSort_o *v23; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool IsEnableEvent; // w8
  struct System_Int32_array *v33; // x1
  struct System_Int32_array *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x20
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_int__o *v51; // x28
  int size; // w27
  EventQuestMaster_o *v53; // x22
  __int64 v54; // x21
  __int64 v55; // x8
  int32_t v56; // w25
  int32_t questPhase; // w20
  int32_t questId; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x23
  PartyListViewItem_o *v60; // x23
  struct ListViewSort_o **p_sort; // x26
  PartyServantListViewManager___c_c *v62; // x0
  System_Collections_Generic_List_T__o *v63; // x22
  struct PartyServantListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__50_0; // x20
  Il2CppObject *v66; // x23
  struct PartyServantListViewManager___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  _BOOL4 v74; // w20
  struct System_Int32_array *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct ListViewSort_o *v88; // x8
  int v89; // w8
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v91; // x22
  unsigned __int64 v92; // x20
  int v93; // w21
  unsigned __int64 max_length; // x9
  struct System_Collections_Generic_List_int____o *v95; // x20
  System_Int32_array *v96; // x8
  struct System_Int32_array *v97; // x8
  struct System_Collections_Generic_List_int____o *v98; // x25
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w21
  _QWORD *v102; // x27
  int32_t v103; // w20
  System_String_o *v104; // x22
  UILabel_o *maxCostLabel; // x20
  System_String_o *v106; // x0
  UILabel_o *splitCostLabel; // x20
  System_String_o *v108; // x0
  UILabel_o *selectCostLabel; // x25
  System_String_o *v110; // x20
  System_String_o *v111; // x1
  System_String_o *v112; // x0
  __int64 v113; // x8
  unsigned __int64 v114; // x22
  UserServantEntity_o *v115; // x23
  PartyServantListViewItem_o *v116; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v118; // x4
  const MethodInfo *v119; // x1
  __int64 v120; // x0
  const MethodInfo *v121; // [xsp+8h] [xbp-98h]
  QuestRestrictionInfo_o *v122; // [xsp+10h] [xbp-90h]
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // [xsp+20h] [xbp-80h]
  EventUpValSetupInfo_o *v128; // [xsp+40h] [xbp-60h]
  __int64 v129; // [xsp+48h] [xbp-58h] BYREF

  v9 = setupInfo;
  if ( (byte_438ED84 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int_____);
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Func_int____bool___ctor__);
    sub_B775C4(&System_Func_int____bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int____TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&Method_PartyServantListViewManager___c__CreateList_b__50_0__);
    sub_B775C4(&PartyServantListViewManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_10510/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_B775C4(&StringLiteral_10508/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_B775C4(&StringLiteral_10509/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B775C4(&StringLiteral_10507/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_438ED84 = 1;
  }
  v129 = 0LL;
  v11 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v11 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v11->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortInfo,
    (System_String_array **)partyItem,
    *(System_String_array ***)&num,
    *(System_Boolean_array ***)&tutorialMode,
    (System_Int32_array **)setupInfo,
    (System_Int32_array *)questRestrictionInfo,
    (System_Int32_array *)method);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_160;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( v9 )
  {
    this->fields.isQuestStart = v9->fields.isQuestStart;
    servantFilterEventIdList = v9->fields.servantFilterEventIdList;
    if ( !servantFilterEventIdList )
      goto LABEL_160;
    v22 = *(_QWORD *)&servantFilterEventIdList->max_length;
    v23 = this->fields.sort;
    if ( v22 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v23 )
        goto LABEL_160;
    }
    else
    {
      servantFilterIdList = v9->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v23 )
        goto LABEL_160;
    }
    v23->fields.isBonusKind = (char)servantFilterIdList;
    v33 = v9->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v33;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v33,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v34 = v9->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v34;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sort = (void *)EventUpValSetupInfo__get_EventId(v9, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_160;
    IsEnableEvent = EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, (int32_t)sort, 0LL);
  }
  else
  {
    v25 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v25 )
      goto LABEL_160;
    v25->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v15, v16, v17, v18, v19, v20);
    this->fields.servantFilterIdList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v26, v27, v28, v29, v30, v31);
    IsEnableEvent = 0;
  }
  this->fields.isBuddyPoint = IsEnableEvent;
  sort = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_160;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)sort,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  sort = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !sort )
    goto LABEL_160;
  v122 = questRestrictionInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_160;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(
                            MasterData_WarQuestSelectionMaster,
                            *((_QWORD *)sort + 13),
                            0LL);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v44;
  p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignServantIdList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v128 = v9;
  if ( !FriendshipUpCampaigns || !v9 || (size = FriendshipUpCampaigns->fields._size, size < 1) )
  {
    if ( !v51 )
      goto LABEL_160;
    v60 = partyItem;
    p_sort = &this->fields.sort;
LABEL_63:
    v74 = 0;
    goto LABEL_64;
  }
  sort = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_160;
  sort = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)sort,
           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v53 = (EventQuestMaster_o *)sort;
  v54 = 4LL;
  do
  {
    if ( FriendshipUpCampaigns->fields._size <= (unsigned int)(v54 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v55 = *((_QWORD *)&FriendshipUpCampaigns->fields._items->obj.klass + v54);
    if ( !v55 )
      goto LABEL_160;
    v56 = *(_DWORD *)(v55 + 16);
    if ( FriendshipUpCampaigns->fields._size <= (unsigned int)(v54 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !v9 )
      goto LABEL_160;
    questId = v9->fields.questId;
    questPhase = v9->fields.questPhase;
    v59 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v55 + 40);
    if ( !(questId | questPhase) )
      goto LABEL_164;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    sort = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !sort || !v53 )
      goto LABEL_160;
    sort = (void *)EventQuestMaster__IsEventNotIncluded(v53, v56, questId, questPhase, 7, *((_QWORD *)sort + 13), 0LL);
    if ( ((unsigned __int8)sort & 1) == 0 )
    {
LABEL_164:
      if ( !v51 )
        goto LABEL_160;
      System_Collections_Generic_List_int___Add(
        v51,
        v56,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      sort = *p_eventCampaignServantIdList;
      if ( !*p_eventCampaignServantIdList )
        goto LABEL_160;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v59,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_int____Add__);
    }
    v9 = v128;
    ++v54;
  }
  while ( (int)v54 - 4 < size );
  if ( !v51 )
    goto LABEL_160;
  v60 = partyItem;
  p_sort = &this->fields.sort;
  if ( v51->fields._size < 1 )
    goto LABEL_63;
  v62 = PartyServantListViewManager___c_TypeInfo;
  v63 = (System_Collections_Generic_List_T__o *)*p_eventCampaignServantIdList;
  if ( (BYTE3(PartyServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager___c_TypeInfo);
    v62 = PartyServantListViewManager___c_TypeInfo;
  }
  static_fields = v62->static_fields;
  _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      static_fields = PartyServantListViewManager___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_int____bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__50_0,
      v66,
      Method_PartyServantListViewManager___c__CreateList_b__50_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_int____bool___ctor__);
    v67 = PartyServantListViewManager___c_TypeInfo->static_fields;
    v67->__9__50_0 = (struct System_Func_int____bool__o *)_9__50_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v67->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    v60 = partyItem;
  }
  v74 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          v63,
          (System_Func_T__bool__o *)_9__50_0,
          (const MethodInfo_1C66144 *)Method_BasicHelper_Any_int_____);
LABEL_64:
  v75 = System_Collections_Generic_List_int___ToArray(
          v51,
          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.eventCampaignIdList = v75;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( !this->fields.isQuestStart || !this->fields.isBuddyPoint )
  {
    v88 = *p_sort;
    if ( !*p_sort )
      goto LABEL_160;
    if ( v88->fields.sortKind == 28 )
      v88->fields.sortKind = 3;
  }
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_160;
  v89 = *((unsigned __int8 *)sort + 61);
  if ( !(v74 | v89) )
    goto LABEL_105;
  if ( this->fields.isQuestStart )
  {
    if ( v122 && this->fields.eventCampaignIdList )
    {
      sort = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !sort )
        goto LABEL_160;
      sort = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)sort,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      this->fields.questId = v122->fields.questId;
      eventCampaignIdList = this->fields.eventCampaignIdList;
      this->fields.questPhase = v122->fields.questPhase;
      if ( !eventCampaignIdList )
        goto LABEL_160;
      v91 = (EventQuestMaster_o *)sort;
      v92 = 0LL;
      v93 = -1;
      while ( 1 )
      {
        max_length = eventCampaignIdList->max_length;
        if ( (__int64)v92 >= (int)max_length )
          break;
        if ( v92 >= max_length )
          goto LABEL_161;
        if ( v91 )
        {
          sort = (void *)EventQuestMaster__IsExistQuest(
                           v91,
                           eventCampaignIdList->m_Items[v92 + 1],
                           this->fields.questId,
                           this->fields.questPhase,
                           0LL);
          eventCampaignIdList = this->fields.eventCampaignIdList;
          if ( ((unsigned __int8)sort & 1) != 0 )
            v93 = v92;
          ++v92;
          if ( eventCampaignIdList )
            continue;
        }
        goto LABEL_160;
      }
      if ( (v93 & 0x80000000) == 0 )
      {
        v95 = *p_eventCampaignServantIdList;
        if ( !*p_eventCampaignServantIdList )
          goto LABEL_160;
        if ( v95->fields._size <= (unsigned int)v93 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v96 = v95->fields._items->m_Items[v93];
        if ( !v96 )
          goto LABEL_160;
        if ( *(_QWORD *)&v96->max_length )
        {
          if ( !*p_sort )
            goto LABEL_160;
          (*p_sort)->fields.isBonusKind = 1;
          v97 = this->fields.eventCampaignIdList;
          if ( !v97 )
            goto LABEL_160;
          if ( v93 >= v97->max_length )
            goto LABEL_161;
          v98 = *p_eventCampaignServantIdList;
          if ( !*p_eventCampaignServantIdList )
            goto LABEL_160;
          if ( v98->fields._size <= (unsigned int)v93 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( !this->fields.sort )
            goto LABEL_160;
          ListViewSort__AlignBonusKind(
            this->fields.sort,
            this->fields.bonusEventIdList,
            this->fields.servantFilterIdList,
            v97->m_Items[v93 + 1],
            v98->fields._items->m_Items[v93],
            0LL);
          v60 = partyItem;
          p_sort = &this->fields.sort;
          goto LABEL_106;
        }
      }
    }
    sort = *p_sort;
    if ( !*p_sort )
      goto LABEL_160;
    if ( *((_BYTE *)sort + 61) )
      ListViewSort__AlignBonusKind(
        (ListViewSort_o *)sort,
        this->fields.bonusEventIdList,
        this->fields.servantFilterIdList,
        0,
        0LL,
        0LL);
LABEL_105:
    if ( !v122 )
      goto LABEL_107;
    goto LABEL_106;
  }
  if ( (v74 & (v89 ^ 1)) != 0 )
  {
    *((_BYTE *)sort + 61) = 1;
    sort = *p_sort;
    if ( !*p_sort )
      goto LABEL_160;
  }
  ListViewSort__AlignBonusKind2(
    (ListViewSort_o *)sort,
    this->fields.bonusEventIdList,
    this->fields.servantFilterIdList,
    this->fields.eventCampaignIdList,
    this->fields.eventCampaignServantIdList,
    0LL,
    0LL);
  if ( v122 )
  {
LABEL_106:
    QuestRestrictionInfo__SetDeckInfo_34454000(v122, v60, num, 0LL);
    this->fields.isFatigue = v122->fields.isFatigure;
    this->fields.eventId = v122->fields.eventId;
  }
LABEL_107:
  if ( !*p_sort )
    goto LABEL_160;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_114;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_114;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_114:
    this->fields.seed = normalSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  sort = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_160;
  sort = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)sort,
           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_160;
  sort = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !v60 )
    goto LABEL_160;
  maxCost = v60->fields.maxCost;
  v102 = sort;
  HIDWORD(v129) = maxCost;
  v103 = v122 ? QuestRestrictionInfo__GetTotalCostRestriction(v122, 0LL) : 0;
  if ( v103 && maxCost > v103 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_10509/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v129) = v103;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_10507/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v106 = System_Int32__ToString((int32_t)&v129 + 4, 0LL);
  sort = System_String__Concat_44901936(v104, v106, 0LL);
  if ( !maxCostLabel )
    goto LABEL_160;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = System_String__Concat_44901936(v104, v108, 0LL);
  if ( !splitCostLabel )
    goto LABEL_160;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  selectCostLabel = this->fields.selectCostLabel;
  if ( v60->fields.cost <= SHIDWORD(v129) )
  {
    LODWORD(v129) = v60->fields.cost;
    v111 = System_Int32__ToString((int32_t)&v129, 0LL);
    v112 = v104;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_10508/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    LODWORD(v129) = v60->fields.cost;
    v111 = System_Int32__ToString((int32_t)&v129, 0LL);
    v112 = v110;
  }
  sort = System_String__Concat_44901936(v112, v111, 0LL);
  if ( !selectCostLabel )
    goto LABEL_160;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_160;
  sort = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_160;
  if ( !sort )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v102 )
    goto LABEL_160;
  v113 = v102[3];
  if ( (int)v113 >= 1 )
  {
    v114 = 0LL;
    while ( v114 < (unsigned int)v113 )
    {
      v115 = (UserServantEntity_o *)v102[v114 + 4];
      v116 = (PartyServantListViewItem_o *)sub_B77694(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v116,
        v114,
        v115,
        baseDeckItemList,
        partyItem,
        num,
        tutorialMode,
        v128,
        v122,
        v121);
      sort = this->fields.itemList;
      if ( !sort )
        goto LABEL_160;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v116,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v113) = *((_DWORD *)v102 + 6);
      if ( (__int64)++v114 >= (int)v113 )
        goto LABEL_152;
    }
LABEL_161:
    v120 = sub_B776C8(sort);
    sub_B77668(v120, 0LL);
  }
LABEL_152:
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = LocalizationManager__Get((System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_160:
    sub_B7769C(sort, v13);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v118);
  PartyServantListViewManager__SetFilterButtonImage(this, v119);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_32375040(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  PartyServantListViewManager_c *v11; // x0
  QuestRestrictionInfo_o *v12; // x20
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v14; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v16; // x26
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x28
  __int64 v24; // x8
  WarBoardPartyListViewItem_o *v25; // x24
  int v26; // w21
  int v27; // w9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  int v31; // w23
  struct ListViewSort_o **p_sort; // x22
  struct ListViewSort_o *v33; // x8
  struct System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Int32_array *servantFilterIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v57; // x2
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v62; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v64; // w28
  System_String_o *v65; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v67; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v69; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  __int64 v74; // x8
  unsigned __int64 v75; // x25
  UserServantEntity_o *v76; // x28
  PartyServantListViewItem_o *v77; // x27
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v79; // x4
  const MethodInfo *v80; // x1
  __int64 v81; // x0
  const MethodInfo *v82; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+28h] [xbp-A8h]
  _BYTE v87[28]; // [xsp+30h] [xbp-A0h] BYREF
  int v88; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+70h] [xbp-60h] BYREF
  __int64 v91; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_438ED85 & 1) == 0 )
  {
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10510/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_B775C4(&StringLiteral_10508/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_B775C4(&StringLiteral_10509/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B775C4(&StringLiteral_10507/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_438ED85 = 1;
  }
  eventUpValInfo = 0LL;
  v91 = 0LL;
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  v11 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v11 = PartyServantListViewManager_TypeInfo;
  }
  v12 = questRestrictionInfo;
  warServantSortInfo = v11->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)warServantSortInfo,
    *(System_String_array ***)&num,
    *(System_String_array ***)&tutorialMode,
    (System_Boolean_array **)setupInfo,
    (System_Int32_array **)questRestrictionInfo,
    (System_Int32_array *)method,
    v7);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_96;
  setupInfoa = setupInfo;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !partyItem )
    goto LABEL_96;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v24 = *(_QWORD *)&memberItemList->max_length;
  v25 = partyItem;
  if ( v24 )
  {
    LODWORD(v91) = 0;
    if ( (int)v24 >= 1 )
    {
      v26 = 0;
      v27 = 0;
      while ( v27 < (unsigned int)v24 )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v27];
        if ( sort )
        {
          sort = (ListViewSort_o *)PartyOrganizationListViewItem__GetEventUpVal(
                                     (PartyOrganizationListViewItem_o *)sort,
                                     &eventUpValInfo,
                                     0LL);
          if ( ((unsigned __int8)sort & 1) != 0 )
          {
            if ( !eventUpValInfo )
              goto LABEL_96;
            sort = (ListViewSort_o *)eventUpValInfo->fields.dropList;
            if ( !sort )
              goto LABEL_96;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v87,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort,
              (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v89 = *(System_Collections_Generic_List_Enumerator_T__o *)v87;
            while ( 1 )
            {
              v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v89,
                      (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v28 )
                break;
              current = v89.fields.current;
              if ( !v89.fields.current )
                sub_B7769C(v28, v29);
              if ( !v16 )
                sub_B7769C(v28, v29);
              if ( !System_Collections_Generic_List_int___Contains(
                      v16,
                      (int32_t)v89.fields.current[1].klass,
                      (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
                System_Collections_Generic_List_int___Add(
                  v16,
                  (int32_t)current[1].klass,
                  (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            }
            *(_DWORD *)&v87[4 * v26 + 24] = 161;
            v31 = ++v88;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v89,
              (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            v12 = questRestrictionInfo;
            if ( v31 )
            {
              v26 = v31;
              if ( *(_DWORD *)&v87[4 * v31 + 20] == 161 )
              {
                v26 = v31 - 1;
                v88 = v31 - 1;
              }
            }
            else
            {
              v26 = 0;
            }
          }
        }
        v27 = v91 + 1;
        LODWORD(v91) = v27;
        LODWORD(v24) = memberItemList->max_length;
        if ( v27 >= (int)v24 )
          goto LABEL_31;
      }
LABEL_97:
      v81 = sub_B776C8(sort);
      sub_B77668(v81, 0LL);
    }
  }
LABEL_31:
  if ( setupInfoa )
  {
    p_sort = &this->fields.sort;
    this->fields.isQuestStart = setupInfoa->fields.isQuestStart;
    if ( !v16 )
      goto LABEL_96;
    v33 = this->fields.sort;
    if ( !v33 )
      goto LABEL_96;
    v33->fields.isBonusKind = v16->fields._size > 0;
    v34 = System_Collections_Generic_List_int___ToArray(
            v16,
            (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    this->fields.bonusEventIdList = v34;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    servantFilterIdList = setupInfoa->fields.servantFilterIdList;
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    this->fields.servantFilterIdList = servantFilterIdList;
  }
  else
  {
    v49 = this->fields.sort;
    p_sort = &this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v49 )
      goto LABEL_96;
    v49->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v17, v18, v19, v20, v21, v22);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantFilterIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B77560(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantFilterIdList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_96;
  if ( !sort->fields.isBonusKind )
  {
LABEL_41:
    if ( !v12 )
      goto LABEL_43;
    goto LABEL_42;
  }
  bonusEventIdList = this->fields.bonusEventIdList;
  v57 = this->fields.servantFilterIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind(sort, bonusEventIdList, v57, 0, 0LL, 0LL);
    goto LABEL_41;
  }
  ListViewSort__AlignBonusKind2(sort, bonusEventIdList, v57, 0LL, 0LL, 0LL, 0LL);
  if ( v12 )
LABEL_42:
    this->fields.eventId = v12->fields.eventId;
LABEL_43:
  if ( !*p_sort )
    goto LABEL_96;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_52;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_52;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_52:
    this->fields.seed = normalSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_96;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_96;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  maxCost = v25->fields.maxCost;
  v62 = OrganizationList;
  HIDWORD(v91) = maxCost;
  if ( v12 )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v12, 0LL);
    maxCost = HIDWORD(v91);
    v64 = TotalCostRestriction;
  }
  else
  {
    v64 = 0;
  }
  if ( v64 && maxCost > v64 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10509/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v91) = v64;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10507/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v67 = System_Int32__ToString((int32_t)&v91 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44901936(v65, v67, 0LL);
  if ( !maxCostLabel )
    goto LABEL_96;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44901936(v65, v69, 0LL);
  if ( !splitCostLabel )
    goto LABEL_96;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = v25->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v91) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10508/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = v25->fields.cost;
    v65 = v72;
  }
  LODWORD(v91) = cost;
  v73 = System_Int32__ToString((int32_t)&v91, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44901936(v65, v73, 0LL);
  if ( !selectCostLabel )
    goto LABEL_96;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_96;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_96;
  if ( !sort )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v62 )
    goto LABEL_96;
  v74 = *(_QWORD *)&v62->max_length;
  if ( (int)v74 >= 1 )
  {
    v75 = 0LL;
    while ( v75 < (unsigned int)v74 )
    {
      v76 = v62->m_Items[v75];
      v77 = (PartyServantListViewItem_o *)sub_B77694(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_32352512(v77, v75, v76, v25, num, tutorialMode, setupInfoa, v12, v82);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_96;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v74) = v62->max_length;
      if ( (__int64)++v75 >= (int)v74 )
        goto LABEL_88;
    }
    goto LABEL_97;
  }
LABEL_88:
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_96:
    sub_B7769C(sort, v14);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v79);
  PartyServantListViewManager__SetFilterButtonImage(this, v80);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438ED7F & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_TypeInfo);
    byte_438ED7F = 1;
  }
  v2 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v2 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_B7769C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantFilterIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall PartyServantListViewManager__EndCloseSelectFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyServantListViewManager__EndCloseSelectSortKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyServantListViewManager__EndSelectFilterKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438ED92 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438ED92 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B7769C(v9, v10);
  CommonUI__CloseServantFilterSelectMenu(Instance, v8, 0LL);
}


void __fastcall PartyServantListViewManager__EndSelectSortKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_438ED95 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyServantListViewManager_EndCloseSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438ED95 = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B7769C(v8, v9);
  CommonUI__CloseServantSortSelectMenu(Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  __int64 v11; // x11
  PartyServantListViewItem_o *v12; // x0

  v4 = this;
  if ( (byte_438ED98 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_B775C4(&PartyServantListViewItem_TypeInfo);
    byte_438ED98 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (PartyServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      v11 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
      {
        if ( (PartyServantListViewItem_c *)v9->klass->_2.typeHierarchy[v11 - 1] == PartyServantListViewItem_TypeInfo )
          v12 = (PartyServantListViewItem_o *)itemList->fields._items->m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      this = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(v12, *(const MethodInfo **)&svtId);
      ++v8;
      if ( (_DWORD)this == svtId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B7769C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetItem(
        PartyServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438ED87 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    byte_438ED87 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall PartyServantListViewManager__GetModeKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_B7769C(this, method);
  return partyServantSelectMenu->fields.modeKind;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetPartyServantListViewItem(
        PartyServantListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 v9; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_438ED9C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    byte_438ED9C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7769C(0LL, userServantId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16.fields.current = (Il2CppObject *)v15.fields.fakeValue;
  *(_OWORD *)&v16.fields.list = *(_OWORD *)&v15.fields.currentCryptoKey;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields.current;
    if ( v16.fields.current )
    {
      v9 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (PartyServantListViewItem_c *)v16.fields.current->klass->_2.typeHierarchy[v9 - 1] == PartyServantListViewItem_TypeInfo )
      {
        klass = v16.fields.current[7].klass;
        if ( !klass )
          sub_B7769C(v6, v7);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v14 = v15;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL) == userServantId )
        {
          v12 = 16;
          goto LABEL_16;
        }
      }
    }
  }
  current = 0LL;
  v12 = 14;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v12 == 16 )
    return (PartyServantListViewItem_o *)current;
  else
    return 0LL;
}


System_String_o *__fastcall PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_30EBD98 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_438ED89 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    byte_438ED89 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (PartyServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && BYTE1(v19[2].fields.sortValue2B) )
      {
        if ( BYTE1(v19[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_30EBD98 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_438ED88 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    byte_438ED88 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (PartyServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && LOBYTE(v19[2].fields.sortValue2B) )
      {
        if ( LOBYTE(v19[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438ED80 & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_TypeInfo);
    byte_438ED80 = 1;
  }
  v2 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v2 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_B7769C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


bool __fastcall PartyServantListViewManager__IsCampaignServant(
        PartyServantListViewManager_o *this,
        int32_t campaiginEventId,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x22
  struct System_Int32_array *eventCampaignIdList; // x9
  int max_length; // w8
  __int64 v10; // x21
  int32_t *v11; // x9
  System_Int32_array *v12; // x10
  int v13; // w8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0

  v6 = this;
  if ( (byte_438ED90 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_438ED90 = 1;
  }
  eventCampaignServantIdList = v6->fields.eventCampaignServantIdList;
  if ( !eventCampaignServantIdList )
    goto LABEL_20;
  eventCampaignIdList = v6->fields.eventCampaignIdList;
  if ( !eventCampaignIdList )
    goto LABEL_20;
  max_length = eventCampaignIdList->max_length;
  if ( max_length < 1 )
    goto LABEL_20;
  v10 = 0LL;
  v11 = &eventCampaignIdList->m_Items[1];
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
    {
LABEL_22:
      v16 = sub_B776C8(this);
      sub_B77668(v16, 0LL);
    }
    if ( v11[v10] == campaiginEventId )
      break;
    if ( (int)++v10 >= max_length )
      goto LABEL_20;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v12 = eventCampaignServantIdList->fields._items->m_Items[v10];
  if ( v12 && (v13 = v12->max_length, v13 >= 1) )
  {
    v14 = 0LL;
    v15 = &v12->m_Items[1];
    while ( 1 )
    {
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_22;
      if ( v15[v14] == svtId )
        break;
      ++v14;
      this = 0LL;
      if ( (int)v14 >= v13 )
        return (char)this;
    }
    LOBYTE(this) = 1;
  }
  else
  {
LABEL_20:
    LOBYTE(this) = 0;
  }
  return (char)this;
}


bool __fastcall PartyServantListViewManager__IsQuestStart(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestStart;
}


void __fastcall PartyServantListViewManager__ModifyList(
        PartyServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v8; // x21
  unsigned int v9; // w26
  int64_t v10; // x20
  __int64 v11; // x8
  UserServantEntity_o **v12; // x20
  __int64 v13; // t1
  __int128 v14; // q0
  int64_t v15; // x22
  unsigned __int64 v16; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x23
  PartyServantListViewItem_o *v18; // x23
  __int64 v19; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v21; // q0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  unsigned __int64 v25; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x20
  ListViewItem_o *v27; // x20
  __int64 v28; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v31; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-70h]

  if ( (byte_438ED86 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ED86 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v8 = Instance;
  v31 = *(_QWORD *)(Instance + 24);
  if ( (int)v31 >= 1 )
  {
    if ( !(_DWORD)v31 )
    {
LABEL_34:
      v24 = sub_B776C8(Instance);
      sub_B77668(v24, 0LL);
    }
    v9 = 0;
    while ( 1 )
    {
      v10 = v8 + 8LL * (int)v9;
      v13 = *(_QWORD *)(v10 + 32);
      v12 = (UserServantEntity_o **)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        break;
      v14 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v34.fields.fakeValue = v14;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v34;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL);
      if ( (int)size >= 1 )
      {
        v15 = Instance;
        v16 = 0LL;
        while ( 1 )
        {
          v17 = this->fields.itemList;
          if ( !v17 )
            goto LABEL_52;
          if ( v16 >= (unsigned int)v17->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v18 = (PartyServantListViewItem_o *)v17->fields._items->m_Items[v16];
          if ( !v18 )
            goto LABEL_52;
          v19 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
            || (PartyServantListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v18->fields.userServantEntity;
          if ( userServantEntity )
          {
            v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v34.fields.fakeValue = v21;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v32 = v34;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v32, 0LL);
            if ( Instance == v15 )
              break;
          }
          if ( (__int64)++v16 >= size )
            goto LABEL_32;
        }
        if ( v9 >= *(_DWORD *)(v8 + 24) )
          goto LABEL_34;
        PartyServantListViewItem__ModifyItem(v18, *v12, v22);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v18, v5);
          PartyServantListViewItem__ModifyChoiceItem(v18, v23);
        }
      }
LABEL_32:
      if ( (int)++v9 >= (int)v31 )
        goto LABEL_35;
      if ( v9 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B7769C(Instance, v5);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v25 = 0LL;
    while ( 1 )
    {
      v26 = this->fields.itemList;
      if ( !v26 )
        goto LABEL_52;
      if ( v25 >= (unsigned int)v26->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v27 = v26->fields._items->m_Items[v25];
      if ( v27 )
      {
        v28 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (PartyServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == PartyServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v27->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v27->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v25 >= size )
        return;
    }
  }
}


void __fastcall PartyServantListViewManager__OnClickBonusFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v6; // x20
  unsigned __int64 v7; // x21
  int v8; // w24
  unsigned __int64 max_length; // x9
  ListViewSort_o *v10; // x24
  System_Int32_array *v11; // x21
  System_Int32_array *v12; // x23
  System_Collections_Generic_List_int____o *v13; // x20
  System_Int32_array *v14; // x22
  const MethodInfo *v15; // x4
  struct ListViewSort_o *sort; // x22
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x25
  ListViewSort_o *v18; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v21; // x4
  int32_t v22; // w3
  __int64 v23; // x0

  if ( (byte_438ED8F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ED8F = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isQuestStart )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( eventCampaignIdList )
        {
          v6 = (EventQuestMaster_o *)Instance;
          v7 = 0LL;
          v8 = -1;
          while ( 1 )
          {
            max_length = eventCampaignIdList->max_length;
            if ( (__int64)v7 >= (int)max_length )
              break;
            if ( v7 >= max_length )
              goto LABEL_38;
            if ( v6 )
            {
              Instance = (void *)EventQuestMaster__IsExistQuest(
                                   v6,
                                   eventCampaignIdList->m_Items[v7 + 1],
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL);
              eventCampaignIdList = this->fields.eventCampaignIdList;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                v8 = v7;
              ++v7;
              if ( eventCampaignIdList )
                continue;
            }
            goto LABEL_17;
          }
        }
        else
        {
          v8 = -1;
        }
        sort = this->fields.sort;
        if ( (v8 & 0x80000000) != 0 )
        {
          if ( sort )
          {
            v18 = this->fields.sort;
            bonusEventIdList = this->fields.bonusEventIdList;
            servantFilterIdList = this->fields.servantFilterIdList;
            v22 = 0;
            v21 = 0LL;
            goto LABEL_36;
          }
        }
        else if ( eventCampaignIdList )
        {
          if ( v8 >= eventCampaignIdList->max_length )
          {
LABEL_38:
            v23 = sub_B776C8(Instance);
            sub_B77668(v23, 0LL);
          }
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( eventCampaignServantIdList )
          {
            if ( eventCampaignServantIdList->fields._size <= (unsigned int)v8 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            if ( sort )
            {
              v18 = this->fields.sort;
              bonusEventIdList = this->fields.bonusEventIdList;
              servantFilterIdList = this->fields.servantFilterIdList;
              v21 = eventCampaignServantIdList->fields._items->m_Items[v8];
              v22 = eventCampaignIdList->m_Items[v8 + 1];
LABEL_36:
              ListViewSort__IncBonusKind(v18, bonusEventIdList, servantFilterIdList, v22, v21, 0LL);
              goto LABEL_37;
            }
          }
        }
      }
    }
    else
    {
      v10 = this->fields.sort;
      v12 = this->fields.bonusEventIdList;
      v11 = this->fields.servantFilterIdList;
      v14 = this->fields.eventCampaignIdList;
      v13 = this->fields.eventCampaignServantIdList;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && v10 )
      {
        ListViewSort__IncBonusKind2(v10, v12, v11, v14, v13, 0LL, *((_QWORD *)Instance + 13), 0LL);
LABEL_37:
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v15);
        return;
      }
    }
LABEL_17:
    sub_B7769C(Instance, v4);
  }
}


void __fastcall PartyServantListViewManager__OnClickFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438ED91 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyServantListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ED91 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu(v5, 1, sort, v6, this->fields.eventId, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnClickListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyServantListViewManager__OnClickSelectListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    PartyServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortAscendingOrder(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_438ED96 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ED96 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v5);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w20
  int v4; // w8
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v7; // x22
  ServantSortSelectMenu_CallbackFunc_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438ED94 & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyServantListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ED94 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = 7;
    if ( this->fields.isFatigue )
      v4 = 7;
    else
      v4 = 3;
    if ( !this->fields.isFatigue )
    {
      if ( this->fields.isQuestStart )
      {
        if ( this->fields.isBuddyPoint )
          v3 = 8;
        else
          v3 = v4;
      }
      else
      {
        v3 = 3;
      }
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_B7769C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, v3, sort, 0, v8, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnLongPushListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8
  PartyServantListViewManager_o *v4; // x20
  PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t Index; // w2

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_8;
  if ( partyServantSelectMenu->fields.modeKind )
    return;
  v4 = this;
  this = (PartyServantListViewManager_o *)this->fields.scrollView;
  if ( !this )
LABEL_8:
    sub_B7769C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      PartyServantListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
      return;
    }
    goto LABEL_8;
  }
}


void __fastcall PartyServantListViewManager__OnMoveEnd(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_438ED8E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ED8E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject(
        PartyServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438ED8C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_B775C4(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438ED8C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_32380896(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438ED8D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_B775C4(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438ED8D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__SetFilterButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v5; // x8

  if ( (byte_438ED93 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438ED93 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32379976(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_32379976(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int64_t scrollView; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  int32_t v9; // w1
  int32_t v10; // w8
  int64_t v11; // x20
  int v12; // w8
  int64_t v13; // x21
  signed int v14; // w23
  int v15; // w25
  __int64 v16; // x8
  int64_t v17; // x22
  __int128 v18; // q0
  __int128 v19; // q0
  __int64 v20; // x23
  PartyServantListViewObject_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  float v24; // s0
  int v25; // s1
  int32_t v28; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-60h]

  if ( (byte_438ED8B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438ED8B = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (int64_t)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_46;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)scrollView, 0LL) )
  {
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 1, 0LL);
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_46;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
  }
  switch ( mode )
  {
    case 1:
      v9 = 2;
      goto LABEL_43;
    case 2:
      v9 = 3;
      goto LABEL_43;
    case 3:
      v9 = 4;
LABEL_43:
      PartyServantListViewManager__RequestListObject_32380896(this, v9, v7);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v8);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v5);
      if ( !scrollView )
        goto LABEL_46;
      v10 = *(_DWORD *)(scrollView + 24);
      v11 = scrollView;
      if ( v10 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = v10;
      v12 = *(_DWORD *)(scrollView + 24);
      if ( v12 < 1 )
        return;
      v13 = 0LL;
      v14 = 0;
      v15 = -1;
      break;
    default:
      return;
  }
  do
  {
    if ( v12 <= (unsigned int)v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    scrollView = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * v14 + 32);
    if ( !scrollView )
      goto LABEL_46;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v5);
    if ( !scrollView )
      goto LABEL_46;
    v16 = *(_QWORD *)(scrollView + 112);
    v17 = scrollView;
    if ( v16 && (*(_DWORD *)(scrollView + 204) & 0x80000000) != 0 )
    {
      if ( (v15 & 0x80000000) != 0 )
        goto LABEL_26;
      v18 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v31.fields.fakeValue = v18;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v30, 0LL);
      if ( v13 < scrollView )
      {
        v16 = *(_QWORD *)(v17 + 112);
        if ( !v16 )
          goto LABEL_46;
LABEL_26:
        v19 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v31.fields.fakeValue = v19;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v29 = v31;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v29, 0LL);
        v15 = v14;
      }
    }
    v12 = *(_DWORD *)(v11 + 24);
    ++v14;
  }
  while ( v14 < v12 );
  if ( v12 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v12 <= (unsigned int)v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v21 = *(PartyServantListViewObject_o **)(*(_QWORD *)(v11 + 16) + 8 * v20 + 32);
      v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v21 )
        break;
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
      if ( v15 == (_DWORD)v20 )
        v28 = 5;
      else
        v28 = 2;
      PartyServantListViewObject__Init(v21, v28, v22, v24, *(UnityEngine_Vector3_o *)&v25, v23);
      v12 = *(_DWORD *)(v11 + 24);
      if ( (int)++v20 >= v12 )
        return;
    }
LABEL_46:
    sub_B7769C(scrollView, v5);
  }
}


void __fastcall PartyServantListViewManager__SetMode_32380840(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32379976(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetObjectItem(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_438ED8A & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B775C4(&PartyServantListViewObject_TypeInfo);
    byte_438ED8A = 1;
  }
  if ( !obj
    || (v6 = *(&PartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  PartyServantListViewObject__Init(
    (PartyServantListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall PartyServantListViewManager__SetSortButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  __int64 sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v20; // x20
  unsigned __int64 v21; // x21
  int v22; // w24
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v24; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x21
  struct System_Int32_array *v27; // x8
  struct System_Collections_Generic_List_int____o *v28; // x26
  UILabel_o *v29; // x20
  struct ListViewSort_o *v30; // x21
  struct System_Int32_array *v31; // x19
  struct System_Int32_array *v32; // x22
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v35; // x4
  int32_t v36; // w3
  __int64 v37; // x0

  if ( (byte_438ED97 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int____TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438ED97 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = (__int64)this->fields.sort;
    if ( !sort )
      goto LABEL_52;
    v6 = this->fields.sortKindLabel;
    sort = (__int64)ListViewSort__GetSortKindButtonText((ListViewSort_o *)sort, 0LL);
    if ( !v6 )
      goto LABEL_52;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
    sort = (__int64)this->fields.sort;
    if ( !sort )
      goto LABEL_52;
    ListViewSort__SetupSortLabelLayout((ListViewSort_o *)sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( (sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_52;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
    }
    else
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = (__int64)this->fields.sort;
    if ( !sort )
      goto LABEL_52;
    if ( *(_BYTE *)(sort + 61) )
    {
      if ( !this->fields.isQuestStart )
      {
        v29 = this->fields.bonusFilterKindLabel;
        sort = (__int64)ListViewSort__GetBonusKind2Text_34346624(
                          (ListViewSort_o *)sort,
                          this->fields.bonusEventIdList,
                          this->fields.servantFilterIdList,
                          this->fields.eventCampaignIdList,
                          this->fields.eventCampaignServantIdList,
                          0LL,
                          0LL);
        if ( !v29 )
          goto LABEL_52;
LABEL_75:
        UILabel__set_text(v29, (System_String_o *)sort, 0LL);
        return;
      }
      sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !sort )
        goto LABEL_52;
      sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)sort,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( !eventCampaignIdList )
        goto LABEL_70;
      v20 = (EventQuestMaster_o *)sort;
      v21 = 0LL;
      v22 = -1;
      while ( 1 )
      {
        max_length = eventCampaignIdList->max_length;
        if ( (__int64)v21 >= (int)max_length )
          break;
        if ( v21 >= max_length )
          goto LABEL_76;
        if ( v20 )
        {
          sort = EventQuestMaster__IsExistQuest(
                   v20,
                   eventCampaignIdList->m_Items[v21 + 1],
                   this->fields.questId,
                   this->fields.questPhase,
                   0LL);
          eventCampaignIdList = this->fields.eventCampaignIdList;
          if ( (sort & 1) != 0 )
            v22 = v21;
          ++v21;
          if ( eventCampaignIdList )
            continue;
        }
        goto LABEL_52;
      }
      if ( (v22 & 0x80000000) != 0 )
      {
LABEL_70:
        sort = (__int64)this->fields.sort;
        if ( !sort )
          goto LABEL_52;
        v29 = this->fields.bonusFilterKindLabel;
        bonusEventIdList = this->fields.bonusEventIdList;
        servantFilterIdList = this->fields.servantFilterIdList;
        v36 = 0;
        v35 = 0LL;
LABEL_72:
        sort = (__int64)ListViewSort__GetBonusKindText_34344336(
                          (ListViewSort_o *)sort,
                          bonusEventIdList,
                          servantFilterIdList,
                          v36,
                          v35,
                          0LL);
        if ( !v29 )
          goto LABEL_52;
        goto LABEL_75;
      }
      sort = sub_B775DC(int___TypeInfo, 1LL);
      v24 = this->fields.eventCampaignIdList;
      if ( !v24 )
        goto LABEL_52;
      if ( v22 < v24->max_length )
      {
        if ( !sort )
          goto LABEL_52;
        if ( *(_DWORD *)(sort + 24) )
        {
          *(_DWORD *)(sort + 32) = v24->m_Items[v22 + 1];
          v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_int____TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v25,
            (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_int_____ctor__);
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( !eventCampaignServantIdList )
            goto LABEL_52;
          if ( eventCampaignServantIdList->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( !v25 )
            goto LABEL_52;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)eventCampaignServantIdList->fields._items->m_Items[v22],
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_int____Add__);
          v27 = this->fields.eventCampaignIdList;
          if ( !v27 )
            goto LABEL_52;
          if ( v22 < v27->max_length )
          {
            v28 = this->fields.eventCampaignServantIdList;
            if ( v28 )
            {
              v29 = this->fields.bonusFilterKindLabel;
              v30 = this->fields.sort;
              v32 = this->fields.bonusEventIdList;
              v31 = this->fields.servantFilterIdList;
              if ( v28->fields._size <= (unsigned int)v22 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              if ( v30 )
              {
                sort = (__int64)v30;
                bonusEventIdList = v32;
                servantFilterIdList = v31;
                v35 = v28->fields._items->m_Items[v22];
                v36 = v27->m_Items[v22 + 1];
                goto LABEL_72;
              }
            }
LABEL_52:
            sub_B7769C(sort, v4);
          }
        }
      }
LABEL_76:
      v37 = sub_B776C8(sort);
      sub_B77668(v37, 0LL);
    }
  }
}


void __fastcall PartyServantListViewManager__SortItem(
        PartyServantListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  if ( (byte_438ED83 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438ED83 = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, isAllDisp, addEmptyTarminal, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this->fields.updateTime = NetworkManager__getTime(0LL);
}


void __fastcall PartyServantListViewManager__Update(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438ED99 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ED99 = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      PartyServantListViewManager__UpdateDisp(this, v5);
    }
  }
}


void __fastcall PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438ED9A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    byte_438ED9A = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B7769C(0LL, v4);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v6,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v6,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v6.fields.current )
        sub_B7769C(0LL, v5);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v6.fields.current, v5);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v6,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__UpdateItemState(
        PartyServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v7; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x20
  bool v9; // w23
  bool v10; // w24
  bool v11; // w25
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v13; // x1
  __int64 v14; // x9
  Il2CppClass *v15; // x8
  Il2CppType byval_arg; // q0
  int64_t v17; // x0
  __int64 v18; // x1
  int v19; // w8
  UserServantEntity_o *v20; // x0
  __int64 v21; // x1
  bool v22; // w8
  UserServantEntity_o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_438ED9B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&PartyServantListViewItem_TypeInfo);
    byte_438ED9B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B7769C(SelfUserGame, v6);
  }
  klass = v7[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28.fields.current = (Il2CppObject *)v27.fields.fakeValue;
  *(_OWORD *)&v28.fields.list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v9 = modeKind == 1;
  v10 = modeKind == 2;
  v11 = modeKind == 3;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      goto LABEL_24;
    v13 = PartyServantListViewItem_TypeInfo;
    v14 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (PartyServantListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v14 - 1] != PartyServantListViewItem_TypeInfo )
    {
      sub_B77990(v28.fields.current);
LABEL_24:
      sub_B7769C(v24, v25);
    }
    v15 = v28.fields.current[7].klass;
    LOBYTE(v28.fields.current[13].monitor) = v9;
    BYTE1(current[13].monitor) = v10;
    BYTE2(current[13].monitor) = v11;
    if ( !v15 )
      sub_B7769C(v24, v13);
    byval_arg = v15->_1.byval_arg;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v15->_1.name;
    *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
    v19 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v17 == (_QWORD)klass;
    if ( v19 )
    {
      v20 = (UserServantEntity_o *)current[7].klass;
      if ( !v20 )
        sub_B7769C(0LL, v18);
      if ( UserServantEntity__IsLeave(v20, 0LL) )
      {
        v22 = 0;
      }
      else
      {
        v23 = (UserServantEntity_o *)current[7].klass;
        if ( !v23 )
          sub_B7769C(0LL, v21);
        v22 = !UserServantEntity__IsEventJoin(v23, 0LL);
      }
    }
    else
    {
      v22 = 1;
    }
    BYTE4(current[13].monitor) = v22;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall PartyServantListViewManager__add_callbackFunc(
        PartyServantListViewManager_o *this,
        PartyServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyServantListViewManager_o *v10; // x0
  PartyServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438ED7B & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_438ED7B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v7->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  PartyServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PartyServantListViewManager__add_callbackFunc2(
        PartyServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438ED7D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438ED7D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  PartyServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438ED82 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ED82 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (PartyServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
}


bool __fastcall PartyServantListViewManager__get_IsFocus(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438ED81 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ED81 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
}


void __fastcall PartyServantListViewManager__remove_callbackFunc(
        PartyServantListViewManager_o *this,
        PartyServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438ED7C & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_438ED7C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v7->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  PartyServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall PartyServantListViewManager__remove_callbackFunc2(
        PartyServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyServantListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438ED7E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438ED7E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  PartyServantListViewManager__get_IsFocus(v10, v11);
}


void __fastcall PartyServantListViewManager__set_IsFocus(
        PartyServantListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFocus_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager_CallbackFunc___ctor(
        PartyServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyServantListViewManager_CallbackFunc__BeginInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_438A0D5 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_ResultKind_TypeInfo);
    byte_438A0D5 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager_CallbackFunc__Invoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyServantListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyServantListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyServantListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}


void __fastcall PartyServantListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438A0D4 & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager___c_TypeInfo);
    byte_438A0D4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(PartyServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)PartyServantListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall PartyServantListViewManager___c___ctor(
        PartyServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyServantListViewManager___c___CreateList_b__50_0(
        PartyServantListViewManager___c_o *this,
        System_Int32_array *svtIds,
        const MethodInfo *method)
{
  if ( !svtIds )
    sub_B7769C(this, 0LL);
  return svtIds->max_length != 0;
}