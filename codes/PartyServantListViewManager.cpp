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
  ListViewSort_o *v22; // x20
  struct PartyServantListViewManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v31; // x20
  struct PartyServantListViewManager_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_418B832 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&PartyServantListViewManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_15421/*"WarBoardPartyServant"*/, v9);
    sub_B2C35C(&StringLiteral_10596/*"PartyServant"*/, v10);
    byte_418B832 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyServantListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_10596/*"PartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10596/*"PartyServant"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = PartyServantListViewManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_15421/*"WarBoardPartyServant"*/;
  v13->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15421/*"WarBoardPartyServant"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->WAR_SORT_SAVE_KEY, v14, v15, v16, v17, v18, v19, v20);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v22 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v22, SORT_SAVE_KEY, 3, 0, 0LL);
  v23 = PartyServantListViewManager_TypeInfo->static_fields;
  v23->servantSortInfo = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->servantSortInfo,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v31 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v31, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v32 = PartyServantListViewManager_TypeInfo->static_fields;
  v32->warServantSortInfo = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v32->warServantSortInfo,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
    sub_B2C2F8(
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
    sub_B2C434(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  PartyServantListViewManager__ModifyList(v9, 1, v13);
  PartyServantListViewManager__SetMode_32382676(v9, 2, v14);
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
  PartyServantListViewManager_c *v38; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v41; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v50; // x9
  struct ListViewSort_o *v51; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v53; // x8
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  bool IsEnableEvent; // w8
  struct System_Int32_array *v61; // x1
  struct System_Int32_array *v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int v76; // w28
  ListViewSort_o *v77; // x27
  struct System_Int32_array *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_eventCampaignServantIdList; // x22
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x23
  struct System_Int32_array *eventCampaignIdList; // x25
  __int64 v95; // x8
  __int64 v96; // x8
  _BOOL8 v97; // x0
  __int64 v98; // x1
  int v99; // w22
  struct ListViewSort_o *v100; // x8
  struct System_Int32_array *v101; // x8
  EventQuestMaster_o *v102; // x22
  unsigned __int64 v103; // x23
  int v104; // w28
  unsigned __int64 max_length; // x9
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x22
  System_Int32_array *v107; // x8
  struct System_Int32_array *v108; // x8
  struct System_Collections_Generic_List_int____o *v109; // x23
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w8
  ListViewSort_o *v113; // x27
  int32_t TotalCostRestriction; // w0
  int32_t v115; // w22
  System_String_o *v116; // x26
  UILabel_o *maxCostLabel; // x22
  System_String_o *v118; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v120; // x0
  UILabel_o *selectCostLabel; // x22
  System_String_o *v122; // x25
  System_String_o *v123; // x1
  System_String_o *v124; // x0
  __int64 v125; // x8
  unsigned __int64 v126; // x22
  UserServantEntity_o *v127; // x26
  PartyServantListViewItem_o *v128; // x25
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v130; // x4
  const MethodInfo *v131; // x1
  __int64 v132; // x0
  const MethodInfo *v133; // [xsp+8h] [xbp-C8h]
  struct ListViewSort_o **v134; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v138; // [xsp+40h] [xbp-90h] BYREF
  int32_t cost; // [xsp+5Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v140; // [xsp+60h] [xbp-70h] BYREF
  int32_t v141; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_418B81A & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, baseDeckItemList);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v19);
    sub_B2C35C(&int___TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v27);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v28);
    sub_B2C35C(&LocalizationManager_TypeInfo, v29);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v30);
    sub_B2C35C(&PartyServantListViewManager_TypeInfo, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B2C35C(&StringLiteral_10326/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v33);
    sub_B2C35C(&StringLiteral_10324/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v34);
    sub_B2C35C(&StringLiteral_10325/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v35);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v36);
    sub_B2C35C(&StringLiteral_10323/*"PARTY_ORGANIZATION_COST_COLOR"*/, v37);
    byte_418B81A = 1;
  }
  v141 = 0;
  memset(&v140, 0, sizeof(v140));
  cost = 0;
  v38 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v38 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v38->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
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
    goto LABEL_142;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
    if ( !servantFilterEventIdList )
      goto LABEL_142;
    v50 = *(_QWORD *)&servantFilterEventIdList->max_length;
    v51 = this->fields.sort;
    if ( v50 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v51 )
        goto LABEL_142;
    }
    else
    {
      servantFilterIdList = setupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v51 )
        goto LABEL_142;
    }
    v51->fields.isBonusKind = (char)servantFilterIdList;
    v61 = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v61;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v61,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v62 = setupInfo->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v62;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
      (System_Int32_array **)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sort = (ListViewSort_o *)EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_142;
    IsEnableEvent = EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, (int32_t)sort, 0LL);
  }
  else
  {
    v53 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v53 )
      goto LABEL_142;
    v53->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v43, v44, v45, v46, v47, v48);
    this->fields.servantFilterIdList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v54, v55, v56, v57, v58, v59);
    IsEnableEvent = 0;
  }
  this->fields.isBuddyPoint = IsEnableEvent;
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_142;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !sort )
    goto LABEL_142;
  sort = (ListViewSort_o *)EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)sort, 0LL);
  if ( sort )
  {
    v76 = *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE;
    v77 = sort;
    v78 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v76);
    this->fields.eventCampaignIdList = v78;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
      (System_Int32_array **)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v85,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
    p_eventCampaignServantIdList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.eventCampaignServantIdList;
    this->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v85;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventCampaignServantIdList,
      (System_Int32_array **)v85,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
    if ( v76 >= 1 )
    {
      v93 = 0LL;
      do
      {
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( *(_DWORD *)&v77->fields.FILTER_DEFAULT_VALUE <= (unsigned int)v93 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v95 = *(_QWORD *)(*(_QWORD *)&v77->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE + 8 * v93 + 32);
        if ( !v95 || !eventCampaignIdList )
          goto LABEL_142;
        if ( (unsigned int)v93 >= eventCampaignIdList->max_length )
          goto LABEL_143;
        eventCampaignIdList->m_Items[v93 + 1] = *(_DWORD *)(v95 + 16);
        if ( *(_DWORD *)&v77->fields.FILTER_DEFAULT_VALUE <= (unsigned int)v93 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v96 = *(_QWORD *)(*(_QWORD *)&v77->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE + 8 * v93 + 32);
        if ( !v96 || !*p_eventCampaignServantIdList )
          goto LABEL_142;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_eventCampaignServantIdList,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v96 + 40),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
      }
      while ( (int)++v93 < v76 );
    }
    sort = (ListViewSort_o *)*p_eventCampaignServantIdList;
    if ( !*p_eventCampaignServantIdList )
      goto LABEL_142;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v138,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v140 = v138;
    p_sort = &this->fields.sort;
    while ( 1 )
    {
      v97 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v140,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v97 )
        break;
      if ( !v140.fields.current )
        sub_B2C434(v97, v98);
      if ( v140.fields.current[1].monitor )
      {
        v99 = 1;
        goto LABEL_45;
      }
    }
    v99 = 0;
LABEL_45:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v140,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v99 = 0;
  }
  if ( !this->fields.isQuestStart || !this->fields.isBuddyPoint )
  {
    v100 = *p_sort;
    if ( !*p_sort )
      goto LABEL_142;
    if ( v100->fields.sortKind == 28 )
      v100->fields.sortKind = 3;
  }
  sort = *p_sort;
  if ( !*p_sort )
LABEL_142:
    sub_B2C434(sort, v41);
  if ( (!sort->fields.isBonusKind & ~v99) != 0 )
    goto LABEL_87;
  if ( this->fields.isQuestStart )
  {
    if ( questRestrictionInfo && this->fields.eventCampaignIdList )
    {
      v134 = p_sort;
      sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !sort )
        goto LABEL_142;
      sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)sort,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
      this->fields.questId = questRestrictionInfo->fields.questId;
      v101 = this->fields.eventCampaignIdList;
      this->fields.questPhase = questRestrictionInfo->fields.questPhase;
      if ( !v101 )
        goto LABEL_142;
      v102 = (EventQuestMaster_o *)sort;
      v103 = 0LL;
      v104 = -1;
      while ( 1 )
      {
        max_length = v101->max_length;
        if ( (__int64)v103 >= (int)max_length )
          break;
        if ( v103 >= max_length )
          goto LABEL_143;
        if ( v102 )
        {
          sort = (ListViewSort_o *)EventQuestMaster__IsExistQuest(
                                     v102,
                                     v101->m_Items[v103 + 1],
                                     this->fields.questId,
                                     this->fields.questPhase,
                                     0LL);
          v101 = this->fields.eventCampaignIdList;
          if ( ((unsigned __int8)sort & 1) != 0 )
            v104 = v103;
          ++v103;
          if ( v101 )
            continue;
        }
        goto LABEL_142;
      }
      p_sort = v134;
      if ( (v104 & 0x80000000) == 0 )
      {
        eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
        if ( !eventCampaignServantIdList )
          goto LABEL_142;
        if ( eventCampaignServantIdList->fields._size <= (unsigned int)v104 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v107 = eventCampaignServantIdList->fields._items->m_Items[v104];
        if ( !v107 )
          goto LABEL_142;
        if ( *(_QWORD *)&v107->max_length )
        {
          if ( !*v134 )
            goto LABEL_142;
          (*v134)->fields.isBonusKind = 1;
          v108 = this->fields.eventCampaignIdList;
          if ( !v108 )
            goto LABEL_142;
          if ( v104 >= v108->max_length )
          {
LABEL_143:
            v132 = sub_B2C460(sort);
            sub_B2C400(v132, 0LL);
          }
          v109 = this->fields.eventCampaignServantIdList;
          if ( !v109 )
            goto LABEL_142;
          if ( v109->fields._size <= (unsigned int)v104 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !this->fields.sort )
            goto LABEL_142;
          ListViewSort__AlignBonusKind(
            this->fields.sort,
            this->fields.bonusEventIdList,
            this->fields.servantFilterIdList,
            v108->m_Items[v104 + 1],
            v109->fields._items->m_Items[v104],
            0LL);
          p_sort = v134;
          goto LABEL_88;
        }
      }
    }
    sort = *p_sort;
    if ( !*p_sort )
      goto LABEL_142;
    if ( sort->fields.isBonusKind )
      ListViewSort__AlignBonusKind(sort, this->fields.bonusEventIdList, this->fields.servantFilterIdList, 0, 0LL, 0LL);
LABEL_87:
    if ( !questRestrictionInfo )
      goto LABEL_89;
    goto LABEL_88;
  }
  if ( ((unsigned __int8)v99 & !sort->fields.isBonusKind) == 1 )
  {
    sort->fields.isBonusKind = 1;
    sort = *p_sort;
    if ( !*p_sort )
      goto LABEL_142;
  }
  ListViewSort__AlignBonusKind2(
    sort,
    this->fields.bonusEventIdList,
    this->fields.servantFilterIdList,
    this->fields.eventCampaignIdList,
    this->fields.eventCampaignServantIdList,
    0LL,
    0LL);
  if ( questRestrictionInfo )
  {
LABEL_88:
    QuestRestrictionInfo__SetDeckInfo_31220960(questRestrictionInfo, partyItem, num, 0LL);
    this->fields.isFatigue = questRestrictionInfo->fields.isFatigure;
    this->fields.eventId = questRestrictionInfo->fields.eventId;
  }
LABEL_89:
  if ( !*p_sort )
    goto LABEL_142;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_97;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
LABEL_97:
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_142;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_142;
  sort = (ListViewSort_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_142;
  maxCost = partyItem->fields.maxCost;
  v113 = sort;
  v141 = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
    maxCost = v141;
    v115 = TotalCostRestriction;
  }
  else
  {
    v115 = 0;
  }
  if ( v115 && maxCost > v115 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    v141 = v115;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v118 = System_Int32__ToString((int32_t)&v141, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44305532(v116, v118, 0LL);
  if ( !maxCostLabel )
    goto LABEL_142;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44305532(v116, v120, 0LL);
  if ( !splitCostLabel )
    goto LABEL_142;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  selectCostLabel = this->fields.selectCostLabel;
  if ( partyItem->fields.cost <= v141 )
  {
    cost = partyItem->fields.cost;
    v123 = System_Int32__ToString((int32_t)&cost, 0LL);
    v124 = v116;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v123 = System_Int32__ToString((int32_t)&cost, 0LL);
    v124 = v122;
  }
  sort = (ListViewSort_o *)System_String__Concat_44305532(v124, v123, 0LL);
  if ( !selectCostLabel )
    goto LABEL_142;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_142;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_142;
  if ( !sort )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v113 )
    goto LABEL_142;
  v125 = *(_QWORD *)&v113->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v125 >= 1 )
  {
    v126 = 0LL;
    while ( v126 < (unsigned int)v125 )
    {
      v127 = (UserServantEntity_o *)*((_QWORD *)&v113->fields.manager + v126);
      v128 = (PartyServantListViewItem_o *)sub_B2C42C(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v128,
        v126,
        v127,
        baseDeckItemList,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v133);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_142;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v128,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v125) = *(_DWORD *)&v113->fields.FILTER_DEFAULT_VALUE;
      if ( (__int64)++v126 >= (int)v125 )
        goto LABEL_134;
    }
    goto LABEL_143;
  }
LABEL_134:
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_142;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v130);
  PartyServantListViewManager__SetFilterButtonImage(this, v131);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_32378360(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
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
  PartyServantListViewManager_c *v23; // x0
  struct ListViewSort_o *warServantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x19
  __int64 v26; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v35; // x9
  struct ListViewSort_o *v36; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v38; // x8
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct System_Int32_array *v46; // x1
  struct System_Int32_array *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v55; // x2
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w20
  int32_t v59; // w28
  System_String_o *v60; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v62; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v64; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  PartyServantListViewManager_o *v69; // x19
  __int64 v70; // x8
  unsigned __int64 v71; // x25
  UserServantEntity_o *v72; // x28
  PartyServantListViewItem_o *v73; // x27
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v75; // x4
  const MethodInfo *v76; // x1
  __int64 v77; // x0
  const MethodInfo *v78; // [xsp+0h] [xbp-70h]
  ListViewSort_o *v81; // [xsp+10h] [xbp-60h]
  __int64 v82; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418B81B & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, partyItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v15);
    sub_B2C35C(&PartyServantListViewManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StringLiteral_10326/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v18);
    sub_B2C35C(&StringLiteral_10324/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v19);
    sub_B2C35C(&StringLiteral_10325/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v20);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_B2C35C(&StringLiteral_10323/*"PARTY_ORGANIZATION_COST_COLOR"*/, v22);
    byte_418B81B = 1;
  }
  v82 = 0LL;
  v23 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v23 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v23->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
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
    goto LABEL_78;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
    if ( !servantFilterEventIdList )
      goto LABEL_78;
    v35 = *(_QWORD *)&servantFilterEventIdList->max_length;
    v36 = this->fields.sort;
    if ( v35 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v36 )
        goto LABEL_78;
    }
    else
    {
      servantFilterIdList = setupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v36 )
        goto LABEL_78;
    }
    v36->fields.isBonusKind = (char)servantFilterIdList;
    v47 = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v47;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v47,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v46 = setupInfo->fields.servantFilterIdList;
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v46;
  }
  else
  {
    v38 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v38 )
      goto LABEL_78;
    v38->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v28, v29, v30, v31, v32, v33);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    v46 = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)v46,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_78;
  if ( !sort->fields.isBonusKind )
  {
LABEL_22:
    if ( !questRestrictionInfo )
      goto LABEL_24;
    goto LABEL_23;
  }
  bonusEventIdList = this->fields.bonusEventIdList;
  v55 = this->fields.servantFilterIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind(sort, bonusEventIdList, v55, 0, 0LL, 0LL);
    goto LABEL_22;
  }
  ListViewSort__AlignBonusKind2(sort, bonusEventIdList, v55, 0LL, 0LL, 0LL, 0LL);
  if ( questRestrictionInfo )
LABEL_23:
    this->fields.eventId = questRestrictionInfo->fields.eventId;
LABEL_24:
  if ( !*p_sort )
    goto LABEL_78;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_34;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
LABEL_34:
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_78;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_78;
  sort = (ListViewSort_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_78;
  maxCost = partyItem->fields.maxCost;
  v81 = sort;
  HIDWORD(v82) = maxCost;
  v59 = questRestrictionInfo ? QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL) : 0;
  if ( v59 && maxCost > v59 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v82) = v59;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v62 = System_Int32__ToString((int32_t)&v82 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44305532(v60, v62, 0LL);
  if ( !maxCostLabel )
    goto LABEL_78;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44305532(v60, v64, 0LL);
  if ( !splitCostLabel )
    goto LABEL_78;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v82) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v60 = v67;
  }
  LODWORD(v82) = cost;
  v68 = System_Int32__ToString((int32_t)&v82, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44305532(v60, v68, 0LL);
  if ( !selectCostLabel )
    goto LABEL_78;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_78;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  if ( !sort )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  v69 = this;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v81 )
    goto LABEL_78;
  v70 = *(_QWORD *)&v81->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v70 >= 1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      if ( v71 >= (unsigned int)v70 )
      {
        v77 = sub_B2C460(sort);
        sub_B2C400(v77, 0LL);
      }
      v72 = (UserServantEntity_o *)*((_QWORD *)&v81->fields.manager + v71);
      v73 = (PartyServantListViewItem_o *)sub_B2C42C(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_32356396(
        v73,
        v71,
        v72,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v78);
      sort = (ListViewSort_o *)v69->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v71;
      LODWORD(v70) = *(_DWORD *)&v81->fields.FILTER_DEFAULT_VALUE;
      if ( (__int64)v71 >= (int)v70 )
        goto LABEL_70;
    }
LABEL_78:
    sub_B2C434(sort, v26);
  }
LABEL_70:
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = v69->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_78;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(v69, -1, 0, -1, v75);
  PartyServantListViewManager__SetFilterButtonImage(v69, v76);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_418B815 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_TypeInfo, v1);
    byte_418B815 = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
    sub_B2C434(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantFilterIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
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
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418B828 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418B828 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v11, v12);
  CommonUI__CloseServantFilterSelectMenu(Instance, v10, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B82B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyServantListViewManager_EndCloseSelectSortKind__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418B82B = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantSortSelectMenu(Instance, v9, 0LL);
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
  if ( (byte_418B82E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (PartyServantListViewManager_o *)sub_B2C35C(&PartyServantListViewItem_TypeInfo, v6);
    byte_418B82E = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, *(_QWORD *)&svtId);
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

  if ( (byte_418B81D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v5);
    byte_418B81D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, method);
  return partyServantSelectMenu->fields.modeKind;
}


System_String_o *__fastcall PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
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
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418B81F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v13);
    byte_418B81F = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (PartyServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && BYTE1(v27[2].fields.sortValue2B) )
      {
        if ( BYTE1(v27[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
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
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418B81E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v13);
    byte_418B81E = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (PartyServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && LOBYTE(v27[2].fields.sortValue2B) )
      {
        if ( LOBYTE(v27[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_418B816 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_TypeInfo, v1);
    byte_418B816 = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
  if ( (byte_418B826 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_int____get_Item__,
                                              *(_QWORD *)&campaiginEventId);
    byte_418B826 = 1;
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
      v16 = sub_B2C460(this);
      sub_B2C400(v16, 0LL);
    }
    if ( v11[v10] == campaiginEventId )
      break;
    if ( (int)++v10 >= max_length )
      goto LABEL_20;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v14; // x21
  unsigned int v15; // w26
  int64_t v16; // x20
  __int64 v17; // x8
  UserServantEntity_o **v18; // x20
  __int64 v19; // t1
  __int128 v20; // q0
  int64_t v21; // x22
  unsigned __int64 v22; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x23
  PartyServantListViewItem_o *v24; // x23
  __int64 v25; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v27; // q0
  const MethodInfo *v28; // x2
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

  if ( (byte_418B81C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418B81C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v14 = Instance;
  v37 = *(_QWORD *)(Instance + 24);
  if ( (int)v37 >= 1 )
  {
    if ( !(_DWORD)v37 )
    {
LABEL_34:
      v30 = sub_B2C460(Instance);
      sub_B2C400(v30, 0LL);
    }
    v15 = 0;
    while ( 1 )
    {
      v16 = v14 + 8LL * (int)v15;
      v19 = *(_QWORD *)(v16 + 32);
      v18 = (UserServantEntity_o **)(v16 + 32);
      v17 = v19;
      if ( !v19 )
        break;
      v20 = *(_OWORD *)(v17 + 32);
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
      *(_OWORD *)&v40.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL);
      if ( (int)size >= 1 )
      {
        v21 = Instance;
        v22 = 0LL;
        while ( 1 )
        {
          v23 = this->fields.itemList;
          if ( !v23 )
            goto LABEL_52;
          if ( v22 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = (PartyServantListViewItem_o *)v23->fields._items->m_Items[v22];
          if ( !v24 )
            goto LABEL_52;
          v25 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
            || (PartyServantListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v24->fields.userServantEntity;
          if ( userServantEntity )
          {
            v27 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v40.fields.fakeValue = v27;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v38 = v40;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( (__int64)++v22 >= size )
            goto LABEL_32;
        }
        if ( v15 >= *(_DWORD *)(v14 + 24) )
          goto LABEL_34;
        PartyServantListViewItem__ModifyItem(v24, *v18, v28);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v24, v11);
          PartyServantListViewItem__ModifyChoiceItem(v24, v29);
        }
      }
LABEL_32:
      if ( (int)++v15 >= (int)v37 )
        goto LABEL_35;
      if ( v15 >= *(_DWORD *)(v14 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B2C434(Instance, v11);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v9; // x20
  unsigned __int64 v10; // x21
  int v11; // w24
  unsigned __int64 max_length; // x9
  const MethodInfo *v13; // x4
  struct ListViewSort_o *sort; // x22
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x25
  ListViewSort_o *v16; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v19; // x4
  int32_t v20; // w3
  __int64 v21; // x0

  if ( (byte_418B825 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B825 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( eventCampaignIdList )
        {
          v9 = (EventQuestMaster_o *)Instance;
          v10 = 0LL;
          v11 = -1;
          while ( 1 )
          {
            max_length = eventCampaignIdList->max_length;
            if ( (__int64)v10 >= (int)max_length )
              break;
            if ( v10 >= max_length )
              goto LABEL_34;
            if ( v9 )
            {
              Instance = (DataManager_o *)EventQuestMaster__IsExistQuest(
                                            v9,
                                            eventCampaignIdList->m_Items[v10 + 1],
                                            this->fields.questId,
                                            this->fields.questPhase,
                                            0LL);
              eventCampaignIdList = this->fields.eventCampaignIdList;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                v11 = v10;
              ++v10;
              if ( eventCampaignIdList )
                continue;
            }
            goto LABEL_17;
          }
        }
        else
        {
          v11 = -1;
        }
        sort = this->fields.sort;
        if ( (v11 & 0x80000000) != 0 )
        {
          if ( sort )
          {
            v16 = this->fields.sort;
            bonusEventIdList = this->fields.bonusEventIdList;
            servantFilterIdList = this->fields.servantFilterIdList;
            v20 = 0;
            v19 = 0LL;
            goto LABEL_32;
          }
        }
        else if ( eventCampaignIdList )
        {
          if ( v11 >= eventCampaignIdList->max_length )
          {
LABEL_34:
            v21 = sub_B2C460(Instance);
            sub_B2C400(v21, 0LL);
          }
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( eventCampaignServantIdList )
          {
            if ( eventCampaignServantIdList->fields._size <= (unsigned int)v11 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( sort )
            {
              v16 = this->fields.sort;
              bonusEventIdList = this->fields.bonusEventIdList;
              servantFilterIdList = this->fields.servantFilterIdList;
              v19 = eventCampaignServantIdList->fields._items->m_Items[v11];
              v20 = eventCampaignIdList->m_Items[v11 + 1];
LABEL_32:
              ListViewSort__IncBonusKind(v16, bonusEventIdList, servantFilterIdList, v20, v19, 0LL);
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
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
        return;
      }
    }
LABEL_17:
    sub_B2C434(Instance, v6);
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
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B827 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyServantListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B827 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v9, this->fields.eventId, 0LL);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418B82C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B82C = 1;
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
      sub_B2C434(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v5);
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
  ServantSortSelectMenu_CallbackFunc_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_418B82A & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyServantListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B82A = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_B2C434(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, v6, sort, 0, v11, 0LL);
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
    sub_B2C434(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_418B824 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B824 = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B822 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_PartyServantListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418B822 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_32383596(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B823 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_PartyServantListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B823 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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

  if ( (byte_418B829 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418B829 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32382676(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_32382676(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  int64_t scrollView; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x4
  int32_t v14; // w1
  int32_t v15; // w8
  int64_t v16; // x20
  int v17; // w8
  int64_t v18; // x21
  signed int v19; // w23
  int v20; // w25
  __int64 v21; // x8
  int64_t v22; // x22
  __int128 v23; // q0
  __int128 v24; // q0
  __int64 v25; // x23
  PartyServantListViewObject_o *v26; // x21
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  float v29; // s0
  int v30; // s1
  int32_t v33; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-60h]

  if ( (byte_418B821 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_PartyServantListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v9);
    byte_418B821 = 1;
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
      PartyServantListViewManager__RequestListObject_32383596(this, v14, v12);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v10);
      if ( !scrollView )
        goto LABEL_46;
      v15 = *(_DWORD *)(scrollView + 24);
      v16 = scrollView;
      if ( v15 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = v15;
      v17 = *(_DWORD *)(scrollView + 24);
      if ( v17 < 1 )
        return;
      v18 = 0LL;
      v19 = 0;
      v20 = -1;
      break;
    default:
      return;
  }
  do
  {
    if ( v17 <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    scrollView = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 8LL * v19 + 32);
    if ( !scrollView )
      goto LABEL_46;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v10);
    if ( !scrollView )
      goto LABEL_46;
    v21 = *(_QWORD *)(scrollView + 112);
    v22 = scrollView;
    if ( v21 && (*(_DWORD *)(scrollView + 204) & 0x80000000) != 0 )
    {
      if ( (v20 & 0x80000000) != 0 )
        goto LABEL_26;
      v23 = *(_OWORD *)(v21 + 32);
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
      *(_OWORD *)&v36.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v35 = v36;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v35, 0LL);
      if ( v18 < scrollView )
      {
        v21 = *(_QWORD *)(v22 + 112);
        if ( !v21 )
          goto LABEL_46;
LABEL_26:
        v24 = *(_OWORD *)(v21 + 32);
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
        *(_OWORD *)&v36.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v36;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v34, 0LL);
        v20 = v19;
      }
    }
    v17 = *(_DWORD *)(v16 + 24);
    ++v19;
  }
  while ( v19 < v17 );
  if ( v17 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v17 <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v26 = *(PartyServantListViewObject_o **)(*(_QWORD *)(v16 + 16) + 8 * v25 + 32);
      v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v26 )
        break;
      *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
      if ( v20 == (_DWORD)v25 )
        v33 = 5;
      else
        v33 = 2;
      PartyServantListViewObject__Init(v26, v33, v27, v29, *(UnityEngine_Vector3_o *)&v30, v28);
      v17 = *(_DWORD *)(v16 + 24);
      if ( (int)++v25 >= v17 )
        return;
    }
LABEL_46:
    sub_B2C434(scrollView, v10);
  }
}


void __fastcall PartyServantListViewManager__SetMode_32383540(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32382676(this, mode, v10);
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
  if ( (byte_418B820 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B2C35C(&PartyServantListViewObject_TypeInfo, obj);
    byte_418B820 = 1;
  }
  if ( !obj
    || (v6 = *(&PartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v17; // x1
  __int64 sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v26; // x9
  System_String_o **v27; // x10
  System_String_o **v28; // x8
  struct ListViewSort_o *v29; // x8
  System_String_o **v30; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v33; // x20
  unsigned __int64 v34; // x21
  int v35; // w24
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v37; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x21
  struct System_Int32_array *v40; // x8
  struct System_Collections_Generic_List_int____o *v41; // x26
  UILabel_o *v42; // x20
  struct ListViewSort_o *v43; // x21
  struct System_Int32_array *v44; // x19
  struct System_Int32_array *v45; // x22
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v48; // x4
  int32_t v49; // w3
  __int64 v50; // x0

  if ( (byte_418B82D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v10);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v11);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v12);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v13);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v14);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v15);
    byte_418B82D = 1;
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
    v19 = this->fields.sortKindLabel;
    sort = (__int64)ListViewSort__GetSortKindButtonText((ListViewSort_o *)sort, 0LL);
    if ( !v19 )
      goto LABEL_52;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
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
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_52;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v24->fields.isAscendingOrder;
      v26 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v27 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v28 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
      v29 = this->fields.sort;
      if ( !v29 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v29->fields.isAscendingOrder;
      v26 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v27 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v30 = v26;
    else
      v30 = v27;
    UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
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
        v42 = this->fields.bonusFilterKindLabel;
        sort = (__int64)ListViewSort__GetBonusKind2Text_33951116(
                          (ListViewSort_o *)sort,
                          this->fields.bonusEventIdList,
                          this->fields.servantFilterIdList,
                          this->fields.eventCampaignIdList,
                          this->fields.eventCampaignServantIdList,
                          0LL,
                          0LL);
        if ( !v42 )
          goto LABEL_52;
LABEL_75:
        UILabel__set_text(v42, (System_String_o *)sort, 0LL);
        return;
      }
      sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !sort )
        goto LABEL_52;
      sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)sort,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( !eventCampaignIdList )
        goto LABEL_70;
      v33 = (EventQuestMaster_o *)sort;
      v34 = 0LL;
      v35 = -1;
      while ( 1 )
      {
        max_length = eventCampaignIdList->max_length;
        if ( (__int64)v34 >= (int)max_length )
          break;
        if ( v34 >= max_length )
          goto LABEL_76;
        if ( v33 )
        {
          sort = EventQuestMaster__IsExistQuest(
                   v33,
                   eventCampaignIdList->m_Items[v34 + 1],
                   this->fields.questId,
                   this->fields.questPhase,
                   0LL);
          eventCampaignIdList = this->fields.eventCampaignIdList;
          if ( (sort & 1) != 0 )
            v35 = v34;
          ++v34;
          if ( eventCampaignIdList )
            continue;
        }
        goto LABEL_52;
      }
      if ( (v35 & 0x80000000) != 0 )
      {
LABEL_70:
        sort = (__int64)this->fields.sort;
        if ( !sort )
          goto LABEL_52;
        v42 = this->fields.bonusFilterKindLabel;
        bonusEventIdList = this->fields.bonusEventIdList;
        servantFilterIdList = this->fields.servantFilterIdList;
        v49 = 0;
        v48 = 0LL;
LABEL_72:
        sort = (__int64)ListViewSort__GetBonusKindText_33948928(
                          (ListViewSort_o *)sort,
                          bonusEventIdList,
                          servantFilterIdList,
                          v49,
                          v48,
                          0LL);
        if ( !v42 )
          goto LABEL_52;
        goto LABEL_75;
      }
      sort = sub_B2C374(int___TypeInfo, 1LL);
      v37 = this->fields.eventCampaignIdList;
      if ( !v37 )
        goto LABEL_52;
      if ( v35 < v37->max_length )
      {
        if ( !sort )
          goto LABEL_52;
        if ( *(_DWORD *)(sort + 24) )
        {
          *(_DWORD *)(sort + 32) = v37->m_Items[v35 + 1];
          v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v38,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( !eventCampaignServantIdList )
            goto LABEL_52;
          if ( eventCampaignServantIdList->fields._size <= (unsigned int)v35 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v38 )
            goto LABEL_52;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v38,
            (EventMissionProgressRequest_Argument_ProgressData_o *)eventCampaignServantIdList->fields._items->m_Items[v35],
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
          v40 = this->fields.eventCampaignIdList;
          if ( !v40 )
            goto LABEL_52;
          if ( v35 < v40->max_length )
          {
            v41 = this->fields.eventCampaignServantIdList;
            if ( v41 )
            {
              v42 = this->fields.bonusFilterKindLabel;
              v43 = this->fields.sort;
              v45 = this->fields.bonusEventIdList;
              v44 = this->fields.servantFilterIdList;
              if ( v41->fields._size <= (unsigned int)v35 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( v43 )
              {
                sort = (__int64)v43;
                bonusEventIdList = v45;
                servantFilterIdList = v44;
                v48 = v41->fields._items->m_Items[v35];
                v49 = v40->m_Items[v35 + 1];
                goto LABEL_72;
              }
            }
LABEL_52:
            sub_B2C434(sort, v17);
          }
        }
      }
LABEL_76:
      v50 = sub_B2C460(sort);
      sub_B2C400(v50, 0LL);
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
  if ( (byte_418B819 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&selectIndex);
    byte_418B819 = 1;
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

  if ( (byte_418B82F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418B82F = 1;
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
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418B830 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v6);
    byte_418B830 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B2C434(0LL, v8);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v10.fields.current )
        sub_B2C434(0LL, v9);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v10.fields.current, v9);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x20
  bool v14; // w23
  bool v15; // w24
  bool v16; // w25
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v18; // x1
  __int64 v19; // x9
  Il2CppClass *v20; // x8
  Il2CppType byval_arg; // q0
  int64_t v22; // x0
  __int64 v23; // x1
  int v24; // w8
  UserServantEntity_o *v25; // x0
  __int64 v26; // x1
  bool v27; // w8
  UserServantEntity_o *v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_418B831 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&modeKind);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v9);
    byte_418B831 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B2C434(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33.fields.current = (Il2CppObject *)v32.fields.fakeValue;
  *(_OWORD *)&v33.fields.list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v14 = modeKind == 1;
  v15 = modeKind == 2;
  v16 = modeKind == 3;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      goto LABEL_24;
    v18 = PartyServantListViewItem_TypeInfo;
    v19 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (PartyServantListViewItem_c *)v33.fields.current->klass->_2.typeHierarchy[v19 - 1] != PartyServantListViewItem_TypeInfo )
    {
      sub_B2C728(v33.fields.current);
LABEL_24:
      sub_B2C434(v29, v30);
    }
    v20 = v33.fields.current[7].klass;
    LOBYTE(v33.fields.current[13].monitor) = v14;
    BYTE1(current[13].monitor) = v15;
    BYTE2(current[13].monitor) = v16;
    if ( !v20 )
      sub_B2C434(v29, v18);
    byval_arg = v20->_1.byval_arg;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v20->_1.name;
    *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v31 = v32;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL);
    v24 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v22 == (_QWORD)klass;
    if ( v24 )
    {
      v25 = (UserServantEntity_o *)current[7].klass;
      if ( !v25 )
        sub_B2C434(0LL, v23);
      if ( UserServantEntity__IsLeave(v25, 0LL) )
      {
        v27 = 0;
      }
      else
      {
        v28 = (UserServantEntity_o *)current[7].klass;
        if ( !v28 )
          sub_B2C434(0LL, v26);
        v27 = !UserServantEntity__IsEventJoin(v28, 0LL);
      }
    }
    else
    {
      v27 = 1;
    }
    BYTE4(current[13].monitor) = v27;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_418B811 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B811 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B813 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B813 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ClippingObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  PartyServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B818 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B818 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (PartyServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v11;
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B817 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B817 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v11;
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

  if ( (byte_418B812 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B812 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B814 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B814 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  PartyServantListViewManager__GetModeKind(v10, v11);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41852A2 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&PartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_41852A2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyServantListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyServantListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}