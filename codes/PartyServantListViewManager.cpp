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

  if ( (byte_4C23056 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&PartyServantListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_15588/*"WarBoardPartyServant"*/);
    sub_1C2D490(&StringLiteral_10563/*"PartyServant"*/);
    byte_4C23056 = 1;
  }
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_10563/*"PartyServant"*/;
  sub_1C2D434((CGThumbnailListItem_o *)PartyServantListViewManager_TypeInfo->static_fields, StringLiteral_10563/*"PartyServant"*/, v1, v2);
  v3 = StringLiteral_15588/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15588/*"WarBoardPartyServant"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->WAR_SORT_SAVE_KEY, v3, v5, v6);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v8 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v8, SORT_SAVE_KEY, 3, 0, 0);
  v9 = PartyServantListViewManager_TypeInfo->static_fields;
  v9->servantSortInfo = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->servantSortInfo, (int32_t)v8, v10, v11);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v13, WAR_SORT_SAVE_KEY, 3, 0, 0);
  v14 = PartyServantListViewManager_TypeInfo->static_fields;
  v14->warServantSortInfo = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v14->warServantSortInfo, (int32_t)v13, v15, v16);
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
  sub_1C2D434((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  PartyServantListViewManager__ModifyList(this, 1, v10);
  PartyServantListViewManager__SetMode_34461204(this, 2, v11);
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
  __int64 v14; // x1
  __int64 sort; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ListViewSort_o *v22; // x20
  Il2CppObject *Master_object; // x22
  _BOOL4 v24; // w8
  struct ListViewSort_o *v25; // x8
  struct ListViewSort_o *v26; // x8
  PartyOrganizationListViewItem_o *Member; // x25
  System_Collections_Generic_List_object__o *v28; // x26
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UICommonButton_o *bonusFilterKindButton; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t v34; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  __int64 v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Func_object__bool__o *v39; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Object_array *v41; // x22
  char v42; // w23
  System_Collections_Generic_List_object__o *v43; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x22
  __int64 v45; // x25
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t current; // w1
  __int64 v51; // x23
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  __int64 v57; // x1
  Il2CppObject *v58; // x25
  Il2CppClass *klass; // x8
  System_Func_object__bool__o *v60; // x25
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  System_Func_object__bool__o *v62; // x26
  System_Collections_Generic_IEnumerable_T__o *v63; // x0
  int32_t maxCost; // w25
  int32_t TotalCost; // w0
  const MethodInfo *v66; // x4
  __int64 v67; // x2
  int max_length; // w8
  int32_t v69; // w26
  bool isEnableRemove; // w23
  Il2CppObject *v71; // x25
  void *monitor; // x27
  Il2CppClass *v73; // x29
  _BOOL4 v74; // w8
  bool isGrandSameServant; // w24
  PartyServantListViewItem_o *v76; // x27
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v84; // x4
  const MethodInfo *v85; // x1
  char v86; // [xsp+3Ch] [xbp-D4h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+40h] [xbp-D0h]
  PartyOrganizationListViewItem_o *v88; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2303B & 1) == 0 )
  {
    sub_1C2D490(&CommonRestrictionMaster_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    sub_1C2D490(&PartyServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__);
    sub_1C2D490(&PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager___c__DisplayClass51_2__CreateList_b__2__);
    sub_1C2D490(&PartyServantListViewManager___c__DisplayClass51_2_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager___c__DisplayClass51_3__CreateList_b__3__);
    sub_1C2D490(&PartyServantListViewManager___c__DisplayClass51_3_TypeInfo);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C2303B = 1;
  }
  memset(&v96, 0, sizeof(v96));
  this->fields.lastPartyItem = partyItem;
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v9, v10);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_96;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v25 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v25 )
      goto LABEL_96;
    v25->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v16, v17);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v26 = *p_sort;
    if ( !*p_sort )
      goto LABEL_96;
    if ( v26->fields.sortKind == 28 )
      v26->fields.sortKind = 3;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v20, v21);
  v22 = this->fields.sort;
  sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
  if ( !v22 )
    goto LABEL_96;
  v22->fields.isBonusKind = (sort & 1) == 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = EventUpValSetupInfo__get_EventId(setupInfo, 0);
  if ( !Master_object )
    goto LABEL_96;
  sort = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, sort, 0);
  v24 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = sort & 1;
  if ( !v24 || (sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  if ( !partyItem )
    goto LABEL_96;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v88 = Member;
  if ( questRestrictionInfo )
  {
    QuestRestrictionInfo__SetDeckInfo_43180644(questRestrictionInfo, partyItem, num, 0);
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
      v28 = (System_Collections_Generic_List_object__o *)sort;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))bonusFilterKindButton->klass->vtable._14_SetState.methodPtr)(
        this->fields.bonusFilterKindButton,
        3,
        1,
        bonusFilterKindButton->klass->vtable._14_SetState.method);
      sort = (__int64)this->fields.bonusFilterKindLabel;
      if ( !sort )
        goto LABEL_96;
      v98.fields.r = 0.5;
      v98.fields.g = 0.5;
      v98.fields.b = 0.5;
      v98.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v98, 0);
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
      v99.fields.r = 1.0;
      v99.fields.g = 1.0;
      v99.fields.b = 1.0;
      v99.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sort, v99, 0);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v29, v30);
  }
  if ( !Member )
    goto LABEL_96;
  if ( PartyOrganizationListViewItem__get_IsEmpty(Member, 0) )
  {
    v34 = 0;
  }
  else
  {
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !sort )
    goto LABEL_96;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                  (UserServantMaster_o *)sort,
                                                                  0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v28, 0) )
  {
    v36 = sub_1C2D6DC(PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0);
    sort = (__int64)PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0);
    if ( !v36 )
      goto LABEL_96;
    *(_QWORD *)(v36 + 16) = sort;
    sub_1C2D434((CGThumbnailListItem_o *)(v36 + 16), sort, v37, v38);
    v39 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v39,
      (Il2CppObject *)v36,
      Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__,
      0);
    v40 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v39,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
    v41 = System_Linq_Enumerable__ToArray_object_(
            v40,
            (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    v42 = 1;
  }
  else
  {
    v43 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v43,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( !v28 )
      goto LABEL_96;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)sort;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v95,
      v28,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    v86 = 0;
    v96 = v95;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v96,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__) )
    {
      v45 = sub_1C2D6DC(PartyServantListViewManager___c__DisplayClass51_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v45, 0);
      if ( !v45 )
        sub_1C2D6EC(v46, v47);
      current = (int32_t)v96.fields._current;
      *(_QWORD *)(v45 + 16) = v96.fields._current;
      sub_1C2D434((CGThumbnailListItem_o *)(v45 + 16), current, v48, v49);
      v51 = sub_1C2D6DC(PartyServantListViewManager___c__DisplayClass51_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v51, 0);
      if ( !v51 )
        sub_1C2D6EC(v52, v53);
      *(_QWORD *)(v51 + 24) = v45;
      sub_1C2D434((CGThumbnailListItem_o *)(v51 + 24), v45, v54, v55);
      v58 = *(Il2CppObject **)(v51 + 24);
      if ( !v58 )
        sub_1C2D6EC(v56, v57);
      klass = v58[1].klass;
      if ( !klass )
        sub_1C2D6EC(v56, v57);
      if ( v34 == klass->_1.byval_arg.bits )
      {
        if ( !v44 )
          sub_1C2D6EC(v56, v57);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v44,
               (Il2CppObject **)(v51 + 16),
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_3387DE4 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
        {
          v60 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v60,
            (Il2CppObject *)v51,
            Method_PartyServantListViewManager___c__DisplayClass51_3__CreateList_b__3__,
            0);
          v61 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                 source,
                                                                 (System_Func_TSource__bool__o *)v60,
                                                                 (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
          if ( !v43 )
            sub_1C2D6EC(v61, v61);
          System_Collections_Generic_List_object___AddRange(
            v43,
            v61,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
        }
      }
      else
      {
        v62 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v62,
          v58,
          Method_PartyServantListViewManager___c__DisplayClass51_2__CreateList_b__2__,
          0);
        v63 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                               source,
                                                               (System_Func_TSource__bool__o *)v62,
                                                               (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        if ( !v43 )
          sub_1C2D6EC(v63, v63);
        v86 = 1;
        System_Collections_Generic_List_object___AddRange(
          v43,
          v63,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v96,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    v42 = v86;
    if ( !v43 )
      goto LABEL_96;
    p_sort = &this->fields.sort;
    v41 = System_Collections_Generic_List_object___ToArray(
            v43,
            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  }
  sort = (__int64)questRestrictionInfo;
  maxCost = partyItem->fields.maxCost;
  if ( questRestrictionInfo )
    sort = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
  if ( !this )
    goto LABEL_96;
  this->fields.restrictionTotalCost = sort;
  TotalCost = PartyListViewItem__GetTotalCost(partyItem, 0);
  PartyServantListViewManager__UpdateCost(this, TotalCost, maxCost, this->fields.restrictionTotalCost, v66);
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
  if ( !v41 )
    goto LABEL_96;
  max_length = v41->max_length;
  if ( max_length >= 1 )
  {
    v69 = 0;
    isEnableRemove = v42 & 1;
    while ( 1 )
    {
      if ( v69 >= (unsigned int)max_length )
        sub_1C2D6F4(sort, v14, v67);
      v71 = v41->m_Items[v69];
      if ( !v71 )
        break;
      v73 = v71[5].klass;
      monitor = v71[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v97.fields.currentCryptoKey = v73;
      *(_QWORD *)&v97.fields.fakeValue = monitor;
      v74 = v34 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v97, 0)
         && v88->fields.isRestrictionGrandServant;
      isGrandSameServant = v74;
      v76 = (PartyServantListViewItem_o *)sub_1C2D6DC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v76,
        v69,
        (UserServantEntity_o *)v71,
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
      v79 = *(_QWORD *)(sort + 16);
      v80 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v79 )
        break;
      v81 = *(int *)(sort + 24);
      if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v76,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = v79 + 8 * v81;
        *(_DWORD *)(sort + 24) = v81 + 1;
        *(_QWORD *)(v82 + 32) = v76;
        sub_1C2D434((CGThumbnailListItem_o *)(v82 + 32), (int32_t)v76, v77, v78);
      }
      max_length = v41->max_length;
      if ( ++v69 >= max_length )
        goto LABEL_90;
    }
LABEL_96:
    sub_1C2D6EC(sort, v14);
  }
LABEL_90:
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_96;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v84);
  PartyServantListViewManager__SetFilterButtonImage(this, v85);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__CreateList_34455892(
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
  __int64 v15; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v17; // x26
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x29
  il2cpp_array_size_t max_length; // x8
  struct ListViewSort_o **p_sort; // x23
  int v23; // w9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x22
  _BOOL8 v27; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  ListViewSort_o *v32; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct ListViewSort_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct ListViewSort_o *v42; // x8
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v45; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v47; // w28
  bool v48; // w22
  System_String_o *v49; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v51; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v53; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  il2cpp_array_size_t v58; // x8
  unsigned __int64 v59; // x25
  UserServantEntity_o *v60; // x28
  PartyServantListViewItem_o *v61; // x27
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v69; // x4
  const MethodInfo *v70; // x1
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  __int64 v76; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C2303C & 1) == 0 )
  {
    sub_1C2D490(&CommonRestrictionMaster_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    sub_1C2D490(&PartyServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10213/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C2D490(&StringLiteral_10211/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C2D490(&StringLiteral_10212/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C2D490(&StringLiteral_10210/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_4C2303C = 1;
  }
  eventUpValInfo = 0;
  v76 = 0;
  memset(&v74, 0, sizeof(v74));
  this->fields.lastPartyItem = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lastPartyItem, 0, num, *(const MethodInfo **)&tutorialMode);
  v13 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v13 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v13->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)warServantSortInfo, v11, v12);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_86;
  ListViewSort__Load(sort, 0);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v17 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_86;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_86;
  max_length = memberItemList->max_length;
  p_sort = &this->fields.sort;
  if ( max_length )
  {
    LODWORD(v76) = 0;
    if ( (int)max_length >= 1 )
    {
      v23 = 0;
      while ( v23 < (unsigned int)max_length )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v23];
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v73,
              (System_Collections_Generic_List_object__o *)sort,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v74 = v73;
            while ( 1 )
            {
              v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v74,
                      (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v24 )
                break;
              current = v74.fields._current;
              if ( !v74.fields._current )
                sub_1C2D6EC(v24, v25);
              if ( !v17 )
                sub_1C2D6EC(v24, v25);
              v27 = System_Collections_Generic_List_int___Contains(
                      v17,
                      (int32_t)v74.fields._current[1].klass,
                      (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v27 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v17->fields._items;
                v30 = Method_System_Collections_Generic_List_int__Add__;
                ++v17->fields._version;
                if ( !items )
                  sub_1C2D6EC(v27, klass_low);
                size = v17->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v17,
                    klass_low,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v17->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v74,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        v23 = v76 + 1;
        LODWORD(v76) = v23;
        LODWORD(max_length) = memberItemList->max_length;
        if ( v23 >= (int)max_length )
          goto LABEL_31;
      }
LABEL_87:
      sub_1C2D6F4(sort, v15, v18);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v17 )
      goto LABEL_86;
    v32 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v17,
                               (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v32 )
      goto LABEL_86;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v32,
                           0,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v35, v36);
    v37 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0);
    if ( !v37 )
      goto LABEL_86;
    v37->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
    if ( questRestrictionInfo )
      goto LABEL_36;
  }
  else
  {
    v42 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v42 )
      goto LABEL_86;
    v42->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v18, v19);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v38, v39);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_86;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  maxCost = partyItem->fields.maxCost;
  v45 = OrganizationList;
  HIDWORD(v76) = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
    maxCost = HIDWORD(v76);
    v47 = TotalCostRestriction;
  }
  else
  {
    v47 = 0;
  }
  v48 = v47 != 0 && maxCost > v47;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v47 != 0 && maxCost > v47 )
    {
LABEL_55:
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
      HIDWORD(v76) = v47;
      goto LABEL_58;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v48 )
      goto LABEL_55;
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
LABEL_58:
  maxCostLabel = this->fields.maxCostLabel;
  v51 = System_Int32__ToString((int32_t)&v76 + 4, 0);
  sort = (ListViewSort_o *)System_String__Concat_63457864(v49, v51, 0);
  if ( !maxCostLabel )
    goto LABEL_86;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  sort = (ListViewSort_o *)System_String__Concat_63457864(v49, v53, 0);
  if ( !splitCostLabel )
    goto LABEL_86;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v76) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10211/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v49 = v56;
  }
  LODWORD(v76) = cost;
  v57 = System_Int32__ToString((int32_t)&v76, 0);
  sort = (ListViewSort_o *)System_String__Concat_63457864(v49, v57, 0);
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
  if ( !v45 )
    goto LABEL_86;
  v58 = v45->max_length;
  if ( (int)v58 >= 1 )
  {
    v59 = 0;
    while ( v59 < (unsigned int)v58 )
    {
      v60 = v45->m_Items[v59];
      v61 = (PartyServantListViewItem_o *)sub_1C2D6DC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_34329796(
        v61,
        v59,
        v60,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        0);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_86;
      v64 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v64 )
        goto LABEL_86;
      v66 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v61,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = v64 + 8 * v66;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v66 + 1;
        *(_QWORD *)(v67 + 32) = v61;
        sub_1C2D434((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v61, v62, v63);
      }
      LODWORD(v58) = v45->max_length;
      if ( (__int64)++v59 >= (int)v58 )
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_86:
    sub_1C2D6EC(sort, v15);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v69);
  PartyServantListViewManager__SetFilterButtonImage(this, v70);
}


void PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C23036 & 1) == 0 )
  {
    sub_1C2D490(&PartyServantListViewManager_TypeInfo);
    byte_4C23036 = 1;
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
    sub_1C2D6EC(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.updateTime = -1;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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

  if ( (byte_4C2304A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2304A = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C2D6EC(v9, v10);
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

  if ( (byte_4C2304D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager_EndCloseSelectSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2304D = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C23050 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C23050 = 1;
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
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(itemList, *(_QWORD *)&svtId);
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
  if ( (byte_4C23055 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C23055 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_1C2D6EC(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v9,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C2303F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C2303F = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C23040 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
    sub_1C2D490(&System_Func_PartyServantListViewItem__bool__TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__);
    sub_1C2D490(&PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_4C23040 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5[1].klass = (Il2CppClass *)id;
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                (System_Collections_IEnumerable_o *)result,
                                                                (const MethodInfo_30DD028 *)Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_PartyServantListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v5,
      Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__,
      0);
    return (PartyServantListViewItem_o *)System_Linq_Enumerable__FirstOrDefault_object__51348472(
                                           v9,
                                           (System_Func_TSource__bool__o *)v10,
                                           (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
  }
  return result;
}


int32_t PartyServantListViewManager__GetModeKind(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C23054 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C23054 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C2D6EC(0, userServantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v15.fields._list = *(_OWORD *)&v14.fields.currentCryptoKey;
  v15.fields._current = (Il2CppObject *)v14.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
          sub_1C2D6EC(v6, v7);
        v11 = monitor[2];
        *(_OWORD *)&v14.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v14.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v13 = v14;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v13, 0) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4C23042 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C23042 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 337) )
      {
        if ( *(_BYTE *)(itemList + 233) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4C23041 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C23041 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 336) )
      {
        if ( *(_BYTE *)(itemList + 232) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C23037 & 1) == 0 )
  {
    sub_1C2D490(&PartyServantListViewManager_TypeInfo);
    byte_4C23037 = 1;
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
    sub_1C2D6EC(servantSortInfo, v1);
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
  __int64 v18; // x2
  int64_t v19; // x22
  int32_t v20; // w24
  PartyServantListViewItem_o *v21; // x23
  __int64 naturalAligment; // x10
  __int64 v23; // x8
  __int128 v24; // q0
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v31; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-80h]

  if ( (byte_4C2303E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2303E = 1;
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
  TotalCost = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TotalCost
    || (TotalCost = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)TotalCost,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (TotalCost = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)TotalCost, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
LABEL_47:
    sub_1C2D6EC(TotalCost, v6);
  }
  size = itemList->fields._size;
  v31 = *(_QWORD *)(TotalCost + 24);
  v11 = TotalCost;
  if ( (int)v31 >= 1 )
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
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
      *(_OWORD *)&v34.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v34;
      TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v33, 0);
      if ( size >= 1 )
      {
        v19 = TotalCost;
        v20 = 0;
        while ( 1 )
        {
          TotalCost = (int64_t)this->fields.itemList;
          if ( !TotalCost )
            goto LABEL_47;
          TotalCost = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)TotalCost,
                                 v20,
                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !TotalCost )
            goto LABEL_47;
          v21 = (PartyServantListViewItem_o *)TotalCost;
          naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)TotalCost + 304LL) < (unsigned int)naturalAligment
            || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)TotalCost + 200LL) + 8 * naturalAligment - 8) != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_47;
          }
          v23 = *(_QWORD *)(TotalCost + 120);
          if ( v23 )
          {
            v24 = *(_OWORD *)(v23 + 32);
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
            *(_OWORD *)&v34.fields.fakeValue = v24;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v32 = v34;
            TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v32, 0);
            if ( TotalCost == v19 )
              break;
          }
          if ( size == ++v20 )
            goto LABEL_30;
        }
        if ( v12 >= *(_DWORD *)(v11 + 24) )
          goto LABEL_32;
        PartyServantListViewItem__ModifyItem(v21, *v15, 0);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v21, 0);
          PartyServantListViewItem__ModifyChoiceItem(v21, 0);
        }
      }
LABEL_30:
      if ( ++v12 == (_DWORD)v31 )
        break;
      if ( v12 >= *(_DWORD *)(v11 + 24) )
LABEL_32:
        sub_1C2D6F4(TotalCost, v6, v18);
    }
  }
  if ( size >= 1 && isIconSizeChange )
  {
    v25 = 0;
    while ( 1 )
    {
      TotalCost = (int64_t)this->fields.itemList;
      if ( !TotalCost )
        goto LABEL_47;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)TotalCost,
               v25,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v27 = (ListViewItem_o *)Item;
        v28 = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v28
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v28 - 1] == PartyServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            TotalCost = (int64_t)v27->fields.viewObject;
            if ( !TotalCost )
              goto LABEL_47;
            ListViewObject__SetItemSeed((ListViewObject_o *)TotalCost, v27, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v25 )
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

  if ( (byte_4C23048 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C23048 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        klass = (int64_t)Instance[7].klass;
        v10 = sort;
        v11 = alignedBonusFilterInfos;
        v9 = 0;
        goto LABEL_13;
      }
    }
    sub_1C2D6EC(Instance, v6);
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

  if ( (byte_4C23049 & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_PartyServantListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23049 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C2304E & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C2304E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C2304C & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_PartyServantListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2304C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v9 )
      sub_1C2D6EC(v11, v12);
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
    sub_1C2D6EC(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  klass = v4[3].klass;
  v4[3].klass = 0;
  sub_1C2D434(v4 + 3, 0, v7, v8);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C23047 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23047 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4C23045 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C2D490(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C23045 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      PartyServantListViewObject__Init_34463216((PartyServantListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewManager__RequestListObject_34462104(
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

  if ( (byte_4C23046 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C2D490(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C23046 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      PartyServantListViewObject__Init_34462608((PartyServantListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void PartyServantListViewManager__SetFilterButtonImage(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v5; // x8

  if ( (byte_4C2304B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C2304B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyServantListViewManager__SetMode_34461204(this, mode, v6);
}


void PartyServantListViewManager__SetMode_34461204(
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

  if ( (byte_4C23044 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C23044 = 1;
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
      PartyServantListViewManager__RequestListObject_34462104(this, v9, v7);
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
          (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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
                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
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
              scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0);
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
                v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
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
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
            v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v23, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            if ( v14 == v21 )
              v25 = 5;
            else
              v25 = 2;
            PartyServantListViewObject__Init_34462608((PartyServantListViewObject_o *)Item, v25, v23, v24);
            if ( ++v21 >= v11->fields._size )
              return;
          }
LABEL_40:
          sub_1C2D6EC(scrollView, v5);
        }
      }
      return;
    default:
      return;
  }
}


void PartyServantListViewManager__SetMode_34462052(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyServantListViewManager__SetMode_34461204(this, mode, v6);
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
  if ( (byte_4C23043 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_1C2D490(&PartyServantListViewObject_TypeInfo);
    byte_4C23043 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyServantListViewObject__Init_34461080((PartyServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C2304F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C2304F = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
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
      sub_1C2D6EC(sort, v4);
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
  if ( (byte_4C2303A & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2303A = 1;
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

  if ( (byte_4C23051 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23051 = 1;
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
  if ( (byte_4C2303D & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10213/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C2D490(&StringLiteral_10211/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C2D490(&StringLiteral_10212/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C2D490(&StringLiteral_10210/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2303D = 1;
  }
  v8 = restrictionTotalCost != 0 && maxCost > restrictionTotalCost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v8 )
      goto LABEL_5;
LABEL_7:
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    goto LABEL_8;
  }
  if ( !v8 )
    goto LABEL_7;
LABEL_5:
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
  v18 = restrictionTotalCost;
LABEL_8:
  maxCostLabel = this->fields.maxCostLabel;
  v11 = System_Int32__ToString((int32_t)&v18, 0);
  v12 = System_String__Concat_63457864(v9, v11, 0);
  if ( !maxCostLabel )
    goto LABEL_18;
  UILabel__set_text(maxCostLabel, v12, 0);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v12 = System_String__Concat_63457864(v9, v15, 0);
  if ( !splitCostLabel )
    goto LABEL_18;
  UILabel__set_text(splitCostLabel, v12, 0);
  selectCostLabel = this->fields.selectCostLabel;
  if ( v19 > v18 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10211/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v17 = System_Int32__ToString((int32_t)&v19, 0);
  v12 = System_String__Concat_63457864(v9, v17, 0);
  if ( !selectCostLabel )
LABEL_18:
    sub_1C2D6EC(v12, v13);
  UILabel__set_text(selectCostLabel, v12, 0);
}


void PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23052 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    byte_4C23052 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C2D6EC(0, v4);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v6.fields._current )
        sub_1C2D6EC(0, v5);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v6.fields._current, v5);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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

  if ( (byte_4C23053 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C23053 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C2D6EC(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = modeKind == 1;
  v10 = modeKind == 2;
  v11 = modeKind == 3;
  *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
      v12 = sub_1C2D9AC(v28.fields._current);
LABEL_23:
      sub_1C2D6EC(v12, v13);
    }
    v17 = v28.fields._current[7].monitor;
    LOBYTE(v28.fields._current[15].klass) = v9;
    BYTE1(current[15].klass) = v10;
    BYTE2(current[15].klass) = v11;
    if ( !v17 )
      sub_1C2D6EC(v12, v15);
    v18 = v17[2];
    *(_OWORD *)&v27.fields.currentCryptoKey = v17[1];
    *(_OWORD *)&v27.fields.fakeValue = v18;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
    v21 = BYTE2(current[15].klass);
    BYTE3(current[15].klass) = v19 == (_QWORD)monitor;
    if ( v21 )
    {
      v22 = (UserServantEntity_o *)current[7].monitor;
      if ( !v22 )
        sub_1C2D6EC(0, v20);
      if ( UserServantEntity__IsLeave(v22, 0) )
      {
        v24 = 0;
      }
      else
      {
        v25 = (UserServantEntity_o *)current[7].monitor;
        if ( !v25 )
          sub_1C2D6EC(0, v23);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C23032 & 1) == 0 )
  {
    sub_1C2D490(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C23032 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C23034 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C23034 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C2D9AC(v7);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C23039 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23039 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(
                                 (PartyServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C23038 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23038 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C23033 & 1) == 0 )
  {
    sub_1C2D490(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C23033 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C23035 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C23035 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C2D9AC(v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6C9AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C954;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C23057 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&PartyServantListViewManager_ResultKind_TypeInfo);
    byte_4C23057 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             PartyServantListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_T__o *grandSvtIdListInParty; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_4C23058 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__);
    sub_1C2D490(&PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
    byte_4C23058 = 1;
  }
  v5 = sub_1C2D6DC(PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)userSvtEntity, v8, v9);
  grandSvtIdListInParty = (System_Collections_Generic_List_T__o *)this->fields.grandSvtIdListInParty;
  v11 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__,
    0);
  return !BasicHelper__Any_int_(
            grandSvtIdListInParty,
            (System_Func_T__bool__o *)v11,
            (const MethodInfo_30B79C4 *)Method_BasicHelper_Any_int___);
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
  if ( (byte_4C23059 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_1_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23059 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(this, *(_QWORD *)&svtId);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0) == svtId;
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
  if ( (byte_4C2305A & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_2_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2305A = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_8;
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this = (PartyServantListViewManager___c__DisplayClass51_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                  &v8,
                                                                  0);
  userGrandSvtEntity = v4->fields.userGrandSvtEntity;
  if ( !userGrandSvtEntity )
LABEL_8:
    sub_1C2D6EC(this, userSvtEntity);
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
  if ( (byte_4C2305B & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_3_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2305B = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_12;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (PartyServantListViewManager___c__DisplayClass51_3_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
    sub_1C2D6EC(this, userSvtEntity);
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

  if ( (byte_4C2305C & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2305C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v8, 0) == this->fields.id;
}