void PartyServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct PartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v16; // x20
  struct PartyServantListViewManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v25; // x20
  struct PartyServantListViewManager_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4CC3103 & 1) == 0 )
  {
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&PartyServantListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15595/*"WarBoardPartyServant"*/);
    sub_1C713B0(&StringLiteral_10574/*"PartyServant"*/);
    byte_4CC3103 = 1;
  }
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_10574/*"PartyServant"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)PartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_10574/*"PartyServant"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_15595/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15595/*"WarBoardPartyServant"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->WAR_SORT_SAVE_KEY, v7, v9, v10, v11, v12, v13, v14);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v16 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_44130992(v16, SORT_SAVE_KEY, 3, 0, 0);
  v17 = PartyServantListViewManager_TypeInfo->static_fields;
  v17->servantSortInfo = v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->servantSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v25 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_44130992(v25, WAR_SORT_SAVE_KEY, 3, 0, 0);
  v26 = PartyServantListViewManager_TypeInfo->static_fields;
  v26->warServantSortInfo = v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v26->warServantSortInfo, (int32_t)v25, v27, v28, v29, v30, v31, v32);
}


void PartyServantListViewManager___ctor(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  this->fields.eventId = -1;
  this->fields.updateTime = -1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PartyServantListViewManager__Awake(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void PartyServantListViewManager__ChangeIconScale(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x4

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 83) = v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  PartyServantListViewManager__ModifyList(this, 1, v14);
  PartyServantListViewManager__SetMode_34922968(this, 2, v15);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v16);
}


void PartyServantListViewManager__CreateList(
        PartyServantListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x25
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  PartyServantListViewManager_c *v22; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x24
  __int64 v25; // x1
  __int64 sort; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct ListViewSort_o *v41; // x20
  Il2CppObject *Master_object; // x22
  _BOOL4 v43; // w8
  struct ListViewSort_o *v44; // x8
  struct ListViewSort_o *v45; // x8
  PartyOrganizationListViewItem_o *Member; // x26
  System_Collections_Generic_List_object__o *v47; // x27
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct UICommonButton_o *bonusFilterKindButton; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_Collections_Generic_List_int__o **v64; // x29
  System_Func_object__bool__o *v65; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Object_array *v67; // x22
  char v68; // w28
  System_Collections_Generic_List_object__o *v69; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x22
  __int64 v71; // x28
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t current; // w1
  __int64 v81; // x25
  __int64 v82; // x0
  __int64 v83; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x8
  __int64 v93; // x9
  System_Func_object__bool__o *v94; // x27
  System_Collections_Generic_IEnumerable_T__o *v95; // x1
  __int64 v96; // x8
  Il2CppObject *v97; // x27
  System_Func_object__bool__o *v98; // x25
  System_Collections_Generic_IEnumerable_T__o *v99; // x1
  int32_t maxCost; // w25
  int32_t TotalCost; // w0
  const MethodInfo *v102; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v104; // x27
  bool isEnableRemove; // w24
  Il2CppObject *v106; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x28
  _BOOL4 isRestrictionGrandServant; // w8
  bool isGrandSameServant; // w28
  PartyServantListViewItem_o *v111; // x25
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v123; // x4
  const MethodInfo *v124; // x1
  bool isMyServantOrNpcRestriction; // [xsp+34h] [xbp-DCh]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+40h] [xbp-D0h]
  int32_t v127; // [xsp+4Ch] [xbp-C4h]
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC30E8 & 1) == 0 )
  {
    sub_1C713B0(&CommonRestrictionMaster_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C713B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    sub_1C713B0(&PartyServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__);
    sub_1C713B0(&PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager___c__DisplayClass51_2__CreateList_b__2__);
    sub_1C713B0(&PartyServantListViewManager___c__DisplayClass51_2_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager___c__DisplayClass51_3__CreateList_b__3__);
    sub_1C713B0(&PartyServantListViewManager___c__DisplayClass51_3_TypeInfo);
    sub_1C713B0(&StringLiteral_11813/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4CC30E8 = 1;
  }
  memset(&v135, 0, sizeof(v135));
  v9 = sub_1C715FC(PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  this->fields.lastPartyItem = partyItem;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.lastPartyItem,
    (int32_t)partyItem,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v22 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v22 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v22->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v16, v17, v18, v19, v20, v21);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_103;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v44 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v44 )
      goto LABEL_103;
    v44->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v27, v28, v29, v30, v31, v32);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v45 = *p_sort;
    if ( !*p_sort )
      goto LABEL_103;
    if ( v45->fields.sortKind == 28 )
      v45->fields.sortKind = 3;
    goto LABEL_20;
  }
  isQuestStart = setupInfo->fields.isQuestStart;
  sort = (__int64)this->fields.sort;
  this->fields.isQuestStart = isQuestStart;
  if ( !sort )
    goto LABEL_103;
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         (ListViewSort_o *)sort,
                         0,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0,
                         setupInfo->fields.servantFilterIds,
                         isQuestStart,
                         0);
  this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.sort;
  sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
  if ( !v41 )
    goto LABEL_103;
  v41->fields.isBonusKind = (sort & 1) == 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = EventUpValSetupInfo__get_EventId(setupInfo, 0);
  if ( !Master_object )
    goto LABEL_103;
  sort = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, sort, 0);
  v43 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = sort & 1;
  if ( !v43 || (sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  if ( !partyItem )
    goto LABEL_103;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  v47 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( questRestrictionInfo )
  {
    QuestRestrictionInfo__SetDeckInfo_43706840(questRestrictionInfo, partyItem, num, 0);
    this->fields.isFatigue = questRestrictionInfo->fields.isFatigure;
    this->fields.eventId = questRestrictionInfo->fields.eventId;
    if ( !Member )
      goto LABEL_103;
    if ( Member->fields.isRestrictionGrandServant )
    {
      sort = (__int64)PartyOrganizationListViewItem__GetCanOrganizationGrandSvtIdList(Member, 0);
      bonusFilterKindButton = this->fields.bonusFilterKindButton;
      if ( !bonusFilterKindButton )
        goto LABEL_103;
      v47 = (System_Collections_Generic_List_object__o *)sort;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))bonusFilterKindButton->klass->vtable._14_SetState.methodPtr)(
        this->fields.bonusFilterKindButton,
        3,
        1,
        bonusFilterKindButton->klass->vtable._14_SetState.method);
      sort = (__int64)this->fields.bonusFilterKindLabel;
      if ( !sort )
        goto LABEL_103;
      v137.fields.r = 0.5;
      v137.fields.g = 0.5;
      v137.fields.b = 0.5;
      v137.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v137, 0);
      sort = (__int64)this->fields.filterButton;
      if ( !sort )
        goto LABEL_103;
      sort = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)sort + 536LL))(
               sort,
               3,
               1,
               *(_QWORD *)(*(_QWORD *)sort + 544LL));
    }
    else
    {
      sort = (__int64)this->fields.bonusFilterKindLabel;
      if ( !sort )
        goto LABEL_103;
      v138.fields.r = 1.0;
      v138.fields.g = 1.0;
      v138.fields.b = 1.0;
      v138.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v138, 0);
    }
  }
  if ( !*p_sort )
    goto LABEL_103;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_37;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_37;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_37:
    this->fields.seed = normalSizeSeed;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !Member )
    goto LABEL_103;
  if ( PartyOrganizationListViewItem__get_IsEmpty(Member, 0) )
  {
    v127 = 0;
  }
  else
  {
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(SvtId, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !sort )
    goto LABEL_103;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                  (UserServantMaster_o *)sort,
                                                                  0);
  sort = (__int64)PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0, 0);
  if ( !v9 )
    goto LABEL_103;
  *(_QWORD *)(v9 + 16) = sort;
  v64 = (System_Collections_Generic_List_int__o **)(v9 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), sort, v58, v59, v60, v61, v62, v63);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v47, 0) )
  {
    v65 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v65,
      (Il2CppObject *)v9,
      Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__,
      0);
    v66 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v65,
            (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
    v67 = System_Linq_Enumerable__ToArray_object_(
            v66,
            (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    v68 = 1;
    goto LABEL_74;
  }
  v69 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !v47 )
    goto LABEL_103;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)sort;
  isMyServantOrNpcRestriction = Member->fields.isMyServantOrNpcRestriction;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    v47,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v135 = v134;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v135,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__) )
  {
    v71 = sub_1C715FC(PartyServantListViewManager___c__DisplayClass51_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v71, 0);
    if ( !v71 )
      sub_1C71608(v72, v73);
    current = (int32_t)v135.fields._current;
    *(_QWORD *)(v71 + 16) = v135.fields._current;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v71 + 16), current, v74, v75, v76, v77, v78, v79);
    v81 = sub_1C715FC(PartyServantListViewManager___c__DisplayClass51_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v81, 0);
    if ( !v81 )
      sub_1C71608(v82, v83);
    *(_QWORD *)(v81 + 24) = v71;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v81 + 24), v71, v84, v85, v86, v87, v88, v89);
    v92 = *(_QWORD *)(v81 + 24);
    if ( Member->fields.isFollower )
    {
      if ( !v92 )
        sub_1C71608(v90, v91);
      goto LABEL_67;
    }
    if ( !v92 )
      sub_1C71608(v90, v91);
    v93 = *(_QWORD *)(v92 + 16);
    if ( !v93 )
      sub_1C71608(v90, v91);
    if ( v127 == *(_DWORD *)(v93 + 40) )
    {
      if ( !v70 )
        sub_1C71608(v90, v91);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v70,
             (Il2CppObject **)(v81 + 16),
             *(_DWORD *)(v93 + 24),
             (const MethodInfo_3408ECC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
      {
        v94 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v94,
          (Il2CppObject *)v81,
          Method_PartyServantListViewManager___c__DisplayClass51_3__CreateList_b__3__,
          0);
        v95 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                               source,
                                                               (System_Func_TSource__bool__o *)v94,
                                                               (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        if ( !v69 )
          sub_1C71608(0, v95);
        System_Collections_Generic_List_object___AddRange(
          v69,
          v95,
          (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      }
    }
    else
    {
LABEL_67:
      v96 = *(_QWORD *)(v92 + 16);
      if ( !v96 )
        sub_1C71608(v90, v91);
      if ( !*v64 )
        sub_1C71608(0, v91);
      if ( !System_Collections_Generic_List_int___Contains(
              *v64,
              *(_DWORD *)(v96 + 40),
              (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v97 = *(Il2CppObject **)(v81 + 24);
        v98 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v98,
          v97,
          Method_PartyServantListViewManager___c__DisplayClass51_2__CreateList_b__2__,
          0);
        v99 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                               source,
                                                               (System_Func_TSource__bool__o *)v98,
                                                               (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        if ( !v69 )
          sub_1C71608(0, v99);
        isMyServantOrNpcRestriction = 1;
        System_Collections_Generic_List_object___AddRange(
          v69,
          v99,
          (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
  p_sort = &this->fields.sort;
  v68 = isMyServantOrNpcRestriction;
  sort = (__int64)v69;
  if ( !v69 )
    goto LABEL_103;
  v67 = System_Collections_Generic_List_object___ToArray(
          v69,
          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
LABEL_74:
  sort = (__int64)questRestrictionInfo;
  maxCost = partyItem->fields.maxCost;
  if ( questRestrictionInfo )
    sort = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
  if ( !this
    || (this->fields.restrictionTotalCost = sort,
        TotalCost = PartyListViewItem__GetTotalCost(partyItem, 0),
        PartyServantListViewManager__UpdateCost(this, TotalCost, maxCost, this->fields.restrictionTotalCost, v102),
        (sort = (__int64)this->fields.bonusFilterKindButton) == 0)
    || (sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0), !*p_sort)
    || !sort
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0),
        ListViewManager__CreateList((ListViewManager_o *)this, 0, 0),
        !v67) )
  {
LABEL_103:
    sub_1C71608(sort, v25);
  }
  max_length = v67->max_length;
  if ( (int)max_length >= 1 )
  {
    v104 = 0;
    isEnableRemove = v68 & 1;
    do
    {
      if ( v104 >= (unsigned int)max_length )
        sub_1C71610(sort);
      v106 = v67->m_Items[v104];
      if ( Member->fields.isFollower )
        goto LABEL_90;
      if ( !v106 )
        goto LABEL_103;
      klass = v106[5].klass;
      monitor = v106[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v136.fields.currentCryptoKey = klass;
      *(_QWORD *)&v136.fields.fakeValue = monitor;
      if ( v127 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v136, 0) )
LABEL_90:
        isRestrictionGrandServant = 0;
      else
        isRestrictionGrandServant = Member->fields.isRestrictionGrandServant;
      isGrandSameServant = isRestrictionGrandServant;
      v111 = (PartyServantListViewItem_o *)sub_1C715FC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v111,
        v104,
        (UserServantEntity_o *)v106,
        baseDeckItemList,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        isGrandSameServant,
        isEnableRemove,
        0);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_103;
      v118 = *(_QWORD *)(sort + 16);
      v119 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v118 )
        goto LABEL_103;
      v120 = *(int *)(sort + 24);
      if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v111,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        v121 = v118 + 8 * v120;
        *(_DWORD *)(sort + 24) = v120 + 1;
        *(_QWORD *)(v121 + 32) = v111;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v121 + 32), (int32_t)v111, v112, v113, v114, v115, v116, v117);
      }
      LODWORD(max_length) = v67->max_length;
    }
    while ( (__int64)++v104 < (int)max_length );
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_103;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v123);
  PartyServantListViewManager__SetFilterButtonImage(this, v124);
}


void PartyServantListViewManager__CreateList_34917656(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  PartyServantListViewManager_c *v18; // x0
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v20; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v22; // x26
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x29
  il2cpp_array_size_t max_length; // x8
  struct ListViewSort_o **p_sort; // x23
  int v32; // w9
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x22
  _BOOL8 v36; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  ListViewSort_o *v41; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct ListViewSort_o *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct ListViewSort_o *v59; // x8
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v62; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v64; // w28
  bool v65; // w22
  System_String_o *v66; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v68; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v70; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  il2cpp_array_size_t v75; // x8
  unsigned __int64 v76; // x25
  UserServantEntity_o *v77; // x28
  PartyServantListViewItem_o *v78; // x27
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v90; // x4
  const MethodInfo *v91; // x1
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  __int64 v97; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CC30E9 & 1) == 0 )
  {
    sub_1C713B0(&CommonRestrictionMaster_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    sub_1C713B0(&PartyServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_10222/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C713B0(&StringLiteral_10220/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C713B0(&StringLiteral_10221/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C713B0(&StringLiteral_11813/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C713B0(&StringLiteral_10219/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_4CC30E9 = 1;
  }
  eventUpValInfo = 0;
  v97 = 0;
  memset(&v95, 0, sizeof(v95));
  this->fields.lastPartyItem = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.lastPartyItem,
    0,
    num,
    tutorialMode,
    (System_String_o *)setupInfo,
    (int32_t)questRestrictionInfo,
    (int64_t)method,
    v7);
  v18 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v18 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v18->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.sort,
    (int32_t)warServantSortInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_86;
  ListViewSort__Load(sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_86;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_86;
  max_length = memberItemList->max_length;
  p_sort = &this->fields.sort;
  if ( max_length )
  {
    LODWORD(v97) = 0;
    if ( (int)max_length >= 1 )
    {
      v32 = 0;
      while ( v32 < (unsigned int)max_length )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v32];
        if ( sort )
        {
          sort = (ListViewSort_o *)PartyOrganizationListViewItem__GetEventUpVal(
                                     (PartyOrganizationListViewItem_o *)sort,
                                     &eventUpValInfo,
                                     0);
          if ( ((unsigned __int8)sort & 1) != 0 )
          {
            if ( !eventUpValInfo )
              goto LABEL_86;
            sort = (ListViewSort_o *)eventUpValInfo->fields.dropList;
            if ( !sort )
              goto LABEL_86;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v94,
              (System_Collections_Generic_List_object__o *)sort,
              (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v95 = v94;
            while ( 1 )
            {
              v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v95,
                      (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v33 )
                break;
              current = v95.fields._current;
              if ( !v95.fields._current )
                sub_1C71608(v33, v34);
              if ( !v22 )
                sub_1C71608(v33, v34);
              v36 = System_Collections_Generic_List_int___Contains(
                      v22,
                      (int32_t)v95.fields._current[1].klass,
                      (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v36 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v22->fields._items;
                v39 = Method_System_Collections_Generic_List_int__Add__;
                ++v22->fields._version;
                if ( !items )
                  sub_1C71608(v36, klass_low);
                size = v22->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v22,
                    klass_low,
                    *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v22->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v95,
              (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        v32 = v97 + 1;
        LODWORD(v97) = v32;
        LODWORD(max_length) = memberItemList->max_length;
        if ( v32 >= (int)max_length )
          goto LABEL_31;
      }
LABEL_87:
      sub_1C71610(sort);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v22 )
      goto LABEL_86;
    v41 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v22,
                               (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v41 )
      goto LABEL_86;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v41,
                           0,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v50 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0);
    if ( !v50 )
      goto LABEL_86;
    v50->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
    if ( questRestrictionInfo )
      goto LABEL_36;
  }
  else
  {
    v59 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v59 )
      goto LABEL_86;
    v59->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v23, v24, v25, v26, v27, v28);
    if ( questRestrictionInfo )
LABEL_36:
      this->fields.eventId = questRestrictionInfo->fields.eventId;
  }
  if ( !*p_sort )
    goto LABEL_86;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_47;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_47;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_47:
    this->fields.seed = normalSizeSeed;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_86;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  maxCost = partyItem->fields.maxCost;
  v62 = OrganizationList;
  HIDWORD(v97) = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
    maxCost = HIDWORD(v97);
    v64 = TotalCostRestriction;
  }
  else
  {
    v64 = 0;
  }
  v65 = v64 != 0 && maxCost > v64;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v64 != 0 && maxCost > v64 )
    {
LABEL_55:
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10221/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
      HIDWORD(v97) = v64;
      goto LABEL_58;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v65 )
      goto LABEL_55;
  }
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10219/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
LABEL_58:
  maxCostLabel = this->fields.maxCostLabel;
  v68 = System_Int32__ToString((int32_t)&v97 + 4, 0);
  sort = (ListViewSort_o *)System_String__Concat_64031724(v66, v68, 0);
  if ( !maxCostLabel )
    goto LABEL_86;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_10222/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  sort = (ListViewSort_o *)System_String__Concat_64031724(v66, v70, 0);
  if ( !splitCostLabel )
    goto LABEL_86;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v97) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_10220/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v66 = v73;
  }
  LODWORD(v97) = cost;
  v74 = System_Int32__ToString((int32_t)&v97, 0);
  sort = (ListViewSort_o *)System_String__Concat_64031724(v66, v74, 0);
  if ( !selectCostLabel )
    goto LABEL_86;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !*p_sort )
    goto LABEL_86;
  if ( !sort )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v62 )
    goto LABEL_86;
  v75 = v62->max_length;
  if ( (int)v75 >= 1 )
  {
    v76 = 0;
    while ( v76 < (unsigned int)v75 )
    {
      v77 = v62->m_Items[v76];
      v78 = (PartyServantListViewItem_o *)sub_1C715FC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_34891404(
        v78,
        v76,
        v77,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        0);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_86;
      v85 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v86 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v85 )
        goto LABEL_86;
      v87 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v78,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = v85 + 8 * v87;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v87 + 1;
        *(_QWORD *)(v88 + 32) = v78;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v88 + 32), (int32_t)v78, v79, v80, v81, v82, v83, v84);
      }
      LODWORD(v75) = v62->max_length;
      if ( (__int64)++v76 >= (int)v75 )
        goto LABEL_80;
    }
    goto LABEL_87;
  }
LABEL_80:
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_86:
    sub_1C71608(sort, v20);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v90);
  PartyServantListViewManager__SetFilterButtonImage(this, v91);
}


void PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CC30E3 & 1) == 0 )
  {
    sub_1C713B0(&PartyServantListViewManager_TypeInfo);
    byte_4CC30E3 = 1;
  }
  v2 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v2 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0) )
  {
    sub_1C71608(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  this->fields.updateTime = -1;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
}


void PartyServantListViewManager__EndCloseSelectFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void PartyServantListViewManager__EndCloseSelectSortKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void PartyServantListViewManager__EndSelectFilterKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC30F7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC30F7 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C71608(v9, v10);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0);
}


void PartyServantListViewManager__EndSelectSortKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC30FA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager_EndCloseSelectSortKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC30FA = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C71608(v8, v9);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4CC30FD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC30FD = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( PartyServantListViewItem__get_SvtId((PartyServantListViewItem_o *)itemList, 0) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C71608(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


bool PartyServantListViewManager__GetFocusItemIndex(
        PartyServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v8; // x22
  int32_t v9; // w23
  __int64 naturalAligment; // x10

  v8 = this;
  if ( (byte_4CC3102 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC3102 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_1C71608(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v9,
                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_17;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_17;
      }
      if ( (LOBYTE(this->fields.objectStock) || v8->fields._IsFocus_k__BackingField)
        && (LOBYTE(this->fields.scaleType) || !v8->fields._IsFocus_k__BackingField) )
      {
        break;
      }
      if ( sum == ++v9 )
        return 1;
    }
    LOBYTE(this->fields.scaleType) = 0;
    v8->fields._IsFocus_k__BackingField = 0;
    *index = v9;
  }
  return 1;
}


PartyServantListViewItem_o *PartyServantListViewManager__GetItem(
        PartyServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CC30EC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC30EC = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


PartyServantListViewItem_o *PartyServantListViewManager__GetItemByUserServantID(
        PartyServantListViewManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  PartyServantListViewItem_o *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4CC30ED & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
    sub_1C713B0(&System_Func_PartyServantListViewItem__bool__TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__);
    sub_1C713B0(&PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_4CC30ED = 1;
  }
  v5 = (Il2CppObject *)sub_1C715FC(PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5[1].klass = (Il2CppClass *)id;
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                (System_Collections_IEnumerable_o *)result,
                                                                (const MethodInfo_31598C0 *)Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    v10 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_PartyServantListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v5,
      Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__,
      0);
    return (PartyServantListViewItem_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                           v9,
                                           (System_Func_TSource__bool__o *)v10,
                                           (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
  }
  return result;
}


int32_t PartyServantListViewManager__GetModeKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_1C71608(this, method);
  return partyServantSelectMenu->fields.modeKind;
}


PartyServantListViewItem_o *PartyServantListViewManager__GetPartyServantListViewItem(
        PartyServantListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _OWORD *monitor; // x8
  __int128 v11; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4CC3101 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC3101 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C71608(0, userServantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v15.fields._list = *(_OWORD *)&v14.fields.currentCryptoKey;
  v15.fields._current = (Il2CppObject *)v14.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v15.fields._current;
    if ( v15.fields._current )
    {
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( v15.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (PartyServantListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PartyServantListViewItem_TypeInfo )
      {
        monitor = v15.fields._current[7].monitor;
        if ( !monitor )
          sub_1C71608(v6, v7);
        v11 = monitor[2];
        *(_OWORD *)&v14.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v14.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v13 = v14;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v13, 0) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4CC30EF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC30EF = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 337) )
      {
        if ( *(_BYTE *)(itemList + 233) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C71608(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C71354((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


bool PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4CC30EE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC30EE = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 336) )
      {
        if ( *(_BYTE *)(itemList + 232) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C71608(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C71354((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CC30E4 & 1) == 0 )
  {
    sub_1C713B0(&PartyServantListViewManager_TypeInfo);
    byte_4CC30E4 = 1;
  }
  v2 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v2 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0) )
  {
    sub_1C71608(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


bool PartyServantListViewManager__IsQuestStart(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isQuestStart;
}


void PartyServantListViewManager__ModifyList(
        PartyServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  PartyListViewItem_o *lastPartyItem; // x0
  int64_t TotalCost; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct PartyListViewItem_o *v8; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v11; // x21
  unsigned int v12; // w29
  int64_t v13; // x28
  __int64 v14; // x8
  UserServantEntity_o **v15; // x28
  __int64 v16; // t1
  __int128 v17; // q0
  int64_t v18; // x22
  int32_t v19; // w24
  PartyServantListViewItem_o *v20; // x23
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  int32_t v24; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v26; // x21
  __int64 v27; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v30; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+50h] [xbp-80h]

  if ( (byte_4CC30EB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC30EB = 1;
  }
  lastPartyItem = this->fields.lastPartyItem;
  if ( lastPartyItem )
  {
    TotalCost = PartyListViewItem__GetTotalCost(lastPartyItem, 0);
    v8 = this->fields.lastPartyItem;
    if ( !v8 )
      goto LABEL_47;
    PartyServantListViewManager__UpdateCost(this, TotalCost, v8->fields.maxCost, this->fields.restrictionTotalCost, v7);
  }
  TotalCost = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TotalCost
    || (TotalCost = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)TotalCost,
                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (TotalCost = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)TotalCost, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
LABEL_47:
    sub_1C71608(TotalCost, v6);
  }
  size = itemList->fields._size;
  v30 = *(_QWORD *)(TotalCost + 24);
  v11 = TotalCost;
  if ( (int)v30 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = v11 + 8LL * (int)v12;
      v16 = *(_QWORD *)(v13 + 32);
      v15 = (UserServantEntity_o **)(v13 + 32);
      v14 = v16;
      if ( !v16 )
        goto LABEL_47;
      v17 = *(_OWORD *)(v14 + 32);
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
      *(_OWORD *)&v33.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v33;
      TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v32, 0);
      if ( size >= 1 )
      {
        v18 = TotalCost;
        v19 = 0;
        while ( 1 )
        {
          TotalCost = (int64_t)this->fields.itemList;
          if ( !TotalCost )
            goto LABEL_47;
          TotalCost = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)TotalCost,
                                 v19,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !TotalCost )
            goto LABEL_47;
          v20 = (PartyServantListViewItem_o *)TotalCost;
          naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)TotalCost + 304LL) < (unsigned int)naturalAligment
            || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)TotalCost + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_47;
          }
          v22 = *(_QWORD *)(TotalCost + 120);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 32);
            *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
            *(_OWORD *)&v33.fields.fakeValue = v23;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v31 = v33;
            TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v31, 0);
            if ( TotalCost == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_30;
        }
        if ( v12 >= *(_DWORD *)(v11 + 24) )
          goto LABEL_32;
        PartyServantListViewItem__ModifyItem(v20, *v15, 0);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v20, 0);
          PartyServantListViewItem__ModifyChoiceItem(v20, 0);
        }
      }
LABEL_30:
      if ( ++v12 == (_DWORD)v30 )
        break;
      if ( v12 >= *(_DWORD *)(v11 + 24) )
LABEL_32:
        sub_1C71610(TotalCost);
    }
  }
  if ( size >= 1 && isIconSizeChange )
  {
    v24 = 0;
    while ( 1 )
    {
      TotalCost = (int64_t)this->fields.itemList;
      if ( !TotalCost )
        goto LABEL_47;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)TotalCost,
               v24,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v26 = (ListViewItem_o *)Item;
        v27 = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v27
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v27 - 1] == PartyServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            TotalCost = (int64_t)v26->fields.viewObject;
            if ( !TotalCost )
              goto LABEL_47;
            ListViewObject__SetItemSeed((ListViewObject_o *)TotalCost, v26, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v24 )
        return;
    }
  }
}


void PartyServantListViewManager__OnClickBonusFilterKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x21
  struct ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos; // x20
  bool v9; // w2
  ListViewSort_o *v10; // x0
  ListViewSort_BonusFilterInfo_array *v11; // x1
  int64_t klass; // x3
  const MethodInfo *v13; // x4

  if ( (byte_4CC30F5 & 1) == 0 )
  {
    sub_1C713B0(&Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC30F5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    alignedBonusFilterInfos = this->fields.alignedBonusFilterInfos;
    if ( this->fields.isQuestStart )
    {
      if ( sort )
      {
        v9 = 1;
        v10 = this->fields.sort;
        v11 = this->fields.alignedBonusFilterInfos;
        klass = 0;
LABEL_13:
        ListViewSort__IncrementBonusFilter(v10, v11, v9, klass, 0);
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
        return;
      }
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        klass = (int64_t)Instance[7].klass;
        v10 = sort;
        v11 = alignedBonusFilterInfos;
        v9 = 0;
        goto LABEL_13;
      }
    }
    sub_1C71608(Instance, v6);
  }
}


void PartyServantListViewManager__OnClickFilterKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC30F6 & 1) == 0 )
  {
    sub_1C713B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager_EndSelectFilterKind__);
    sub_1C713B0(&Method_PartyServantListViewManager_OnClickFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC30F6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C71608(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, this->fields.eventId, 0);
  }
}


void PartyServantListViewManager__OnClickListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void PartyServantListViewManager__OnClickSelectListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C71608(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void PartyServantListViewManager__OnClickSortAscendingOrder(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CC30FB & 1) == 0 )
  {
    sub_1C713B0(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4CC30FB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C71608(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v7);
  }
}


void PartyServantListViewManager__OnClickSortKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w20
  int v6; // w8
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v9; // x22
  ServantSortSelectMenu_CallbackFunc_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4CC30F9 & 1) == 0 )
  {
    sub_1C713B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager_EndSelectSortKind__);
    sub_1C713B0(&Method_PartyServantListViewManager_OnClickSortKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC30F9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = 7;
    if ( this->fields.isFatigue )
      v6 = 7;
    else
      v6 = 3;
    if ( !this->fields.isFatigue )
    {
      if ( this->fields.isQuestStart )
      {
        if ( this->fields.isBuddyPoint )
          v5 = 8;
        else
          v5 = v6;
      }
      else
      {
        v5 = 3;
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v9 )
      sub_1C71608(v11, v12);
    CommonUI__OpenServantSortSelectMenu(v9, v5, sort, 0, v10, 0);
  }
}


void PartyServantListViewManager__OnLongPushListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8
  PartyServantListViewManager_o *v4; // x20
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  unsigned int Index; // w0

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_8;
  if ( partyServantSelectMenu->fields.modeKind )
    return;
  v4 = this;
  this = (PartyServantListViewManager_o *)this->fields.scrollView;
  if ( !this )
LABEL_8:
    sub_1C71608(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        3,
        Index,
        callbackFunc->fields.method);
      return;
    }
    goto LABEL_8;
  }
}


void PartyServantListViewManager__OnMoveEnd(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CC30F4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC30F4 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C71608(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__RequestListObject(
        PartyServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC30F2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C713B0(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC30F2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v12, v13);
      PartyServantListViewObject__Init_34924980((PartyServantListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__RequestListObject_34923868(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC30F3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C713B0(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC30F3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      PartyServantListViewObject__Init_34924372((PartyServantListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void PartyServantListViewManager__SetFilterButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v5; // x8

  if ( (byte_4CC30F8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17509/*"btn_filter_on"*/);
    sub_1C713B0(&StringLiteral_17508/*"btn_filter"*/);
    byte_4CC30F8 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0),
        !filterSprite) )
  {
    sub_1C71608(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17508/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17509/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_34922968(this, mode, v10);
}


void PartyServantListViewManager__SetMode_34922968(
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
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x22
  int32_t v13; // w21
  int v14; // w25
  int64_t v15; // x23
  __int64 v16; // x8
  __int128 v17; // q0
  __int64 v18; // x8
  __int128 v19; // q0
  int size; // w8
  int32_t v21; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-80h]

  if ( (byte_4CC30F1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC30F1 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (int64_t)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_40;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)scrollView, 0) )
  {
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 1, 0);
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_40;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
  }
  switch ( mode )
  {
    case 1:
      v9 = 2;
      goto LABEL_12;
    case 2:
      v9 = 3;
      goto LABEL_12;
    case 3:
      v9 = 4;
LABEL_12:
      PartyServantListViewManager__RequestListObject_34923868(this, v9, v7);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v8);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v5);
      if ( !scrollView )
        goto LABEL_40;
      v10 = *(_DWORD *)(scrollView + 24);
      v11 = (System_Collections_Generic_List_object__o *)scrollView;
      if ( v10 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
          0.0,
          0);
      }
      else
      {
        this->fields.callbackCount = v10;
        v12 = 0;
        v13 = 0;
        v14 = -1;
        do
        {
          scrollView = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v11,
                                  v13,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
          if ( !scrollView )
            goto LABEL_40;
          scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v5);
          if ( !scrollView )
            goto LABEL_40;
          v15 = scrollView;
          if ( *(_QWORD *)(scrollView + 120) )
          {
            scrollView = PartyServantListViewItem__get_IsParty((PartyServantListViewItem_o *)scrollView, 0);
            if ( (scrollView & 1) == 0 )
            {
              if ( v14 < 0 )
                goto LABEL_26;
              v16 = *(_QWORD *)(v15 + 120);
              if ( !v16 )
                goto LABEL_40;
              v17 = *(_OWORD *)(v16 + 32);
              *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
              *(_OWORD *)&v28.fields.fakeValue = v17;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v27 = v28;
              scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v27, 0);
              if ( v12 < scrollView )
              {
LABEL_26:
                v18 = *(_QWORD *)(v15 + 120);
                if ( !v18 )
                  goto LABEL_40;
                v19 = *(_OWORD *)(v18 + 32);
                *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
                *(_OWORD *)&v28.fields.fakeValue = v19;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v26 = v28;
                v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v26, 0);
                v14 = v13;
              }
            }
          }
          size = v11->fields._size;
          ++v13;
        }
        while ( v13 < size );
        if ( size >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v11,
                     v21,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
            v23 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(v23, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            if ( v14 == v21 )
              v25 = 5;
            else
              v25 = 2;
            PartyServantListViewObject__Init_34924372((PartyServantListViewObject_o *)Item, v25, v23, v24);
            if ( ++v21 >= v11->fields._size )
              return;
          }
LABEL_40:
          sub_1C71608(scrollView, v5);
        }
      }
      return;
    default:
      return;
  }
}


void PartyServantListViewManager__SetMode_34923816(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_34922968(this, mode, v10);
}


void PartyServantListViewManager__SetObjectItem(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC30F0 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_1C713B0(&PartyServantListViewObject_TypeInfo);
    byte_4CC30F0 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyServantListViewObject__Init_34922844((PartyServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void PartyServantListViewManager__SetSortButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4CC30FC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17545/*"btn_sort_up"*/);
    sub_1C713B0(&StringLiteral_17645/*"btn_txt_up"*/);
    sub_1C713B0(&StringLiteral_17596/*"btn_txt_new"*/);
    sub_1C713B0(&StringLiteral_17586/*"btn_txt_down"*/);
    sub_1C713B0(&StringLiteral_17603/*"btn_txt_old"*/);
    sub_1C713B0(&StringLiteral_17542/*"btn_sort_down"*/);
    byte_4CC30FC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_42;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_42;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17603/*"btn_txt_old"*/ : &StringLiteral_17596/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17645/*"btn_txt_up"*/ : &StringLiteral_17586/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
LABEL_42:
      sub_1C71608(sort, v4);
    }
  }
}


void PartyServantListViewManager__SortItem(
        PartyServantListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  if ( (byte_4CC30E7 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC30E7 = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, isAllDisp, addEmptyTarminal, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.updateTime = NetworkManager__getTime(0);
}


void PartyServantListViewManager__Update(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CC30FE & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC30FE = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      PartyServantListViewManager__UpdateDisp(this, v5);
    }
  }
}


void PartyServantListViewManager__UpdateCost(
        PartyServantListViewManager_o *this,
        int32_t cost,
        int32_t maxCost,
        int32_t restrictionTotalCost,
        const MethodInfo *method)
{
  bool v8; // w20
  System_String_o *v9; // x20
  UILabel_o *maxCostLabel; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *splitCostLabel; // x21
  System_String_o *v15; // x0
  UILabel_o *selectCostLabel; // x19
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v18 = maxCost;
  v19 = cost;
  if ( (byte_4CC30EA & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10222/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C713B0(&StringLiteral_10220/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C713B0(&StringLiteral_10221/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C713B0(&StringLiteral_10219/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC30EA = 1;
  }
  v8 = restrictionTotalCost != 0 && maxCost > restrictionTotalCost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v8 )
      goto LABEL_5;
LABEL_7:
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10219/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    goto LABEL_8;
  }
  if ( !v8 )
    goto LABEL_7;
LABEL_5:
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10221/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
  v18 = restrictionTotalCost;
LABEL_8:
  maxCostLabel = this->fields.maxCostLabel;
  v11 = System_Int32__ToString((int32_t)&v18, 0);
  v12 = System_String__Concat_64031724(v9, v11, 0);
  if ( !maxCostLabel )
    goto LABEL_18;
  UILabel__set_text(maxCostLabel, v12, 0);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10222/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v12 = System_String__Concat_64031724(v9, v15, 0);
  if ( !splitCostLabel )
    goto LABEL_18;
  UILabel__set_text(splitCostLabel, v12, 0);
  selectCostLabel = this->fields.selectCostLabel;
  if ( v19 > v18 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10220/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v17 = System_Int32__ToString((int32_t)&v19, 0);
  v12 = System_String__Concat_64031724(v9, v17, 0);
  if ( !selectCostLabel )
LABEL_18:
    sub_1C71608(v12, v13);
  UILabel__set_text(selectCostLabel, v12, 0);
}


void PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC30FF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    byte_4CC30FF = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C71608(0, v4);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v6.fields._current )
        sub_1C71608(0, v5);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v6.fields._current, v5);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void PartyServantListViewManager__UpdateItemState(
        PartyServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  void *monitor; // x22
  bool v9; // w25
  bool v10; // w26
  bool v11; // w27
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v15; // x1
  __int64 naturalAligment; // x9
  _OWORD *v17; // x8
  __int128 v18; // q0
  int64_t v19; // x0
  __int64 v20; // x1
  int v21; // w8
  UserServantEntity_o *v22; // x0
  __int64 v23; // x1
  bool v24; // w8
  UserServantEntity_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4CC3100 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC3100 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C71608(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = modeKind == 1;
  v10 = modeKind == 2;
  v11 = modeKind == 3;
  *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      goto LABEL_23;
    v15 = PartyServantListViewItem_TypeInfo;
    naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (PartyServantListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
    {
      v12 = sub_1C719A4(v28.fields._current);
LABEL_23:
      sub_1C71608(v12, v13);
    }
    v17 = v28.fields._current[7].monitor;
    LOBYTE(v28.fields._current[15].klass) = v9;
    BYTE1(current[15].klass) = v10;
    BYTE2(current[15].klass) = v11;
    if ( !v17 )
      sub_1C71608(v12, v15);
    v18 = v17[2];
    *(_OWORD *)&v27.fields.currentCryptoKey = v17[1];
    *(_OWORD *)&v27.fields.fakeValue = v18;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v26, 0);
    v21 = BYTE2(current[15].klass);
    BYTE3(current[15].klass) = v19 == (_QWORD)monitor;
    if ( v21 )
    {
      v22 = (UserServantEntity_o *)current[7].monitor;
      if ( !v22 )
        sub_1C71608(0, v20);
      if ( UserServantEntity__IsLeave(v22, 0) )
      {
        v24 = 0;
      }
      else
      {
        v25 = (UserServantEntity_o *)current[7].monitor;
        if ( !v25 )
          sub_1C71608(0, v23);
        v24 = !UserServantEntity__IsEventJoin(v25, 0);
      }
    }
    else
    {
      v24 = 1;
    }
    BYTE4(current[15].klass) = v24;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void PartyServantListViewManager__add_callbackFunc(
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

  if ( (byte_4CC30DF & 1) == 0 )
  {
    sub_1C713B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CC30DF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v7->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C719A4(v7);
  PartyServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void PartyServantListViewManager__add_callbackFunc2(
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

  if ( (byte_4CC30E1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC30E1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C719A4(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC30E6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC30E6 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C71608(0, v10);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(
                                 (PartyServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C71608(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C71608(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C71608(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C71608(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
}


bool PartyServantListViewManager__get_IsFocus(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
}


System_Collections_Generic_List_PartyServantListViewObject__o *PartyServantListViewManager__get_ObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC30E5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC30E5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
}


void PartyServantListViewManager__remove_callbackFunc(
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

  if ( (byte_4CC30E0 & 1) == 0 )
  {
    sub_1C713B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CC30E0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v7->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C719A4(v7);
  PartyServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void PartyServantListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CC30E2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC30E2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C719A4(v7);
  PartyServantListViewManager__get_IsFocus(v10, v11);
}


void PartyServantListViewManager__set_IsFocus(
        PartyServantListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFocus_k__BackingField = value;
}


void PartyServantListViewManager_CallbackFunc___ctor(
        PartyServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA196C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA1914;
}


System_IAsyncResult_o *PartyServantListViewManager_CallbackFunc__BeginInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CC3104 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&PartyServantListViewManager_ResultKind_TypeInfo);
    byte_4CC3104 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void PartyServantListViewManager_CallbackFunc__Invoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void PartyServantListViewManager___c__DisplayClass51_0___ctor(
        PartyServantListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass51_0___CreateList_b__0(
        PartyServantListViewManager___c__DisplayClass51_0_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_T__o *grandSvtIdListInParty; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4CC3105 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int___);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__);
    sub_1C713B0(&PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
    byte_4CC3105 = 1;
  }
  v5 = sub_1C715FC(PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = userSvtEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)userSvtEntity, v8, v9, v10, v11, v12, v13);
  grandSvtIdListInParty = (System_Collections_Generic_List_T__o *)this->fields.grandSvtIdListInParty;
  v15 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__,
    0);
  return !BasicHelper__Any_int_(
            grandSvtIdListInParty,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_3133EA8 *)Method_BasicHelper_Any_int___);
}


void PartyServantListViewManager___c__DisplayClass51_1___ctor(
        PartyServantListViewManager___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool PartyServantListViewManager___c__DisplayClass51_1___CreateList_b__1(
        PartyServantListViewManager___c__DisplayClass51_1_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyServantListViewManager___c__DisplayClass51_1_o *v4; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4CC3106 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_1_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC3106 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C71608(this, *(_QWORD *)&svtId);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v9, 0) == svtId;
}


void PartyServantListViewManager___c__DisplayClass51_2___ctor(
        PartyServantListViewManager___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass51_2___CreateList_b__2(
        PartyServantListViewManager___c__DisplayClass51_2_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  PartyServantListViewManager___c__DisplayClass51_2_o *v4; // x19
  __int128 v5; // q1
  struct UserServantGrandEntity_o *userGrandSvtEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4CC3107 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_2_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC3107 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_8;
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this = (PartyServantListViewManager___c__DisplayClass51_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                  &v8,
                                                                  0);
  userGrandSvtEntity = v4->fields.userGrandSvtEntity;
  if ( !userGrandSvtEntity )
LABEL_8:
    sub_1C71608(this, userSvtEntity);
  return this == (PartyServantListViewManager___c__DisplayClass51_2_o *)userGrandSvtEntity->fields.userSvtId;
}


void PartyServantListViewManager___c__DisplayClass51_3___ctor(
        PartyServantListViewManager___c__DisplayClass51_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass51_3___CreateList_b__3(
        PartyServantListViewManager___c__DisplayClass51_3_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  PartyServantListViewManager___c__DisplayClass51_3_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  struct PartyServantListViewManager___c__DisplayClass51_2_o *CS___8__locals1; // x8
  struct UserServantGrandEntity_o *userGrandSvtEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4CC3108 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_3_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC3108 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_12;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (PartyServantListViewManager___c__DisplayClass51_3_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                                  v10,
                                                                  0);
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  userGrandSvtEntity = CS___8__locals1->fields.userGrandSvtEntity;
  if ( !userGrandSvtEntity )
    goto LABEL_12;
  if ( (_DWORD)this == userGrandSvtEntity->fields.svtId )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_3_o *)v4->fields.grandGraphEntity;
    if ( this )
      return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, userSvtEntity, 0);
LABEL_12:
    sub_1C71608(this, userSvtEntity);
  }
  return 0;
}


void PartyServantListViewManager___c__DisplayClass57_0___ctor(
        PartyServantListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass57_0___GetItemByUserServantID_b__0(
        PartyServantListViewManager___c__DisplayClass57_0_o *this,
        PartyServantListViewItem_o *e,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4CC3109 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC3109 = 1;
  }
  if ( !e )
    return 0;
  userServantEntity = e->fields.userServantEntity;
  if ( !userServantEntity )
    return 0;
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v8, 0) == this->fields.id;
}