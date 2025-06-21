void __fastcall PartyServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct PartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v12; // x20
  struct PartyServantListViewManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v17; // x20
  struct PartyServantListViewManager_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B1822E & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewSort_TypeInfo, v1);
    sub_1BCAFF8(&PartyServantListViewManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_15457/*"WarBoardPartyServant"*/, v5);
    sub_1BCAFF8(&StringLiteral_10488/*"PartyServant"*/, v6);
    byte_4B1822E = 1;
  }
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_10488/*"PartyServant"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)PartyServantListViewManager_TypeInfo->static_fields, StringLiteral_10488/*"PartyServant"*/, v2, v3);
  v7 = StringLiteral_15457/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15457/*"WarBoardPartyServant"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->WAR_SORT_SAVE_KEY, v7, v9, v10);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v12 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor_42965576(v12, SORT_SAVE_KEY, 3, 0, 0LL);
  v13 = PartyServantListViewManager_TypeInfo->static_fields;
  v13->servantSortInfo = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->servantSortInfo, (int32_t)v12, v14, v15);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor_42965576(v17, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v18 = PartyServantListViewManager_TypeInfo->static_fields;
  v18->warServantSortInfo = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v18->warServantSortInfo, (int32_t)v17, v19, v20);
}


void __fastcall PartyServantListViewManager___ctor(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  this->fields.eventId = -1;
  this->fields.updateTime = -1LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyServantListViewManager__Awake(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyServantListViewManager__ChangeIconScale(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
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
  sub_1BCAF9C((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCB254(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  PartyServantListViewManager__ModifyList(this, 1, v10);
  PartyServantListViewManager__SetMode_33819900(this, 2, v11);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v12);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  PartyServantListViewManager_c *v30; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x26
  __int64 v33; // x1
  __int64 sort; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct ListViewSort_o *v41; // x20
  Il2CppObject *Master_object; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  _BOOL4 v45; // w8
  struct ListViewSort_o *v46; // x8
  struct ListViewSort_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr00_16
  struct UICommonButton_o *bonusFilterKindButton; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x29
  __int64 v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Func_object__bool__o *v56; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  int32_t maxCost; // w22
  int32_t v59; // w0
  int32_t TotalCost; // w0
  const MethodInfo *v61; // x4
  QuestRestrictionInfo_o *v62; // x20
  __int64 v63; // x2
  void *monitor; // x8
  int32_t v65; // w26
  unsigned __int64 v66; // x23
  __int64 v67; // x28
  PartyServantListViewItem_o *v68; // x22
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  __int64 v75; // x22
  __int64 v76; // x25
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v78; // x4
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // [xsp+10h] [xbp-A0h]
  GrandGraphEntity_o *v81; // [xsp+20h] [xbp-90h]
  int32_t numa; // [xsp+2Ch] [xbp-84h]
  int svtId; // [xsp+4Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18213 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonRestrictionMaster_TypeInfo, baseDeckItemList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, v14);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v16);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v17);
    sub_1BCAFF8(&System_Func_UserServantEntity__bool__TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v22);
    sub_1BCAFF8(&PartyServantListViewManager_TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__, v25);
    sub_1BCAFF8(&PartyServantListViewManager___c__DisplayClass51_0_TypeInfo, v26);
    sub_1BCAFF8(&StringLiteral_11703/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v27);
    byte_4B18213 = 1;
  }
  this->fields.lastPartyItem = partyItem;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.lastPartyItem,
    (int32_t)partyItem,
    (int32_t)partyItem,
    *(const MethodInfo **)&num);
  v30 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v30 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v30->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v28, v29);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_82;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v46 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v46 )
      goto LABEL_82;
    v46->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v35, v36);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v47 = *p_sort;
    if ( !*p_sort )
      goto LABEL_82;
    if ( v47->fields.sortKind == 28 )
      v47->fields.sortKind = 3;
    goto LABEL_20;
  }
  isQuestStart = setupInfo->fields.isQuestStart;
  sort = (__int64)this->fields.sort;
  this->fields.isQuestStart = isQuestStart;
  if ( !sort )
    goto LABEL_82;
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         (ListViewSort_o *)sort,
                         0LL,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0LL,
                         setupInfo->fields.servantFilterIds,
                         isQuestStart,
                         0LL);
  this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v39, v40);
  v41 = this->fields.sort;
  sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
  if ( !v41 )
    goto LABEL_82;
  v41->fields.isBonusKind = (sort & 1) == 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  if ( !Master_object )
    goto LABEL_82;
  sort = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, sort, 0LL);
  v45 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = sort & 1;
  if ( !v45 || (sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  if ( !questRestrictionInfo )
  {
LABEL_35:
    v81 = 0LL;
    svtId = 0;
    goto LABEL_36;
  }
  QuestRestrictionInfo__SetDeckInfo_42549844(questRestrictionInfo, partyItem, num, 0LL);
  this->fields.isFatigue = questRestrictionInfo->fields.isFatigure;
  this->fields.eventId = questRestrictionInfo->fields.eventId;
  if ( !partyItem )
    goto LABEL_82;
  sort = (__int64)PartyListViewItem__GetMember(partyItem, num, 0LL);
  if ( !sort )
    goto LABEL_82;
  if ( !*(_BYTE *)(sort + 261) )
  {
    sort = (__int64)this->fields.bonusFilterKindLabel;
    if ( !sort )
      goto LABEL_82;
    v89.fields.r = 1.0;
    v89.fields.g = 1.0;
    v89.fields.b = 1.0;
    v89.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)sort, v89, 0LL);
    goto LABEL_35;
  }
  v48 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)sort, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v48, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !sort )
    goto LABEL_82;
  sort = (__int64)GrandGraphMaster__GetEntityBySvtId((GrandGraphMaster_o *)sort, svtId, 0LL);
  bonusFilterKindButton = this->fields.bonusFilterKindButton;
  v81 = (GrandGraphEntity_o *)sort;
  if ( !bonusFilterKindButton )
    goto LABEL_82;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))bonusFilterKindButton->klass->vtable._14_SetState.method)(
    bonusFilterKindButton,
    3LL,
    1LL,
    bonusFilterKindButton->klass->vtable._15_OnPress.methodPtr);
  sort = (__int64)this->fields.bonusFilterKindLabel;
  if ( !sort )
    goto LABEL_82;
  v88.fields.r = 0.5;
  v88.fields.g = 0.5;
  v88.fields.b = 0.5;
  v88.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)sort, v88, 0LL);
  sort = (__int64)this->fields.filterButton;
  if ( !sort )
    goto LABEL_82;
  sort = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)sort + 536LL))(
           sort,
           3LL,
           1LL,
           *(_QWORD *)(*(_QWORD *)sort + 544LL));
LABEL_36:
  if ( !*p_sort )
    goto LABEL_82;
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
      goto LABEL_44;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v43, v44);
LABEL_44:
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_82;
  numa = num;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_82;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( svtId <= 0 )
  {
    v53 = sub_1BCB244(PartyServantListViewManager___c__DisplayClass51_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v53, 0LL);
    if ( !partyItem )
      goto LABEL_82;
    sort = (__int64)PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0LL);
    if ( !v53 )
      goto LABEL_82;
    *(_QWORD *)(v53 + 16) = sort;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 16), sort, v54, v55);
    v56 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v56,
      (Il2CppObject *)v53,
      Method_PartyServantListViewManager___c__DisplayClass51_0__CreateList_b__0__,
      0LL);
    v57 = System_Linq_Enumerable__Where_object_(
            v52,
            (System_Func_TSource__bool__o *)v56,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v57,
                                                                 (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  }
  else if ( !partyItem )
  {
    goto LABEL_82;
  }
  maxCost = partyItem->fields.maxCost;
  v59 = questRestrictionInfo ? QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL) : 0;
  this->fields.restrictionTotalCost = v59;
  TotalCost = PartyListViewItem__GetTotalCost(partyItem, 0LL);
  PartyServantListViewManager__UpdateCost(this, TotalCost, maxCost, this->fields.restrictionTotalCost, v61);
  sort = (__int64)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_82;
  sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_82;
  if ( !sort )
    goto LABEL_82;
  v62 = questRestrictionInfo;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v52 )
    goto LABEL_82;
  monitor = v52[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v65 = 0;
    v66 = 0LL;
    do
    {
      if ( v66 >= (unsigned int)monitor )
        sub_1BCB25C(sort, v33, v63);
      v67 = *((_QWORD *)&v52[2].klass + v66);
      if ( v81 == 0LL || svtId < 1 )
        goto LABEL_63;
      if ( !v67 )
        goto LABEL_82;
      v76 = *(_QWORD *)(v67 + 80);
      v75 = *(_QWORD *)(v67 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v87.fields.currentCryptoKey = v76;
      *(_QWORD *)&v87.fields.fakeValue = v75;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v87, 0LL);
      if ( svtId == (_DWORD)sort )
      {
        sort = GrandGraphEntity__CanSelectToGrand(v81, (UserServantEntity_o *)v67, 0LL);
        if ( (sort & 1) != 0 )
        {
LABEL_63:
          v68 = (PartyServantListViewItem_o *)sub_1BCB244(PartyServantListViewItem_TypeInfo);
          PartyServantListViewItem___ctor(
            v68,
            v65,
            (UserServantEntity_o *)v67,
            baseDeckItemList,
            partyItem,
            numa,
            tutorialMode,
            setupInfo,
            v62,
            svtId > 0,
            v80);
          sort = (__int64)this->fields.itemList;
          if ( !sort )
            goto LABEL_82;
          v71 = *(_QWORD *)(sort + 16);
          v72 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(sort + 28);
          if ( !v71 )
            goto LABEL_82;
          v73 = *(int *)(sort + 24);
          if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)sort,
              (Il2CppObject *)v68,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = v71 + 8 * v73;
            *(_DWORD *)(sort + 24) = v73 + 1;
            *(_QWORD *)(v74 + 32) = v68;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v74 + 32), (int32_t)v68, v69, v70);
          }
          ++v65;
        }
      }
      LODWORD(monitor) = v52[1].monitor;
    }
    while ( (__int64)++v66 < (int)monitor );
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11703/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_82:
    sub_1BCB254(sort, v33);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v78);
  PartyServantListViewManager__SetFilterButtonImage(this, v79);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_33814604(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
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
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  PartyServantListViewManager_c *v33; // x0
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v35; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v37; // x26
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x29
  __int64 v41; // x8
  struct ListViewSort_o **p_sort; // x23
  int v43; // w9
  _BOOL8 v44; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x22
  _BOOL8 v47; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  ListViewSort_o *v52; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct ListViewSort_o *v57; // x22
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct ListViewSort_o *v62; // x8
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v65; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v67; // w28
  bool v68; // w22
  System_String_o *v69; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v71; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v73; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  __int64 v78; // x8
  unsigned __int64 v79; // x25
  UserServantEntity_o *v80; // x28
  PartyServantListViewItem_o *v81; // x27
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v89; // x4
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  __int64 v97; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B18214 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonRestrictionMaster_TypeInfo, partyItem);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v22);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v23);
    sub_1BCAFF8(&PartyServantListViewManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BCAFF8(&StringLiteral_10142/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v26);
    sub_1BCAFF8(&StringLiteral_10140/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v27);
    sub_1BCAFF8(&StringLiteral_10141/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v28);
    sub_1BCAFF8(&StringLiteral_11703/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v29);
    sub_1BCAFF8(&StringLiteral_10139/*"PARTY_ORGANIZATION_COST_COLOR"*/, v30);
    byte_4B18214 = 1;
  }
  eventUpValInfo = 0LL;
  v97 = 0LL;
  memset(&v95, 0, sizeof(v95));
  this->fields.lastPartyItem = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.lastPartyItem, 0, num, *(const MethodInfo **)&tutorialMode);
  v33 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v33 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v33->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)warServantSortInfo, v31, v32);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_86;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_86;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_86;
  v41 = *(_QWORD *)&memberItemList->max_length;
  p_sort = &this->fields.sort;
  if ( v41 )
  {
    LODWORD(v97) = 0;
    if ( (int)v41 >= 1 )
    {
      v43 = 0;
      while ( v43 < (unsigned int)v41 )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v43];
        if ( sort )
        {
          sort = (ListViewSort_o *)PartyOrganizationListViewItem__GetEventUpVal(
                                     (PartyOrganizationListViewItem_o *)sort,
                                     &eventUpValInfo,
                                     0LL);
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
              (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v95 = v94;
            while ( 1 )
            {
              v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v95,
                      (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v44 )
                break;
              current = v95.fields._current;
              if ( !v95.fields._current )
                sub_1BCB254(v44, v45);
              if ( !v37 )
                sub_1BCB254(v44, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v37,
                      (int32_t)v95.fields._current[1].klass,
                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v47 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v37->fields._items;
                v50 = Method_System_Collections_Generic_List_int__Add__;
                ++v37->fields._version;
                if ( !items )
                  sub_1BCB254(v47, klass_low);
                size = v37->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v37,
                    klass_low,
                    *(const MethodInfo_369CBAC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v37->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v95,
              (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        v43 = v97 + 1;
        LODWORD(v97) = v43;
        LODWORD(v41) = memberItemList->max_length;
        if ( v43 >= (int)v41 )
          goto LABEL_31;
      }
LABEL_87:
      sub_1BCB25C(sort, v35, v38);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v37 )
      goto LABEL_86;
    v52 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v37,
                               (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v52 )
      goto LABEL_86;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v52,
                           0LL,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0LL,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v55, v56);
    v57 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0LL);
    if ( !v57 )
      goto LABEL_86;
    v57->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
    if ( questRestrictionInfo )
      goto LABEL_36;
  }
  else
  {
    v62 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v62 )
      goto LABEL_86;
    v62->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v38, v39);
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
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v58, v59);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_86;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  maxCost = partyItem->fields.maxCost;
  v65 = OrganizationList;
  HIDWORD(v97) = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
    maxCost = HIDWORD(v97);
    v67 = TotalCostRestriction;
  }
  else
  {
    v67 = 0;
  }
  v68 = v67 != 0 && maxCost > v67;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v67 != 0 && maxCost > v67 )
    {
LABEL_55:
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_10141/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
      HIDWORD(v97) = v67;
      goto LABEL_58;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v68 )
      goto LABEL_55;
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_58:
  maxCostLabel = this->fields.maxCostLabel;
  v71 = System_Int32__ToString((int32_t)&v97 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_62450424(v69, v71, 0LL);
  if ( !maxCostLabel )
    goto LABEL_86;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_62450424(v69, v73, 0LL);
  if ( !splitCostLabel )
    goto LABEL_86;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v97) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_10140/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v69 = v76;
  }
  LODWORD(v97) = cost;
  v77 = System_Int32__ToString((int32_t)&v97, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_62450424(v69, v77, 0LL);
  if ( !selectCostLabel )
    goto LABEL_86;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_86;
  if ( !sort )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v65 )
    goto LABEL_86;
  v78 = *(_QWORD *)&v65->max_length;
  if ( (int)v78 >= 1 )
  {
    v79 = 0LL;
    while ( v79 < (unsigned int)v78 )
    {
      v80 = v65->m_Items[v79];
      v81 = (PartyServantListViewItem_o *)sub_1BCB244(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_33790024(
        v81,
        v79,
        v80,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v91);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_86;
      v84 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v84 )
        goto LABEL_86;
      v86 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v81,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v86 + 1;
        *(_QWORD *)(v87 + 32) = v81;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 32), (int32_t)v81, v82, v83);
      }
      LODWORD(v78) = v65->max_length;
      if ( (__int64)++v79 >= (int)v78 )
        goto LABEL_80;
    }
    goto LABEL_87;
  }
LABEL_80:
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11703/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_86:
    sub_1BCB254(sort, v35);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v89);
  PartyServantListViewManager__SetFilterButtonImage(this, v90);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B1820E & 1) == 0 )
  {
    sub_1BCAFF8(&PartyServantListViewManager_TypeInfo, v1);
    byte_4B1820E = 1;
  }
  v2 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v2 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_1BCB254(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCB254(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B18222 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B18222 = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCB254(v11, v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v10, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B18225 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_PartyServantListViewManager_EndCloseSelectSortKind__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B18225 = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BCB254(v10, v11);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B18228 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v6);
    byte_4B18228 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( PartyServantListViewItem__get_SvtId((PartyServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BCB254(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


bool __fastcall PartyServantListViewManager__GetFocusItemIndex(
        PartyServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v8; // x22
  __int64 v9; // x1
  int32_t v10; // w23
  __int64 methodPtr_low; // x10

  v8 = this;
  if ( (byte_4B1822D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index);
    this = (PartyServantListViewManager_o *)sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v9);
    byte_4B1822D = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_1BCB254(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v10,
                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_17;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_17;
      }
      if ( (this->fields.isInput || v8->fields._IsFocus_k__BackingField)
        && (BYTE4(this->fields.extremelySmallSizeSeed) || !v8->fields._IsFocus_k__BackingField) )
      {
        break;
      }
      if ( sum == ++v10 )
        return 1;
    }
    BYTE4(this->fields.extremelySmallSizeSeed) = 0;
    v8->fields._IsFocus_k__BackingField = 0;
    *index = v10;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetItem(
        PartyServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B18217 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v5);
    byte_4B18217 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetItemByUserServantID(
        PartyServantListViewManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  PartyServantListViewItem_o *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4B18218 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___, id);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___, v5);
    sub_1BCAFF8(&System_Func_PartyServantListViewItem__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__, v7);
    sub_1BCAFF8(&PartyServantListViewManager___c__DisplayClass57_0_TypeInfo, v8);
    byte_4B18218 = 1;
  }
  v9 = (Il2CppObject *)sub_1BCB244(PartyServantListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  v9[1].klass = (Il2CppClass *)id;
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                 (System_Collections_IEnumerable_o *)result,
                                                                 (const MethodInfo_302917C *)Method_System_Linq_Enumerable_Cast_PartyServantListViewItem___);
    v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_PartyServantListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      v9,
      Method_PartyServantListViewManager___c__DisplayClass57_0__GetItemByUserServantID_b__0__,
      0LL);
    return (PartyServantListViewItem_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                           v13,
                                           (System_Func_TSource__bool__o *)v14,
                                           (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_PartyServantListViewItem___);
  }
  return result;
}


int32_t __fastcall PartyServantListViewManager__GetModeKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_1BCB254(this, method);
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
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4B1822C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, userServantId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v9);
    byte_4B1822C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCB254(0LL, userServantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v20.fields._list = *(_OWORD *)&v19.fields.currentCryptoKey;
  v20.fields._current = (Il2CppObject *)v19.fields.fakeValue;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v20.fields._current;
    if ( v20.fields._current )
    {
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (PartyServantListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyServantListViewItem_TypeInfo )
      {
        klass = v20.fields._current[7].klass;
        if ( !klass )
          sub_1BCB254(v11, v12);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v19.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v18 = v19;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v18, 0LL) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *__fastcall PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCB254(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PartyServantListViewManager__GetSwapChoiceList(
        PartyServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1821A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v14);
    byte_4B1821A = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 329) )
      {
        if ( *(_BYTE *)(itemList + 225) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BCB254(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1BCAF9C((CGThumbnailListItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall PartyServantListViewManager__GetSwapLockList(
        PartyServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4B18219 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v14);
    byte_4B18219 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 328) )
      {
        if ( *(_BYTE *)(itemList + 224) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BCB254(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1BCAF9C((CGThumbnailListItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B1820F & 1) == 0 )
  {
    sub_1BCAFF8(&PartyServantListViewManager_TypeInfo, v1);
    byte_4B1820F = 1;
  }
  v2 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v2 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = PartyServantListViewManager_TypeInfo->static_fields->warServantSortInfo) == 0LL) )
  {
    sub_1BCB254(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
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
  PartyListViewItem_o *lastPartyItem; // x0
  int64_t TotalCost; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x4
  struct PartyListViewItem_o *v14; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v17; // x21
  unsigned int v18; // w29
  int64_t v19; // x28
  __int64 v20; // x8
  UserServantEntity_o **v21; // x28
  __int64 v22; // t1
  __int128 v23; // q0
  const MethodInfo *v24; // x2
  int64_t v25; // x22
  int32_t v26; // w23
  PartyServantListViewItem_o *v27; // x24
  __int64 methodPtr_low; // x10
  __int64 v29; // x8
  __int128 v30; // q0
  const MethodInfo *v31; // x1
  int32_t v32; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v34; // x21
  __int64 v35; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v38; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-80h]

  if ( (byte_4B18216 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B18216 = 1;
  }
  lastPartyItem = this->fields.lastPartyItem;
  if ( lastPartyItem )
  {
    TotalCost = PartyListViewItem__GetTotalCost(lastPartyItem, 0LL);
    v14 = this->fields.lastPartyItem;
    if ( !v14 )
      goto LABEL_47;
    PartyServantListViewManager__UpdateCost(
      this,
      TotalCost,
      v14->fields.maxCost,
      this->fields.restrictionTotalCost,
      v13);
  }
  TotalCost = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TotalCost
    || (TotalCost = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)TotalCost,
                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (TotalCost = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)TotalCost, 0LL)) == 0
    || (itemList = this->fields.itemList) == 0LL )
  {
LABEL_47:
    sub_1BCB254(TotalCost, v12);
  }
  size = itemList->fields._size;
  v38 = *(_QWORD *)(TotalCost + 24);
  v17 = TotalCost;
  if ( (int)v38 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = v17 + 8LL * (int)v18;
      v22 = *(_QWORD *)(v19 + 32);
      v21 = (UserServantEntity_o **)(v19 + 32);
      v20 = v22;
      if ( !v22 )
        goto LABEL_47;
      v23 = *(_OWORD *)(v20 + 32);
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
      *(_OWORD *)&v41.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v40 = v41;
      TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v40, 0LL);
      if ( size >= 1 )
      {
        v25 = TotalCost;
        v26 = 0;
        while ( 1 )
        {
          TotalCost = (int64_t)this->fields.itemList;
          if ( !TotalCost )
            goto LABEL_47;
          TotalCost = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)TotalCost,
                                 v26,
                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !TotalCost )
            goto LABEL_47;
          v27 = (PartyServantListViewItem_o *)TotalCost;
          methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)TotalCost + 304LL) < (unsigned int)methodPtr_low
            || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)TotalCost + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_47;
          }
          v29 = *(_QWORD *)(TotalCost + 112);
          if ( v29 )
          {
            v30 = *(_OWORD *)(v29 + 32);
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
            *(_OWORD *)&v41.fields.fakeValue = v30;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v39 = v41;
            TotalCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v39, 0LL);
            if ( TotalCost == v25 )
              break;
          }
          if ( size == ++v26 )
            goto LABEL_30;
        }
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          goto LABEL_32;
        PartyServantListViewItem__ModifyItem(v27, *v21, v24);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v27, v12);
          PartyServantListViewItem__ModifyChoiceItem(v27, v31);
        }
      }
LABEL_30:
      if ( ++v18 == (_DWORD)v38 )
        break;
      if ( v18 >= *(_DWORD *)(v17 + 24) )
LABEL_32:
        sub_1BCB25C(TotalCost, v12, v24);
    }
  }
  if ( size >= 1 && isIconSizeChange )
  {
    v32 = 0;
    while ( 1 )
    {
      TotalCost = (int64_t)this->fields.itemList;
      if ( !TotalCost )
        goto LABEL_47;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)TotalCost,
               v32,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v34 = (ListViewItem_o *)Item;
        v35 = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v35
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v35 - 1] == PartyServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            TotalCost = (int64_t)v34->fields.viewObject;
            if ( !TotalCost )
              goto LABEL_47;
            ListViewObject__SetItemSeed((ListViewObject_o *)TotalCost, v34, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v32 )
        return;
    }
  }
}


void __fastcall PartyServantListViewManager__OnClickBonusFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x21
  struct ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos; // x20
  bool v10; // w2
  ListViewSort_o *v11; // x0
  ListViewSort_BonusFilterInfo_array *v12; // x1
  int64_t klass; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4B18220 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnClickBonusFilterKind__, method);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4B18220 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sort = this->fields.sort;
    alignedBonusFilterInfos = this->fields.alignedBonusFilterInfos;
    if ( this->fields.isQuestStart )
    {
      if ( sort )
      {
        v10 = 1;
        v11 = this->fields.sort;
        v12 = this->fields.alignedBonusFilterInfos;
        klass = 0LL;
LABEL_13:
        ListViewSort__IncrementBonusFilter(v11, v12, v10, klass, 0LL);
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v14);
        return;
      }
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        klass = (int64_t)Instance[7].klass;
        v11 = sort;
        v12 = alignedBonusFilterInfos;
        v10 = 0;
        goto LABEL_13;
      }
    }
    sub_1BCB254(Instance, v7);
  }
}


void __fastcall PartyServantListViewManager__OnClickFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B18221 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_PartyServantListViewManager_EndSelectFilterKind__, v3);
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnClickFilterKind__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B18221 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_PartyServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCB244(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BCB254(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 1, sort, v11, this->fields.eventId, 0LL);
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
  const MethodInfo *v3; // x3
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCB254(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortAscendingOrder(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B18226 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B18226 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCB254(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v7);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w20
  int v9; // w8
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v12; // x22
  ServantSortSelectMenu_CallbackFunc_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B18224 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_PartyServantListViewManager_EndSelectSortKind__, v3);
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnClickSortKind__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B18224 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_PartyServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    v8 = 7;
    if ( this->fields.isFatigue )
      v9 = 7;
    else
      v9 = 3;
    if ( !this->fields.isFatigue )
    {
      if ( this->fields.isQuestStart )
      {
        if ( this->fields.isBuddyPoint )
          v8 = 8;
        else
          v8 = v9;
      }
      else
      {
        v8 = 3;
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCB244(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v12 )
      sub_1BCB254(v14, v15);
    CommonUI__OpenServantSortSelectMenu(v12, v8, sort, 0, v13, 0LL);
  }
}


void __fastcall PartyServantListViewManager__OnLongPushListView(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8
  PartyServantListViewManager_o *v4; // x20
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
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
    sub_1BCB254(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        3LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B1821F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1821F = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BCB254(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1821D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnMoveEnd__, v12);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v13);
    byte_4B1821D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v19, v20);
      PartyServantListViewObject__Init_33821896((PartyServantListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_33820784(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1821E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v9);
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnMoveEnd__, v10);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v11);
    byte_4B1821E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v17, v18);
      PartyServantListViewObject__Init_33821288((PartyServantListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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

  if ( (byte_4B18223 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17343/*"btn_filter_on"*/, method);
    sub_1BCAFF8(&StringLiteral_17342/*"btn_filter"*/, v3);
    byte_4B18223 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_1BCB254(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17342/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17343/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyServantListViewManager__SetMode_33819900(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_33819900(
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
  System_Collections_Generic_List_object__o *v16; // x20
  int64_t v17; // x22
  int32_t v18; // w21
  int v19; // w25
  __int64 v20; // x8
  int64_t v21; // x23
  __int128 v22; // q0
  __int128 v23; // q0
  int size; // w8
  int32_t v25; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v27; // x23
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1821C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&Method_PartyServantListViewManager_OnMoveEnd__, v8);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v9);
    byte_4B1821C = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (int64_t)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_39;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)scrollView, 0LL) )
  {
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 1, 0LL);
    scrollView = (int64_t)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_39;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
  }
  switch ( mode )
  {
    case 1:
      v14 = 2;
      goto LABEL_12;
    case 2:
      v14 = 3;
      goto LABEL_12;
    case 3:
      v14 = 4;
LABEL_12:
      PartyServantListViewManager__RequestListObject_33820784(this, v14, v12);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v10);
      if ( !scrollView )
        goto LABEL_39;
      v15 = *(_DWORD *)(scrollView + 24);
      v16 = (System_Collections_Generic_List_object__o *)scrollView;
      if ( v15 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = v15;
      v17 = 0LL;
      v18 = 0;
      v19 = -1;
      break;
    default:
      return;
  }
  do
  {
    scrollView = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v16,
                            v18,
                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    if ( !scrollView )
      goto LABEL_39;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v10);
    if ( !scrollView )
      goto LABEL_39;
    v20 = *(_QWORD *)(scrollView + 112);
    v21 = scrollView;
    if ( v20 && (*(_DWORD *)(scrollView + 220) & 0x80000000) != 0 )
    {
      if ( (v19 & 0x80000000) != 0 )
        goto LABEL_26;
      v22 = *(_OWORD *)(v20 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v31, 0LL);
      if ( v17 < scrollView )
      {
        v20 = *(_QWORD *)(v21 + 112);
        if ( !v20 )
          goto LABEL_39;
LABEL_26:
        v23 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v32.fields.fakeValue = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v32;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v30, 0LL);
        v19 = v18;
      }
    }
    size = v16->fields._size;
    ++v18;
  }
  while ( v18 < size );
  if ( size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               v25,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
      v27 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      if ( v19 == v25 )
        v29 = 5;
      else
        v29 = 2;
      PartyServantListViewObject__Init_33821288((PartyServantListViewObject_o *)Item, v29, v27, v28);
      if ( ++v25 >= v16->fields._size )
        return;
    }
LABEL_39:
    sub_1BCB254(scrollView, v10);
  }
}


void __fastcall PartyServantListViewManager__SetMode_33820732(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyServantListViewManager__SetMode_33819900(this, mode, v6);
}


void __fastcall PartyServantListViewManager__SetObjectItem(
        PartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B1821B & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_1BCAFF8(&PartyServantListViewObject_TypeInfo, obj);
    byte_4B1821B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyServantListViewObject__Init_33819776((PartyServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4B18227 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17379/*"btn_sort_up"*/, v3);
    sub_1BCAFF8(&StringLiteral_17474/*"btn_txt_up"*/, v4);
    sub_1BCAFF8(&StringLiteral_17427/*"btn_txt_new"*/, v5);
    sub_1BCAFF8(&StringLiteral_17417/*"btn_txt_down"*/, v6);
    sub_1BCAFF8(&StringLiteral_17434/*"btn_txt_old"*/, v7);
    sub_1BCAFF8(&StringLiteral_17376/*"btn_sort_down"*/, v8);
    byte_4B18227 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_42;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_42;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17434/*"btn_txt_old"*/ : &StringLiteral_17427/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17474/*"btn_txt_up"*/ : &StringLiteral_17417/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_42:
      sub_1BCB254(sort, v10);
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
  if ( (byte_4B18212 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&selectIndex);
    byte_4B18212 = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, isAllDisp, addEmptyTarminal, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.updateTime = NetworkManager__getTime(0LL);
}


void __fastcall PartyServantListViewManager__Update(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B18229 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18229 = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      PartyServantListViewManager__UpdateDisp(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__UpdateCost(
        PartyServantListViewManager_o *this,
        int32_t cost,
        int32_t maxCost,
        int32_t restrictionTotalCost,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // w20
  System_String_o *v14; // x20
  UILabel_o *maxCostLabel; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *splitCostLabel; // x21
  System_String_o *v20; // x0
  UILabel_o *selectCostLabel; // x19
  System_String_o *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v23 = maxCost;
  v24 = cost;
  if ( (byte_4B18215 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&cost);
    sub_1BCAFF8(&StringLiteral_10142/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v8);
    sub_1BCAFF8(&StringLiteral_10140/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v9);
    sub_1BCAFF8(&StringLiteral_10141/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v10);
    sub_1BCAFF8(&StringLiteral_10139/*"PARTY_ORGANIZATION_COST_COLOR"*/, v11);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v12);
    byte_4B18215 = 1;
  }
  v13 = restrictionTotalCost != 0 && maxCost > restrictionTotalCost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v13 )
      goto LABEL_5;
LABEL_7:
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
    goto LABEL_8;
  }
  if ( !v13 )
    goto LABEL_7;
LABEL_5:
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10141/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
  v23 = restrictionTotalCost;
LABEL_8:
  maxCostLabel = this->fields.maxCostLabel;
  v16 = System_Int32__ToString((int32_t)&v23, 0LL);
  v17 = System_String__Concat_62450424(v14, v16, 0LL);
  if ( !maxCostLabel )
    goto LABEL_18;
  UILabel__set_text(maxCostLabel, v17, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v17 = System_String__Concat_62450424(v14, v20, 0LL);
  if ( !splitCostLabel )
    goto LABEL_18;
  UILabel__set_text(splitCostLabel, v17, 0LL);
  selectCostLabel = this->fields.selectCostLabel;
  if ( v24 > v23 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10140/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v22 = System_Int32__ToString((int32_t)&v24, 0LL);
  v17 = System_String__Concat_62450424(v14, v22, 0LL);
  if ( !selectCostLabel )
LABEL_18:
    sub_1BCB254(v17, v18);
  UILabel__set_text(selectCostLabel, v17, 0LL);
}


void __fastcall PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1822A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v6);
    byte_4B1822A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCB254(0LL, v8);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1BCB254(0LL, v9);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v10.fields._current, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x8
  void *monitor; // x22
  bool v14; // w25
  bool v15; // w26
  bool v16; // w27
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v20; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v24; // x0
  __int64 v25; // x1
  int v26; // w8
  UserServantEntity_o *v27; // x0
  __int64 v28; // x1
  bool v29; // w8
  UserServantEntity_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B1822B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&modeKind);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v9);
    byte_4B1822B = 1;
  }
  memset(&v33, 0, sizeof(v33));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1BCB254(SelfUserGame, v11);
  }
  monitor = v12[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = modeKind == 1;
  v15 = modeKind == 2;
  v16 = modeKind == 3;
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v17 & 1) == 0 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      goto LABEL_23;
    v20 = PartyServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (PartyServantListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
    {
      v17 = sub_1BCB514(v33.fields._current);
LABEL_23:
      sub_1BCB254(v17, v18);
    }
    klass = v33.fields._current[7].klass;
    LOBYTE(v33.fields._current[14].monitor) = v14;
    BYTE1(current[14].monitor) = v15;
    BYTE2(current[14].monitor) = v16;
    if ( !klass )
      sub_1BCB254(v17, v20);
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v32;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v31, 0LL);
    v26 = BYTE2(current[14].monitor);
    BYTE3(current[14].monitor) = v24 == (_QWORD)monitor;
    if ( v26 )
    {
      v27 = (UserServantEntity_o *)current[7].klass;
      if ( !v27 )
        sub_1BCB254(0LL, v25);
      if ( UserServantEntity__IsLeave(v27, 0LL) )
      {
        v29 = 0;
      }
      else
      {
        v30 = (UserServantEntity_o *)current[7].klass;
        if ( !v30 )
          sub_1BCB254(0LL, v28);
        v29 = !UserServantEntity__IsEventJoin(v30, 0LL);
      }
    }
    else
    {
      v29 = 1;
    }
    BYTE4(current[14].monitor) = v29;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B1820A & 1) == 0 )
  {
    sub_1BCAFF8(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1820A = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1BCB514(v7);
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

  if ( (byte_4B1820C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1820C = 1;
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
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1BCB514(v7);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B18211 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B18211 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BCB254(0LL, v18);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(
                                 (PartyServantListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BCB254(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42948252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BCB254(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BCB254(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BCB254(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BCB254(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v11;
}


bool __fastcall PartyServantListViewManager__get_IsFocus(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18210 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B18210 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B1820B & 1) == 0 )
  {
    sub_1BCAFF8(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1820B = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1BCB514(v7);
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

  if ( (byte_4B1820D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1820D = 1;
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
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1BCB514(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0FE30;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FDD8;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4B1822F & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&PartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4B1822F = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyServantListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall PartyServantListViewManager_CallbackFunc__Invoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PartyServantListViewManager___c__DisplayClass51_0___ctor(
        PartyServantListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyServantListViewManager___c__DisplayClass51_0___CreateList_b__0(
        PartyServantListViewManager___c__DisplayClass51_0_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_T__o *grandSvtIdListInParty; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_4B18230 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int___, userSvtEntity);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__, v6);
    sub_1BCAFF8(&PartyServantListViewManager___c__DisplayClass51_1_TypeInfo, v7);
    byte_4B18230 = 1;
  }
  v8 = sub_1BCB244(PartyServantListViewManager___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 16) = userSvtEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)userSvtEntity, v11, v12);
  grandSvtIdListInParty = (System_Collections_Generic_List_T__o *)this->fields.grandSvtIdListInParty;
  v14 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_PartyServantListViewManager___c__DisplayClass51_1__CreateList_b__1__,
    0LL);
  return !BasicHelper__Any_int_(
            grandSvtIdListInParty,
            (System_Func_T__bool__o *)v14,
            (const MethodInfo_3003BF0 *)Method_BasicHelper_Any_int___);
}


void __fastcall PartyServantListViewManager___c__DisplayClass51_1___ctor(
        PartyServantListViewManager___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyServantListViewManager___c__DisplayClass51_1___CreateList_b__1(
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
  if ( (byte_4B18231 & 1) == 0 )
  {
    this = (PartyServantListViewManager___c__DisplayClass51_1_o *)sub_1BCAFF8(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    *(_QWORD *)&svtId);
    byte_4B18231 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCB254(this, *(_QWORD *)&svtId);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL) == svtId;
}


void __fastcall PartyServantListViewManager___c__DisplayClass57_0___ctor(
        PartyServantListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyServantListViewManager___c__DisplayClass57_0___GetItemByUserServantID_b__0(
        PartyServantListViewManager___c__DisplayClass57_0_o *this,
        PartyServantListViewItem_o *e,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4B18232 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e);
    byte_4B18232 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v8, 0LL) == this->fields.id;
}