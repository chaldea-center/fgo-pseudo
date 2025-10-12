void PartyServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct PartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v8; // x20
  struct PartyServantListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v13; // x20
  struct PartyServantListViewManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C33726 & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&PartyServantListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_15589/*"WarBoardPartyServant"*/);
    sub_1C32C20(&StringLiteral_10569/*"PartyServant"*/);
    byte_4C33726 = 1;
  }
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_10569/*"PartyServant"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)PartyServantListViewManager_TypeInfo->static_fields, StringLiteral_10569/*"PartyServant"*/, v1, v2);
  v3 = StringLiteral_15589/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15589/*"WarBoardPartyServant"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->WAR_SORT_SAVE_KEY, v3, v5, v6);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v8 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v8, SORT_SAVE_KEY, 3, 0, 0);
  v9 = PartyServantListViewManager_TypeInfo->static_fields;
  v9->servantSortInfo = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->servantSortInfo, (int32_t)v8, v10, v11);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v13, WAR_SORT_SAVE_KEY, 3, 0, 0);
  v14 = PartyServantListViewManager_TypeInfo->static_fields;
  v14->warServantSortInfo = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->warServantSortInfo, (int32_t)v13, v15, v16);
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
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x4

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 83) = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  PartyServantListViewManager__ModifyList(this, 1, v10);
  PartyServantListViewManager__SetMode_34576192(this, 2, v11);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v12);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  PartyServantListViewManager_c *v11; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x27
  __int64 sort; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ListViewSort_o *v21; // x20
  Il2CppObject *Master_object; // x22
  _BOOL4 v23; // w8
  struct ListViewSort_o *v24; // x8
  struct ListViewSort_o *v25; // x8
  PartyOrganizationListViewItem_o *Member; // x25
  System_Collections_Generic_List_object__o *v27; // x26
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UICommonButton_o *bonusFilterKindButton; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t v33; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  __int64 v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Func_object__bool__o *v38; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Object_array *v40; // x22
  char v41; // w23
  System_Collections_Generic_List_object__o *v42; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x22
  __int64 v44; // x25
  __int64 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t current; // w1
  __int64 v49; // x23
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x0
  Il2CppObject *v54; // x25
  Il2CppClass *klass; // x8
  System_Func_object__bool__o *v56; // x25
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  System_Func_object__bool__o *v58; // x26
  System_Collections_Generic_IEnumerable_T__o *v59; // x0
  int32_t maxCost; // w25
  int32_t TotalCost; // w0
  const MethodInfo *v62; // x4
  int max_length; // w8
  int32_t v64; // w26
  bool isEnableRemove; // w23
  Il2CppObject *v66; // x25
  void *monitor; // x27
  Il2CppClass *v68; // x29
  _BOOL4 v69; // w8
  bool isGrandSameServant; // w24
  PartyServantListViewItem_o *v71; // x27
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v79; // x4
  const MethodInfo *v80; // x1
  char v81; // [xsp+3Ch] [xbp-D4h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+40h] [xbp-D0h]
  PartyOrganizationListViewItem_o *v83; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3370B & 1) == 0 )
  {
    sub_1C32C20(&CommonRestrictionMaster_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    sub_1C32C20(&PartyServantListViewManager_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__);
    sub_1C32C20(&PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager___c__DisplayClass51_2__CreateList_b__2__);
    sub_1C32C20(&PartyServantListViewManager___c__DisplayClass51_2_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager___c__DisplayClass51_3__CreateList_b__3__);
    sub_1C32C20(&PartyServantListViewManager___c__DisplayClass51_3_TypeInfo);
    sub_1C32C20(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C3370B = 1;
  }
  memset(&v91, 0, sizeof(v91));
  this->fields.lastPartyItem = partyItem;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.lastPartyItem,
    (int32_t)partyItem,
    (int32_t)partyItem,
    *(const MethodInfo **)&num);
  v11 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v11 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v11->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v9, v10);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_96;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v24 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v24 )
      goto LABEL_96;
    v24->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v15, v16);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v25 = *p_sort;
    if ( !*p_sort )
      goto LABEL_96;
    if ( v25->fields.sortKind == 28 )
      v25->fields.sortKind = 3;
    goto LABEL_20;
  }
  isQuestStart = setupInfo->fields.isQuestStart;
  sort = (__int64)this->fields.sort;
  this->fields.isQuestStart = isQuestStart;
  if ( !sort )
    goto LABEL_96;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v19, v20);
  v21 = this->fields.sort;
  sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
  if ( !v21 )
    goto LABEL_96;
  v21->fields.isBonusKind = (sort & 1) == 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = EventUpValSetupInfo__get_EventId(setupInfo, 0);
  if ( !Master_object )
    goto LABEL_96;
  sort = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, sort, 0);
  v23 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = sort & 1;
  if ( !v23 || (sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  if ( !partyItem )
    goto LABEL_96;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v83 = Member;
  if ( questRestrictionInfo )
  {
    QuestRestrictionInfo__SetDeckInfo_43314212(questRestrictionInfo, partyItem, num, 0);
    this->fields.isFatigue = questRestrictionInfo->fields.isFatigure;
    this->fields.eventId = questRestrictionInfo->fields.eventId;
    if ( !Member )
      goto LABEL_96;
    if ( Member->fields.isRestrictionGrandServant )
    {
      sort = (__int64)PartyOrganizationListViewItem__GetCanOrganizationGrandSvtIdList(Member, 0);
      bonusFilterKindButton = this->fields.bonusFilterKindButton;
      if ( !bonusFilterKindButton )
        goto LABEL_96;
      v27 = (System_Collections_Generic_List_object__o *)sort;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))bonusFilterKindButton->klass->vtable._14_SetState.methodPtr)(
        this->fields.bonusFilterKindButton,
        3,
        1,
        bonusFilterKindButton->klass->vtable._14_SetState.method);
      sort = (__int64)this->fields.bonusFilterKindLabel;
      if ( !sort )
        goto LABEL_96;
      v93.fields.r = 0.5;
      v93.fields.g = 0.5;
      v93.fields.b = 0.5;
      v93.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v93, 0);
      sort = (__int64)this->fields.filterButton;
      if ( !sort )
        goto LABEL_96;
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
        goto LABEL_96;
      v94.fields.r = 1.0;
      v94.fields.g = 1.0;
      v94.fields.b = 1.0;
      v94.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v94, 0);
    }
  }
  if ( !*p_sort )
    goto LABEL_96;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v28, v29);
  }
  if ( !Member )
    goto LABEL_96;
  if ( PartyOrganizationListViewItem__get_IsEmpty(Member, 0) )
  {
    v33 = 0;
  }
  else
  {
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !sort )
    goto LABEL_96;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                  (UserServantMaster_o *)sort,
                                                                  0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v27, 0) )
  {
    v35 = sub_1C32E6C(PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v35, 0);
    sort = (__int64)PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0);
    if ( !v35 )
      goto LABEL_96;
    *(_QWORD *)(v35 + 16) = sort;
    sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 16), sort, v36, v37);
    v38 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v35,
      Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__,
      0);
    v39 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v38,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
    v40 = System_Linq_Enumerable__ToArray_object_(
            v39,
            (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    v41 = 1;
  }
  else
  {
    v42 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( !v27 )
      goto LABEL_96;
    v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)sort;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v90,
      v27,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    v81 = 0;
    v91 = v90;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v91,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__) )
    {
      v44 = sub_1C32E6C(PartyServantListViewManager___c__DisplayClass51_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v44, 0);
      if ( !v44 )
        sub_1C32E7C(v45);
      current = (int32_t)v91.fields._current;
      *(_QWORD *)(v44 + 16) = v91.fields._current;
      sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 16), current, v46, v47);
      v49 = sub_1C32E6C(PartyServantListViewManager___c__DisplayClass51_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v49, 0);
      if ( !v49 )
        sub_1C32E7C(v50);
      *(_QWORD *)(v49 + 24) = v44;
      sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 24), v44, v51, v52);
      v54 = *(Il2CppObject **)(v49 + 24);
      if ( !v54 )
        sub_1C32E7C(v53);
      klass = v54[1].klass;
      if ( !klass )
        sub_1C32E7C(v53);
      if ( v33 == klass->_1.byval_arg.bits )
      {
        if ( !v43 )
          sub_1C32E7C(v53);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v43,
               (Il2CppObject **)(v49 + 16),
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_3396884 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
        {
          v56 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v56,
            (Il2CppObject *)v49,
            Method_PartyServantListViewManager___c__DisplayClass51_3__CreateList_b__3__,
            0);
          v57 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                 source,
                                                                 (System_Func_TSource__bool__o *)v56,
                                                                 (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
          if ( !v42 )
            sub_1C32E7C(v57);
          System_Collections_Generic_List_object___AddRange(
            v42,
            v57,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
        }
      }
      else
      {
        v58 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          v54,
          Method_PartyServantListViewManager___c__DisplayClass51_2__CreateList_b__2__,
          0);
        v59 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                               source,
                                                               (System_Func_TSource__bool__o *)v58,
                                                               (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        if ( !v42 )
          sub_1C32E7C(v59);
        v81 = 1;
        System_Collections_Generic_List_object___AddRange(
          v42,
          v59,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v91,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    v41 = v81;
    if ( !v42 )
      goto LABEL_96;
    p_sort = &this->fields.sort;
    v40 = System_Collections_Generic_List_object___ToArray(
            v42,
            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  }
  sort = (__int64)questRestrictionInfo;
  maxCost = partyItem->fields.maxCost;
  if ( questRestrictionInfo )
    sort = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
  if ( !this )
    goto LABEL_96;
  this->fields.restrictionTotalCost = sort;
  TotalCost = PartyListViewItem__GetTotalCost(partyItem, 0);
  PartyServantListViewManager__UpdateCost(this, TotalCost, maxCost, this->fields.restrictionTotalCost, v62);
  sort = (__int64)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_96;
  sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !*p_sort )
    goto LABEL_96;
  if ( !sort )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v40 )
    goto LABEL_96;
  max_length = v40->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    isEnableRemove = v41 & 1;
    while ( 1 )
    {
      if ( v64 >= (unsigned int)max_length )
        sub_1C32E84(sort);
      v66 = v40->m_Items[v64];
      if ( !v66 )
        break;
      v68 = v66[5].klass;
      monitor = v66[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v92.fields.currentCryptoKey = v68;
      *(_QWORD *)&v92.fields.fakeValue = monitor;
      v69 = v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v92, 0)
         && v83->fields.isRestrictionGrandServant;
      isGrandSameServant = v69;
      v71 = (PartyServantListViewItem_o *)sub_1C32E6C(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v71,
        v64,
        (UserServantEntity_o *)v66,
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
        break;
      v74 = *(_QWORD *)(sort + 16);
      v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v74 )
        break;
      v76 = *(int *)(sort + 24);
      if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v71,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = v74 + 8 * v76;
        *(_DWORD *)(sort + 24) = v76 + 1;
        *(_QWORD *)(v77 + 32) = v71;
        sub_1C32BC4((CGThumbnailListItem_o *)(v77 + 32), (int32_t)v71, v72, v73);
      }
      max_length = v40->max_length;
      if ( ++v64 >= max_length )
        goto LABEL_90;
    }
LABEL_96:
    sub_1C32E7C(sort);
  }
LABEL_90:
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_96;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v79);
  PartyServantListViewManager__SetFilterButtonImage(this, v80);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__CreateList_34570880(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  PartyServantListViewManager_c *v13; // x0
  struct ListViewSort_o *warServantSortInfo; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v16; // x26
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x29
  il2cpp_array_size_t max_length; // x8
  struct ListViewSort_o **p_sort; // x23
  int v22; // w9
  _BOOL8 v23; // x0
  Il2CppObject *current; // x22
  _BOOL8 v25; // x0
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  ListViewSort_o *v30; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct ListViewSort_o *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct ListViewSort_o *v40; // x8
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v43; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v45; // w28
  bool v46; // w22
  System_String_o *v47; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v49; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v51; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  il2cpp_array_size_t v56; // x8
  unsigned __int64 v57; // x25
  UserServantEntity_o *v58; // x28
  PartyServantListViewItem_o *v59; // x27
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v67; // x4
  const MethodInfo *v68; // x1
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  __int64 v74; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3370C & 1) == 0 )
  {
    sub_1C32C20(&CommonRestrictionMaster_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    sub_1C32C20(&PartyServantListViewManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C32C20(&StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C32C20(&StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C32C20(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C32C20(&StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_4C3370C = 1;
  }
  eventUpValInfo = 0;
  v74 = 0;
  memset(&v72, 0, sizeof(v72));
  this->fields.lastPartyItem = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.lastPartyItem, 0, num, *(const MethodInfo **)&tutorialMode);
  v13 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v13 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v13->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)warServantSortInfo, v11, v12);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_86;
  ListViewSort__Load(sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_86;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_86;
  max_length = memberItemList->max_length;
  p_sort = &this->fields.sort;
  if ( max_length )
  {
    LODWORD(v74) = 0;
    if ( (int)max_length >= 1 )
    {
      v22 = 0;
      while ( v22 < (unsigned int)max_length )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v22];
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v71,
              (System_Collections_Generic_List_object__o *)sort,
              (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v72 = v71;
            while ( 1 )
            {
              v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v72,
                      (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v23 )
                break;
              current = v72.fields._current;
              if ( !v72.fields._current )
                sub_1C32E7C(v23);
              if ( !v16 )
                sub_1C32E7C(v23);
              v25 = System_Collections_Generic_List_int___Contains(
                      v16,
                      (int32_t)v72.fields._current[1].klass,
                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v25 )
              {
                klass = (int32_t)current[1].klass;
                items = v16->fields._items;
                v28 = Method_System_Collections_Generic_List_int__Add__;
                ++v16->fields._version;
                if ( !items )
                  sub_1C32E7C(v25);
                size = v16->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v16,
                    klass,
                    *(const MethodInfo_377B798 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v16->fields._size = size + 1;
                  items->m_Items[size] = klass;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v72,
              (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        v22 = v74 + 1;
        LODWORD(v74) = v22;
        LODWORD(max_length) = memberItemList->max_length;
        if ( v22 >= (int)max_length )
          goto LABEL_31;
      }
LABEL_87:
      sub_1C32E84(sort);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v16 )
      goto LABEL_86;
    v30 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v16,
                               (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v30 )
      goto LABEL_86;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v30,
                           0,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v33, v34);
    v35 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0);
    if ( !v35 )
      goto LABEL_86;
    v35->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
    if ( questRestrictionInfo )
      goto LABEL_36;
  }
  else
  {
    v40 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v40 )
      goto LABEL_86;
    v40->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v17, v18);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v36, v37);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_86;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  maxCost = partyItem->fields.maxCost;
  v43 = OrganizationList;
  HIDWORD(v74) = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
    maxCost = HIDWORD(v74);
    v45 = TotalCostRestriction;
  }
  else
  {
    v45 = 0;
  }
  v46 = v45 != 0 && maxCost > v45;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v45 != 0 && maxCost > v45 )
    {
LABEL_55:
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
      HIDWORD(v74) = v45;
      goto LABEL_58;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v46 )
      goto LABEL_55;
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
LABEL_58:
  maxCostLabel = this->fields.maxCostLabel;
  v49 = System_Int32__ToString((int32_t)&v74 + 4, 0);
  sort = (ListViewSort_o *)System_String__Concat_63518544(v47, v49, 0);
  if ( !maxCostLabel )
    goto LABEL_86;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  sort = (ListViewSort_o *)System_String__Concat_63518544(v47, v51, 0);
  if ( !splitCostLabel )
    goto LABEL_86;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v74) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v47 = v54;
  }
  LODWORD(v74) = cost;
  v55 = System_Int32__ToString((int32_t)&v74, 0);
  sort = (ListViewSort_o *)System_String__Concat_63518544(v47, v55, 0);
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
  if ( !v43 )
    goto LABEL_86;
  v56 = v43->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0;
    while ( v57 < (unsigned int)v56 )
    {
      v58 = v43->m_Items[v57];
      v59 = (PartyServantListViewItem_o *)sub_1C32E6C(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_34544784(
        v59,
        v57,
        v58,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        0);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_86;
      v62 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v62 )
        goto LABEL_86;
      v64 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v59,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = v62 + 8 * v64;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v64 + 1;
        *(_QWORD *)(v65 + 32) = v59;
        sub_1C32BC4((CGThumbnailListItem_o *)(v65 + 32), (int32_t)v59, v60, v61);
      }
      LODWORD(v56) = v43->max_length;
      if ( (__int64)++v57 >= (int)v56 )
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_86:
    sub_1C32E7C(sort);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v67);
  PartyServantListViewManager__SetFilterButtonImage(this, v68);
}


void PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  PartyServantListViewManager_c *v1; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C33706 & 1) == 0 )
  {
    sub_1C32C20(&PartyServantListViewManager_TypeInfo);
    byte_4C33706 = 1;
  }
  v1 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v1 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v1->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0) )
  {
    sub_1C32E7C(servantSortInfo);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.updateTime = -1;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
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

  if ( (byte_4C3371A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3371A = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C32E7C(v9);
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

  if ( (byte_4C3371D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager_EndCloseSelectSortKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3371D = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C32E7C(v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v7, 0);
}


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

  if ( (byte_4C33720 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C33720 = 1;
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
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C32E7C(itemList);
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
  if ( (byte_4C33725 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C33725 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_1C32E7C(this);
    v9 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v9,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C3370F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C3370F = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  PartyServantListViewItem_o *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C33710 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
    sub_1C32C20(&System_Func_PartyServantListViewItem__bool__TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__);
    sub_1C32C20(&PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_4C33710 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5[1].klass = (Il2CppClass *)id;
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                (System_Collections_IEnumerable_o *)result,
                                                                (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_PartyServantListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      v5,
      Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__,
      0);
    return (PartyServantListViewItem_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                           v8,
                                           (System_Func_TSource__bool__o *)v9,
                                           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
  }
  return result;
}


int32_t PartyServantListViewManager__GetModeKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_1C32E7C(this);
  return partyServantSelectMenu->fields.modeKind;
}


PartyServantListViewItem_o *PartyServantListViewManager__GetPartyServantListViewItem(
        PartyServantListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _OWORD *monitor; // x8
  __int128 v10; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4C33724 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C33724 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v14.fields._list = *(_OWORD *)&v13.fields.currentCryptoKey;
  v14.fields._current = (Il2CppObject *)v13.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( v14.fields._current )
    {
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( v14.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (PartyServantListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PartyServantListViewItem_TypeInfo )
      {
        monitor = v14.fields._current[7].monitor;
        if ( !monitor )
          sub_1C32E7C(v6);
        v10 = monitor[2];
        *(_OWORD *)&v13.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v13.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v12 = v13;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C33712 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C33712 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 337) )
      {
        if ( *(_BYTE *)(itemList + 233) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C32E7C(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)choiceList, 0, v9, v10);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C33711 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C33711 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 336) )
      {
        if ( *(_BYTE *)(itemList + 232) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C32E7C(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)lockList, 0, v9, v10);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  PartyServantListViewManager_c *v1; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C33707 & 1) == 0 )
  {
    sub_1C32C20(&PartyServantListViewManager_TypeInfo);
    byte_4C33707 = 1;
  }
  v1 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v1 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v1->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0) )
  {
    sub_1C32E7C(servantSortInfo);
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
  const MethodInfo *v6; // x4
  struct PartyListViewItem_o *v7; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v10; // x21
  unsigned int v11; // w29
  int64_t v12; // x28
  __int64 v13; // x8
  UserServantEntity_o **v14; // x28
  __int64 v15; // t1
  __int128 v16; // q0
  int64_t v17; // x22
  int32_t v18; // w24
  PartyServantListViewItem_o *v19; // x23
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  int32_t v23; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v25; // x21
  __int64 v26; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v29; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-80h]

  if ( (byte_4C3370E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3370E = 1;
  }
  lastPartyItem = this->fields.lastPartyItem;
  if ( lastPartyItem )
  {
    TotalCost = PartyListViewItem__GetTotalCost(lastPartyItem, 0);
    v7 = this->fields.lastPartyItem;
    if ( !v7 )
      goto LABEL_47;
    PartyServantListViewManager__UpdateCost(this, TotalCost, v7->fields.maxCost, this->fields.restrictionTotalCost, v6);
  }
  TotalCost = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TotalCost
    || (TotalCost = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)TotalCost,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (TotalCost = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)TotalCost, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
LABEL_47:
    sub_1C32E7C(TotalCost);
  }
  size = itemList->fields._size;
  v29 = *(_QWORD *)(TotalCost + 24);
  v10 = TotalCost;
  if ( (int)v29 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = v10 + 8LL * (int)v11;
      v15 = *(_QWORD *)(v12 + 32);
      v14 = (UserServantEntity_o **)(v12 + 32);
      v13 = v15;
      if ( !v15 )
        goto LABEL_47;
      v16 = *(_OWORD *)(v13 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v31, 0);
      if ( size >= 1 )
      {
        v17 = TotalCost;
        v18 = 0;
        while ( 1 )
        {
          TotalCost = (int64_t)this->fields.itemList;
          if ( !TotalCost )
            goto LABEL_47;
          TotalCost = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)TotalCost,
                                 v18,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !TotalCost )
            goto LABEL_47;
          v19 = (PartyServantListViewItem_o *)TotalCost;
          naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)TotalCost + 304LL) < (unsigned int)naturalAligment
            || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)TotalCost + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_47;
          }
          v21 = *(_QWORD *)(TotalCost + 120);
          if ( v21 )
          {
            v22 = *(_OWORD *)(v21 + 32);
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
            *(_OWORD *)&v32.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v32;
            TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v30, 0);
            if ( TotalCost == v17 )
              break;
          }
          if ( size == ++v18 )
            goto LABEL_30;
        }
        if ( v11 >= *(_DWORD *)(v10 + 24) )
          goto LABEL_32;
        PartyServantListViewItem__ModifyItem(v19, *v14, 0);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v19, 0);
          PartyServantListViewItem__ModifyChoiceItem(v19, 0);
        }
      }
LABEL_30:
      if ( ++v11 == (_DWORD)v29 )
        break;
      if ( v11 >= *(_DWORD *)(v10 + 24) )
LABEL_32:
        sub_1C32E84(TotalCost);
    }
  }
  if ( size >= 1 && isIconSizeChange )
  {
    v23 = 0;
    while ( 1 )
    {
      TotalCost = (int64_t)this->fields.itemList;
      if ( !TotalCost )
        goto LABEL_47;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)TotalCost,
               v23,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v25 = (ListViewItem_o *)Item;
        v26 = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v26
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v26 - 1] == PartyServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            TotalCost = (int64_t)v25->fields.viewObject;
            if ( !TotalCost )
              goto LABEL_47;
            ListViewObject__SetItemSeed((ListViewObject_o *)TotalCost, v25, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v23 )
        return;
    }
  }
}


void PartyServantListViewManager__OnClickBonusFilterKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct ListViewSort_o *sort; // x21
  struct ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos; // x20
  bool v8; // w2
  ListViewSort_o *v9; // x0
  ListViewSort_BonusFilterInfo_array *v10; // x1
  int64_t klass; // x3
  const MethodInfo *v12; // x4

  if ( (byte_4C33718 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33718 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    alignedBonusFilterInfos = this->fields.alignedBonusFilterInfos;
    if ( this->fields.isQuestStart )
    {
      if ( sort )
      {
        v8 = 1;
        v9 = this->fields.sort;
        v10 = this->fields.alignedBonusFilterInfos;
        klass = 0;
LABEL_13:
        ListViewSort__IncrementBonusFilter(v9, v10, v8, klass, 0);
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v12);
        return;
      }
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        klass = (int64_t)Instance[7].klass;
        v9 = sort;
        v10 = alignedBonusFilterInfos;
        v8 = 0;
        goto LABEL_13;
      }
    }
    sub_1C32E7C(Instance);
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

  if ( (byte_4C33719 & 1) == 0 )
  {
    sub_1C32C20(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager_EndSelectFilterKind__);
    sub_1C32C20(&Method_PartyServantListViewManager_OnClickFilterKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C33719 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C32E7C(v9);
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
  const MethodInfo *v3; // x3
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C32E7C(v6);
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
  const MethodInfo *v6; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C3371E & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C3371E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(v5);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v6);
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

  if ( (byte_4C3371C & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager_EndSelectSortKind__);
    sub_1C32C20(&Method_PartyServantListViewManager_OnClickSortKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3371C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v9 )
      sub_1C32E7C(v11);
    CommonUI__OpenServantSortSelectMenu(v9, v5, sort, 0, v10, 0);
  }
}


void PartyServantListViewManager__OnLongPushListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8
  CGThumbnailListItem_o *v4; // x20
  CGThumbnailListItem_c *klass; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  unsigned int Index; // w0

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_8;
  if ( partyServantSelectMenu->fields.modeKind )
    return;
  v4 = (CGThumbnailListItem_o *)this;
  this = (PartyServantListViewManager_o *)this->fields.scrollView;
  if ( !this )
LABEL_8:
    sub_1C32E7C(this);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  klass = v4[3].klass;
  v4[3].klass = 0;
  sub_1C32BC4(v4 + 3, 0, v7, v8);
  if ( klass )
  {
    if ( obj )
    {
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(Il2CppClass *, __int64, _QWORD, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        3,
        Index,
        *(_QWORD *)&klass->_1.byval_arg.bits);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C33717 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33717 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C33715 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C32C20(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C33715 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v11);
      PartyServantListViewObject__Init_34578204((PartyServantListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__RequestListObject_34577092(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C33716 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C32C20(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C33716 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      PartyServantListViewObject__Init_34577596((PartyServantListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void PartyServantListViewManager__SetFilterButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v5; // x8

  if ( (byte_4C3371B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17485/*"btn_filter_on"*/);
    sub_1C32C20(&StringLiteral_17484/*"btn_filter"*/);
    byte_4C3371B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0),
        !filterSprite) )
  {
    sub_1C32E7C(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17484/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17485/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyServantListViewManager__SetMode_34576192(this, mode, v6);
}


void PartyServantListViewManager__SetMode_34576192(
        PartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int64_t scrollView; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  int32_t v9; // w1
  int32_t v10; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x22
  int32_t v13; // w21
  int v14; // w25
  const MethodInfo *v15; // x1
  int64_t v16; // x23
  __int64 v17; // x8
  __int128 v18; // q0
  __int64 v19; // x8
  __int128 v20; // q0
  int size; // w8
  int32_t v22; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-80h]

  if ( (byte_4C33714 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C33714 = 1;
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
      PartyServantListViewManager__RequestListObject_34577092(this, v9, v7);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v8);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v6);
      if ( !scrollView )
        goto LABEL_40;
      v10 = *(_DWORD *)(scrollView + 24);
      v11 = (System_Collections_Generic_List_object__o *)scrollView;
      if ( v10 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
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
                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
          if ( !scrollView )
            goto LABEL_40;
          scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v15);
          if ( !scrollView )
            goto LABEL_40;
          v16 = scrollView;
          if ( *(_QWORD *)(scrollView + 120) )
          {
            scrollView = PartyServantListViewItem__get_IsParty((PartyServantListViewItem_o *)scrollView, 0);
            if ( (scrollView & 1) == 0 )
            {
              if ( v14 < 0 )
                goto LABEL_26;
              v17 = *(_QWORD *)(v16 + 120);
              if ( !v17 )
                goto LABEL_40;
              v18 = *(_OWORD *)(v17 + 32);
              *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
              *(_OWORD *)&v29.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v28 = v29;
              scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v28, 0);
              if ( v12 < scrollView )
              {
LABEL_26:
                v19 = *(_QWORD *)(v16 + 120);
                if ( !v19 )
                  goto LABEL_40;
                v20 = *(_OWORD *)(v19 + 32);
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
                *(_OWORD *)&v29.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v27 = v29;
                v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v27, 0);
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
          v22 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v11,
                     v22,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
            v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(v24, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            if ( v14 == v22 )
              v26 = 5;
            else
              v26 = 2;
            PartyServantListViewObject__Init_34577596((PartyServantListViewObject_o *)Item, v26, v24, v25);
            if ( ++v22 >= v11->fields._size )
              return;
          }
LABEL_40:
          sub_1C32E7C(scrollView);
        }
      }
      return;
    default:
      return;
  }
}


void PartyServantListViewManager__SetMode_34577040(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyServantListViewManager__SetMode_34576192(this, mode, v6);
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
  if ( (byte_4C33713 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_1C32C20(&PartyServantListViewObject_TypeInfo);
    byte_4C33713 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyServantListViewObject__Init_34576068((PartyServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void PartyServantListViewManager__SetSortButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v16; // x20

  if ( (byte_4C3371F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17521/*"btn_sort_up"*/);
    sub_1C32C20(&StringLiteral_17619/*"btn_txt_up"*/);
    sub_1C32C20(&StringLiteral_17570/*"btn_txt_new"*/);
    sub_1C32C20(&StringLiteral_17560/*"btn_txt_down"*/);
    sub_1C32C20(&StringLiteral_17577/*"btn_txt_old"*/);
    sub_1C32C20(&StringLiteral_17518/*"btn_sort_down"*/);
    byte_4C3371F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_42;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
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
    v7 = this->fields.sort;
    if ( !v7 )
      goto LABEL_42;
    sortKind = v7->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17577/*"btn_txt_old"*/ : &StringLiteral_17570/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v11 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
      v12 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17619/*"btn_txt_up"*/ : &StringLiteral_17560/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v11 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
      v12 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
    }
    if ( v10->fields.isAscendingOrder )
      v14 = v11;
    else
      v14 = v12;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
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
      v16 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0);
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)sort, 0);
        return;
      }
LABEL_42:
      sub_1C32E7C(sort);
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
  if ( (byte_4C3370A & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3370A = 1;
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

  if ( (byte_4C33721 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33721 = 1;
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
  UILabel_o *splitCostLabel; // x21
  System_String_o *v14; // x0
  UILabel_o *selectCostLabel; // x19
  System_String_o *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v17 = maxCost;
  v18 = cost;
  if ( (byte_4C3370D & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C32C20(&StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C32C20(&StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C32C20(&StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3370D = 1;
  }
  v8 = restrictionTotalCost != 0 && maxCost > restrictionTotalCost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v8 )
      goto LABEL_5;
LABEL_7:
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    goto LABEL_8;
  }
  if ( !v8 )
    goto LABEL_7;
LABEL_5:
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
  v17 = restrictionTotalCost;
LABEL_8:
  maxCostLabel = this->fields.maxCostLabel;
  v11 = System_Int32__ToString((int32_t)&v17, 0);
  v12 = System_String__Concat_63518544(v9, v11, 0);
  if ( !maxCostLabel )
    goto LABEL_18;
  UILabel__set_text(maxCostLabel, v12, 0);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v12 = System_String__Concat_63518544(v9, v14, 0);
  if ( !splitCostLabel )
    goto LABEL_18;
  UILabel__set_text(splitCostLabel, v12, 0);
  selectCostLabel = this->fields.selectCostLabel;
  if ( v18 > v17 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v16 = System_Int32__ToString((int32_t)&v18, 0);
  v12 = System_String__Concat_63518544(v9, v16, 0);
  if ( !selectCostLabel )
LABEL_18:
    sub_1C32E7C(v12);
  UILabel__set_text(selectCostLabel, v12, 0);
}


void PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C33722 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    byte_4C33722 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C32E7C(0);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C32E7C(0);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void PartyServantListViewManager__UpdateItemState(
        PartyServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  void *monitor; // x22
  bool v8; // w25
  bool v9; // w26
  bool v10; // w27
  __int64 v11; // x0
  Il2CppObject *current; // x19
  __int64 naturalAligment; // x9
  _OWORD *v14; // x8
  __int128 v15; // q0
  int64_t v16; // x0
  int v17; // w8
  UserServantEntity_o *v18; // x0
  bool v19; // w8
  UserServantEntity_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4C33723 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C33723 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v6 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C32E7C(SelfUserGame);
  }
  monitor = v6[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    SelfUserGame,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v8 = modeKind == 1;
  v9 = modeKind == 2;
  v10 = modeKind == 3;
  *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
  v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      goto LABEL_23;
    naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v23.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (PartyServantListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
    {
      v11 = sub_1C3313C(v23.fields._current);
LABEL_23:
      sub_1C32E7C(v11);
    }
    v14 = v23.fields._current[7].monitor;
    LOBYTE(v23.fields._current[15].klass) = v8;
    BYTE1(current[15].klass) = v9;
    BYTE2(current[15].klass) = v10;
    if ( !v14 )
      sub_1C32E7C(v11);
    v15 = v14[2];
    *(_OWORD *)&v22.fields.currentCryptoKey = v14[1];
    *(_OWORD *)&v22.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v21 = v22;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v21, 0);
    v17 = BYTE2(current[15].klass);
    BYTE3(current[15].klass) = v16 == (_QWORD)monitor;
    if ( v17 )
    {
      v18 = (UserServantEntity_o *)current[7].monitor;
      if ( !v18 )
        sub_1C32E7C(0);
      if ( UserServantEntity__IsLeave(v18, 0) )
      {
        v19 = 0;
      }
      else
      {
        v20 = (UserServantEntity_o *)current[7].monitor;
        if ( !v20 )
          sub_1C32E7C(0);
        v19 = !UserServantEntity__IsEventJoin(v20, 0);
      }
    }
    else
    {
      v19 = 1;
    }
    BYTE4(current[15].klass) = v19;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C33702 & 1) == 0 )
  {
    sub_1C32C20(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C33702 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C3313C(v7);
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

  if ( (byte_4C33704 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C33704 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C3313C(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *PartyServantListViewManager__get_ClippingObjectList(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C33709 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33709 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C32E7C(0);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)Component_object, v8);
      if ( !Item )
        sub_1C32E7C(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43718444((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C32E7C(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C32E7C(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C32E7C(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C33708 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33708 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C33703 & 1) == 0 )
  {
    sub_1C32C20(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C33703 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C3313C(v7);
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

  if ( (byte_4C33705 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C33705 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C3313C(v7);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A720D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7207C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *PartyServantListViewManager_CallbackFunc__BeginInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C33727 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&PartyServantListViewManager_ResultKind_TypeInfo);
    byte_4C33727 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             PartyServantListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


void PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_T__o *grandSvtIdListInParty; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4C33728 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__);
    sub_1C32C20(&PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
    byte_4C33728 = 1;
  }
  v5 = sub_1C32E6C(PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = userSvtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)userSvtEntity, v7, v8);
  grandSvtIdListInParty = (System_Collections_Generic_List_T__o *)this->fields.grandSvtIdListInParty;
  v10 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__,
    0);
  return !BasicHelper__Any_int_(
            grandSvtIdListInParty,
            (System_Func_T__bool__o *)v10,
            (const MethodInfo_30C6464 *)Method_BasicHelper_Any_int___);
}


void PartyServantListViewManager___c__DisplayClass51_1___ctor(
        PartyServantListViewManager___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  if ( (byte_4C33729 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_1_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33729 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C32E7C(this);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v9, 0) == svtId;
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
  if ( (byte_4C3372A & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_2_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3372A = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_8;
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this = (PartyServantListViewManager___c__DisplayClass51_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                                  &v8,
                                                                  0);
  userGrandSvtEntity = v4->fields.userGrandSvtEntity;
  if ( !userGrandSvtEntity )
LABEL_8:
    sub_1C32E7C(this);
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
  if ( (byte_4C3372B & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_3_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3372B = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_12;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (PartyServantListViewManager___c__DisplayClass51_3_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3372C & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3372C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v8, 0) == this->fields.id;
}