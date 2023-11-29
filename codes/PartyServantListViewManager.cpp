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
  __int64 v24; // x3
  __int64 v25; // x4
  ListViewSort_o *v26; // x20
  struct PartyServantListViewManager_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  ListViewSort_o *v39; // x20
  struct PartyServantListViewManager_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40FDE5C & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&PartyServantListViewManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15359, v9);
    sub_B16FFC(&StringLiteral_10562, v10);
    byte_40FDE5C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyServantListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_10562;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10562;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = PartyServantListViewManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_15359;
  v13->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15359;
  sub_B16F98((BattleServantConfConponent_o *)&v13->WAR_SORT_SAVE_KEY, v14, v15, v16, v17, v18, v19, v20);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v26 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v22, v23, v24, v25);
  ListViewSort___ctor_30208480(v26, SORT_SAVE_KEY, 3, 0, 0LL);
  v27 = PartyServantListViewManager_TypeInfo->static_fields;
  v27->servantSortInfo = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v27->servantSortInfo,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v39 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v35, v36, v37, v38);
  ListViewSort___ctor_30208480(v39, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v40 = PartyServantListViewManager_TypeInfo->static_fields;
  v40->warServantSortInfo = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v40->warServantSortInfo,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x4

  scaleType = this->fields.scaleType;
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = this->fields.sort;
  if ( !sort || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL) )
    sub_B170D4();
  ListViewSort__Save(v13, 0LL);
  PartyServantListViewManager__ModifyList(this, 1, v14);
  PartyServantListViewManager__SetMode_32568528(this, 2, v15);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v16);
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
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v48; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v51; // x8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  bool IsEnableEvent; // w8
  struct System_Int32_array *v59; // x1
  struct System_Int32_array *v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x22
  int32_t EventId; // w0
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  int size; // w28
  System_Collections_Generic_List_EventCampaignEntity__o *v79; // x27
  struct System_Int32_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v91; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_eventCampaignServantIdList; // x22
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  WarQuestSelectionMaster_o *IsExistQuest; // x0
  __int64 v100; // x1
  __int64 v101; // x23
  struct System_Int32_array *eventCampaignIdList; // x25
  EventCampaignEntity_o *v103; // x8
  EventCampaignEntity_o *v104; // x8
  int v105; // w22
  struct ListViewSort_o *v106; // x8
  ListViewSort_o *v107; // x0
  WebViewManager_o *v108; // x0
  struct System_Int32_array *v109; // x8
  EventQuestMaster_o *v110; // x22
  unsigned __int64 v111; // x23
  int v112; // w28
  unsigned __int64 max_length; // x9
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x22
  System_Int32_array *v115; // x8
  struct System_Int32_array *v116; // x8
  struct System_Collections_Generic_List_int____o *v117; // x23
  ListViewSort_o *v118; // x0
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  WebViewManager_o *v121; // x0
  UserServantMaster_o *v122; // x0
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v125; // x27
  int32_t TotalCostRestriction; // w0
  int32_t v127; // w22
  System_String_o *v128; // x26
  UILabel_o *maxCostLabel; // x22
  System_String_o *v130; // x0
  System_String_o *v131; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v133; // x0
  System_String_o *v134; // x0
  UILabel_o *selectCostLabel; // x22
  System_String_o *v136; // x25
  System_String_o *v137; // x1
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v142; // x3
  __int64 v143; // x4
  __int64 v144; // x8
  unsigned __int64 v145; // x22
  UserServantEntity_o *v146; // x26
  PartyServantListViewItem_o *v147; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v150; // x0
  const MethodInfo *v151; // x4
  const MethodInfo *v152; // x1
  const MethodInfo *v153; // [xsp+8h] [xbp-C8h]
  struct ListViewSort_o **v154; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v158; // [xsp+40h] [xbp-90h] BYREF
  int32_t cost; // [xsp+5Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v160; // [xsp+60h] [xbp-70h] BYREF
  int32_t v161; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_40FDE44 & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, baseDeckItemList);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v19);
    sub_B16FFC(&int___TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v27);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v28);
    sub_B16FFC(&LocalizationManager_TypeInfo, v29);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v30);
    sub_B16FFC(&PartyServantListViewManager_TypeInfo, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B16FFC(&StringLiteral_10293, v33);
    sub_B16FFC(&StringLiteral_10291, v34);
    sub_B16FFC(&StringLiteral_10292, v35);
    sub_B16FFC(&StringLiteral_11842, v36);
    sub_B16FFC(&StringLiteral_10290, v37);
    byte_40FDE44 = 1;
  }
  v161 = 0;
  memset(&v160, 0, sizeof(v160));
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortInfo,
    (System_String_array **)partyItem,
    *(System_String_array ***)&num,
    *(System_Boolean_array ***)&tutorialMode,
    (System_Int32_array **)setupInfo,
    (System_Int32_array *)questRestrictionInfo,
    (System_Int32_array *)method);
  if ( !this->fields.sort )
    goto LABEL_142;
  ListViewSort__Load(this->fields.sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
    if ( !servantFilterEventIdList )
      goto LABEL_142;
    v48 = *(_QWORD *)&servantFilterEventIdList->max_length;
    sort = this->fields.sort;
    if ( v48 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !sort )
        goto LABEL_142;
    }
    else
    {
      servantFilterIdList = setupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !sort )
        goto LABEL_142;
    }
    sort->fields.isBonusKind = (char)servantFilterIdList;
    v59 = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v59;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v59,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v60 = setupInfo->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v60;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
      (System_Int32_array **)v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_142;
    IsEnableEvent = EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, EventId, 0LL);
  }
  else
  {
    v51 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v51 )
      goto LABEL_142;
    v51->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v41, v42, v43, v44, v45, v46);
    this->fields.servantFilterIdList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v52, v53, v54, v55, v56, v57);
    IsEnableEvent = 0;
  }
  this->fields.isBuddyPoint = IsEnableEvent;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_142;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  if ( FriendshipUpCampaigns )
  {
    size = FriendshipUpCampaigns->fields._size;
    v79 = FriendshipUpCampaigns;
    v80 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)size, v72);
    this->fields.eventCampaignIdList = v80;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
      (System_Int32_array **)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    v91 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_int____TypeInfo,
                                                                                                    v87,
                                                                                                    v88,
                                                                                                    v89,
                                                                                                    v90);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v91,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
    p_eventCampaignServantIdList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.eventCampaignServantIdList;
    this->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v91;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventCampaignServantIdList,
      (System_Int32_array **)v91,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    if ( size >= 1 )
    {
      v101 = 0LL;
      do
      {
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( v79->fields._size <= (unsigned int)v101 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v103 = v79->fields._items->m_Items[v101];
        if ( !v103 || !eventCampaignIdList )
          goto LABEL_142;
        if ( (unsigned int)v101 >= eventCampaignIdList->max_length )
          goto LABEL_143;
        eventCampaignIdList->m_Items[v101 + 1] = v103->fields.eventId;
        if ( v79->fields._size <= (unsigned int)v101 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v104 = v79->fields._items->m_Items[v101];
        if ( !v104 || !*p_eventCampaignServantIdList )
          goto LABEL_142;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_eventCampaignServantIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v104->fields.targetIds,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
      }
      while ( (int)++v101 < size );
    }
    if ( !*p_eventCampaignServantIdList )
      goto LABEL_142;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v158,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_eventCampaignServantIdList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v160 = v158;
    p_sort = &this->fields.sort;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v160,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
    {
      if ( !v160.fields.current )
        sub_B170D4();
      if ( v160.fields.current[1].monitor )
      {
        v105 = 1;
        goto LABEL_45;
      }
    }
    v105 = 0;
LABEL_45:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v160,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v105 = 0;
  }
  if ( !this->fields.isQuestStart || !this->fields.isBuddyPoint )
  {
    v106 = *p_sort;
    if ( !*p_sort )
      goto LABEL_142;
    if ( v106->fields.sortKind == 28 )
      v106->fields.sortKind = 3;
  }
  v107 = *p_sort;
  if ( !*p_sort )
LABEL_142:
    sub_B170D4();
  if ( (!v107->fields.isBonusKind & ~v105) != 0 )
    goto LABEL_87;
  if ( this->fields.isQuestStart )
  {
    if ( questRestrictionInfo && this->fields.eventCampaignIdList )
    {
      v154 = p_sort;
      v108 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v108 )
        goto LABEL_142;
      IsExistQuest = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)v108,
                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      this->fields.questId = questRestrictionInfo->fields.questId;
      v109 = this->fields.eventCampaignIdList;
      this->fields.questPhase = questRestrictionInfo->fields.questPhase;
      if ( !v109 )
        goto LABEL_142;
      v110 = (EventQuestMaster_o *)IsExistQuest;
      v111 = 0LL;
      v112 = -1;
      while ( 1 )
      {
        max_length = v109->max_length;
        if ( (__int64)v111 >= (int)max_length )
          break;
        if ( v111 >= max_length )
          goto LABEL_143;
        if ( v110 )
        {
          IsExistQuest = (WarQuestSelectionMaster_o *)EventQuestMaster__IsExistQuest(
                                                        v110,
                                                        v109->m_Items[v111 + 1],
                                                        this->fields.questId,
                                                        this->fields.questPhase,
                                                        0LL);
          v109 = this->fields.eventCampaignIdList;
          if ( ((unsigned __int8)IsExistQuest & 1) != 0 )
            v112 = v111;
          ++v111;
          if ( v109 )
            continue;
        }
        goto LABEL_142;
      }
      p_sort = v154;
      if ( (v112 & 0x80000000) == 0 )
      {
        eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
        if ( !eventCampaignServantIdList )
          goto LABEL_142;
        if ( eventCampaignServantIdList->fields._size <= (unsigned int)v112 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v115 = eventCampaignServantIdList->fields._items->m_Items[v112];
        if ( !v115 )
          goto LABEL_142;
        if ( *(_QWORD *)&v115->max_length )
        {
          if ( !*v154 )
            goto LABEL_142;
          (*v154)->fields.isBonusKind = 1;
          v116 = this->fields.eventCampaignIdList;
          if ( !v116 )
            goto LABEL_142;
          if ( v112 >= v116->max_length )
          {
LABEL_143:
            sub_B17100(IsExistQuest, v100, v72);
            sub_B170A0();
          }
          v117 = this->fields.eventCampaignServantIdList;
          if ( !v117 )
            goto LABEL_142;
          if ( v117->fields._size <= (unsigned int)v112 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !this->fields.sort )
            goto LABEL_142;
          ListViewSort__AlignBonusKind(
            this->fields.sort,
            this->fields.bonusEventIdList,
            this->fields.servantFilterIdList,
            v116->m_Items[v112 + 1],
            v117->fields._items->m_Items[v112],
            0LL);
          p_sort = v154;
          goto LABEL_88;
        }
      }
    }
    v118 = *p_sort;
    if ( !*p_sort )
      goto LABEL_142;
    if ( v118->fields.isBonusKind )
      ListViewSort__AlignBonusKind(v118, this->fields.bonusEventIdList, this->fields.servantFilterIdList, 0, 0LL, 0LL);
LABEL_87:
    if ( !questRestrictionInfo )
      goto LABEL_89;
    goto LABEL_88;
  }
  if ( ((unsigned __int8)v105 & !v107->fields.isBonusKind) == 1 )
  {
    v107->fields.isBonusKind = 1;
    v107 = *p_sort;
    if ( !*p_sort )
      goto LABEL_142;
  }
  ListViewSort__AlignBonusKind2(
    v107,
    this->fields.bonusEventIdList,
    this->fields.servantFilterIdList,
    this->fields.eventCampaignIdList,
    this->fields.eventCampaignServantIdList,
    0LL,
    0LL);
  if ( questRestrictionInfo )
  {
LABEL_88:
    QuestRestrictionInfo__SetDeckInfo_31238248(questRestrictionInfo, partyItem, num, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
LABEL_97:
  v121 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v121 )
    goto LABEL_142;
  v122 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v121,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v122 )
    goto LABEL_142;
  OrganizationList = UserServantMaster__getOrganizationList(v122, 0LL);
  if ( !partyItem )
    goto LABEL_142;
  maxCost = partyItem->fields.maxCost;
  v125 = OrganizationList;
  v161 = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
    maxCost = v161;
    v127 = TotalCostRestriction;
  }
  else
  {
    v127 = 0;
  }
  if ( v127 && maxCost > v127 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_10292, 0LL);
    v161 = v127;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_10290, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v130 = System_Int32__ToString((int32_t)&v161, 0LL);
  v131 = System_String__Concat_43743732(v128, v130, 0LL);
  if ( !maxCostLabel )
    goto LABEL_142;
  UILabel__set_text(maxCostLabel, v131, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_10293, 0LL);
  v134 = System_String__Concat_43743732(v128, v133, 0LL);
  if ( !splitCostLabel )
    goto LABEL_142;
  UILabel__set_text(splitCostLabel, v134, 0LL);
  selectCostLabel = this->fields.selectCostLabel;
  if ( partyItem->fields.cost <= v161 )
  {
    cost = partyItem->fields.cost;
    v137 = System_Int32__ToString((int32_t)&cost, 0LL);
    v138 = v128;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_10291, 0LL);
    cost = partyItem->fields.cost;
    v137 = System_Int32__ToString((int32_t)&cost, 0LL);
    v138 = v136;
  }
  v139 = System_String__Concat_43743732(v138, v137, 0LL);
  if ( !selectCostLabel )
    goto LABEL_142;
  UILabel__set_text(selectCostLabel, v139, 0LL);
  bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_142;
  gameObject = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !*p_sort )
    goto LABEL_142;
  if ( !gameObject )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(gameObject, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v125 )
    goto LABEL_142;
  v144 = *(_QWORD *)&v125->max_length;
  if ( (int)v144 >= 1 )
  {
    v145 = 0LL;
    while ( v145 < (unsigned int)v144 )
    {
      v146 = v125->m_Items[v145];
      v147 = (PartyServantListViewItem_o *)sub_B170CC(PartyServantListViewItem_TypeInfo, v100, v72, v142, v143);
      PartyServantListViewItem___ctor(
        v147,
        v145,
        v146,
        baseDeckItemList,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v153);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_142;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v147,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v144) = v125->max_length;
      if ( (__int64)++v145 >= (int)v144 )
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
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_142;
  UILabel__set_text(emptyMessageLabel, v150, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v151);
  PartyServantListViewManager__SetFilterButtonImage(this, v152);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_32564212(
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v33; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct System_Int32_array *v44; // x1
  struct System_Int32_array *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ListViewSort_o *v52; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v54; // x2
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w20
  int32_t v61; // w28
  System_String_o *v62; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  PartyServantListViewManager_o *v76; // x19
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  __int64 v82; // x8
  unsigned __int64 v83; // x25
  UserServantEntity_o *v84; // x28
  PartyServantListViewItem_o *v85; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v88; // x0
  const MethodInfo *v89; // x4
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // [xsp+0h] [xbp-70h]
  UserServantEntity_array *v94; // [xsp+10h] [xbp-60h]
  __int64 v95; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FDE45 & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, partyItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v15);
    sub_B16FFC(&PartyServantListViewManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_10293, v18);
    sub_B16FFC(&StringLiteral_10291, v19);
    sub_B16FFC(&StringLiteral_10292, v20);
    sub_B16FFC(&StringLiteral_11842, v21);
    sub_B16FFC(&StringLiteral_10290, v22);
    byte_40FDE45 = 1;
  }
  v95 = 0LL;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)warServantSortInfo,
    *(System_String_array ***)&num,
    *(System_String_array ***)&tutorialMode,
    (System_Boolean_array **)setupInfo,
    (System_Int32_array **)questRestrictionInfo,
    (System_Int32_array *)method,
    v7);
  if ( !this->fields.sort )
    goto LABEL_78;
  ListViewSort__Load(this->fields.sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
    if ( !servantFilterEventIdList )
      goto LABEL_78;
    v33 = *(_QWORD *)&servantFilterEventIdList->max_length;
    sort = this->fields.sort;
    if ( v33 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !sort )
        goto LABEL_78;
    }
    else
    {
      servantFilterIdList = setupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !sort )
        goto LABEL_78;
    }
    sort->fields.isBonusKind = (char)servantFilterIdList;
    v45 = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v45;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v45,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v44 = setupInfo->fields.servantFilterIdList;
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v44;
  }
  else
  {
    v36 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v36 )
      goto LABEL_78;
    v36->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v26, v27, v28, v29, v30, v31);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    v44 = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)v44,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v52 = *p_sort;
  if ( !*p_sort )
    goto LABEL_78;
  if ( !v52->fields.isBonusKind )
  {
LABEL_22:
    if ( !questRestrictionInfo )
      goto LABEL_24;
    goto LABEL_23;
  }
  bonusEventIdList = this->fields.bonusEventIdList;
  v54 = this->fields.servantFilterIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind(v52, bonusEventIdList, v54, 0, 0LL, 0LL);
    goto LABEL_22;
  }
  ListViewSort__AlignBonusKind2(v52, bonusEventIdList, v54, 0LL, 0LL, 0LL, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
LABEL_34:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !partyItem )
    goto LABEL_78;
  maxCost = partyItem->fields.maxCost;
  v94 = OrganizationList;
  HIDWORD(v95) = maxCost;
  v61 = questRestrictionInfo ? QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL) : 0;
  if ( v61 && maxCost > v61 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10292, 0LL);
    HIDWORD(v95) = v61;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10290, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v64 = System_Int32__ToString((int32_t)&v95 + 4, 0LL);
  v65 = System_String__Concat_43743732(v62, v64, 0LL);
  if ( !maxCostLabel )
    goto LABEL_78;
  UILabel__set_text(maxCostLabel, v65, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10293, 0LL);
  v68 = System_String__Concat_43743732(v62, v67, 0LL);
  if ( !splitCostLabel )
    goto LABEL_78;
  UILabel__set_text(splitCostLabel, v68, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v95) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_10291, 0LL);
    cost = partyItem->fields.cost;
    v62 = v71;
  }
  LODWORD(v95) = cost;
  v72 = System_Int32__ToString((int32_t)&v95, 0LL);
  v73 = System_String__Concat_43743732(v62, v72, 0LL);
  if ( !selectCostLabel )
    goto LABEL_78;
  UILabel__set_text(selectCostLabel, v73, 0LL);
  bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  if ( !gameObject )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(gameObject, (*p_sort)->fields.isBonusKind, 0LL);
  v76 = this;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v94 )
    goto LABEL_78;
  v82 = *(_QWORD *)&v94->max_length;
  if ( (int)v82 >= 1 )
  {
    v83 = 0LL;
    while ( 1 )
    {
      if ( v83 >= (unsigned int)v82 )
      {
        sub_B17100(v77, v78, v79);
        sub_B170A0();
      }
      v84 = v94->m_Items[v83];
      v85 = (PartyServantListViewItem_o *)sub_B170CC(PartyServantListViewItem_TypeInfo, v78, v79, v80, v81);
      PartyServantListViewItem___ctor_32542248(
        v85,
        v83,
        v84,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v91);
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v83;
      LODWORD(v82) = v94->max_length;
      if ( (__int64)v83 >= (int)v82 )
        goto LABEL_70;
    }
LABEL_78:
    sub_B170D4();
  }
LABEL_70:
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = v76->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_78;
  UILabel__set_text(emptyMessageLabel, v88, 0LL);
  PartyServantListViewManager__SortItem(v76, -1, 0, -1, v89);
  PartyServantListViewManager__SetFilterButtonImage(v76, v90);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *warServantSortInfo; // x0

  if ( (byte_40FDE3F & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_TypeInfo, v1);
    byte_40FDE3F = 1;
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
        (warServantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(warServantSortInfo, 0LL);
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
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.servantFilterIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FDE52 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FDE52 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FDE55 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyServantListViewManager_EndCloseSelectSortKind__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FDE55 = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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

  if ( (byte_40FDE58 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v6);
    byte_40FDE58 = 1;
  }
  itemList = this->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      ++v10;
      if ( PartyServantListViewItem__get_SvtId(v14, *(const MethodInfo **)&svtId) == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B170D4();
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

  if ( (byte_40FDE47 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v5);
    byte_40FDE47 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
  return partyServantSelectMenu->fields.modeKind;
}


System_String_o *__fastcall PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDE49 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v14);
    byte_40FDE49 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (PartyServantListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && BYTE1(v30[2].fields.sortValue2B) )
      {
        if ( BYTE1(v30[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDE48 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v14);
    byte_40FDE48 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (PartyServantListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && LOBYTE(v30[2].fields.sortValue2B) )
      {
        if ( LOBYTE(v30[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *warServantSortInfo; // x0

  if ( (byte_40FDE40 & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_TypeInfo, v1);
    byte_40FDE40 = 1;
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
        (warServantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(warServantSortInfo, 0LL);
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

  v6 = this;
  if ( (byte_40FDE50 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B16FFC(
                                              &Method_System_Collections_Generic_List_int____get_Item__,
                                              *(_QWORD *)&campaiginEventId);
    byte_40FDE50 = 1;
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
      sub_B17100(this, *(_QWORD *)&campaiginEventId, *(_QWORD *)&svtId);
      sub_B170A0();
    }
    if ( v11[v10] == campaiginEventId )
      break;
    if ( (int)++v10 >= max_length )
      goto LABEL_20;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t OrganizationList; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v17; // x21
  unsigned int v18; // w26
  int64_t v19; // x20
  __int64 v20; // x8
  UserServantEntity_o **v21; // x20
  __int64 v22; // t1
  __int128 v23; // q0
  int64_t v24; // x22
  unsigned __int64 v25; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x23
  PartyServantListViewItem_o *v27; // x23
  __int64 v28; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v30; // q0
  const MethodInfo *v31; // x1
  unsigned __int64 v32; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x20
  ListViewItem_o *v34; // x20
  __int64 v35; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v37; // x0
  __int64 v39; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDE46 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FDE46 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  OrganizationList = (int64_t)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v17 = OrganizationList;
  v39 = *(_QWORD *)(OrganizationList + 24);
  if ( (int)v39 >= 1 )
  {
    if ( !(_DWORD)v39 )
    {
LABEL_34:
      sub_B17100(OrganizationList, v13, v14);
      sub_B170A0();
    }
    v18 = 0;
    while ( 1 )
    {
      v19 = v17 + 8LL * (int)v18;
      v22 = *(_QWORD *)(v19 + 32);
      v21 = (UserServantEntity_o **)(v19 + 32);
      v20 = v22;
      if ( !v22 )
        break;
      v23 = *(_OWORD *)(v20 + 32);
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
      *(_OWORD *)&v42.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v41 = v42;
      OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
      if ( (int)size >= 1 )
      {
        v24 = OrganizationList;
        v25 = 0LL;
        while ( 1 )
        {
          v26 = this->fields.itemList;
          if ( !v26 )
            goto LABEL_52;
          if ( v25 >= (unsigned int)v26->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v27 = (PartyServantListViewItem_o *)v26->fields._items->m_Items[v25];
          if ( !v27 )
            goto LABEL_52;
          v28 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
            || (PartyServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v27->fields.userServantEntity;
          if ( userServantEntity )
          {
            v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v42.fields.fakeValue = v30;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v40 = v42;
            OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL);
            if ( OrganizationList == v24 )
              break;
          }
          if ( (__int64)++v25 >= size )
            goto LABEL_32;
        }
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          goto LABEL_34;
        PartyServantListViewItem__ModifyItem(v27, *v21, v14);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v27, v13);
          PartyServantListViewItem__ModifyChoiceItem(v27, v31);
        }
      }
LABEL_32:
      if ( (int)++v18 >= (int)v39 )
        goto LABEL_35;
      if ( v18 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B170D4();
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v32 = 0LL;
    while ( 1 )
    {
      v33 = this->fields.itemList;
      if ( !v33 )
        goto LABEL_52;
      if ( v32 >= (unsigned int)v33->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v34 = v33->fields._items->m_Items[v32];
      if ( v34 )
      {
        v35 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (PartyServantListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == PartyServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v34->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
          {
            v37 = v34->fields.viewObject;
            if ( !v37 )
              goto LABEL_52;
            ListViewObject__SetItemSeed(v37, v34, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v32 >= size )
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v11; // x20
  unsigned __int64 v12; // x21
  int v13; // w24
  unsigned __int64 max_length; // x9
  ListViewSort_o *v15; // x0
  const MethodInfo *v16; // x4
  struct ListViewSort_o *sort; // x22
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x25
  ListViewSort_o *v19; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v22; // x4
  int32_t v23; // w3

  if ( (byte_40FDE4F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FDE4F = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( eventCampaignIdList )
        {
          v11 = (EventQuestMaster_o *)MasterData_WarQuestSelectionMaster;
          v12 = 0LL;
          v13 = -1;
          while ( 1 )
          {
            max_length = eventCampaignIdList->max_length;
            if ( (__int64)v12 >= (int)max_length )
              break;
            if ( v12 >= max_length )
              goto LABEL_34;
            if ( v11 )
            {
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventQuestMaster__IsExistQuest(
                                                                                  v11,
                                                                                  eventCampaignIdList->m_Items[v12 + 1],
                                                                                  this->fields.questId,
                                                                                  this->fields.questPhase,
                                                                                  0LL);
              eventCampaignIdList = this->fields.eventCampaignIdList;
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                v13 = v12;
              ++v12;
              if ( eventCampaignIdList )
                continue;
            }
            goto LABEL_17;
          }
        }
        else
        {
          v13 = -1;
        }
        sort = this->fields.sort;
        if ( (v13 & 0x80000000) != 0 )
        {
          if ( sort )
          {
            v19 = this->fields.sort;
            bonusEventIdList = this->fields.bonusEventIdList;
            servantFilterIdList = this->fields.servantFilterIdList;
            v23 = 0;
            v22 = 0LL;
            goto LABEL_32;
          }
        }
        else if ( eventCampaignIdList )
        {
          if ( v13 >= eventCampaignIdList->max_length )
          {
LABEL_34:
            sub_B17100(MasterData_WarQuestSelectionMaster, v8, v9);
            sub_B170A0();
          }
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( eventCampaignServantIdList )
          {
            if ( eventCampaignServantIdList->fields._size <= (unsigned int)v13 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( sort )
            {
              v19 = this->fields.sort;
              bonusEventIdList = this->fields.bonusEventIdList;
              servantFilterIdList = this->fields.servantFilterIdList;
              v22 = eventCampaignServantIdList->fields._items->m_Items[v13];
              v23 = eventCampaignIdList->m_Items[v13 + 1];
LABEL_32:
              ListViewSort__IncBonusKind(v19, bonusEventIdList, servantFilterIdList, v23, v22, 0LL);
              goto LABEL_33;
            }
          }
        }
      }
    }
    else
    {
      v15 = this->fields.sort;
      if ( v15 )
      {
        ListViewSort__IncBonusKind2(
          v15,
          this->fields.bonusEventIdList,
          this->fields.servantFilterIdList,
          this->fields.eventCampaignIdList,
          this->fields.eventCampaignServantIdList,
          0LL,
          0LL);
LABEL_33:
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v16);
        return;
      }
    }
LABEL_17:
    sub_B170D4();
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FDE51 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_PartyServantListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FDE51 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v13, this->fields.eventId, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    PartyServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortAscendingOrder(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FDE56 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDE56 = 1;
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
      sub_B170D4();
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
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
  __int64 v13; // x3
  __int64 v14; // x4
  ServantSortSelectMenu_CallbackFunc_o *v15; // x23

  if ( (byte_40FDE54 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_PartyServantListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FDE54 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v15 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13,
                                                    v14);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v10, v6, sort, 0, v15, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnLongPushListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8
  UnityEngine_Behaviour_o *scrollView; // x0
  PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t Index; // w2

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_8;
  if ( partyServantSelectMenu->fields.modeKind )
    return;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
LABEL_8:
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_40FDE4E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDE4E = 1;
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
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDE4C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_PartyServantListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FDE4C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_32569448(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDE4D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_PartyServantListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FDE4D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__SetFilterButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FDE53 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FDE53 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        v6 = ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32568528(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_32568528(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x4
  UnityEngine_Behaviour_o *v14; // x0
  UIScrollView_o *v15; // x0
  int32_t v16; // w1
  System_Collections_Generic_List_PartyServantListViewObject__o *ClippingObjectList; // x0
  const MethodInfo *v18; // x1
  int32_t size; // w8
  System_Collections_Generic_List_PartyServantListViewObject__o *v20; // x20
  int v21; // w8
  int64_t v22; // x21
  signed int v23; // w23
  int v24; // w25
  PartyServantListViewObject_o *v25; // x0
  PartyServantListViewItem_o *Item; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct UserServantEntity_o *userServantEntity; // x8
  PartyServantListViewItem_o *v31; // x22
  __int128 v32; // q0
  __int128 v33; // q0
  __int64 v34; // x23
  PartyServantListViewObject_o *v35; // x21
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3
  float v38; // s0
  int v39; // s1
  int32_t v42; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-60h]

  if ( (byte_40FDE4B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_PartyServantListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&StringLiteral_10004, v9);
    byte_40FDE4B = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_46;
  if ( !UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
  {
    v14 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v14 )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled(v14, 1, 0LL);
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_46;
    UIScrollView__UpdatePosition(v15, 0LL);
  }
  switch ( mode )
  {
    case 1:
      v16 = 2;
      goto LABEL_43;
    case 2:
      v16 = 3;
      goto LABEL_43;
    case 3:
      v16 = 4;
LABEL_43:
      PartyServantListViewManager__RequestListObject_32569448(this, v16, v12);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
      return;
    case 5:
      ClippingObjectList = PartyServantListViewManager__get_ClippingObjectList(this, v11);
      if ( !ClippingObjectList )
        goto LABEL_46;
      size = ClippingObjectList->fields._size;
      v20 = ClippingObjectList;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10004,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = size;
      v21 = ClippingObjectList->fields._size;
      if ( v21 < 1 )
        return;
      v22 = 0LL;
      v23 = 0;
      v24 = -1;
      break;
    default:
      return;
  }
  do
  {
    if ( v21 <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v25 = v20->fields._items->m_Items[v23];
    if ( !v25 )
      goto LABEL_46;
    Item = PartyServantListViewObject__GetItem(v25, v18);
    if ( !Item )
      goto LABEL_46;
    userServantEntity = Item->fields.userServantEntity;
    v31 = Item;
    if ( userServantEntity && (Item->fields.partyIndex & 0x80000000) != 0 )
    {
      if ( (v24 & 0x80000000) != 0 )
        goto LABEL_26;
      v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v32;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v44 = v45;
      if ( v22 < CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v44, 0LL) )
      {
        userServantEntity = v31->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_46;
LABEL_26:
        v33 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v43 = v45;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
        v24 = v23;
      }
    }
    v21 = v20->fields._size;
    ++v23;
  }
  while ( v23 < v21 );
  if ( v21 >= 1 )
  {
    v34 = 0LL;
    while ( 1 )
    {
      if ( v21 <= (unsigned int)v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v35 = v20->fields._items->m_Items[v34];
      v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v27, v28, v29);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v35 )
        break;
      *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
      if ( v24 == (_DWORD)v34 )
        v42 = 5;
      else
        v42 = 2;
      PartyServantListViewObject__Init(v35, v42, v36, v38, *(UnityEngine_Vector3_o *)&v39, v37);
      v21 = v20->fields._size;
      if ( (int)++v34 >= v21 )
        return;
    }
LABEL_46:
    sub_B170D4();
  }
}


void __fastcall PartyServantListViewManager__SetMode_32569392(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32568528(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetObjectItem(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FDE4A & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewObject_TypeInfo, obj);
    byte_40FDE4A = 1;
  }
  if ( !obj
    || (v6 = *(&PartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  ListViewSort_o *sort; // x0
  UILabel_o *v18; // x20
  System_String_o *SortKindButtonText; // x0
  ListViewSort_o *v20; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v22; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v25; // x8
  struct ListViewSort_o *v26; // x8
  UISprite_o *v27; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v29; // x9
  System_String_o **v30; // x10
  UISprite_o *v31; // x0
  System_String_o **v32; // x8
  struct ListViewSort_o *v33; // x8
  System_String_o **v34; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct ListViewSort_o *v36; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v42; // x20
  unsigned __int64 v43; // x21
  int v44; // w24
  unsigned __int64 max_length; // x9
  __int64 v46; // x3
  __int64 v47; // x4
  struct System_Int32_array *v48; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x21
  struct System_Int32_array *v51; // x8
  struct System_Collections_Generic_List_int____o *v52; // x26
  UILabel_o *v53; // x20
  struct ListViewSort_o *v54; // x21
  struct System_Int32_array *v55; // x19
  struct System_Int32_array *v56; // x22
  ListViewSort_o *v57; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v60; // x4
  int32_t v61; // w3
  System_String_o *BonusKind2Text_30244736; // x0

  if ( (byte_40FDE57 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_16955, v10);
    sub_B16FFC(&StringLiteral_17038, v11);
    sub_B16FFC(&StringLiteral_16995, v12);
    sub_B16FFC(&StringLiteral_16985, v13);
    sub_B16FFC(&StringLiteral_17002, v14);
    sub_B16FFC(&StringLiteral_16952, v15);
    byte_40FDE57 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_52;
    v18 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v18 )
      goto LABEL_52;
    UILabel__set_text(v18, SortKindButtonText, 0LL);
    v20 = this->fields.sort;
    if ( !v20 )
      goto LABEL_52;
    ListViewSort__SetupSortLabelLayout(v20, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v22 = this->fields.sort;
    if ( !v22 )
      goto LABEL_52;
    sortKind = v22->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_52;
      v25 = (System_String_o **)(v22->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v25, 0LL);
      v26 = this->fields.sort;
      if ( !v26 )
        goto LABEL_52;
      v27 = this->fields.sortOrderSprite;
      if ( !v27 )
        goto LABEL_52;
      isAscendingOrder = v26->fields.isAscendingOrder;
      v29 = (System_String_o **)&StringLiteral_16952;
      v30 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v31 = this->fields.sortExplanationSprite;
      if ( !v31 )
        goto LABEL_52;
      v32 = (System_String_o **)(v22->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v31, *v32, 0LL);
      v33 = this->fields.sort;
      if ( !v33 )
        goto LABEL_52;
      v27 = this->fields.sortOrderSprite;
      if ( !v27 )
        goto LABEL_52;
      isAscendingOrder = v33->fields.isAscendingOrder;
      v29 = (System_String_o **)&StringLiteral_16955;
      v30 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v34 = v29;
    else
      v34 = v30;
    UISprite__set_spriteName(v27, *v34, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v36 = this->fields.sort;
    if ( !v36 )
      goto LABEL_52;
    if ( v36->fields.isBonusKind )
    {
      if ( !this->fields.isQuestStart )
      {
        v53 = this->fields.bonusFilterKindLabel;
        BonusKind2Text_30244736 = ListViewSort__GetBonusKind2Text_30244736(
                                    v36,
                                    this->fields.bonusEventIdList,
                                    this->fields.servantFilterIdList,
                                    this->fields.eventCampaignIdList,
                                    this->fields.eventCampaignServantIdList,
                                    0LL,
                                    0LL);
        if ( !v53 )
          goto LABEL_52;
LABEL_75:
        UILabel__set_text(v53, BonusKind2Text_30244736, 0LL);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_52;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( !eventCampaignIdList )
        goto LABEL_70;
      v42 = (EventQuestMaster_o *)MasterData_WarQuestSelectionMaster;
      v43 = 0LL;
      v44 = -1;
      while ( 1 )
      {
        max_length = eventCampaignIdList->max_length;
        if ( (__int64)v43 >= (int)max_length )
          break;
        if ( v43 >= max_length )
          goto LABEL_76;
        if ( v42 )
        {
          MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventQuestMaster__IsExistQuest(
                                                                              v42,
                                                                              eventCampaignIdList->m_Items[v43 + 1],
                                                                              this->fields.questId,
                                                                              this->fields.questPhase,
                                                                              0LL);
          eventCampaignIdList = this->fields.eventCampaignIdList;
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            v44 = v43;
          ++v43;
          if ( eventCampaignIdList )
            continue;
        }
        goto LABEL_52;
      }
      if ( (v44 & 0x80000000) != 0 )
      {
LABEL_70:
        v57 = this->fields.sort;
        if ( !v57 )
          goto LABEL_52;
        v53 = this->fields.bonusFilterKindLabel;
        bonusEventIdList = this->fields.bonusEventIdList;
        servantFilterIdList = this->fields.servantFilterIdList;
        v61 = 0;
        v60 = 0LL;
LABEL_72:
        BonusKind2Text_30244736 = ListViewSort__GetBonusKindText_30242532(
                                    v57,
                                    bonusEventIdList,
                                    servantFilterIdList,
                                    v61,
                                    v60,
                                    0LL);
        if ( !v53 )
          goto LABEL_52;
        goto LABEL_75;
      }
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(int___TypeInfo, 1LL, v40);
      v48 = this->fields.eventCampaignIdList;
      if ( !v48 )
        goto LABEL_52;
      if ( v44 < v48->max_length )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_52;
        if ( LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
        {
          LODWORD(MasterData_WarQuestSelectionMaster->fields.list) = v48->m_Items[v44 + 1];
          v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_int____TypeInfo, v39, v40, v46, v47);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v49,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( !eventCampaignServantIdList )
            goto LABEL_52;
          if ( eventCampaignServantIdList->fields._size <= (unsigned int)v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v49 )
            goto LABEL_52;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v49,
            (EventMissionProgressRequest_Argument_ProgressData_o *)eventCampaignServantIdList->fields._items->m_Items[v44],
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
          v51 = this->fields.eventCampaignIdList;
          if ( !v51 )
            goto LABEL_52;
          if ( v44 < v51->max_length )
          {
            v52 = this->fields.eventCampaignServantIdList;
            if ( v52 )
            {
              v53 = this->fields.bonusFilterKindLabel;
              v54 = this->fields.sort;
              v56 = this->fields.bonusEventIdList;
              v55 = this->fields.servantFilterIdList;
              if ( v52->fields._size <= (unsigned int)v44 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              if ( v54 )
              {
                v57 = v54;
                bonusEventIdList = v56;
                servantFilterIdList = v55;
                v60 = v52->fields._items->m_Items[v44];
                v61 = v51->m_Items[v44 + 1];
                goto LABEL_72;
              }
            }
LABEL_52:
            sub_B170D4();
          }
        }
      }
LABEL_76:
      sub_B17100(MasterData_WarQuestSelectionMaster, v39, v40);
      sub_B170A0();
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
  if ( (byte_40FDE43 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&selectIndex);
    byte_40FDE43 = 1;
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

  if ( (byte_40FDE59 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FDE59 = 1;
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

  if ( (byte_40FDE5A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v6);
    byte_40FDE5A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B170D4();
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B170D4();
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v9.fields.current, v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v11; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t pushUserSvtId; // x20
  bool v14; // w23
  bool v15; // w24
  bool v16; // w25
  Il2CppObject *current; // x19
  __int64 v18; // x9
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v21; // x0
  int v22; // w8
  UserServantEntity_o *v23; // x0
  bool v24; // w8
  UserServantEntity_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_40FDE5B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&modeKind);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v9);
    byte_40FDE5B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (v11 = SelfUserGame, (itemList = this->fields.itemList) == 0LL) )
    sub_B170D4();
  pushUserSvtId = v11->fields.pushUserSvtId;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28.fields.current = (Il2CppObject *)v27.fields.fakeValue;
  *(_OWORD *)&v28.fields.list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v14 = modeKind == 1;
  v15 = modeKind == 2;
  v16 = modeKind == 3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v28.fields.current;
    if ( !v28.fields.current )
      goto LABEL_24;
    v18 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (PartyServantListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v18 - 1] != PartyServantListViewItem_TypeInfo )
    {
      sub_B173C8(v28.fields.current);
LABEL_24:
      sub_B170D4();
    }
    klass = v28.fields.current[7].klass;
    LOBYTE(v28.fields.current[13].monitor) = v14;
    BYTE1(current[13].monitor) = v15;
    BYTE2(current[13].monitor) = v16;
    if ( !klass )
      sub_B170D4();
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL);
    v22 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v21 == pushUserSvtId;
    if ( v22 )
    {
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_B170D4();
      if ( UserServantEntity__IsLeave(v23, 0LL) )
      {
        v24 = 0;
      }
      else
      {
        v25 = (UserServantEntity_o *)current[7].klass;
        if ( !v25 )
          sub_B170D4();
        v24 = !UserServantEntity__IsEventJoin(v25, 0LL);
      }
    }
    else
    {
      v24 = 1;
    }
    BYTE4(current[13].monitor) = v24;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_40FDE3B & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDE3B = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FDE3D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDE3D = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  PartyServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FDE42 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FDE42 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (PartyServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v14;
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FDE41 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FDE41 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v14;
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

  if ( (byte_40FDE3C & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDE3C = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FDE3E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDE3E = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyServantListViewManager__GetModeKind(v10, v11);
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
  sub_B16F98(
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_40F838C & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&PartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_40F838C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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