void __fastcall PartyServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct PartyServantListViewManager_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  ListViewSort_o *v24; // x20
  struct PartyServantListViewManager_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  ListViewSort_o *v35; // x20
  struct PartyServantListViewManager_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_4217FD7 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&PartyServantListViewManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_15468/*"WarBoardPartyServant"*/, v9);
    sub_B0D8A4(&StringLiteral_10621/*"PartyServant"*/, v10);
    byte_4217FD7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyServantListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_10621/*"PartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10621/*"PartyServant"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = PartyServantListViewManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_15468/*"WarBoardPartyServant"*/;
  v13->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15468/*"WarBoardPartyServant"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->WAR_SORT_SAVE_KEY, v14, v15, v16, v17, v18, v19, v20);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v24 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v22, v23);
  ListViewSort___ctor_32823364(v24, SORT_SAVE_KEY, 3, 0, 0LL);
  v25 = PartyServantListViewManager_TypeInfo->static_fields;
  v25->servantSortInfo = v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v25->servantSortInfo,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v35 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v33, v34);
  ListViewSort___ctor_32823364(v35, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v36 = PartyServantListViewManager_TypeInfo->static_fields;
  v36->warServantSortInfo = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v36->warServantSortInfo,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
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
    sub_B0D840(
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
    sub_B0D97C(this);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  PartyServantListViewManager__ModifyList(v9, 1, v13);
  PartyServantListViewManager__SetMode_31103552(v9, 2, v14);
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
  QuestRestrictionInfo_o *v8; // x24
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
  PartyServantListViewManager_c *v43; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v53; // x9
  struct ListViewSort_o *v54; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v56; // x8
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  bool IsEnableEvent; // w8
  struct System_Int32_array *v64; // x1
  struct System_Int32_array *v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x26
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  System_Collections_Generic_List_int__o *v85; // x28
  int size; // w27
  EventQuestMaster_o *v87; // x22
  __int64 v88; // x24
  __int64 v89; // x8
  int32_t v90; // w25
  int32_t questId; // w2
  EventMissionProgressRequest_Argument_ProgressData_o *v92; // x23
  __int64 v93; // x1
  __int64 v94; // x2
  PartyListViewItem_o *v95; // x26
  PartyServantListViewManager___c_c *v96; // x0
  System_Collections_Generic_List_T__o *v97; // x22
  struct PartyServantListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__50_0; // x23
  Il2CppObject *v100; // x25
  struct PartyServantListViewManager___c_StaticFields *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  _BOOL4 v108; // w20
  struct System_Int32_array *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct ListViewSort_o *v122; // x8
  _BOOL4 isBonusKind; // w8
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v125; // x22
  unsigned __int64 v126; // x20
  int v127; // w27
  unsigned __int64 max_length; // x9
  struct System_Collections_Generic_List_int____o *v129; // x20
  System_Int32_array *v130; // x8
  struct System_Int32_array *v131; // x8
  struct System_Collections_Generic_List_int____o *v132; // x20
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w20
  ListViewSort_o *v136; // x27
  int32_t v137; // w23
  System_String_o *v138; // x22
  UILabel_o *maxCostLabel; // x23
  System_String_o *v140; // x0
  UILabel_o *splitCostLabel; // x23
  System_String_o *v142; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x26
  System_String_o *v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x8
  unsigned __int64 v149; // x22
  UserServantEntity_o *v150; // x25
  PartyServantListViewItem_o *v151; // x23
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v153; // x4
  const MethodInfo *v154; // x1
  __int64 v155; // x0
  const MethodInfo *v156; // [xsp+8h] [xbp-98h]
  struct ListViewSort_o **p_sort; // [xsp+10h] [xbp-90h]
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // [xsp+18h] [xbp-88h]
  QuestRestrictionInfo_o *v161; // [xsp+30h] [xbp-70h]
  PartyListViewItem_o *partyItema; // [xsp+40h] [xbp-60h]
  __int64 v164; // [xsp+48h] [xbp-58h] BYREF

  v8 = questRestrictionInfo;
  if ( (byte_4217FBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int_____, baseDeckItemList);
    sub_B0D8A4(&CommonRestrictionMaster_TypeInfo, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Func_int____bool___ctor__, v18);
    sub_B0D8A4(&System_Func_int____bool__TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v29);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v30);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v32);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v33);
    sub_B0D8A4(&PartyServantListViewManager_TypeInfo, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B0D8A4(&Method_PartyServantListViewManager___c__CreateList_b__50_0__, v36);
    sub_B0D8A4(&PartyServantListViewManager___c_TypeInfo, v37);
    sub_B0D8A4(&StringLiteral_10350/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v38);
    sub_B0D8A4(&StringLiteral_10348/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v39);
    sub_B0D8A4(&StringLiteral_10349/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v40);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v41);
    sub_B0D8A4(&StringLiteral_10347/*"PARTY_ORGANIZATION_COST_COLOR"*/, v42);
    byte_4217FBE = 1;
  }
  v164 = 0LL;
  v43 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v43 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v43->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  sub_B0D840(
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
    goto LABEL_152;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
    if ( !servantFilterEventIdList )
      goto LABEL_152;
    v53 = *(_QWORD *)&servantFilterEventIdList->max_length;
    v54 = this->fields.sort;
    if ( v53 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v54 )
        goto LABEL_152;
    }
    else
    {
      servantFilterIdList = setupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v54 )
        goto LABEL_152;
    }
    v54->fields.isBonusKind = (char)servantFilterIdList;
    v64 = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v64;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v64,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v65 = setupInfo->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v65;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
      (System_Int32_array **)v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sort = (ListViewSort_o *)EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_152;
    IsEnableEvent = EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, (int32_t)sort, 0LL);
  }
  else
  {
    v56 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v56 )
      goto LABEL_152;
    v56->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v46, v47, v48, v49, v50, v51);
    this->fields.servantFilterIdList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v57, v58, v59, v60, v61, v62);
    IsEnableEvent = 0;
  }
  this->fields.isBuddyPoint = IsEnableEvent;
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  p_sort = &this->fields.sort;
  partyItema = partyItem;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !sort )
    goto LABEL_152;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)sort, 0LL);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  v74,
                                                                                                  v75);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v76;
  p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignServantIdList,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v85 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v83, v84);
  System_Collections_Generic_List_int____ctor(
    v85,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v161 = v8;
  if ( !FriendshipUpCampaigns || !setupInfo || (size = FriendshipUpCampaigns->fields._size, size < 1) )
  {
    if ( !v85 )
      goto LABEL_152;
    v95 = partyItem;
LABEL_55:
    v108 = 0;
    goto LABEL_56;
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v87 = (EventQuestMaster_o *)sort;
  v88 = 4LL;
  do
  {
    if ( FriendshipUpCampaigns->fields._size <= (unsigned int)(v88 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v89 = *((_QWORD *)&FriendshipUpCampaigns->fields._items->obj.klass + v88);
    if ( !v89 )
      goto LABEL_152;
    v90 = *(_DWORD *)(v89 + 16);
    if ( FriendshipUpCampaigns->fields._size <= (unsigned int)(v88 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    questId = setupInfo->fields.questId;
    v92 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v89 + 40);
    if ( !questId && !setupInfo->fields.questPhase )
      goto LABEL_156;
    if ( !v87 )
      goto LABEL_152;
    sort = (ListViewSort_o *)EventQuestMaster__IsEventNotIncluded(
                               v87,
                               v90,
                               questId,
                               setupInfo->fields.questPhase,
                               7,
                               0LL);
    if ( ((unsigned __int8)sort & 1) == 0 )
    {
LABEL_156:
      if ( !v85 )
        goto LABEL_152;
      System_Collections_Generic_List_int___Add(
        v85,
        v90,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      sort = (ListViewSort_o *)*p_eventCampaignServantIdList;
      if ( !*p_eventCampaignServantIdList )
        goto LABEL_152;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v92,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
    }
    ++v88;
  }
  while ( (int)v88 - 4 < size );
  if ( !v85 )
    goto LABEL_152;
  v8 = v161;
  v95 = partyItema;
  if ( v85->fields._size < 1 )
    goto LABEL_55;
  v96 = PartyServantListViewManager___c_TypeInfo;
  v97 = (System_Collections_Generic_List_T__o *)*p_eventCampaignServantIdList;
  if ( (BYTE3(PartyServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager___c_TypeInfo);
    v96 = PartyServantListViewManager___c_TypeInfo;
  }
  static_fields = v96->static_fields;
  _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96);
      static_fields = PartyServantListViewManager___c_TypeInfo->static_fields;
    }
    v100 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_int____bool__TypeInfo,
                                                                                    v93,
                                                                                    v94);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__50_0,
      v100,
      Method_PartyServantListViewManager___c__CreateList_b__50_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_int____bool___ctor__);
    v101 = PartyServantListViewManager___c_TypeInfo->static_fields;
    v101->__9__50_0 = (struct System_Func_int____bool__o *)_9__50_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v101->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
  }
  v108 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           v97,
           (System_Func_T__bool__o *)_9__50_0,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_int_____);
LABEL_56:
  v109 = System_Collections_Generic_List_int___ToArray(
           v85,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.eventCampaignIdList = v109;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
    (System_Int32_array **)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  if ( !this->fields.isQuestStart || !this->fields.isBuddyPoint )
  {
    v122 = *p_sort;
    if ( !*p_sort )
      goto LABEL_152;
    if ( v122->fields.sortKind == 28 )
      v122->fields.sortKind = 3;
  }
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_152;
  isBonusKind = sort->fields.isBonusKind;
  if ( !v108 && !isBonusKind )
  {
LABEL_98:
    if ( !v8 )
      goto LABEL_100;
    goto LABEL_99;
  }
  if ( !this->fields.isQuestStart )
  {
    if ( v108 && !isBonusKind )
    {
      sort->fields.isBonusKind = 1;
      sort = *p_sort;
      if ( !*p_sort )
        goto LABEL_152;
    }
    ListViewSort__AlignBonusKind2(
      sort,
      this->fields.bonusEventIdList,
      this->fields.servantFilterIdList,
      this->fields.eventCampaignIdList,
      this->fields.eventCampaignServantIdList,
      0LL,
      0LL);
    if ( !v8 )
      goto LABEL_100;
LABEL_99:
    QuestRestrictionInfo__SetDeckInfo_30605356(v8, v95, num, 0LL);
    this->fields.isFatigue = v8->fields.isFatigure;
    this->fields.eventId = v8->fields.eventId;
    goto LABEL_100;
  }
  if ( !v8 || !this->fields.eventCampaignIdList )
    goto LABEL_95;
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  this->fields.questId = v8->fields.questId;
  eventCampaignIdList = this->fields.eventCampaignIdList;
  this->fields.questPhase = v8->fields.questPhase;
  if ( !eventCampaignIdList )
    goto LABEL_152;
  v125 = (EventQuestMaster_o *)sort;
  v126 = 0LL;
  v127 = -1;
  while ( 1 )
  {
    max_length = eventCampaignIdList->max_length;
    if ( (__int64)v126 >= (int)max_length )
      break;
    if ( v126 >= max_length )
      goto LABEL_153;
    if ( v125 )
    {
      sort = (ListViewSort_o *)EventQuestMaster__IsExistQuest(
                                 v125,
                                 eventCampaignIdList->m_Items[v126 + 1],
                                 this->fields.questId,
                                 this->fields.questPhase,
                                 0LL);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( ((unsigned __int8)sort & 1) != 0 )
        v127 = v126;
      ++v126;
      if ( eventCampaignIdList )
        continue;
    }
    goto LABEL_152;
  }
  if ( (v127 & 0x80000000) != 0 )
    goto LABEL_95;
  v129 = *p_eventCampaignServantIdList;
  if ( !*p_eventCampaignServantIdList )
    goto LABEL_152;
  if ( v129->fields._size <= (unsigned int)v127 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v130 = v129->fields._items->m_Items[v127];
  if ( !v130 )
    goto LABEL_152;
  if ( !*(_QWORD *)&v130->max_length )
  {
LABEL_95:
    sort = *p_sort;
    if ( !*p_sort )
      goto LABEL_152;
    if ( sort->fields.isBonusKind )
      ListViewSort__AlignBonusKind(sort, this->fields.bonusEventIdList, this->fields.servantFilterIdList, 0, 0LL, 0LL);
    goto LABEL_98;
  }
  if ( !*p_sort )
    goto LABEL_152;
  (*p_sort)->fields.isBonusKind = 1;
  v131 = this->fields.eventCampaignIdList;
  if ( !v131 )
    goto LABEL_152;
  if ( v127 >= v131->max_length )
    goto LABEL_153;
  v132 = *p_eventCampaignServantIdList;
  if ( !*p_eventCampaignServantIdList )
    goto LABEL_152;
  if ( v132->fields._size <= (unsigned int)v127 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !this->fields.sort )
    goto LABEL_152;
  ListViewSort__AlignBonusKind(
    this->fields.sort,
    this->fields.bonusEventIdList,
    this->fields.servantFilterIdList,
    v131->m_Items[v127 + 1],
    v132->fields._items->m_Items[v127],
    0LL);
  v8 = v161;
  v95 = partyItema;
  if ( v161 )
    goto LABEL_99;
LABEL_100:
  if ( !*p_sort )
    goto LABEL_152;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_107;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_107;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_107:
    this->fields.seed = normalSizeSeed;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !v95 )
    goto LABEL_152;
  maxCost = v95->fields.maxCost;
  v136 = sort;
  HIDWORD(v164) = maxCost;
  v137 = v8 ? QuestRestrictionInfo__GetTotalCostRestriction(v8, 0LL) : 0;
  if ( v137 && maxCost > v137 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v138 = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v164) = v137;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v138 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v140 = System_Int32__ToString((int32_t)&v164 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_43849904(v138, v140, 0LL);
  if ( !maxCostLabel )
    goto LABEL_152;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v142 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_43849904(v138, v142, 0LL);
  if ( !splitCostLabel )
    goto LABEL_152;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = v95->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v164) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v138 = LocalizationManager__Get((System_String_o *)StringLiteral_10348/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItema->fields.cost;
  }
  LODWORD(v164) = cost;
  v145 = System_Int32__ToString((int32_t)&v164, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_43849904(v138, v145, 0LL);
  if ( !selectCostLabel )
    goto LABEL_152;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_152;
  if ( !sort )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v136 )
    goto LABEL_152;
  v148 = *(_QWORD *)&v136->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v148 >= 1 )
  {
    v149 = 0LL;
    while ( v149 < (unsigned int)v148 )
    {
      v150 = (UserServantEntity_o *)*((_QWORD *)&v136->fields.manager + v149);
      v151 = (PartyServantListViewItem_o *)sub_B0D974(PartyServantListViewItem_TypeInfo, v146, v147);
      PartyServantListViewItem___ctor(
        v151,
        v149,
        v150,
        baseDeckItemList,
        partyItema,
        num,
        tutorialMode,
        setupInfo,
        v161,
        v156);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_152;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v151,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v148) = *(_DWORD *)&v136->fields.FILTER_DEFAULT_VALUE;
      if ( (__int64)++v149 >= (int)v148 )
        goto LABEL_144;
    }
LABEL_153:
    v155 = sub_B0D9A8(sort);
    sub_B0D948(v155, 0LL);
  }
LABEL_144:
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_152:
    sub_B0D97C(sort);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v153);
  PartyServantListViewManager__SetFilterButtonImage(this, v154);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_31098616(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
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
  PartyServantListViewManager_c *v32; // x0
  QuestRestrictionInfo_o *v33; // x20
  struct ListViewSort_o *warServantSortInfo; // x1
  ListViewSort_o *sort; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_int__o *v38; // x26
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x28
  __int64 v46; // x8
  WarBoardPartyListViewItem_o *v47; // x24
  int v48; // w21
  int v49; // w9
  _BOOL8 v50; // x0
  Il2CppObject *current; // x20
  int v52; // w23
  struct ListViewSort_o **p_sort; // x22
  struct ListViewSort_o *v54; // x8
  struct System_Int32_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct System_Int32_array *servantFilterIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v70; // x8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v78; // x2
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v83; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v85; // w28
  System_String_o *v86; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v88; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v90; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x8
  unsigned __int64 v98; // x25
  UserServantEntity_o *v99; // x28
  PartyServantListViewItem_o *v100; // x27
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v102; // x4
  const MethodInfo *v103; // x1
  __int64 v104; // x0
  const MethodInfo *v105; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+28h] [xbp-A8h]
  _BYTE v110[28]; // [xsp+30h] [xbp-A0h] BYREF
  int v111; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+70h] [xbp-60h] BYREF
  __int64 v114; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4217FBF & 1) == 0 )
  {
    sub_B0D8A4(&CommonRestrictionMaster_TypeInfo, partyItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v24);
    sub_B0D8A4(&PartyServantListViewManager_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&StringLiteral_10350/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v27);
    sub_B0D8A4(&StringLiteral_10348/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v28);
    sub_B0D8A4(&StringLiteral_10349/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v29);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v30);
    sub_B0D8A4(&StringLiteral_10347/*"PARTY_ORGANIZATION_COST_COLOR"*/, v31);
    byte_4217FBF = 1;
  }
  eventUpValInfo = 0LL;
  v114 = 0LL;
  memset(&v112, 0, sizeof(v112));
  v111 = 0;
  v32 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v32 = PartyServantListViewManager_TypeInfo;
  }
  v33 = questRestrictionInfo;
  warServantSortInfo = v32->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_B0D840(
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
  v38 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v36, v37);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_96;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v46 = *(_QWORD *)&memberItemList->max_length;
  v47 = partyItem;
  if ( v46 )
  {
    LODWORD(v114) = 0;
    if ( (int)v46 >= 1 )
    {
      v48 = 0;
      v49 = 0;
      while ( v49 < (unsigned int)v46 )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v49];
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
              (System_Collections_Generic_List_Enumerator_T__o *)v110,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v112 = *(System_Collections_Generic_List_Enumerator_T__o *)v110;
            while ( 1 )
            {
              v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v112,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v50 )
                break;
              current = v112.fields.current;
              if ( !v112.fields.current )
                sub_B0D97C(v50);
              if ( !v38 )
                sub_B0D97C(v50);
              if ( !System_Collections_Generic_List_int___Contains(
                      v38,
                      (int32_t)v112.fields.current[1].klass,
                      (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
                System_Collections_Generic_List_int___Add(
                  v38,
                  (int32_t)current[1].klass,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            }
            *(_DWORD *)&v110[4 * v48 + 24] = 161;
            v52 = ++v111;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v112,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            v33 = questRestrictionInfo;
            if ( v52 )
            {
              v48 = v52;
              if ( *(_DWORD *)&v110[4 * v52 + 20] == 161 )
              {
                v48 = v52 - 1;
                v111 = v52 - 1;
              }
            }
            else
            {
              v48 = 0;
            }
          }
        }
        v49 = v114 + 1;
        LODWORD(v114) = v49;
        LODWORD(v46) = memberItemList->max_length;
        if ( v49 >= (int)v46 )
          goto LABEL_31;
      }
LABEL_97:
      v104 = sub_B0D9A8(sort);
      sub_B0D948(v104, 0LL);
    }
  }
LABEL_31:
  if ( setupInfoa )
  {
    p_sort = &this->fields.sort;
    this->fields.isQuestStart = setupInfoa->fields.isQuestStart;
    if ( !v38 )
      goto LABEL_96;
    v54 = this->fields.sort;
    if ( !v54 )
      goto LABEL_96;
    v54->fields.isBonusKind = v38->fields._size > 0;
    v55 = System_Collections_Generic_List_int___ToArray(
            v38,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    this->fields.bonusEventIdList = v55;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    servantFilterIdList = setupInfoa->fields.servantFilterIdList;
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    this->fields.servantFilterIdList = servantFilterIdList;
  }
  else
  {
    v70 = this->fields.sort;
    p_sort = &this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v70 )
      goto LABEL_96;
    v70->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v39, v40, v41, v42, v43, v44);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantFilterIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantFilterIdList,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_96;
  if ( !sort->fields.isBonusKind )
  {
LABEL_41:
    if ( !v33 )
      goto LABEL_43;
    goto LABEL_42;
  }
  bonusEventIdList = this->fields.bonusEventIdList;
  v78 = this->fields.servantFilterIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind(sort, bonusEventIdList, v78, 0, 0LL, 0LL);
    goto LABEL_41;
  }
  ListViewSort__AlignBonusKind2(sort, bonusEventIdList, v78, 0LL, 0LL, 0LL, 0LL);
  if ( v33 )
LABEL_42:
    this->fields.eventId = v33->fields.eventId;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_96;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_96;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  maxCost = v47->fields.maxCost;
  v83 = OrganizationList;
  HIDWORD(v114) = maxCost;
  if ( v33 )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v33, 0LL);
    maxCost = HIDWORD(v114);
    v85 = TotalCostRestriction;
  }
  else
  {
    v85 = 0;
  }
  if ( v85 && maxCost > v85 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v114) = v85;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v88 = System_Int32__ToString((int32_t)&v114 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_43849904(v86, v88, 0LL);
  if ( !maxCostLabel )
    goto LABEL_96;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_43849904(v86, v90, 0LL);
  if ( !splitCostLabel )
    goto LABEL_96;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = v47->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v114) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10348/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = v47->fields.cost;
    v86 = v93;
  }
  LODWORD(v114) = cost;
  v94 = System_Int32__ToString((int32_t)&v114, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_43849904(v86, v94, 0LL);
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
  if ( !v83 )
    goto LABEL_96;
  v97 = *(_QWORD *)&v83->max_length;
  if ( (int)v97 >= 1 )
  {
    v98 = 0LL;
    while ( v98 < (unsigned int)v97 )
    {
      v99 = v83->m_Items[v98];
      v100 = (PartyServantListViewItem_o *)sub_B0D974(PartyServantListViewItem_TypeInfo, v95, v96);
      PartyServantListViewItem___ctor_31076468(v100, v98, v99, v47, num, tutorialMode, setupInfoa, v33, v105);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_96;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v97) = v83->max_length;
      if ( (__int64)++v98 >= (int)v97 )
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_96:
    sub_B0D97C(sort);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v102);
  PartyServantListViewManager__SetFilterButtonImage(this, v103);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4217FB9 & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewManager_TypeInfo, v1);
    byte_4217FB9 = 1;
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
    sub_B0D97C(servantSortInfo);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.servantFilterIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v10, v11, v12, v13, v14, v15);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__EndSelectFilterKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4217FCC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4217FCC = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__CloseServantFilterSelectMenu(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__EndSelectSortKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4217FCF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyServantListViewManager_EndCloseSelectSortKind__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4217FCF = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseServantSortSelectMenu(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  PartyServantListViewItem_o *v14; // x0

  v4 = this;
  if ( (byte_4217FD2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (PartyServantListViewManager_o *)sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v6);
    byte_4217FD2 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (PartyServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (PartyServantListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == PartyServantListViewItem_TypeInfo )
          v14 = (PartyServantListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      this = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(v14, *(const MethodInfo **)&svtId);
      ++v10;
      if ( (_DWORD)this == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B0D97C(this);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetItem(
        PartyServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4217FC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v5);
    byte_4217FC1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PartyServantListViewItem_TypeInfo )
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
    sub_B0D97C(this);
  return partyServantSelectMenu->fields.modeKind;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetPartyServantListViewItem(
        PartyServantListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  Il2CppObject *current; // x20
  __int64 v13; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int v16; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4217FD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, userServantId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v9);
    byte_4217FD6 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20.fields.current = (Il2CppObject *)v19.fields.fakeValue;
  *(_OWORD *)&v20.fields.list = *(_OWORD *)&v19.fields.currentCryptoKey;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v20.fields.current;
    if ( v20.fields.current )
    {
      v13 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (PartyServantListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v13 - 1] == PartyServantListViewItem_TypeInfo )
      {
        klass = v20.fields.current[7].klass;
        if ( !klass )
          sub_B0D97C(v11);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v19.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v18 = v19;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v18, 0LL) == userServantId )
        {
          v16 = 16;
          goto LABEL_16;
        }
      }
    }
  }
  current = 0LL;
  v16 = 14;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v16 == 16 )
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
    sub_B0D97C(0LL);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  Il2CppType v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_4217FC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v13);
    byte_4217FC3 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (PartyServantListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v28[1].klass;
      if ( klass && BYTE1(v28[2].fields.sortValue2B) )
      {
        if ( BYTE1(v28[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v19, v20, v21, v22, v23, v24);
    *unchoiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v36;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    return 1;
  }
}


bool __fastcall PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  Il2CppType v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_4217FC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v13);
    byte_4217FC2 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (PartyServantListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v28[1].klass;
      if ( klass && LOBYTE(v28[2].fields.sortValue2B) )
      {
        if ( LOBYTE(v28[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v19, v20, v21, v22, v23, v24);
    *unlockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v36;
    sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    return 1;
  }
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4217FBA & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewManager_TypeInfo, v1);
    byte_4217FBA = 1;
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
    sub_B0D97C(servantSortInfo);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4217FCA & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_int____get_Item__,
                                              *(_QWORD *)&campaiginEventId);
    byte_4217FCA = 1;
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
      v16 = sub_B0D9A8(this);
      sub_B0D948(v16, 0LL);
    }
    if ( v11[v10] == campaiginEventId )
      break;
    if ( (int)++v10 >= max_length )
      goto LABEL_20;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__ModifyList(
        PartyServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v13; // x21
  unsigned int v14; // w26
  int64_t v15; // x20
  __int64 v16; // x8
  UserServantEntity_o **v17; // x20
  __int64 v18; // t1
  __int128 v19; // q0
  int64_t v20; // x22
  unsigned __int64 v21; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x23
  PartyServantListViewItem_o *v23; // x23
  __int64 v24; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x0
  unsigned __int64 v31; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x20
  ListViewItem_o *v33; // x20
  __int64 v34; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v37; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-70h]

  if ( (byte_4217FC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4217FC0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v13 = Instance;
  v37 = *(_QWORD *)(Instance + 24);
  if ( (int)v37 >= 1 )
  {
    if ( !(_DWORD)v37 )
    {
LABEL_34:
      v30 = sub_B0D9A8(Instance);
      sub_B0D948(v30, 0LL);
    }
    v14 = 0;
    while ( 1 )
    {
      v15 = v13 + 8LL * (int)v14;
      v18 = *(_QWORD *)(v15 + 32);
      v17 = (UserServantEntity_o **)(v15 + 32);
      v16 = v18;
      if ( !v18 )
        break;
      v19 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v40.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v39, 0LL);
      if ( (int)size >= 1 )
      {
        v20 = Instance;
        v21 = 0LL;
        while ( 1 )
        {
          v22 = this->fields.itemList;
          if ( !v22 )
            goto LABEL_52;
          if ( v21 >= (unsigned int)v22->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v23 = (PartyServantListViewItem_o *)v22->fields._items->m_Items[v21];
          if ( !v23 )
            goto LABEL_52;
          v24 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
            || (PartyServantListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v23->fields.userServantEntity;
          if ( userServantEntity )
          {
            v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v40.fields.fakeValue = v26;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v38 = v40;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v38, 0LL);
            if ( Instance == v20 )
              break;
          }
          if ( (__int64)++v21 >= size )
            goto LABEL_32;
        }
        if ( v14 >= *(_DWORD *)(v13 + 24) )
          goto LABEL_34;
        PartyServantListViewItem__ModifyItem(v23, *v17, v27);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v23, v28);
          PartyServantListViewItem__ModifyChoiceItem(v23, v29);
        }
      }
LABEL_32:
      if ( (int)++v14 >= (int)v37 )
        goto LABEL_35;
      if ( v14 >= *(_DWORD *)(v13 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B0D97C(Instance);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v31 = 0LL;
    while ( 1 )
    {
      v32 = this->fields.itemList;
      if ( !v32 )
        goto LABEL_52;
      if ( v31 >= (unsigned int)v32->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v33 = v32->fields._items->m_Items[v31];
      if ( v33 )
      {
        v34 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (PartyServantListViewItem_c *)v33->klass->_2.typeHierarchy[v34 - 1] == PartyServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v33->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v33->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v33, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v31 >= size )
        return;
    }
  }
}


void __fastcall PartyServantListViewManager__OnClickBonusFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v8; // x20
  unsigned __int64 v9; // x21
  int v10; // w24
  unsigned __int64 max_length; // x9
  const MethodInfo *v12; // x4
  struct ListViewSort_o *sort; // x22
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x25
  ListViewSort_o *v15; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v18; // x4
  int32_t v19; // w3
  __int64 v20; // x0

  if ( (byte_4217FC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217FC9 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( eventCampaignIdList )
        {
          v8 = (EventQuestMaster_o *)Instance;
          v9 = 0LL;
          v10 = -1;
          while ( 1 )
          {
            max_length = eventCampaignIdList->max_length;
            if ( (__int64)v9 >= (int)max_length )
              break;
            if ( v9 >= max_length )
              goto LABEL_34;
            if ( v8 )
            {
              Instance = (DataManager_o *)EventQuestMaster__IsExistQuest(
                                            v8,
                                            eventCampaignIdList->m_Items[v9 + 1],
                                            this->fields.questId,
                                            this->fields.questPhase,
                                            0LL);
              eventCampaignIdList = this->fields.eventCampaignIdList;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                v10 = v9;
              ++v9;
              if ( eventCampaignIdList )
                continue;
            }
            goto LABEL_17;
          }
        }
        else
        {
          v10 = -1;
        }
        sort = this->fields.sort;
        if ( (v10 & 0x80000000) != 0 )
        {
          if ( sort )
          {
            v15 = this->fields.sort;
            bonusEventIdList = this->fields.bonusEventIdList;
            servantFilterIdList = this->fields.servantFilterIdList;
            v19 = 0;
            v18 = 0LL;
            goto LABEL_32;
          }
        }
        else if ( eventCampaignIdList )
        {
          if ( v10 >= eventCampaignIdList->max_length )
          {
LABEL_34:
            v20 = sub_B0D9A8(Instance);
            sub_B0D948(v20, 0LL);
          }
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( eventCampaignServantIdList )
          {
            if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( sort )
            {
              v15 = this->fields.sort;
              bonusEventIdList = this->fields.bonusEventIdList;
              servantFilterIdList = this->fields.servantFilterIdList;
              v18 = eventCampaignServantIdList->fields._items->m_Items[v10];
              v19 = eventCampaignIdList->m_Items[v10 + 1];
LABEL_32:
              ListViewSort__IncBonusKind(v15, bonusEventIdList, servantFilterIdList, v19, v18, 0LL);
              goto LABEL_33;
            }
          }
        }
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.sort;
      if ( Instance )
      {
        ListViewSort__IncBonusKind2(
          (ListViewSort_o *)Instance,
          this->fields.bonusEventIdList,
          this->fields.servantFilterIdList,
          this->fields.eventCampaignIdList,
          this->fields.eventCampaignServantIdList,
          0LL,
          0LL);
LABEL_33:
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v12);
        return;
      }
    }
LABEL_17:
    sub_B0D97C(Instance);
  }
}


void __fastcall PartyServantListViewManager__OnClickFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4217FCB & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_PartyServantListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217FCB = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v11, this->fields.eventId, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
    Index = ListViewObject__get_Index(obj, 0LL);
    PartyServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortAscendingOrder(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_4217FD0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217FD0 = 1;
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
      sub_B0D97C(v3);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v4);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w20
  int v7; // w8
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  ServantSortSelectMenu_CallbackFunc_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_4217FCE & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_PartyServantListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217FCE = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v6 = 7;
    if ( this->fields.isFatigue )
      v7 = 7;
    else
      v7 = 3;
    if ( !this->fields.isFatigue )
    {
      if ( this->fields.isQuestStart )
      {
        if ( this->fields.isBuddyPoint )
          v6 = 8;
        else
          v6 = v7;
      }
      else
      {
        v6 = 3;
      }
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_B0D97C(v14);
    CommonUI__OpenServantSortSelectMenu(v10, v6, sort, 0, v13, 0LL);
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
    sub_B0D97C(this);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4217FC8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217FC8 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217FC6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_PartyServantListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4217FC6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_31104472(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217FC7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_PartyServantListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4217FC7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__SetFilterButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v6; // x8

  if ( (byte_4217FCD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_4217FCD = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_31103552(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_31103552(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t scrollView; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x4
  int32_t v14; // w1
  const MethodInfo *v15; // x1
  int32_t v16; // w8
  int64_t v17; // x20
  int v18; // w8
  int64_t v19; // x21
  signed int v20; // w23
  int v21; // w25
  __int64 v22; // x2
  __int64 v23; // x8
  int64_t v24; // x22
  __int128 v25; // q0
  __int128 v26; // q0
  __int64 v27; // x23
  PartyServantListViewObject_o *v28; // x21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  float v31; // s0
  int v32; // s1
  int32_t v35; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-60h]

  if ( (byte_4217FC5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&Method_PartyServantListViewManager_OnMoveEnd__, v8);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v9);
    byte_4217FC5 = 1;
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
      v14 = 2;
      goto LABEL_43;
    case 2:
      v14 = 3;
      goto LABEL_43;
    case 3:
      v14 = 4;
LABEL_43:
      PartyServantListViewManager__RequestListObject_31104472(this, v14, v12);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v11);
      if ( !scrollView )
        goto LABEL_46;
      v16 = *(_DWORD *)(scrollView + 24);
      v17 = scrollView;
      if ( v16 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = v16;
      v18 = *(_DWORD *)(scrollView + 24);
      if ( v18 < 1 )
        return;
      v19 = 0LL;
      v20 = 0;
      v21 = -1;
      break;
    default:
      return;
  }
  do
  {
    if ( v18 <= (unsigned int)v20 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    scrollView = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 8LL * v20 + 32);
    if ( !scrollView )
      goto LABEL_46;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v15);
    if ( !scrollView )
      goto LABEL_46;
    v23 = *(_QWORD *)(scrollView + 112);
    v24 = scrollView;
    if ( v23 && (*(_DWORD *)(scrollView + 204) & 0x80000000) != 0 )
    {
      if ( (v21 & 0x80000000) != 0 )
        goto LABEL_26;
      v25 = *(_OWORD *)(v23 + 32);
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
      *(_OWORD *)&v38.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v37 = v38;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v37, 0LL);
      if ( v19 < scrollView )
      {
        v23 = *(_QWORD *)(v24 + 112);
        if ( !v23 )
          goto LABEL_46;
LABEL_26:
        v26 = *(_OWORD *)(v23 + 32);
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
        *(_OWORD *)&v38.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v36 = v38;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v36, 0LL);
        v21 = v20;
      }
    }
    v18 = *(_DWORD *)(v17 + 24);
    ++v20;
  }
  while ( v20 < v18 );
  if ( v18 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v18 <= (unsigned int)v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = *(PartyServantListViewObject_o **)(*(_QWORD *)(v17 + 16) + 8 * v27 + 32);
      v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v22);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v28 )
        break;
      *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
      if ( v21 == (_DWORD)v27 )
        v35 = 5;
      else
        v35 = 2;
      PartyServantListViewObject__Init(v28, v35, v29, v31, *(UnityEngine_Vector3_o *)&v32, v30);
      v18 = *(_DWORD *)(v17 + 24);
      if ( (int)++v27 >= v18 )
        return;
    }
LABEL_46:
    sub_B0D97C(scrollView);
  }
}


void __fastcall PartyServantListViewManager__SetMode_31104416(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_31103552(this, mode, v10);
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
  if ( (byte_4217FC4 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B0D8A4(&PartyServantListViewObject_TypeInfo, obj);
    byte_4217FC4 = 1;
  }
  if ( !obj
    || (v6 = *(&PartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 sort; // x0
  UILabel_o *v18; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v20; // x8
  int32_t sortKind; // w9
  System_String_o **v22; // x8
  struct ListViewSort_o *v23; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  struct ListViewSort_o *v28; // x8
  System_String_o **v29; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v32; // x20
  unsigned __int64 v33; // x21
  int v34; // w24
  unsigned __int64 max_length; // x9
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Int32_array *v38; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x21
  struct System_Int32_array *v41; // x8
  struct System_Collections_Generic_List_int____o *v42; // x26
  UILabel_o *v43; // x20
  struct ListViewSort_o *v44; // x21
  struct System_Int32_array *v45; // x19
  struct System_Int32_array *v46; // x22
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v49; // x4
  int32_t v50; // w3
  __int64 v51; // x0

  if ( (byte_4217FD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v10);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v11);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v12);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v13);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v14);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v15);
    byte_4217FD1 = 1;
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
    v18 = this->fields.sortKindLabel;
    sort = (__int64)ListViewSort__GetSortKindButtonText((ListViewSort_o *)sort, 0LL);
    if ( !v18 )
      goto LABEL_52;
    UILabel__set_text(v18, (System_String_o *)sort, 0LL);
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
    v20 = this->fields.sort;
    if ( !v20 )
      goto LABEL_52;
    sortKind = v20->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v22 = (System_String_o **)(v20->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
      v23 = this->fields.sort;
      if ( !v23 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v23->fields.isAscendingOrder;
      v25 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v27 = (System_String_o **)(v20->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v28 = this->fields.sort;
      if ( !v28 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v28->fields.isAscendingOrder;
      v25 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v29 = v25;
    else
      v29 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v29, 0LL);
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
        v43 = this->fields.bonusFilterKindLabel;
        sort = (__int64)ListViewSort__GetBonusKind2Text_32861208(
                          (ListViewSort_o *)sort,
                          this->fields.bonusEventIdList,
                          this->fields.servantFilterIdList,
                          this->fields.eventCampaignIdList,
                          this->fields.eventCampaignServantIdList,
                          0LL,
                          0LL);
        if ( !v43 )
          goto LABEL_52;
LABEL_75:
        UILabel__set_text(v43, (System_String_o *)sort, 0LL);
        return;
      }
      sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !sort )
        goto LABEL_52;
      sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)sort,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( !eventCampaignIdList )
        goto LABEL_70;
      v32 = (EventQuestMaster_o *)sort;
      v33 = 0LL;
      v34 = -1;
      while ( 1 )
      {
        max_length = eventCampaignIdList->max_length;
        if ( (__int64)v33 >= (int)max_length )
          break;
        if ( v33 >= max_length )
          goto LABEL_76;
        if ( v32 )
        {
          sort = EventQuestMaster__IsExistQuest(
                   v32,
                   eventCampaignIdList->m_Items[v33 + 1],
                   this->fields.questId,
                   this->fields.questPhase,
                   0LL);
          eventCampaignIdList = this->fields.eventCampaignIdList;
          if ( (sort & 1) != 0 )
            v34 = v33;
          ++v33;
          if ( eventCampaignIdList )
            continue;
        }
        goto LABEL_52;
      }
      if ( (v34 & 0x80000000) != 0 )
      {
LABEL_70:
        sort = (__int64)this->fields.sort;
        if ( !sort )
          goto LABEL_52;
        v43 = this->fields.bonusFilterKindLabel;
        bonusEventIdList = this->fields.bonusEventIdList;
        servantFilterIdList = this->fields.servantFilterIdList;
        v50 = 0;
        v49 = 0LL;
LABEL_72:
        sort = (__int64)ListViewSort__GetBonusKindText_32859020(
                          (ListViewSort_o *)sort,
                          bonusEventIdList,
                          servantFilterIdList,
                          v50,
                          v49,
                          0LL);
        if ( !v43 )
          goto LABEL_52;
        goto LABEL_75;
      }
      sort = sub_B0D8BC(int___TypeInfo, 1LL);
      v38 = this->fields.eventCampaignIdList;
      if ( !v38 )
        goto LABEL_52;
      if ( v34 < v38->max_length )
      {
        if ( !sort )
          goto LABEL_52;
        if ( *(_DWORD *)(sort + 24) )
        {
          *(_DWORD *)(sort + 32) = v38->m_Items[v34 + 1];
          v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_int____TypeInfo, v36, v37);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v39,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( !eventCampaignServantIdList )
            goto LABEL_52;
          if ( eventCampaignServantIdList->fields._size <= (unsigned int)v34 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v39 )
            goto LABEL_52;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)eventCampaignServantIdList->fields._items->m_Items[v34],
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
          v41 = this->fields.eventCampaignIdList;
          if ( !v41 )
            goto LABEL_52;
          if ( v34 < v41->max_length )
          {
            v42 = this->fields.eventCampaignServantIdList;
            if ( v42 )
            {
              v43 = this->fields.bonusFilterKindLabel;
              v44 = this->fields.sort;
              v46 = this->fields.bonusEventIdList;
              v45 = this->fields.servantFilterIdList;
              if ( v42->fields._size <= (unsigned int)v34 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              if ( v44 )
              {
                sort = (__int64)v44;
                bonusEventIdList = v46;
                servantFilterIdList = v45;
                v49 = v42->fields._items->m_Items[v34];
                v50 = v41->m_Items[v34 + 1];
                goto LABEL_72;
              }
            }
LABEL_52:
            sub_B0D97C(sort);
          }
        }
      }
LABEL_76:
      v51 = sub_B0D9A8(sort);
      sub_B0D948(v51, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SortItem(
        PartyServantListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  if ( (byte_4217FBD & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&selectIndex);
    byte_4217FBD = 1;
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
  __int64 v3; // x1
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4217FD3 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4217FD3 = 1;
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
      PartyServantListViewManager__UpdateDisp(this, v6);
    }
  }
}


void __fastcall PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217FD4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v6);
    byte_4217FD4 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B0D97C(0LL);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v9.fields.current, v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__UpdateItemState(
        PartyServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v11; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x20
  bool v13; // w23
  bool v14; // w24
  bool v15; // w25
  Il2CppObject *current; // x19
  __int64 v17; // x9
  Il2CppClass *v18; // x8
  Il2CppType byval_arg; // q0
  int64_t v20; // x0
  int v21; // w8
  UserServantEntity_o *v22; // x0
  bool v23; // w8
  UserServantEntity_o *v24; // x0
  _BOOL8 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4217FD5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&modeKind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v9);
    byte_4217FD5 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v11 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B0D97C(SelfUserGame);
  }
  klass = v11[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28.fields.current = (Il2CppObject *)v27.fields.fakeValue;
  *(_OWORD *)&v28.fields.list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v13 = modeKind == 1;
  v14 = modeKind == 2;
  v15 = modeKind == 3;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      goto LABEL_24;
    v17 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (PartyServantListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v17 - 1] != PartyServantListViewItem_TypeInfo )
    {
      sub_B0DC70(v28.fields.current);
LABEL_24:
      sub_B0D97C(v25);
    }
    v18 = v28.fields.current[7].klass;
    LOBYTE(v28.fields.current[13].monitor) = v13;
    BYTE1(current[13].monitor) = v14;
    BYTE2(current[13].monitor) = v15;
    if ( !v18 )
      sub_B0D97C(v25);
    byval_arg = v18->_1.byval_arg;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v18->_1.name;
    *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v26, 0LL);
    v21 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v20 == (_QWORD)klass;
    if ( v21 )
    {
      v22 = (UserServantEntity_o *)current[7].klass;
      if ( !v22 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__IsLeave(v22, 0LL) )
      {
        v23 = 0;
      }
      else
      {
        v24 = (UserServantEntity_o *)current[7].klass;
        if ( !v24 )
          sub_B0D97C(0LL);
        v23 = !UserServantEntity__IsEventJoin(v24, 0LL);
      }
    }
    else
    {
      v23 = 1;
    }
    BYTE4(current[13].monitor) = v23;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4217FB5 & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217FB5 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217FB7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217FB7 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  PartyServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217FBC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217FBC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (PartyServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v12;
}


bool __fastcall PartyServantListViewManager__get_IsFocus(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217FBB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217FBB = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v12;
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

  if ( (byte_4217FB6 & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217FB6 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217FB8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217FB8 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4212195 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&PartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4212195 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct PartyServantListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212194 & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewManager___c_TypeInfo, v1);
    byte_4212194 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(PartyServantListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = PartyServantListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyServantListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return svtIds->max_length != 0;
}