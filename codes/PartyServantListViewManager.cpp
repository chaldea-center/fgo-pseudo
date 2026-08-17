void PartyServantListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct PartyServantListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v17; // x20
  struct PartyServantListViewManager_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v26; // x20
  struct PartyServantListViewManager_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596C24E & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_16203/*"WarBoardPartyServant"*/);
    sub_2213A60(&StringLiteral_11008/*"PartyServant"*/);
    byte_596C24E = 1;
  }
  v7 = StringLiteral_11008/*"PartyServant"*/;
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_11008/*"PartyServant"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PartyServantListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_16203/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_16203/*"WarBoardPartyServant"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->WAR_SORT_SAVE_KEY, v8, v10, v11, v12, v13, v14, v15);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v17, SORT_SAVE_KEY, 3, 0, 0);
  v18 = PartyServantListViewManager_TypeInfo->static_fields;
  v18->servantSortInfo = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->servantSortInfo, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v26 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v26, WAR_SORT_SAVE_KEY, 3, 0, 0);
  v27 = PartyServantListViewManager_TypeInfo->static_fields;
  v27->warServantSortInfo = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->warServantSortInfo, (int32_t)v26, v28, v29, v30, v31, v32, v33);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  *((_DWORD *)p_seed + 85) = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  PartyServantListViewManager__ModifyList(this, 1, v14);
  PartyServantListViewManager__SetMode_41320688(this, 2, v15);
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
  __int64 v13; // x27
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  PartyServantListViewManager_c *v27; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x21
  __int64 v30; // x1
  __int64 sort; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct ListViewSort_o *v46; // x20
  __int64 v47; // x2
  bool v48; // w8
  DataManager_c *v49; // x0
  Il2CppObject *Master_object; // x22
  _BOOL4 v51; // w8
  struct ListViewSort_o *v52; // x8
  struct ListViewSort_o *v53; // x8
  PartyOrganizationListViewItem_o *Member; // x26
  System_Collections_Generic_List_object__o *v55; // x22
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct ListViewSort_o **v62; // x21
  struct UICommonButton_o *bonusFilterKindButton; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v66; // x1
  __int64 v67; // x2
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x19
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_Collections_Generic_List_int__o **v75; // x29
  System_Func_object__bool__o *v76; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  PartyListViewItem_o *v78; // x19
  PartyServantListViewManager_o *v79; // x28
  System_Object_array *v80; // x22
  char v81; // w20
  __int64 v82; // x1
  __int64 v83; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x27
  __int128 v85; // q0
  __int64 v86; // x28
  __int64 v87; // x0
  __int64 v88; // x1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  int32_t current; // w1
  __int64 v96; // x22
  __int64 v97; // x0
  __int64 v98; // x1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x8
  __int64 v108; // x9
  System_Func_object__bool__o *v109; // x25
  System_Collections_Generic_IEnumerable_T__o *v110; // x1
  __int64 v111; // x8
  Il2CppObject *v112; // x25
  System_Func_object__bool__o *v113; // x22
  System_Collections_Generic_IEnumerable_T__o *v114; // x1
  int32_t maxCost; // w25
  int32_t TotalCost; // w0
  const MethodInfo *v117; // x4
  __int64 v118; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v120; // x27
  bool isEnableRemove; // w20
  Il2CppObject *v122; // x29
  Il2CppClass *klass; // x25
  void *monitor; // x28
  bool isGrandSameServant; // w28
  PartyServantListViewItem_o *v126; // x25
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  __int64 v137; // x1
  __int64 v138; // x2
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v140; // x4
  const MethodInfo *v141; // x1
  bool isMyServantOrNpcRestriction; // [xsp+34h] [xbp-DCh]
  struct ListViewSort_o **v143; // [xsp+38h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v144; // [xsp+40h] [xbp-D0h]
  int32_t BaseServantId; // [xsp+48h] [xbp-C8h]
  int32_t numa; // [xsp+4Ch] [xbp-C4h]
  PartyListViewItem_o *partyItema; // [xsp+68h] [xbp-A8h]
  PartyServantListViewManager_o *v150; // [xsp+70h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  UnityEngine_Color_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C232 & 1) == 0 )
  {
    sub_2213A60(&CommonRestrictionMaster_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager___c__DisplayClass52_0__CreateList_b__0__);
    sub_2213A60(&PartyServantListViewManager___c__DisplayClass52_0_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager___c__DisplayClass52_2__CreateList_b__2__);
    sub_2213A60(&PartyServantListViewManager___c__DisplayClass52_2_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager___c__DisplayClass52_3__CreateList_b__3__);
    sub_2213A60(&PartyServantListViewManager___c__DisplayClass52_3_TypeInfo);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596C232 = 1;
  }
  memset(&v152, 0, sizeof(v152));
  v13 = sub_2213CCC(PartyServantListViewManager___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  this->fields.lastPartyItem = partyItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lastPartyItem,
    (int32_t)partyItem,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v27 = PartyServantListViewManager_TypeInfo;
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v20, v21);
    v27 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v27->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)servantSortInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_103;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v52 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v52 )
      goto LABEL_103;
    v52->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v53 = *p_sort;
    if ( !*p_sort )
      goto LABEL_103;
    if ( v53->fields.sortKind == 28 )
      v53->fields.sortKind = 3;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = this->fields.sort;
  sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
  if ( !v46 )
    goto LABEL_103;
  v48 = (sort & 1) == 0;
  v49 = DataManager_TypeInfo;
  v46->fields.isBonusKind = v48;
  if ( !*(&v49->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v49, v30, v47);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = EventUpValSetupInfo__get_EventId(setupInfo, 0);
  if ( !Master_object )
    goto LABEL_103;
  sort = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, sort, 0);
  v51 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = sort & 1;
  if ( !v51 || (sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  v143 = &this->fields.sort;
  if ( !partyItem )
    goto LABEL_103;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  v55 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( questRestrictionInfo )
  {
    QuestRestrictionInfo__SetDeckInfo_50430332(questRestrictionInfo, partyItem, num, 0);
    v62 = &this->fields.sort;
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
      v55 = (System_Collections_Generic_List_object__o *)sort;
      ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, __int64, const MethodInfo *))bonusFilterKindButton->klass->vtable._14_SetState.methodPtr)(
        bonusFilterKindButton,
        this->fields.bonusFilterKindButton,
        3,
        1,
        bonusFilterKindButton->klass->vtable._14_SetState.method);
      sort = (__int64)this->fields.bonusFilterKindLabel;
      if ( !sort )
        goto LABEL_103;
      v154.fields.r = 0.5;
      v154.fields.g = 0.5;
      v154.fields.b = 0.5;
      v154.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v154, 0);
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
      v155.fields.r = 1.0;
      v155.fields.g = 1.0;
      v155.fields.b = 1.0;
      v155.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v155, 0);
    }
  }
  else
  {
    v62 = &this->fields.sort;
  }
  if ( !*v62 )
    goto LABEL_103;
  iconScaleKind = (*v62)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_38;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_38;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_38:
    this->fields.seed = normalSizeSeed;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !Member )
    goto LABEL_103;
  if ( PartyOrganizationListViewItem__get_IsEmpty(Member, 0) )
    BaseServantId = 0;
  else
    BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(Member, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66, v67);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !sort )
    goto LABEL_103;
  numa = num;
  v150 = this;
  OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                            (UserServantMaster_o *)sort,
                                                                            0);
  partyItema = partyItem;
  sort = (__int64)PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0, 0);
  if ( !v13 )
    goto LABEL_103;
  *(_QWORD *)(v13 + 16) = sort;
  v75 = (System_Collections_Generic_List_int__o **)(v13 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), sort, v69, v70, v71, v72, v73, v74);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v55, 0) )
  {
    v76 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v76,
      (Il2CppObject *)v13,
      Method_PartyServantListViewManager___c__DisplayClass52_0__CreateList_b__0__,
      0);
    v77 = System_Linq_Enumerable__Where_object_(
            OrganizationList,
            (System_Func_TSource__bool__o *)v76,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
    v78 = partyItema;
    v79 = v150;
    v80 = System_Linq_Enumerable__ToArray_object_(
            v77,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    v81 = 1;
    goto LABEL_73;
  }
  v144 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v144,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v82, v83);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !v55 )
    goto LABEL_103;
  v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)sort;
  isMyServantOrNpcRestriction = Member->fields.isMyServantOrNpcRestriction;
  System_Collections_Generic_List_object___GetEnumerator(
    &v151,
    v55,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v85 = *(_OWORD *)&v151.fields._list;
  v152.fields._current = v151.fields._current;
  v151.fields._list = 0;
  *(_QWORD *)&v151.fields._index = &v152;
  *(_OWORD *)&v152.fields._list = v85;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v152,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__) )
  {
    v86 = sub_2213CCC(PartyServantListViewManager___c__DisplayClass52_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v86, 0);
    if ( !v86 )
      sub_2213CDC(v87, v88);
    current = (int32_t)v152.fields._current;
    *(_QWORD *)(v86 + 16) = v152.fields._current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v86 + 16), current, v89, v90, v91, v92, v93, v94);
    v96 = sub_2213CCC(PartyServantListViewManager___c__DisplayClass52_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v96, 0);
    if ( !v96 )
      sub_2213CDC(v97, v98);
    *(_QWORD *)(v96 + 24) = v86;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + 24), v86, v99, v100, v101, v102, v103, v104);
    v107 = *(_QWORD *)(v96 + 24);
    if ( Member->fields.isFollower )
    {
      if ( !v107 )
        sub_2213CDC(v105, v106);
      goto LABEL_66;
    }
    if ( !v107 )
      sub_2213CDC(v105, v106);
    v108 = *(_QWORD *)(v107 + 16);
    if ( !v108 )
      sub_2213CDC(v105, v106);
    if ( BaseServantId == *(_DWORD *)(v108 + 40) )
    {
      if ( !v84 )
        sub_2213CDC(v105, v106);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v84,
             (Il2CppObject **)(v96 + 16),
             *(_DWORD *)(v108 + 24),
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
      {
        v109 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v109,
          (Il2CppObject *)v96,
          Method_PartyServantListViewManager___c__DisplayClass52_3__CreateList_b__3__,
          0);
        v110 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                OrganizationList,
                                                                (System_Func_TSource__bool__o *)v109,
                                                                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        if ( !v144 )
          sub_2213CDC(0, v110);
        System_Collections_Generic_List_object___AddRange(
          v144,
          v110,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      }
    }
    else
    {
LABEL_66:
      v111 = *(_QWORD *)(v107 + 16);
      if ( !v111 )
        sub_2213CDC(v105, v106);
      if ( !*v75 )
        sub_2213CDC(0, v106);
      if ( !System_Collections_Generic_List_int___Contains(
              *v75,
              *(_DWORD *)(v111 + 40),
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v112 = *(Il2CppObject **)(v96 + 24);
        v113 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v113,
          v112,
          Method_PartyServantListViewManager___c__DisplayClass52_2__CreateList_b__2__,
          0);
        v114 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                OrganizationList,
                                                                (System_Func_TSource__bool__o *)v113,
                                                                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        if ( !v144 )
          sub_2213CDC(0, v114);
        isMyServantOrNpcRestriction = 1;
        System_Collections_Generic_List_object___AddRange(
          v144,
          v114,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v152,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
  v78 = partyItema;
  v79 = v150;
  v62 = v143;
  v81 = isMyServantOrNpcRestriction;
  sort = (__int64)v144;
  if ( !v144 )
    goto LABEL_103;
  v80 = System_Collections_Generic_List_object___ToArray(
          v144,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
LABEL_73:
  maxCost = v78->fields.maxCost;
  if ( questRestrictionInfo )
  {
    sort = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
    if ( !v79 )
      goto LABEL_103;
  }
  else
  {
    sort = 0;
    if ( !v79 )
      goto LABEL_103;
  }
  v79->fields.restrictionTotalCost = sort;
  TotalCost = PartyListViewItem__GetTotalCost(v78, 0);
  PartyServantListViewManager__UpdateCost(v79, TotalCost, maxCost, v79->fields.restrictionTotalCost, v117);
  sort = (__int64)v79->fields.bonusFilterKindButton;
  if ( !sort
    || (sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0), !*v62)
    || !sort
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*v62)->fields.isBonusKind, 0),
        ListViewManager__CreateList((ListViewManager_o *)v79, 0, 0),
        !v80) )
  {
LABEL_103:
    sub_2213CDC(sort, v30);
  }
  max_length = v80->max_length;
  if ( (int)max_length >= 1 )
  {
    v120 = 0;
    isEnableRemove = v81 & 1;
    do
    {
      if ( v120 >= (unsigned int)max_length )
        sub_2213CE4(sort);
      v122 = v80->m_Items[v120];
      if ( Member->fields.isFollower )
        goto LABEL_90;
      if ( !v122 )
        goto LABEL_103;
      klass = v122[5].klass;
      monitor = v122[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v118);
      *(_QWORD *)&v153.fields.currentCryptoKey = klass;
      *(_QWORD *)&v153.fields.fakeValue = monitor;
      if ( BaseServantId != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v153, 0) )
LABEL_90:
        isGrandSameServant = 0;
      else
        isGrandSameServant = Member->fields.isRestrictionGrandServant;
      v126 = (PartyServantListViewItem_o *)sub_2213CCC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v126,
        v120,
        (UserServantEntity_o *)v122,
        baseDeckItemList,
        partyItema,
        numa,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        isGrandSameServant,
        isEnableRemove,
        0);
      v79 = v150;
      sort = (__int64)v150->fields.itemList;
      if ( !sort )
        goto LABEL_103;
      v133 = *(_QWORD *)(sort + 16);
      v134 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v133 )
        goto LABEL_103;
      v135 = *(int *)(sort + 24);
      if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v126,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
      }
      else
      {
        v136 = v133 + 8 * v135;
        *(_DWORD *)(sort + 24) = v135 + 1;
        *(_QWORD *)(v136 + 32) = v126;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v136 + 32), (int32_t)v126, v127, v128, v129, v130, v131, v132);
      }
      LODWORD(max_length) = v80->max_length;
    }
    while ( (__int64)++v120 < (int)max_length );
  }
  if ( !*(&CommonRestrictionMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v30, v118);
  CommonRestrictionMaster__ClearRestrictionCacheList(0);
  emptyMessageLabel = v79->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137, v138);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_103;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(v79, -1, 0, -1, v140);
  PartyServantListViewManager__SetFilterButtonImage(v79, v141);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__CreateList_41315108(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  bool v7; // w7
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  PartyServantListViewManager_c *v19; // x0
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v21; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__c *v23; // x0
  System_Collections_Generic_List_int__o *v24; // x26
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct PartyOrganizationListViewItem_array *memberItemList; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned int v33; // w9
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  _BOOL8 v37; // x0
  struct System_Int32_array *items; // x8
  __int64 klass_low; // x1
  _QWORD *v40; // x9
  __int64 size; // x10
  ListViewSort_o *v42; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_o **p_sort; // x25
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct ListViewSort_o *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct ListViewSort_o *v61; // x8
  UserServantEntity_array *OrganizationList; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  int32_t maxCost; // w23
  UserServantEntity_array *v66; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v68; // w27
  LocalizationManager_c *v69; // x0
  __int64 *v70; // x22
  System_String_o *v71; // x29
  const MethodInfo *v72; // x3
  __int64 v73; // x1
  __int64 v74; // x2
  UILabel_o *splitCostLabel; // x28
  System_String_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  UILabel_o *selectCostLabel; // x28
  System_String_o *v80; // x27
  System_String_o *v81; // x1
  System_String_o *v82; // x0
  __int64 v83; // x2
  il2cpp_array_size_t v84; // x8
  unsigned __int64 v85; // x25
  UserServantEntity_o *v86; // x28
  PartyServantListViewItem_o *v87; // x27
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  __int64 v97; // x8
  __int64 v98; // x1
  __int64 v99; // x2
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v101; // x4
  const MethodInfo *v102; // x1
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  int32_t cost; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_596C233 & 1) == 0 )
  {
    sub_2213A60(&CommonRestrictionMaster_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10629/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_2213A60(&StringLiteral_10627/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_2213A60(&StringLiteral_10628/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_2213A60(&StringLiteral_10626/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_596C233 = 1;
  }
  cost = 0;
  eventUpValInfo = 0;
  memset(&v106, 0, sizeof(v106));
  this->fields.lastPartyItem = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lastPartyItem,
    0,
    *(System_String_o **)&num,
    *(System_String_o **)&tutorialMode,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (bool)method,
    v7);
  v19 = PartyServantListViewManager_TypeInfo;
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v12, v13);
    v19 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v19->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)warServantSortInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_85;
  ListViewSort__Load(sort, 0);
  v23 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v24 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_85;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_85;
  max_length = memberItemList->max_length;
  if ( max_length )
  {
    cost = 0;
    if ( (int)max_length >= 1 )
    {
      v33 = 0;
      while ( v33 < (unsigned int)max_length )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v33];
        if ( sort )
        {
          sort = (ListViewSort_o *)PartyOrganizationListViewItem__GetEventUpVal(
                                     (PartyOrganizationListViewItem_o *)sort,
                                     &eventUpValInfo,
                                     0);
          if ( ((unsigned __int8)sort & 1) != 0 )
          {
            if ( !eventUpValInfo )
              goto LABEL_85;
            sort = (ListViewSort_o *)eventUpValInfo->fields.dropList;
            if ( !sort )
              goto LABEL_85;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v105,
              (System_Collections_Generic_List_object__o *)sort,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v106 = v105;
            v105.fields._list = 0;
            *(_QWORD *)&v105.fields._index = &v106;
            while ( 1 )
            {
              v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v106,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v34 )
                break;
              current = v106.fields._current;
              if ( !v106.fields._current )
                sub_2213CDC(v34, v35);
              if ( !v24 )
                sub_2213CDC(v34, v35);
              v37 = System_Collections_Generic_List_int___Contains(
                      v24,
                      (int32_t)v106.fields._current[1].klass,
                      (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v37 )
              {
                items = v24->fields._items;
                klass_low = LODWORD(current[1].klass);
                v40 = Method_System_Collections_Generic_List_int__Add__;
                ++v24->fields._version;
                if ( !items )
                  sub_2213CDC(v37, klass_low);
                size = v24->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v24,
                    klass_low,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                }
                else
                {
                  v24->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v106,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        LODWORD(max_length) = memberItemList->max_length;
        v33 = ++cost;
        if ( cost >= (int)max_length )
          goto LABEL_31;
      }
LABEL_86:
      sub_2213CE4(sort);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v24 )
      goto LABEL_85;
    v42 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v24,
                               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v42 )
      goto LABEL_85;
    p_sort = &this->fields.sort;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v42,
                           0,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0);
    if ( !v52 )
      goto LABEL_85;
    v52->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
    if ( questRestrictionInfo )
      goto LABEL_36;
  }
  else
  {
    v61 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v61 )
      goto LABEL_85;
    v61->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    p_sort = &this->fields.sort;
    if ( questRestrictionInfo )
LABEL_36:
      this->fields.eventId = questRestrictionInfo->fields.eventId;
  }
  if ( !*p_sort )
    goto LABEL_85;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_85;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_85;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  maxCost = partyItem->fields.maxCost;
  v66 = OrganizationList;
  if ( questRestrictionInfo
    && (TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0)) != 0
    && (v68 = TotalCostRestriction, maxCost > TotalCostRestriction) )
  {
    v69 = LocalizationManager_TypeInfo;
    v70 = &StringLiteral_10628/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_56;
  }
  else
  {
    v69 = LocalizationManager_TypeInfo;
    v68 = maxCost;
    v70 = &StringLiteral_10626/*"PARTY_ORGANIZATION_COST_COLOR"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_56:
      j_il2cpp_runtime_class_init_0(v69, v63, v64);
  }
  v71 = LocalizationManager__Get((System_String_o *)*v70, 0);
  PartyServantListViewManager__SetMaxCostLabel(this, v68, v71, v72);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73, v74);
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_10629/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  sort = (ListViewSort_o *)System_String__Concat_75651716(v71, v76, 0);
  if ( !splitCostLabel )
    goto LABEL_85;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0);
  selectCostLabel = this->fields.selectCostLabel;
  if ( partyItem->fields.cost <= v68 )
  {
    cost = partyItem->fields.cost;
    v81 = System_Int32__ToString((int32_t)&cost, 0);
    v82 = v71;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77, v78);
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10627/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v81 = System_Int32__ToString((int32_t)&cost, 0);
    v82 = v80;
  }
  sort = (ListViewSort_o *)System_String__Concat_75651716(v82, v81, 0);
  if ( !selectCostLabel )
    goto LABEL_85;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_85;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !*p_sort )
    goto LABEL_85;
  if ( !sort )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v66 )
    goto LABEL_85;
  v84 = v66->max_length;
  if ( (int)v84 >= 1 )
  {
    v85 = 0;
    while ( v85 < (unsigned int)v84 )
    {
      v86 = v66->m_Items[v85];
      v87 = (PartyServantListViewItem_o *)sub_2213CCC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_41288904(
        v87,
        v85,
        v86,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        0);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_85;
      v94 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v95 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v94 )
        goto LABEL_85;
      v96 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v96 >= *(_DWORD *)(v94 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v87,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v97 = v94 + 8 * v96;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v96 + 1;
        *(_QWORD *)(v97 + 32) = v87;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v97 + 32), (int32_t)v87, v88, v89, v90, v91, v92, v93);
      }
      LODWORD(v84) = v66->max_length;
      if ( (__int64)++v85 >= (int)v84 )
        goto LABEL_79;
    }
    goto LABEL_86;
  }
LABEL_79:
  if ( !*(&CommonRestrictionMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v21, v83);
  CommonRestrictionMaster__ClearRestrictionCacheList(0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98, v99);
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_85:
    sub_2213CDC(sort, v21);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v101);
  PartyServantListViewManager__SetFilterButtonImage(this, v102);
}


void PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PartyServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596C22D & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    byte_596C22D = 1;
  }
  v3 = PartyServantListViewManager_TypeInfo;
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v1, v2);
    v3 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0) )
  {
    sub_2213CDC(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  this->fields.updateTime = -1;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_596C241 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C241 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_2213CDC(v9, v10);
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

  if ( (byte_596C244 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager_EndCloseSelectSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C244 = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_596C247 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C247 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v8,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( PartyServantListViewItem__get_BaseServantId((PartyServantListViewItem_o *)this, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&svtId);
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
  if ( (byte_596C24C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C24C = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_2213CDC(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v9,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_17;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_17;
      }
      if ( (LOBYTE(this->fields.itemSortList) || v8->fields._IsFocus_k__BackingField)
        && (BYTE4(this->fields.bonusFilterKindLabel) || !v8->fields._IsFocus_k__BackingField) )
      {
        break;
      }
      if ( sum == ++v9 )
        return 1;
    }
    BYTE4(this->fields.bonusFilterKindLabel) = 0;
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

  if ( (byte_596C236 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C236 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_596C237 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
    sub_2213A60(&System_Func_PartyServantListViewItem__bool__TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager___c__DisplayClass58_0__GetItemByUserServantID_b__0__);
    sub_2213A60(&PartyServantListViewManager___c__DisplayClass58_0_TypeInfo);
    byte_596C237 = 1;
  }
  v5 = (Il2CppObject *)sub_2213CCC(PartyServantListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  v5[1].klass = (Il2CppClass *)id;
  if ( result )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                (System_Collections_IEnumerable_o *)result,
                                                                (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    v10 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_PartyServantListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v5,
      Method_PartyServantListViewManager___c__DisplayClass58_0__GetItemByUserServantID_b__0__,
      0);
    return (PartyServantListViewItem_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                           v9,
                                           (System_Func_TSource__bool__o *)v10,
                                           (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
  }
  return result;
}


int32_t PartyServantListViewManager__GetModeKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_2213CDC(this, method);
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
  __int64 v8; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  __int64 v11; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-90h]
  __int64 v18; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v19; // [xsp+50h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_596C24B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C24B = 1;
  }
  itemList = this->fields.itemList;
  memset(&v20, 0, sizeof(v20));
  if ( !itemList )
    sub_2213CDC(0, userServantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = 0;
  v19 = &v20;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v20.fields._current;
    if ( v20.fields._current )
    {
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( v20.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (PartyServantListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PartyServantListViewItem_TypeInfo )
      {
        v11 = *(__int64 *)((char *)&v20.fields._current->klass + (unsigned __int64)&dword_78);
        if ( !v11 )
          sub_2213CDC(v6, v7);
        v12 = *(_OWORD *)(v11 + 16);
        v13 = *(_OWORD *)(v11 + 32);
        v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v17.fields.currentCryptoKey = v12;
        *(_OWORD *)&v17.fields.fakeValue = v13;
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
        v16 = v17;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596C239 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C239 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 313) )
      {
        if ( *(_BYTE *)(Item + 209) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596C238 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C238 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 312) )
      {
        if ( *(_BYTE *)(Item + 208) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PartyServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596C22E & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    byte_596C22E = 1;
  }
  v3 = PartyServantListViewManager_TypeInfo;
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v1, v2);
    v3 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0) )
  {
    sub_2213CDC(servantSortInfo, v1);
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
  __int64 v9; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t v11; // x21
  int size; // w27
  unsigned __int64 v13; // x20
  unsigned __int64 v14; // x28
  __int64 v15; // x8
  UserServantEntity_o **v16; // x28
  __int64 v17; // t1
  __int128 v18; // q0
  __int128 v19; // q1
  int v20; // w8
  int64_t v21; // x22
  int32_t v22; // w24
  PartyServantListViewItem_o *v23; // x23
  __int64 naturalAligment; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  __int128 v27; // q1
  int v28; // w8
  int32_t v29; // w20
  Il2CppObject *Item; // x0
  __int64 v31; // x2
  ListViewItem_o *v32; // x21
  __int64 v33; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v36; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+50h] [xbp-80h]

  if ( (byte_596C235 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C235 = 1;
  }
  lastPartyItem = this->fields.lastPartyItem;
  if ( lastPartyItem )
  {
    TotalCost = PartyListViewItem__GetTotalCost(lastPartyItem, 0);
    v8 = this->fields.lastPartyItem;
    if ( !v8 )
      goto LABEL_46;
    PartyServantListViewManager__UpdateCost(this, TotalCost, v8->fields.maxCost, this->fields.restrictionTotalCost, v7);
  }
  TotalCost = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TotalCost
    || (TotalCost = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)TotalCost,
                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (TotalCost = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)TotalCost, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
LABEL_46:
    sub_2213CDC(TotalCost, v6);
  }
  v11 = TotalCost;
  size = itemList->fields._size;
  v36 = *(unsigned int *)(TotalCost + 24);
  if ( *(int *)(TotalCost + 24) >= 1 )
  {
    v13 = 0;
    while ( v13 < *(unsigned int *)(v11 + 24) )
    {
      v14 = v11 + 8 * v13;
      v17 = *(_QWORD *)(v14 + 32);
      v16 = (UserServantEntity_o **)(v14 + 32);
      v15 = v17;
      if ( !v17 )
        goto LABEL_46;
      v18 = *(_OWORD *)(v15 + 16);
      v19 = *(_OWORD *)(v15 + 32);
      v20 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v39.fields.currentCryptoKey = v18;
      *(_OWORD *)&v39.fields.fakeValue = v19;
      if ( !v20 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v9);
      v38 = v39;
      TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v38, 0);
      if ( size >= 1 )
      {
        v21 = TotalCost;
        v22 = 0;
        while ( 1 )
        {
          TotalCost = (int64_t)this->fields.itemList;
          if ( !TotalCost )
            goto LABEL_46;
          TotalCost = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)TotalCost,
                                 v22,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !TotalCost )
            goto LABEL_46;
          v23 = (PartyServantListViewItem_o *)TotalCost;
          naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)TotalCost + 304LL) < (unsigned int)naturalAligment
            || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)TotalCost + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_46;
          }
          v25 = *(_QWORD *)(TotalCost + 120);
          if ( v25 )
          {
            v26 = *(_OWORD *)(v25 + 16);
            v27 = *(_OWORD *)(v25 + 32);
            v28 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v39.fields.currentCryptoKey = v26;
            *(_OWORD *)&v39.fields.fakeValue = v27;
            if ( !v28 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v9);
            v37 = v39;
            TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v37, 0);
            if ( TotalCost == v21 )
              break;
          }
          if ( size == ++v22 )
            goto LABEL_31;
        }
        if ( v13 >= *(unsigned int *)(v11 + 24) )
          break;
        PartyServantListViewItem__ModifyItem(v23, *v16, 0);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v23, 0);
          PartyServantListViewItem__ModifyChoiceItem(v23, 0);
        }
      }
LABEL_31:
      if ( ++v13 == v36 )
        goto LABEL_32;
    }
    sub_2213CE4(TotalCost);
  }
LABEL_32:
  if ( isIconSizeChange && size >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      TotalCost = (int64_t)this->fields.itemList;
      if ( !TotalCost )
        goto LABEL_46;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)TotalCost,
               v29,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v32 = (ListViewItem_o *)Item;
        v33 = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v33
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v33 - 1] == PartyServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            TotalCost = (int64_t)v32->fields.viewObject;
            if ( !TotalCost )
              goto LABEL_46;
            ListViewObject__SetItemSeed((ListViewObject_o *)TotalCost, v32, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v29 )
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
  struct ListViewSort_o *sort; // x20
  ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos; // x1
  ListViewSort_o *v9; // x0
  bool v10; // w2
  int64_t monitor; // x3
  struct ListViewSort_BonusFilterInfo_array *v12; // x21
  const MethodInfo *v13; // x4

  if ( (byte_596C23F & 1) == 0 )
  {
    sub_2213A60(&Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C23F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( this->fields.isQuestStart )
    {
      if ( sort )
      {
        alignedBonusFilterInfos = this->fields.alignedBonusFilterInfos;
        v9 = this->fields.sort;
        v10 = 1;
        monitor = 0;
LABEL_13:
        ListViewSort__IncrementBonusFilter(v9, alignedBonusFilterInfos, v10, monitor, 0);
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
        return;
      }
    }
    else
    {
      v12 = this->fields.alignedBonusFilterInfos;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        monitor = (int64_t)Instance[8].monitor;
        v9 = sort;
        alignedBonusFilterInfos = v12;
        v10 = 0;
        goto LABEL_13;
      }
    }
    sub_2213CDC(Instance, v6);
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

  if ( (byte_596C240 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_PartyServantListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C240 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596C245 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_596C245 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v7);
  }
}


void PartyServantListViewManager__OnClickSortKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w20
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v8; // x22
  ServantSortSelectMenu_CallbackFunc_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596C243 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_PartyServantListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C243 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.isFatigue )
    {
      v5 = 7;
    }
    else
    {
      v5 = 3;
      if ( this->fields.isQuestStart )
      {
        if ( this->fields.isBuddyPoint )
          v5 = 8;
        else
          v5 = 3;
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_2213CDC(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, v5, sort, 0, v9, 0);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 Index; // x2

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_8;
  if ( partyServantSelectMenu->fields.modeKind )
    return;
  v4 = this;
  this = (PartyServantListViewManager_o *)this->fields.scrollView;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596C23E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C23E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C23C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_2213A60(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C23C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      PartyServantListViewObject__Init_41322688((PartyServantListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__RequestListObject_41321600(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C23D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_2213A60(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C23D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      PartyServantListViewObject__Init_41322092((PartyServantListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void PartyServantListViewManager__SetFilterButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t eventId; // w1
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_596C242 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596C242 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (eventId = this->fields.eventId,
        filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, eventId, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__SetMaxCostLabel(
        PartyServantListViewManager_o *this,
        int32_t maxCost,
        System_String_o *baseColorString,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UnityEngine_Component_o *maxCostLabel; // x0
  UILabel_o *v10; // x19
  System_String_o *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v12 = maxCost;
  if ( (byte_596C24D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C24D = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&maxCost, baseColorString);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  maxCostLabel = (UnityEngine_Component_o *)this->fields.maxCostLabel;
  if ( static_fields->InfinityCostValue > maxCost )
  {
    if ( maxCostLabel )
    {
      maxCostLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maxCostLabel, 0);
      if ( maxCostLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxCostLabel, 1, 0);
        maxCostLabel = (UnityEngine_Component_o *)this->fields.infinityCostLabel;
        if ( maxCostLabel )
        {
          maxCostLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maxCostLabel, 0);
          if ( maxCostLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxCostLabel, 0, 0);
            v10 = this->fields.maxCostLabel;
            v11 = System_Int32__ToString((int32_t)&v12, 0);
            maxCostLabel = (UnityEngine_Component_o *)System_String__Concat_75651716(baseColorString, v11, 0);
            if ( v10 )
            {
              UILabel__set_text(v10, (System_String_o *)maxCostLabel, 0);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_2213CDC(maxCostLabel, *(_QWORD *)&maxCost);
  }
  if ( !maxCostLabel )
    goto LABEL_17;
  maxCostLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maxCostLabel, 0);
  if ( !maxCostLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxCostLabel, 0, 0);
  maxCostLabel = (UnityEngine_Component_o *)this->fields.infinityCostLabel;
  if ( !maxCostLabel )
    goto LABEL_17;
  maxCostLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maxCostLabel, 0);
  if ( !maxCostLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxCostLabel, 1, 0);
}


void PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_41320688(this, mode, v10);
}


void PartyServantListViewManager__SetMode_41320688(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int64_t scrollView; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  int32_t v9; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x22
  int32_t v12; // w21
  int v13; // w25
  int64_t v14; // x23
  __int64 v15; // x2
  __int64 v16; // x8
  __int128 v17; // q0
  __int128 v18; // q1
  int v19; // w8
  __int64 v20; // x8
  __int128 v21; // q0
  __int128 v22; // q1
  int v23; // w8
  int size; // w8
  int32_t v25; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v27; // x23
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  PartyServantListViewManager_o *v30; // x0
  int32_t v31; // w1
  System_String_o *v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-70h]

  if ( (byte_596C23B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C23B = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (int64_t)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_47;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)scrollView, 0) )
  {
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_47;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 1, 0);
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_47;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
  }
  if ( mode <= 2 )
  {
    if ( mode == 1 )
    {
      v30 = this;
      v31 = 2;
    }
    else
    {
      if ( mode != 2 )
        return;
      v30 = this;
      v31 = 3;
    }
LABEL_45:
    PartyServantListViewManager__RequestListObject_41321600(v30, v31, v7);
    return;
  }
  switch ( mode )
  {
    case 3:
      v30 = this;
      v31 = 4;
      goto LABEL_45;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v8);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v5);
      if ( scrollView )
      {
        v9 = *(_DWORD *)(scrollView + 24);
        v10 = (System_Collections_Generic_List_object__o *)scrollView;
        if ( v9 < 1 )
        {
          v32 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
          this->fields.callbackCount = 1;
          UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v32, 0.0, 0);
        }
        else
        {
          v11 = 0;
          v12 = 0;
          v13 = -1;
          this->fields.callbackCount = v9;
          do
          {
            scrollView = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v10,
                                    v12,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
            if ( !scrollView )
              goto LABEL_47;
            scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v5);
            if ( !scrollView )
              goto LABEL_47;
            v14 = scrollView;
            if ( *(_QWORD *)(scrollView + 120) )
            {
              scrollView = PartyServantListViewItem__get_IsParty((PartyServantListViewItem_o *)scrollView, 0);
              if ( (scrollView & 1) == 0 )
              {
                if ( v13 < 0 )
                  goto LABEL_24;
                v16 = *(_QWORD *)(v14 + 120);
                if ( !v16 )
                  goto LABEL_47;
                v17 = *(_OWORD *)(v16 + 16);
                v18 = *(_OWORD *)(v16 + 32);
                v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v35.fields.currentCryptoKey = v17;
                *(_OWORD *)&v35.fields.fakeValue = v18;
                if ( !v19 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v15);
                v34 = v35;
                scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v34, 0);
                if ( v11 < scrollView )
                {
LABEL_24:
                  v20 = *(_QWORD *)(v14 + 120);
                  if ( !v20 )
                    goto LABEL_47;
                  v21 = *(_OWORD *)(v20 + 16);
                  v22 = *(_OWORD *)(v20 + 32);
                  v23 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                  *(_OWORD *)&v35.fields.currentCryptoKey = v21;
                  *(_OWORD *)&v35.fields.fakeValue = v22;
                  if ( !v23 )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v15);
                  v33 = v35;
                  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v33, 0);
                  v13 = v12;
                }
              }
            }
            size = v10->fields._size;
            ++v12;
          }
          while ( v12 < size );
          if ( size >= 1 )
          {
            v25 = 0;
            do
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v10,
                       v25,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
              v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v27, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
              if ( v13 == v25 )
              {
                if ( !Item )
                  goto LABEL_47;
                v29 = 5;
              }
              else
              {
                if ( !Item )
                  goto LABEL_47;
                v29 = 2;
              }
              PartyServantListViewObject__Init_41322092((PartyServantListViewObject_o *)Item, v29, v27, v28);
              ++v25;
            }
            while ( v25 < v10->fields._size );
          }
        }
        return;
      }
LABEL_47:
      sub_2213CDC(scrollView, v5);
  }
}


void PartyServantListViewManager__SetMode_41321548(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_41320688(this, mode, v10);
}


void PartyServantListViewManager__SetObjectItem(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596C23A & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewObject_TypeInfo);
    byte_596C23A = 1;
  }
  if ( obj
    && (naturalAligment = PartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PartyServantListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  PartyServantListViewObject__Init_41320564((PartyServantListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void PartyServantListViewManager__SetSortButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_596C246 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596C246 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_42;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_42;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
LABEL_42:
      sub_2213CDC(sort, v5);
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
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_596C231 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C231 = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, isAllDisp, addEmptyTarminal, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  this->fields.updateTime = NetworkManager__getTime(0);
}


void PartyServantListViewManager__Update(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  const MethodInfo *v9; // x1

  if ( (byte_596C248 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C248 = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      PartyServantListViewManager__UpdateDisp(this, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__UpdateCost(
        PartyServantListViewManager_o *this,
        int32_t cost,
        int32_t maxCost,
        int32_t restrictionTotalCost,
        const MethodInfo *method)
{
  _BOOL4 v9; // w8
  _BOOL4 v10; // w9
  bool v11; // w26
  __int64 *v12; // x8
  System_String_o *v13; // x22
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *splitCostLabel; // x23
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *selectCostLabel; // x20
  System_String_o *v24; // x19
  System_String_o *v25; // x1
  System_String_o *v26; // x0
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  v27 = cost;
  if ( (byte_596C234 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10629/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_2213A60(&StringLiteral_10627/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_2213A60(&StringLiteral_10628/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_2213A60(&StringLiteral_10626/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C234 = 1;
  }
  v9 = restrictionTotalCost != 0;
  v10 = maxCost > restrictionTotalCost;
  v11 = v9 && v10;
  if ( !v9 || !v10 )
    restrictionTotalCost = maxCost;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&cost, *(_QWORD *)&maxCost);
  if ( v11 )
    v12 = &StringLiteral_10628/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/;
  else
    v12 = &StringLiteral_10626/*"PARTY_ORGANIZATION_COST_COLOR"*/;
  v13 = LocalizationManager__Get((System_String_o *)*v12, 0);
  PartyServantListViewManager__SetMaxCostLabel(this, restrictionTotalCost, v13, v14);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10629/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v19 = System_String__Concat_75651716(v13, v18, 0);
  if ( !splitCostLabel )
    goto LABEL_20;
  UILabel__set_text(splitCostLabel, v19, 0);
  selectCostLabel = this->fields.selectCostLabel;
  if ( restrictionTotalCost >= cost )
  {
    v25 = System_Int32__ToString((int32_t)&v27, 0);
    v26 = v13;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10627/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    v25 = System_Int32__ToString((int32_t)&v27, 0);
    v26 = v24;
  }
  v19 = System_String__Concat_75651716(v26, v25, 0);
  if ( !selectCostLabel )
LABEL_20:
    sub_2213CDC(v19, v20);
  UILabel__set_text(selectCostLabel, v19, 0);
}


void PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596C249 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    byte_596C249 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      ObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v6.fields._current )
        sub_2213CDC(0, v5);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v6.fields._current, v5);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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
  void *monitor; // x24
  bool v9; // w25
  bool v10; // w26
  bool v11; // w27
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v17; // x1
  __int64 naturalAligment; // x9
  _OWORD *v19; // x8
  __int128 v20; // q0
  __int128 v21; // q1
  int v22; // w8
  int64_t v23; // x0
  __int64 v24; // x1
  int v25; // w8
  UserServantEntity_o *v26; // x0
  __int64 v27; // x1
  bool v28; // w8
  char v29; // w8
  UserServantEntity_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v33; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v34; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_596C24A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C24A = 1;
  }
  memset(&v35, 0, sizeof(v35));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_2213CDC(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = modeKind == 1;
  v10 = modeKind == 2;
  *(_OWORD *)&v35.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v11 = modeKind == 3;
  v35.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  v33 = 0;
  v34 = &v35;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      goto LABEL_24;
    v17 = PartyServantListViewItem_TypeInfo;
    naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v35.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (PartyServantListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
    {
      v12 = sub_221405C(v35.fields._current, PartyServantListViewItem_TypeInfo, v14, v15);
LABEL_24:
      sub_2213CDC(v12, v13);
    }
    v19 = v35.fields._current[7].monitor;
    LOBYTE(v35.fields._current[13].monitor) = v9;
    BYTE1(current[13].monitor) = v10;
    BYTE2(current[13].monitor) = v11;
    if ( !v19 )
      sub_2213CDC(v12, v17);
    v20 = v19[1];
    v21 = v19[2];
    v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v32.fields.currentCryptoKey = v20;
    *(_OWORD *)&v32.fields.fakeValue = v21;
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v14);
    v31 = v32;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
    v25 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v23 == (_QWORD)monitor;
    if ( v25 )
    {
      v26 = (UserServantEntity_o *)current[7].monitor;
      if ( !v26 )
        sub_2213CDC(0, v24);
      if ( UserServantEntity__IsLeave(v26, 0) )
      {
        v28 = 0;
      }
      else
      {
        v30 = (UserServantEntity_o *)current[7].monitor;
        if ( !v30 )
          sub_2213CDC(0, v27);
        v28 = !UserServantEntity__IsEventJoin(v30, 0);
      }
      v29 = v28;
    }
    else
    {
      v29 = 1;
    }
    BYTE4(current[13].monitor) = v29;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void PartyServantListViewManager__add_callbackFunc(
        PartyServantListViewManager_o *this,
        PartyServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  PartyServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C229 & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_596C229 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v6->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantListViewManager_o *)sub_221405C(v6, PartyServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PartyServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void PartyServantListViewManager__add_callbackFunc2(
        PartyServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C22B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C22B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_PartyServantListViewObject__o *PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C230 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C230 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(
                                 (PartyServantListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596C22F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C22F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
}


void PartyServantListViewManager__remove_callbackFunc(
        PartyServantListViewManager_o *this,
        PartyServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C22A & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_596C22A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyServantListViewManager_CallbackFunc_c *)v6->klass != PartyServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantListViewManager_o *)sub_221405C(v6, PartyServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PartyServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void PartyServantListViewManager__remove_callbackFunc2(
        PartyServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C22C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C22C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyServantListViewManager__get_IsFocus(v11, v12);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2004B6C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004B14;
}


System_IAsyncResult_o *PartyServantListViewManager_CallbackFunc__BeginInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596C24F & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewManager_ResultKind_TypeInfo);
    byte_596C24F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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


void PartyServantListViewManager___c__DisplayClass52_0___ctor(
        PartyServantListViewManager___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass52_0___CreateList_b__0(
        PartyServantListViewManager___c__DisplayClass52_0_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_T__o *grandSvtIdListInParty; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_596C250 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_PartyServantListViewManager___c__DisplayClass52_1__CreateList_b__1__);
    sub_2213A60(&PartyServantListViewManager___c__DisplayClass52_1_TypeInfo);
    byte_596C250 = 1;
  }
  v5 = sub_2213CCC(PartyServantListViewManager___c__DisplayClass52_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = userSvtEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)userSvtEntity, v8, v9, v10, v11, v12, v13);
  grandSvtIdListInParty = (System_Collections_Generic_List_T__o *)this->fields.grandSvtIdListInParty;
  v15 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_PartyServantListViewManager___c__DisplayClass52_1__CreateList_b__1__,
    0);
  return !BasicHelper__Any_int_(
            grandSvtIdListInParty,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
}


void PartyServantListViewManager___c__DisplayClass52_1___ctor(
        PartyServantListViewManager___c__DisplayClass52_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool PartyServantListViewManager___c__DisplayClass52_1___CreateList_b__1(
        PartyServantListViewManager___c__DisplayClass52_1_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyServantListViewManager___c__DisplayClass52_1_o *v4; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_596C251 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass52_1_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C251 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(this, *(_QWORD *)&svtId);
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0) == svtId;
}


void PartyServantListViewManager___c__DisplayClass52_2___ctor(
        PartyServantListViewManager___c__DisplayClass52_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass52_2___CreateList_b__2(
        PartyServantListViewManager___c__DisplayClass52_2_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  PartyServantListViewManager___c__DisplayClass52_2_o *v4; // x19
  __int128 v5; // q1
  struct UserServantGrandEntity_o *userGrandSvtEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_596C252 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass52_2_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C252 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_8;
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEntity, method);
  v8 = v9;
  this = (PartyServantListViewManager___c__DisplayClass52_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                  &v8,
                                                                  0);
  userGrandSvtEntity = v4->fields.userGrandSvtEntity;
  if ( !userGrandSvtEntity )
LABEL_8:
    sub_2213CDC(this, userSvtEntity);
  return this == (PartyServantListViewManager___c__DisplayClass52_2_o *)userGrandSvtEntity->fields.userSvtId;
}


void PartyServantListViewManager___c__DisplayClass52_3___ctor(
        PartyServantListViewManager___c__DisplayClass52_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass52_3___CreateList_b__3(
        PartyServantListViewManager___c__DisplayClass52_3_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  PartyServantListViewManager___c__DisplayClass52_3_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  struct PartyServantListViewManager___c__DisplayClass52_2_o *CS___8__locals1; // x8
  struct UserServantGrandEntity_o *userGrandSvtEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_596C253 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass52_3_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C253 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_12;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  this = (PartyServantListViewManager___c__DisplayClass52_3_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
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
    this = (PartyServantListViewManager___c__DisplayClass52_3_o *)v4->fields.grandGraphEntity;
    if ( this )
      return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, userSvtEntity, 0);
LABEL_12:
    sub_2213CDC(this, userSvtEntity);
  }
  return 0;
}


void PartyServantListViewManager___c__DisplayClass58_0___ctor(
        PartyServantListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyServantListViewManager___c__DisplayClass58_0___GetItemByUserServantID_b__0(
        PartyServantListViewManager___c__DisplayClass58_0_o *this,
        PartyServantListViewItem_o *e,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_596C254 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C254 = 1;
  }
  if ( !e )
    return 0;
  userServantEntity = e->fields.userServantEntity;
  if ( !userServantEntity )
    return 0;
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e, method);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v8, 0) == this->fields.id;
}