void __fastcall PartyServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct PartyServantListViewManager_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v28; // x20
  struct PartyServantListViewManager_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v37; // x20
  struct PartyServantListViewManager_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42EC3E3 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&PartyServantListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15611/*"WarBoardPartyServant"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10716/*"PartyServant"*/, v14, v15, v16);
    byte_42EC3E3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyServantListViewManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_10716/*"PartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10716/*"PartyServant"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = PartyServantListViewManager_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_15611/*"WarBoardPartyServant"*/;
  v19->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15611/*"WarBoardPartyServant"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->WAR_SORT_SAVE_KEY, v20, v21, v22, v23, v24, v25, v26);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v28 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v28, SORT_SAVE_KEY, 3, 0, 0LL);
  v29 = PartyServantListViewManager_TypeInfo->static_fields;
  v29->servantSortInfo = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v29->servantSortInfo,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v37 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v37, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v38 = PartyServantListViewManager_TypeInfo->static_fields;
  v38->warServantSortInfo = v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v38->warServantSortInfo,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
    sub_B5D560(
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
    sub_B5D69C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  PartyServantListViewManager__ModifyList(v9, 1, v13);
  PartyServantListViewManager__SetMode_32092560(v9, 2, v14);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  PartyServantListViewManager_c *v105; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 v107; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v116; // x9
  struct ListViewSort_o *v117; // x8
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v119; // x8
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  bool IsEnableEvent; // w8
  struct System_Int32_array *v127; // x1
  struct System_Int32_array *v128; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v137; // x22
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Collections_Generic_List_int__o *v144; // x28
  int size; // w27
  EventQuestMaster_o *v146; // x22
  __int64 v147; // x24
  __int64 v148; // x8
  int32_t v149; // w25
  int32_t questId; // w2
  EventMissionProgressRequest_Argument_ProgressData_o *v151; // x23
  PartyListViewItem_o *v152; // x26
  PartyServantListViewManager___c_c *v153; // x0
  System_Collections_Generic_List_T__o *v154; // x22
  struct PartyServantListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__50_0; // x23
  Il2CppObject *v157; // x25
  struct PartyServantListViewManager___c_StaticFields *v158; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  _BOOL4 v165; // w20
  struct System_Int32_array *v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  struct ListViewSort_o *v179; // x8
  _BOOL4 isBonusKind; // w8
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v182; // x22
  unsigned __int64 v183; // x20
  int v184; // w27
  unsigned __int64 max_length; // x9
  struct System_Collections_Generic_List_int____o *v186; // x20
  System_Int32_array *v187; // x8
  struct System_Int32_array *v188; // x8
  struct System_Collections_Generic_List_int____o *v189; // x20
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w20
  ListViewSort_o *v193; // x27
  int32_t v194; // w23
  System_String_o *v195; // x22
  UILabel_o *maxCostLabel; // x23
  System_String_o *v197; // x0
  UILabel_o *splitCostLabel; // x23
  System_String_o *v199; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x26
  System_String_o *v202; // x0
  __int64 v203; // x8
  unsigned __int64 v204; // x22
  UserServantEntity_o *v205; // x25
  PartyServantListViewItem_o *v206; // x23
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v208; // x4
  const MethodInfo *v209; // x1
  __int64 v210; // x0
  const MethodInfo *v211; // [xsp+8h] [xbp-98h]
  struct ListViewSort_o **p_sort; // [xsp+10h] [xbp-90h]
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // [xsp+18h] [xbp-88h]
  QuestRestrictionInfo_o *v216; // [xsp+30h] [xbp-70h]
  PartyListViewItem_o *partyItema; // [xsp+40h] [xbp-60h]
  __int64 v219; // [xsp+48h] [xbp-58h] BYREF

  v8 = questRestrictionInfo;
  if ( (byte_42EC3CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int_____, (_DWORD)baseDeckItemList, (_DWORD)partyItem, *(_QWORD *)&num);
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v24, v25, v26);
    sub_B5D5C4(&DataManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_int____bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_int____bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v63, v64, v65);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v66, v67, v68);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&PartyServantListViewManager_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v81, v82, v83);
    sub_B5D5C4(&Method_PartyServantListViewManager___c__CreateList_b__50_0__, v84, v85, v86);
    sub_B5D5C4(&PartyServantListViewManager___c_TypeInfo, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_10432/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_10430/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_10431/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_10429/*"PARTY_ORGANIZATION_COST_COLOR"*/, v102, v103, v104);
    byte_42EC3CA = 1;
  }
  v219 = 0LL;
  v105 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v105 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v105->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  sub_B5D560(
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
    v116 = *(_QWORD *)&servantFilterEventIdList->max_length;
    v117 = this->fields.sort;
    if ( v116 )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v117 )
        goto LABEL_152;
    }
    else
    {
      servantFilterIdList = setupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v117 )
        goto LABEL_152;
    }
    v117->fields.isBonusKind = (char)servantFilterIdList;
    v127 = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIdList = v127;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v127,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    v128 = setupInfo->fields.servantFilterIdList;
    this->fields.servantFilterIdList = v128;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
      (System_Int32_array **)v128,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sort = (ListViewSort_o *)EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_152;
    IsEnableEvent = EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, (int32_t)sort, 0LL);
  }
  else
  {
    v119 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v119 )
      goto LABEL_152;
    v119->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v109, v110, v111, v112, v113, v114);
    this->fields.servantFilterIdList = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantFilterIdList,
      0LL,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    IsEnableEvent = 0;
  }
  this->fields.isBuddyPoint = IsEnableEvent;
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  p_sort = &this->fields.sort;
  partyItema = partyItem;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !sort )
    goto LABEL_152;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)sort, 0LL);
  v137 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v137,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v137;
  p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignServantIdList,
    (System_Int32_array **)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v144 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v144,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v216 = v8;
  if ( !FriendshipUpCampaigns || !setupInfo || (size = FriendshipUpCampaigns->fields._size, size < 1) )
  {
    if ( !v144 )
      goto LABEL_152;
    v152 = partyItem;
LABEL_55:
    v165 = 0;
    goto LABEL_56;
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v146 = (EventQuestMaster_o *)sort;
  v147 = 4LL;
  do
  {
    if ( FriendshipUpCampaigns->fields._size <= (unsigned int)(v147 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v148 = *((_QWORD *)&FriendshipUpCampaigns->fields._items->obj.klass + v147);
    if ( !v148 )
      goto LABEL_152;
    v149 = *(_DWORD *)(v148 + 16);
    if ( FriendshipUpCampaigns->fields._size <= (unsigned int)(v147 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    questId = setupInfo->fields.questId;
    v151 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v148 + 40);
    if ( !questId && !setupInfo->fields.questPhase )
      goto LABEL_156;
    if ( !v146 )
      goto LABEL_152;
    sort = (ListViewSort_o *)EventQuestMaster__IsEventNotIncluded(
                               v146,
                               v149,
                               questId,
                               setupInfo->fields.questPhase,
                               7,
                               0LL);
    if ( ((unsigned __int8)sort & 1) == 0 )
    {
LABEL_156:
      if ( !v144 )
        goto LABEL_152;
      System_Collections_Generic_List_int___Add(
        v144,
        v149,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      sort = (ListViewSort_o *)*p_eventCampaignServantIdList;
      if ( !*p_eventCampaignServantIdList )
        goto LABEL_152;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v151,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
    }
    ++v147;
  }
  while ( (int)v147 - 4 < size );
  if ( !v144 )
    goto LABEL_152;
  v8 = v216;
  v152 = partyItema;
  if ( v144->fields._size < 1 )
    goto LABEL_55;
  v153 = PartyServantListViewManager___c_TypeInfo;
  v154 = (System_Collections_Generic_List_T__o *)*p_eventCampaignServantIdList;
  if ( (BYTE3(PartyServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager___c_TypeInfo);
    v153 = PartyServantListViewManager___c_TypeInfo;
  }
  static_fields = v153->static_fields;
  _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v153->vtable._0_Equals.methodPtr) & 4) != 0 && !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      static_fields = PartyServantListViewManager___c_TypeInfo->static_fields;
    }
    v157 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_int____bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__50_0,
      v157,
      Method_PartyServantListViewManager___c__CreateList_b__50_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_int____bool___ctor__);
    v158 = PartyServantListViewManager___c_TypeInfo->static_fields;
    v158->__9__50_0 = (struct System_Func_int____bool__o *)_9__50_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v158->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164);
  }
  v165 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           v154,
           (System_Func_T__bool__o *)_9__50_0,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_int_____);
LABEL_56:
  v166 = System_Collections_Generic_List_int___ToArray(
           v144,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.eventCampaignIdList = v166;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
    (System_Int32_array **)v166,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  if ( !this->fields.isQuestStart || !this->fields.isBuddyPoint )
  {
    v179 = *p_sort;
    if ( !*p_sort )
      goto LABEL_152;
    if ( v179->fields.sortKind == 28 )
      v179->fields.sortKind = 3;
  }
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_152;
  isBonusKind = sort->fields.isBonusKind;
  if ( !v165 && !isBonusKind )
  {
LABEL_98:
    if ( !v8 )
      goto LABEL_100;
    goto LABEL_99;
  }
  if ( !this->fields.isQuestStart )
  {
    if ( v165 && !isBonusKind )
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
    QuestRestrictionInfo__SetDeckInfo_34258532(v8, v152, num, 0LL);
    this->fields.isFatigue = v8->fields.isFatigure;
    this->fields.eventId = v8->fields.eventId;
    goto LABEL_100;
  }
  if ( !v8 || !this->fields.eventCampaignIdList )
    goto LABEL_95;
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  this->fields.questId = v8->fields.questId;
  eventCampaignIdList = this->fields.eventCampaignIdList;
  this->fields.questPhase = v8->fields.questPhase;
  if ( !eventCampaignIdList )
    goto LABEL_152;
  v182 = (EventQuestMaster_o *)sort;
  v183 = 0LL;
  v184 = -1;
  while ( 1 )
  {
    max_length = eventCampaignIdList->max_length;
    if ( (__int64)v183 >= (int)max_length )
      break;
    if ( v183 >= max_length )
      goto LABEL_153;
    if ( v182 )
    {
      sort = (ListViewSort_o *)EventQuestMaster__IsExistQuest(
                                 v182,
                                 eventCampaignIdList->m_Items[v183 + 1],
                                 this->fields.questId,
                                 this->fields.questPhase,
                                 0LL);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( ((unsigned __int8)sort & 1) != 0 )
        v184 = v183;
      ++v183;
      if ( eventCampaignIdList )
        continue;
    }
    goto LABEL_152;
  }
  if ( (v184 & 0x80000000) != 0 )
    goto LABEL_95;
  v186 = *p_eventCampaignServantIdList;
  if ( !*p_eventCampaignServantIdList )
    goto LABEL_152;
  if ( v186->fields._size <= (unsigned int)v184 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v187 = v186->fields._items->m_Items[v184];
  if ( !v187 )
    goto LABEL_152;
  if ( !*(_QWORD *)&v187->max_length )
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
  v188 = this->fields.eventCampaignIdList;
  if ( !v188 )
    goto LABEL_152;
  if ( v184 >= v188->max_length )
    goto LABEL_153;
  v189 = *p_eventCampaignServantIdList;
  if ( !*p_eventCampaignServantIdList )
    goto LABEL_152;
  if ( v189->fields._size <= (unsigned int)v184 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !this->fields.sort )
    goto LABEL_152;
  ListViewSort__AlignBonusKind(
    this->fields.sort,
    this->fields.bonusEventIdList,
    this->fields.servantFilterIdList,
    v188->m_Items[v184 + 1],
    v189->fields._items->m_Items[v184],
    0LL);
  v8 = v216;
  v152 = partyItema;
  if ( v216 )
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v173,
      v174,
      v175,
      v176,
      v177,
      v178);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_152;
  sort = (ListViewSort_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !v152 )
    goto LABEL_152;
  maxCost = v152->fields.maxCost;
  v193 = sort;
  HIDWORD(v219) = maxCost;
  v194 = v8 ? QuestRestrictionInfo__GetTotalCostRestriction(v8, 0LL) : 0;
  if ( v194 && maxCost > v194 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v195 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v219) = v194;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v195 = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v197 = System_Int32__ToString((int32_t)&v219 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44577788(v195, v197, 0LL);
  if ( !maxCostLabel )
    goto LABEL_152;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v199 = LocalizationManager__Get((System_String_o *)StringLiteral_10432/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44577788(v195, v199, 0LL);
  if ( !splitCostLabel )
    goto LABEL_152;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = v152->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v219) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v195 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItema->fields.cost;
  }
  LODWORD(v219) = cost;
  v202 = System_Int32__ToString((int32_t)&v219, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44577788(v195, v202, 0LL);
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
  if ( !v193 )
    goto LABEL_152;
  v203 = *(_QWORD *)&v193->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v203 >= 1 )
  {
    v204 = 0LL;
    while ( v204 < (unsigned int)v203 )
    {
      v205 = (UserServantEntity_o *)*((_QWORD *)&v193->fields.manager + v204);
      v206 = (PartyServantListViewItem_o *)sub_B5D694(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v206,
        v204,
        v205,
        baseDeckItemList,
        partyItema,
        num,
        tutorialMode,
        setupInfo,
        v216,
        v211);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_152;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v206,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v203) = *(_DWORD *)&v193->fields.FILTER_DEFAULT_VALUE;
      if ( (__int64)++v204 >= (int)v203 )
        goto LABEL_144;
    }
LABEL_153:
    v210 = sub_B5D6C8(sort);
    sub_B5D668(v210, 0LL);
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_152:
    sub_B5D69C(sort, v107);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v208);
  PartyServantListViewManager__SetFilterButtonImage(this, v209);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_32087624(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  PartyServantListViewManager_c *v74; // x0
  QuestRestrictionInfo_o *v75; // x20
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v77; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v79; // x26
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x28
  __int64 v87; // x8
  WarBoardPartyListViewItem_o *v88; // x24
  int v89; // w21
  int v90; // w9
  _BOOL8 v91; // x0
  __int64 v92; // x1
  Il2CppObject *current; // x20
  int v94; // w23
  struct ListViewSort_o **p_sort; // x22
  struct ListViewSort_o *v96; // x8
  struct System_Int32_array *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct System_Int32_array *servantFilterIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v112; // x8
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v120; // x2
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v125; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v127; // w28
  System_String_o *v128; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v130; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v132; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v135; // x0
  System_String_o *v136; // x0
  __int64 v137; // x8
  unsigned __int64 v138; // x25
  UserServantEntity_o *v139; // x28
  PartyServantListViewItem_o *v140; // x27
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v142; // x4
  const MethodInfo *v143; // x1
  __int64 v144; // x0
  const MethodInfo *v145; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+28h] [xbp-A8h]
  _BYTE v150[28]; // [xsp+30h] [xbp-A0h] BYREF
  int v151; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v152; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+70h] [xbp-60h] BYREF
  __int64 v154; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42EC3CB & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, (_DWORD)partyItem, num, *(_QWORD *)&tutorialMode);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&PartyServantListViewManager_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_10432/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_10430/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_10431/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_10429/*"PARTY_ORGANIZATION_COST_COLOR"*/, v71, v72, v73);
    byte_42EC3CB = 1;
  }
  eventUpValInfo = 0LL;
  v154 = 0LL;
  memset(&v152, 0, sizeof(v152));
  v151 = 0;
  v74 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v74 = PartyServantListViewManager_TypeInfo;
  }
  v75 = questRestrictionInfo;
  warServantSortInfo = v74->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_B5D560(
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
  v79 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v79,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !partyItem )
    goto LABEL_96;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v87 = *(_QWORD *)&memberItemList->max_length;
  v88 = partyItem;
  if ( v87 )
  {
    LODWORD(v154) = 0;
    if ( (int)v87 >= 1 )
    {
      v89 = 0;
      v90 = 0;
      while ( v90 < (unsigned int)v87 )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v90];
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
              (System_Collections_Generic_List_Enumerator_T__o *)v150,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v152 = *(System_Collections_Generic_List_Enumerator_T__o *)v150;
            while ( 1 )
            {
              v91 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v152,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v91 )
                break;
              current = v152.fields.current;
              if ( !v152.fields.current )
                sub_B5D69C(v91, v92);
              if ( !v79 )
                sub_B5D69C(v91, v92);
              if ( !System_Collections_Generic_List_int___Contains(
                      v79,
                      (int32_t)v152.fields.current[1].klass,
                      (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
                System_Collections_Generic_List_int___Add(
                  v79,
                  (int32_t)current[1].klass,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
            *(_DWORD *)&v150[4 * v89 + 24] = 161;
            v94 = ++v151;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v152,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            v75 = questRestrictionInfo;
            if ( v94 )
            {
              v89 = v94;
              if ( *(_DWORD *)&v150[4 * v94 + 20] == 161 )
              {
                v89 = v94 - 1;
                v151 = v94 - 1;
              }
            }
            else
            {
              v89 = 0;
            }
          }
        }
        v90 = v154 + 1;
        LODWORD(v154) = v90;
        LODWORD(v87) = memberItemList->max_length;
        if ( v90 >= (int)v87 )
          goto LABEL_31;
      }
LABEL_97:
      v144 = sub_B5D6C8(sort);
      sub_B5D668(v144, 0LL);
    }
  }
LABEL_31:
  if ( setupInfoa )
  {
    p_sort = &this->fields.sort;
    this->fields.isQuestStart = setupInfoa->fields.isQuestStart;
    if ( !v79 )
      goto LABEL_96;
    v96 = this->fields.sort;
    if ( !v96 )
      goto LABEL_96;
    v96->fields.isBonusKind = v79->fields._size > 0;
    v97 = System_Collections_Generic_List_int___ToArray(
            v79,
            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    this->fields.bonusEventIdList = v97;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
      (System_Int32_array **)v97,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    servantFilterIdList = setupInfoa->fields.servantFilterIdList;
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    this->fields.servantFilterIdList = servantFilterIdList;
  }
  else
  {
    v112 = this->fields.sort;
    p_sort = &this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v112 )
      goto LABEL_96;
    v112->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v80, v81, v82, v83, v84, v85);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantFilterIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantFilterIdList,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  sort = *p_sort;
  if ( !*p_sort )
    goto LABEL_96;
  if ( !sort->fields.isBonusKind )
  {
LABEL_41:
    if ( !v75 )
      goto LABEL_43;
    goto LABEL_42;
  }
  bonusEventIdList = this->fields.bonusEventIdList;
  v120 = this->fields.servantFilterIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind(sort, bonusEventIdList, v120, 0, 0LL, 0LL);
    goto LABEL_41;
  }
  ListViewSort__AlignBonusKind2(sort, bonusEventIdList, v120, 0LL, 0LL, 0LL, 0LL);
  if ( v75 )
LABEL_42:
    this->fields.eventId = v75->fields.eventId;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_96;
  sort = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)sort,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_96;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  maxCost = v88->fields.maxCost;
  v125 = OrganizationList;
  HIDWORD(v154) = maxCost;
  if ( v75 )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v75, 0LL);
    maxCost = HIDWORD(v154);
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
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
    HIDWORD(v154) = v127;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  }
  maxCostLabel = this->fields.maxCostLabel;
  v130 = System_Int32__ToString((int32_t)&v154 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44577788(v128, v130, 0LL);
  if ( !maxCostLabel )
    goto LABEL_96;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v132 = LocalizationManager__Get((System_String_o *)StringLiteral_10432/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44577788(v128, v132, 0LL);
  if ( !splitCostLabel )
    goto LABEL_96;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = v88->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v154) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v135 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = v88->fields.cost;
    v128 = v135;
  }
  LODWORD(v154) = cost;
  v136 = System_Int32__ToString((int32_t)&v154, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_44577788(v128, v136, 0LL);
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
  if ( !v125 )
    goto LABEL_96;
  v137 = *(_QWORD *)&v125->max_length;
  if ( (int)v137 >= 1 )
  {
    v138 = 0LL;
    while ( v138 < (unsigned int)v137 )
    {
      v139 = v125->m_Items[v138];
      v140 = (PartyServantListViewItem_o *)sub_B5D694(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_32065412(v140, v138, v139, v88, num, tutorialMode, setupInfoa, v75, v145);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_96;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v140,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v137) = v125->max_length;
      if ( (__int64)++v138 >= (int)v137 )
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_96:
    sub_B5D69C(sort, v77);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v142);
  PartyServantListViewManager__SetFilterButtonImage(this, v143);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  PartyServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC3C5 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC3C5 = 1;
  }
  v4 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v4 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantFilterIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42EC3D8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42EC3D8 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v4);
    PartyServantListViewManager__SetFilterButtonImage(this, v13);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v16, v17);
  CommonUI__CloseServantFilterSelectMenu(Instance, v15, 0LL);
}


void __fastcall PartyServantListViewManager__EndSelectSortKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EC3DB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyServantListViewManager_EndCloseSelectSortKind__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42EC3DB = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v4);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantSortSelectMenu(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11
  __int64 v18; // x11
  PartyServantListViewItem_o *v19; // x0

  v5 = this;
  if ( (byte_42EC3DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (PartyServantListViewManager_o *)sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC3DE = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (PartyServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      v18 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
      {
        if ( (PartyServantListViewItem_c *)v16->klass->_2.typeHierarchy[v18 - 1] == PartyServantListViewItem_TypeInfo )
          v19 = (PartyServantListViewItem_o *)itemList->fields._items->m_Items[v15];
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      this = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(v19, *(const MethodInfo **)&svtId);
      ++v15;
      if ( (_DWORD)this == svtId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetItem(
        PartyServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EC3CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC3CD = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyServantListViewItem_TypeInfo )
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
    sub_B5D69C(this, method);
  return partyServantSelectMenu->fields.modeKind;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetPartyServantListViewItem(
        PartyServantListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  __int64 v25; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int v28; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_42EC3E2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      userServantId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v18, v19, v20);
    byte_42EC3E2 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, userServantId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v32.fields.current = (Il2CppObject *)v31.fields.fakeValue;
  *(_OWORD *)&v32.fields.list = *(_OWORD *)&v31.fields.currentCryptoKey;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v22 )
      break;
    current = v32.fields.current;
    if ( v32.fields.current )
    {
      v25 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v32.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v25
        && (PartyServantListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v25 - 1] == PartyServantListViewItem_TypeInfo )
      {
        klass = v32.fields.current[7].klass;
        if ( !klass )
          sub_B5D69C(v22, v23);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v31.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v31;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v30, 0LL) == userServantId )
        {
          v28 = 16;
          goto LABEL_16;
        }
      }
    }
  }
  current = 0LL;
  v28 = 14;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v28 == 16 )
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
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC3CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC3CF = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (PartyServantListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && BYTE1(v43[2].fields.sortValue2B) )
      {
        if ( BYTE1(v43[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC3CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC3CE = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (PartyServantListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && LOBYTE(v43[2].fields.sortValue2B) )
      {
        if ( LOBYTE(v43[1].fields.basePosition.fields.y) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  PartyServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC3C6 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC3C6 = 1;
  }
  v4 = PartyServantListViewManager_TypeInfo;
  if ( (BYTE3(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v4 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
  if ( (byte_42EC3D6 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_int____get_Item__,
                                              campaiginEventId,
                                              svtId,
                                              method);
    byte_42EC3D6 = 1;
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
      v16 = sub_B5D6C8(this);
      sub_B5D668(v16, 0LL);
    }
    if ( v11[v10] == campaiginEventId )
      break;
    if ( (int)++v10 >= max_length )
      goto LABEL_20;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v27; // x21
  unsigned int v28; // w26
  int64_t v29; // x20
  __int64 v30; // x8
  UserServantEntity_o **v31; // x20
  __int64 v32; // t1
  __int128 v33; // q0
  int64_t v34; // x22
  unsigned __int64 v35; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x23
  PartyServantListViewItem_o *v37; // x23
  __int64 v38; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v40; // q0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  __int64 v43; // x0
  unsigned __int64 v44; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v45; // x20
  ListViewItem_o *v46; // x20
  __int64 v47; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v50; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC3CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EC3CC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v27 = Instance;
  v50 = *(_QWORD *)(Instance + 24);
  if ( (int)v50 >= 1 )
  {
    if ( !(_DWORD)v50 )
    {
LABEL_34:
      v43 = sub_B5D6C8(Instance);
      sub_B5D668(v43, 0LL);
    }
    v28 = 0;
    while ( 1 )
    {
      v29 = v27 + 8LL * (int)v28;
      v32 = *(_QWORD *)(v29 + 32);
      v31 = (UserServantEntity_o **)(v29 + 32);
      v30 = v32;
      if ( !v32 )
        break;
      v33 = *(_OWORD *)(v30 + 32);
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
      *(_OWORD *)&v53.fields.fakeValue = v33;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v52 = v53;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v52, 0LL);
      if ( (int)size >= 1 )
      {
        v34 = Instance;
        v35 = 0LL;
        while ( 1 )
        {
          v36 = this->fields.itemList;
          if ( !v36 )
            goto LABEL_52;
          if ( v35 >= (unsigned int)v36->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v37 = (PartyServantListViewItem_o *)v36->fields._items->m_Items[v35];
          if ( !v37 )
            goto LABEL_52;
          v38 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
            || (PartyServantListViewItem_c *)v37->klass->_2.typeHierarchy[v38 - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v37->fields.userServantEntity;
          if ( userServantEntity )
          {
            v40 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v53.fields.fakeValue = v40;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v51 = v53;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v51, 0LL);
            if ( Instance == v34 )
              break;
          }
          if ( (__int64)++v35 >= size )
            goto LABEL_32;
        }
        if ( v28 >= *(_DWORD *)(v27 + 24) )
          goto LABEL_34;
        PartyServantListViewItem__ModifyItem(v37, *v31, v41);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v37, v24);
          PartyServantListViewItem__ModifyChoiceItem(v37, v42);
        }
      }
LABEL_32:
      if ( (int)++v28 >= (int)v50 )
        goto LABEL_35;
      if ( v28 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B5D69C(Instance, v24);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v44 = 0LL;
    while ( 1 )
    {
      v45 = this->fields.itemList;
      if ( !v45 )
        goto LABEL_52;
      if ( v44 >= (unsigned int)v45->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v46 = v45->fields._items->m_Items[v44];
      if ( v46 )
      {
        v47 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v46->klass->_2.bitflags2 + 1) >= (unsigned int)v47
          && (PartyServantListViewItem_c *)v46->klass->_2.typeHierarchy[v47 - 1] == PartyServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v46->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v46->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v46, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v44 >= size )
        return;
    }
  }
}


void __fastcall PartyServantListViewManager__OnClickBonusFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v17; // x20
  unsigned __int64 v18; // x21
  int v19; // w24
  unsigned __int64 max_length; // x9
  const MethodInfo *v21; // x4
  struct ListViewSort_o *sort; // x22
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x25
  ListViewSort_o *v24; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v27; // x4
  int32_t v28; // w3
  __int64 v29; // x0

  if ( (byte_42EC3D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC3D5 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
        eventCampaignIdList = this->fields.eventCampaignIdList;
        if ( eventCampaignIdList )
        {
          v17 = (EventQuestMaster_o *)Instance;
          v18 = 0LL;
          v19 = -1;
          while ( 1 )
          {
            max_length = eventCampaignIdList->max_length;
            if ( (__int64)v18 >= (int)max_length )
              break;
            if ( v18 >= max_length )
              goto LABEL_34;
            if ( v17 )
            {
              Instance = (DataManager_o *)EventQuestMaster__IsExistQuest(
                                            v17,
                                            eventCampaignIdList->m_Items[v18 + 1],
                                            this->fields.questId,
                                            this->fields.questPhase,
                                            0LL);
              eventCampaignIdList = this->fields.eventCampaignIdList;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                v19 = v18;
              ++v18;
              if ( eventCampaignIdList )
                continue;
            }
            goto LABEL_17;
          }
        }
        else
        {
          v19 = -1;
        }
        sort = this->fields.sort;
        if ( (v19 & 0x80000000) != 0 )
        {
          if ( sort )
          {
            v24 = this->fields.sort;
            bonusEventIdList = this->fields.bonusEventIdList;
            servantFilterIdList = this->fields.servantFilterIdList;
            v28 = 0;
            v27 = 0LL;
            goto LABEL_32;
          }
        }
        else if ( eventCampaignIdList )
        {
          if ( v19 >= eventCampaignIdList->max_length )
          {
LABEL_34:
            v29 = sub_B5D6C8(Instance);
            sub_B5D668(v29, 0LL);
          }
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( eventCampaignServantIdList )
          {
            if ( eventCampaignServantIdList->fields._size <= (unsigned int)v19 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( sort )
            {
              v24 = this->fields.sort;
              bonusEventIdList = this->fields.bonusEventIdList;
              servantFilterIdList = this->fields.servantFilterIdList;
              v27 = eventCampaignServantIdList->fields._items->m_Items[v19];
              v28 = eventCampaignIdList->m_Items[v19 + 1];
LABEL_32:
              ListViewSort__IncBonusKind(v24, bonusEventIdList, servantFilterIdList, v28, v27, 0LL);
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
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v21);
        return;
      }
    }
LABEL_17:
    sub_B5D69C(Instance, v14);
  }
}


void __fastcall PartyServantListViewManager__OnClickFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC3D7 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyServantListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC3D7 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu(v16, 1, sort, v17, this->fields.eventId, 0LL);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    PartyServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortAscendingOrder(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC3DC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC3DC = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v7);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t v14; // w20
  int v15; // w8
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v18; // x22
  ServantSortSelectMenu_CallbackFunc_o *v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42EC3DA & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyServantListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC3DA = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v14 = 7;
    if ( this->fields.isFatigue )
      v15 = 7;
    else
      v15 = 3;
    if ( !this->fields.isFatigue )
    {
      if ( this->fields.isQuestStart )
      {
        if ( this->fields.isBuddyPoint )
          v14 = 8;
        else
          v14 = v15;
      }
      else
      {
        v14 = 3;
      }
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v18 = (CommonUI_o *)Instance;
    v19 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v18 )
      sub_B5D69C(v20, v21);
    CommonUI__OpenServantSortSelectMenu(v18, v14, sort, 0, v19, 0LL);
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
    sub_B5D69C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EC3D4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC3D4 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC3D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_PartyServantListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EC3D2 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_32093480(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC3D3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_PartyServantListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EC3D3 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyServantListViewObject__Init(
        (PartyServantListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__SetFilterButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v10; // x8

  if ( (byte_42EC3D9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EC3D9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32092560(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_32092560(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  const MethodInfo *v21; // x1
  int64_t scrollView; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  int32_t v25; // w1
  int32_t v26; // w8
  int64_t v27; // x20
  int v28; // w8
  int64_t v29; // x21
  signed int v30; // w23
  int v31; // w25
  __int64 v32; // x8
  int64_t v33; // x22
  __int128 v34; // q0
  __int128 v35; // q0
  __int64 v36; // x23
  PartyServantListViewObject_o *v37; // x21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  float v40; // s0
  int v41; // s1
  int32_t v44; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-60h]

  if ( (byte_42EC3D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_PartyServantListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v18, v19, v20);
    byte_42EC3D1 = 1;
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
      v25 = 2;
      goto LABEL_43;
    case 2:
      v25 = 3;
      goto LABEL_43;
    case 3:
      v25 = 4;
LABEL_43:
      PartyServantListViewManager__RequestListObject_32093480(this, v25, v23);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v24);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v21);
      if ( !scrollView )
        goto LABEL_46;
      v26 = *(_DWORD *)(scrollView + 24);
      v27 = scrollView;
      if ( v26 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = v26;
      v28 = *(_DWORD *)(scrollView + 24);
      if ( v28 < 1 )
        return;
      v29 = 0LL;
      v30 = 0;
      v31 = -1;
      break;
    default:
      return;
  }
  do
  {
    if ( v28 <= (unsigned int)v30 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    scrollView = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 8LL * v30 + 32);
    if ( !scrollView )
      goto LABEL_46;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v21);
    if ( !scrollView )
      goto LABEL_46;
    v32 = *(_QWORD *)(scrollView + 112);
    v33 = scrollView;
    if ( v32 && (*(_DWORD *)(scrollView + 204) & 0x80000000) != 0 )
    {
      if ( (v31 & 0x80000000) != 0 )
        goto LABEL_26;
      v34 = *(_OWORD *)(v32 + 32);
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
      *(_OWORD *)&v47.fields.fakeValue = v34;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v46 = v47;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v46, 0LL);
      if ( v29 < scrollView )
      {
        v32 = *(_QWORD *)(v33 + 112);
        if ( !v32 )
          goto LABEL_46;
LABEL_26:
        v35 = *(_OWORD *)(v32 + 32);
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
        *(_OWORD *)&v47.fields.fakeValue = v35;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v45 = v47;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v45, 0LL);
        v31 = v30;
      }
    }
    v28 = *(_DWORD *)(v27 + 24);
    ++v30;
  }
  while ( v30 < v28 );
  if ( v28 >= 1 )
  {
    v36 = 0LL;
    while ( 1 )
    {
      if ( v28 <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v37 = *(PartyServantListViewObject_o **)(*(_QWORD *)(v27 + 16) + 8 * v36 + 32);
      v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v37 )
        break;
      *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_zero(0LL);
      if ( v31 == (_DWORD)v36 )
        v44 = 5;
      else
        v44 = 2;
      PartyServantListViewObject__Init(v37, v44, v38, v40, *(UnityEngine_Vector3_o *)&v41, v39);
      v28 = *(_DWORD *)(v27 + 24);
      if ( (int)++v36 >= v28 )
        return;
    }
LABEL_46:
    sub_B5D69C(scrollView, v21);
  }
}


void __fastcall PartyServantListViewManager__SetMode_32093424(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_32092560(this, mode, v10);
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
  if ( (byte_42EC3D0 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_B5D5C4(
                                              &PartyServantListViewObject_TypeInfo,
                                              (_DWORD)obj,
                                              (_DWORD)item,
                                              method);
    byte_42EC3D0 = 1;
  }
  if ( !obj
    || (v6 = *(&PartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v45; // x1
  __int64 sort; // x0
  UILabel_o *v47; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v49; // x8
  int32_t sortKind; // w9
  System_String_o **v51; // x8
  struct ListViewSort_o *v52; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v54; // x9
  System_String_o **v55; // x10
  System_String_o **v56; // x8
  struct ListViewSort_o *v57; // x8
  System_String_o **v58; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct System_Int32_array *eventCampaignIdList; // x8
  EventQuestMaster_o *v61; // x20
  unsigned __int64 v62; // x21
  int v63; // w24
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v65; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x20
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x21
  struct System_Int32_array *v68; // x8
  struct System_Collections_Generic_List_int____o *v69; // x26
  UILabel_o *v70; // x20
  struct ListViewSort_o *v71; // x21
  struct System_Int32_array *v72; // x19
  struct System_Int32_array *v73; // x22
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_Int32_array *v76; // x4
  int32_t v77; // w3
  __int64 v78; // x0

  if ( (byte_42EC3DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v41, v42, v43);
    byte_42EC3DD = 1;
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
    v47 = this->fields.sortKindLabel;
    sort = (__int64)ListViewSort__GetSortKindButtonText((ListViewSort_o *)sort, 0LL);
    if ( !v47 )
      goto LABEL_52;
    UILabel__set_text(v47, (System_String_o *)sort, 0LL);
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
    v49 = this->fields.sort;
    if ( !v49 )
      goto LABEL_52;
    sortKind = v49->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v51 = (System_String_o **)(v49->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v51, 0LL);
      v52 = this->fields.sort;
      if ( !v52 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v52->fields.isAscendingOrder;
      v54 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v55 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (__int64)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_52;
      v56 = (System_String_o **)(v49->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v56, 0LL);
      v57 = this->fields.sort;
      if ( !v57 )
        goto LABEL_52;
      sort = (__int64)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_52;
      isAscendingOrder = v57->fields.isAscendingOrder;
      v54 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v55 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v58 = v54;
    else
      v58 = v55;
    UISprite__set_spriteName((UISprite_o *)sort, *v58, 0LL);
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
        v70 = this->fields.bonusFilterKindLabel;
        sort = (__int64)ListViewSort__GetBonusKind2Text_34067136(
                          (ListViewSort_o *)sort,
                          this->fields.bonusEventIdList,
                          this->fields.servantFilterIdList,
                          this->fields.eventCampaignIdList,
                          this->fields.eventCampaignServantIdList,
                          0LL,
                          0LL);
        if ( !v70 )
          goto LABEL_52;
LABEL_75:
        UILabel__set_text(v70, (System_String_o *)sort, 0LL);
        return;
      }
      sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !sort )
        goto LABEL_52;
      sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)sort,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
      eventCampaignIdList = this->fields.eventCampaignIdList;
      if ( !eventCampaignIdList )
        goto LABEL_70;
      v61 = (EventQuestMaster_o *)sort;
      v62 = 0LL;
      v63 = -1;
      while ( 1 )
      {
        max_length = eventCampaignIdList->max_length;
        if ( (__int64)v62 >= (int)max_length )
          break;
        if ( v62 >= max_length )
          goto LABEL_76;
        if ( v61 )
        {
          sort = EventQuestMaster__IsExistQuest(
                   v61,
                   eventCampaignIdList->m_Items[v62 + 1],
                   this->fields.questId,
                   this->fields.questPhase,
                   0LL);
          eventCampaignIdList = this->fields.eventCampaignIdList;
          if ( (sort & 1) != 0 )
            v63 = v62;
          ++v62;
          if ( eventCampaignIdList )
            continue;
        }
        goto LABEL_52;
      }
      if ( (v63 & 0x80000000) != 0 )
      {
LABEL_70:
        sort = (__int64)this->fields.sort;
        if ( !sort )
          goto LABEL_52;
        v70 = this->fields.bonusFilterKindLabel;
        bonusEventIdList = this->fields.bonusEventIdList;
        servantFilterIdList = this->fields.servantFilterIdList;
        v77 = 0;
        v76 = 0LL;
LABEL_72:
        sort = (__int64)ListViewSort__GetBonusKindText_34064848(
                          (ListViewSort_o *)sort,
                          bonusEventIdList,
                          servantFilterIdList,
                          v77,
                          v76,
                          0LL);
        if ( !v70 )
          goto LABEL_52;
        goto LABEL_75;
      }
      sort = sub_B5D5DC(int___TypeInfo, 1LL);
      v65 = this->fields.eventCampaignIdList;
      if ( !v65 )
        goto LABEL_52;
      if ( v63 < v65->max_length )
      {
        if ( !sort )
          goto LABEL_52;
        if ( *(_DWORD *)(sort + 24) )
        {
          *(_DWORD *)(sort + 32) = v65->m_Items[v63 + 1];
          v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v66,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
          eventCampaignServantIdList = this->fields.eventCampaignServantIdList;
          if ( !eventCampaignServantIdList )
            goto LABEL_52;
          if ( eventCampaignServantIdList->fields._size <= (unsigned int)v63 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v66 )
            goto LABEL_52;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v66,
            (EventMissionProgressRequest_Argument_ProgressData_o *)eventCampaignServantIdList->fields._items->m_Items[v63],
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
          v68 = this->fields.eventCampaignIdList;
          if ( !v68 )
            goto LABEL_52;
          if ( v63 < v68->max_length )
          {
            v69 = this->fields.eventCampaignServantIdList;
            if ( v69 )
            {
              v70 = this->fields.bonusFilterKindLabel;
              v71 = this->fields.sort;
              v73 = this->fields.bonusEventIdList;
              v72 = this->fields.servantFilterIdList;
              if ( v69->fields._size <= (unsigned int)v63 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( v71 )
              {
                sort = (__int64)v71;
                bonusEventIdList = v73;
                servantFilterIdList = v72;
                v76 = v69->fields._items->m_Items[v63];
                v77 = v68->m_Items[v63 + 1];
                goto LABEL_72;
              }
            }
LABEL_52:
            sub_B5D69C(sort, v45);
          }
        }
      }
LABEL_76:
      v78 = sub_B5D6C8(sort);
      sub_B5D668(v78, 0LL);
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
  if ( (byte_42EC3C9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, selectIndex, isAllDisp, *(_QWORD *)&addEmptyTarminal);
    byte_42EC3C9 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EC3DF & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC3DF = 1;
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
      PartyServantListViewManager__UpdateDisp(this, v10);
    }
  }
}


void __fastcall PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC3E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v14, v15, v16);
    byte_42EC3E0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B5D69C(0LL, v18);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v20.fields.current )
        sub_B5D69C(0LL, v19);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v20.fields.current, v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__UpdateItemState(
        PartyServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x20
  bool v25; // w23
  bool v26; // w24
  bool v27; // w25
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v29; // x1
  __int64 v30; // x9
  Il2CppClass *v31; // x8
  Il2CppType byval_arg; // q0
  int64_t v33; // x0
  __int64 v34; // x1
  int v35; // w8
  UserServantEntity_o *v36; // x0
  __int64 v37; // x1
  bool v38; // w8
  UserServantEntity_o *v39; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42EC3E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v18, v19, v20);
    byte_42EC3E1 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v23 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B5D69C(SelfUserGame, v22);
  }
  klass = v23[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    SelfUserGame,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
  *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
  v25 = modeKind == 1;
  v26 = modeKind == 2;
  v27 = modeKind == 3;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v40 )
      break;
    current = v44.fields.current;
    if ( !v44.fields.current )
      goto LABEL_24;
    v29 = PartyServantListViewItem_TypeInfo;
    v30 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v44.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (PartyServantListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v30 - 1] != PartyServantListViewItem_TypeInfo )
    {
      sub_B5D990(v44.fields.current);
LABEL_24:
      sub_B5D69C(v40, v41);
    }
    v31 = v44.fields.current[7].klass;
    LOBYTE(v44.fields.current[13].monitor) = v25;
    BYTE1(current[13].monitor) = v26;
    BYTE2(current[13].monitor) = v27;
    if ( !v31 )
      sub_B5D69C(v40, v29);
    byval_arg = v31->_1.byval_arg;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v31->_1.name;
    *(Il2CppType *)&v43.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v43;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
    v35 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v33 == (_QWORD)klass;
    if ( v35 )
    {
      v36 = (UserServantEntity_o *)current[7].klass;
      if ( !v36 )
        sub_B5D69C(0LL, v34);
      if ( UserServantEntity__IsLeave(v36, 0LL) )
      {
        v38 = 0;
      }
      else
      {
        v39 = (UserServantEntity_o *)current[7].klass;
        if ( !v39 )
          sub_B5D69C(0LL, v37);
        v38 = !UserServantEntity__IsEventJoin(v39, 0LL);
      }
    }
    else
    {
      v38 = 1;
    }
    BYTE4(current[13].monitor) = v38;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall PartyServantListViewManager__add_callbackFunc(
        PartyServantListViewManager_o *this,
        PartyServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  PartyServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC3C1 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC3C1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v8->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyServantListViewManager__add_callbackFunc2(
        PartyServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC3C3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC3C3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  PartyServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC3C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC3C8 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (PartyServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v29;
}


bool __fastcall PartyServantListViewManager__get_IsFocus(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC3C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC3C7 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v29;
}


void __fastcall PartyServantListViewManager__remove_callbackFunc(
        PartyServantListViewManager_o *this,
        PartyServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC3C2 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC3C2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v8->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall PartyServantListViewManager__remove_callbackFunc2(
        PartyServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EC3C4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC3C4 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyServantListViewManager__get_IsFocus(v11, v12);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyServantListViewManager_CallbackFunc__BeginInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5A9F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&PartyServantListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5A9F = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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


void __fastcall PartyServantListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PartyServantListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A9E & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5A9E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PartyServantListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PartyServantListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyServantListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return svtIds->max_length != 0;
}