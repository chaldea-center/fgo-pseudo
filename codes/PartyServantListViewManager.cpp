void __fastcall PartyServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct PartyServantListViewManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v20; // x20
  struct PartyServantListViewManager_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v29; // x20
  struct PartyServantListViewManager_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BC3966 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewSort_TypeInfo, v1);
    sub_1C1ABD4(&PartyServantListViewManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_15847/*"WarBoardPartyServant"*/, v9);
    sub_1C1ABD4(&StringLiteral_10761/*"PartyServant"*/, v10);
    byte_4BC3966 = 1;
  }
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_10761/*"PartyServant"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)PartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_10761/*"PartyServant"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_15847/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15847/*"WarBoardPartyServant"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->WAR_SORT_SAVE_KEY, v11, v13, v14, v15, v16, v17, v18);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v20 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v20, SORT_SAVE_KEY, 3, 0, 0LL);
  v21 = PartyServantListViewManager_TypeInfo->static_fields;
  v21->servantSortInfo = v20;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v21->servantSortInfo, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v29 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v29, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v30 = PartyServantListViewManager_TypeInfo->static_fields;
  v30->warServantSortInfo = v29;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v30->warServantSortInfo, (int64_t)v29, v31, v32, v33, v34, v35, v36);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  *((_DWORD *)p_seed + 81) = v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C1AE30(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  PartyServantListViewManager__ModifyList(this, 1, v14);
  PartyServantListViewManager__SetMode_33261980(this, 2, v15);
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
  PartyServantListViewManager_c *v25; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x26
  __int64 v28; // x1
  ListViewSort_o *sort; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct ListViewSort_o *v44; // x22
  Il2CppObject *Master_object; // x27
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL4 v52; // w8
  struct ListViewSort_o *v53; // x8
  struct ListViewSort_o *v54; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w22
  ListViewSort_o *v58; // x27
  int32_t TotalCostRestriction; // w29
  bool v60; // w22
  System_String_o *v61; // x28
  UILabel_o *maxCostLabel; // x29
  System_String_o *v63; // x0
  UILabel_o *splitCostLabel; // x29
  System_String_o *v65; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x29
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  __int64 v70; // x8
  unsigned __int64 v71; // x26
  UserServantEntity_o *v72; // x29
  PartyServantListViewItem_o *v73; // x28
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v85; // x4
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // [xsp+8h] [xbp-88h]
  __int64 v91; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BC394D & 1) == 0 )
  {
    sub_1C1ABD4(&CommonRestrictionMaster_TypeInfo, baseDeckItemList);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v13);
    sub_1C1ABD4(&DataManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v16);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v17);
    sub_1C1ABD4(&PartyServantListViewManager_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C1ABD4(&StringLiteral_10431/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v20);
    sub_1C1ABD4(&StringLiteral_10429/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v21);
    sub_1C1ABD4(&StringLiteral_10430/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v22);
    sub_1C1ABD4(&StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v23);
    sub_1C1ABD4(&StringLiteral_10428/*"PARTY_ORGANIZATION_COST_COLOR"*/, v24);
    byte_4BC394D = 1;
  }
  v25 = PartyServantListViewManager_TypeInfo;
  v91 = 0LL;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v25 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v25->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)servantSortInfo,
    (int64_t)partyItem,
    num,
    *(System_String_o **)&tutorialMode,
    (BattleSetupInfo_o *)setupInfo,
    (FollowerInfo_o *)questRestrictionInfo,
    (PartyListViewItem_o *)method);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_69;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v53 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v53 )
      goto LABEL_69;
    v53->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v30, v31, v32, v33, v34, v35);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v54 = *p_sort;
    if ( !*p_sort )
      goto LABEL_69;
    if ( v54->fields.sortKind == 28 )
      v54->fields.sortKind = 3;
    goto LABEL_20;
  }
  isQuestStart = setupInfo->fields.isQuestStart;
  sort = this->fields.sort;
  this->fields.isQuestStart = isQuestStart;
  if ( !sort )
    goto LABEL_69;
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0LL,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0LL,
                         setupInfo->fields.servantFilterIds,
                         isQuestStart,
                         0LL);
  this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
    (int64_t)AlignedBonusFilter,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = this->fields.sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                             (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                             0LL);
  if ( !v44 )
    goto LABEL_69;
  v44->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = (ListViewSort_o *)EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  if ( !Master_object )
    goto LABEL_69;
  sort = (ListViewSort_o *)EventServantPointRankMaster__IsEnableEvent(
                             (EventServantPointRankMaster_o *)Master_object,
                             (int32_t)sort,
                             0LL);
  v52 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = (unsigned __int8)sort & 1;
  if ( !v52 || ((unsigned __int8)sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  if ( questRestrictionInfo )
  {
    QuestRestrictionInfo__SetDeckInfo_41660648(questRestrictionInfo, partyItem, num, 0LL);
    this->fields.isFatigue = questRestrictionInfo->fields.isFatigure;
    this->fields.eventId = questRestrictionInfo->fields.eventId;
  }
  if ( !*p_sort )
    goto LABEL_69;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_29;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_29;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_29:
    this->fields.seed = normalSizeSeed;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v46, v47, v48, v49, v50, v51);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_69;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_69;
  sort = (ListViewSort_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_69;
  maxCost = partyItem->fields.maxCost;
  v58 = sort;
  HIDWORD(v91) = maxCost;
  if ( questRestrictionInfo )
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
  else
    TotalCostRestriction = 0;
  v60 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v60 )
      goto LABEL_38;
LABEL_40:
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
    goto LABEL_41;
  }
  if ( !v60 )
    goto LABEL_40;
LABEL_38:
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
  HIDWORD(v91) = TotalCostRestriction;
LABEL_41:
  maxCostLabel = this->fields.maxCostLabel;
  v63 = System_Int32__ToString((int32_t)&v91 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_63040368(v61, v63, 0LL);
  if ( !maxCostLabel )
    goto LABEL_69;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_63040368(v61, v65, 0LL);
  if ( !splitCostLabel )
    goto LABEL_69;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v91) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v61 = v68;
  }
  LODWORD(v91) = cost;
  v69 = System_Int32__ToString((int32_t)&v91, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_63040368(v61, v69, 0LL);
  if ( !selectCostLabel )
    goto LABEL_69;
  UILabel__set_text(selectCostLabel, (System_String_o *)sort, 0LL);
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_69;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_69;
  if ( !sort )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v58 )
    goto LABEL_69;
  v70 = *(_QWORD *)&v58->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v70 >= 1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      if ( v71 >= (unsigned int)v70 )
        sub_1C1AE38(sort, v28);
      v72 = (UserServantEntity_o *)*((_QWORD *)&v58->fields.manager + v71);
      v73 = (PartyServantListViewItem_o *)sub_1C1AE20(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v73,
        v71,
        v72,
        baseDeckItemList,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v87);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        break;
      v80 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v81 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v80 )
        break;
      v82 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v73,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = v80 + 8 * v82;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v82 + 1;
        *(_QWORD *)(v83 + 32) = v73;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v83 + 32), (int64_t)v73, v74, v75, v76, v77, v78, v79);
      }
      LODWORD(v70) = *(_DWORD *)&v58->fields.FILTER_DEFAULT_VALUE;
      if ( (__int64)++v71 >= (int)v70 )
        goto LABEL_63;
    }
LABEL_69:
    sub_1C1AE30(sort, v28);
  }
LABEL_63:
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_69;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v85);
  PartyServantListViewManager__SetFilterButtonImage(this, v86);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__CreateList_33257088(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
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
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v34; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v36; // x26
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x29
  __int64 v44; // x8
  struct ListViewSort_o **p_sort; // x23
  int v46; // w9
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *current; // x22
  _BOOL8 v50; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  ListViewSort_o *v55; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct ListViewSort_o *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct ListViewSort_o *v73; // x8
  UserServantEntity_array *OrganizationList; // x0
  int32_t maxCost; // w8
  UserServantEntity_array *v76; // x26
  int32_t TotalCostRestriction; // w0
  int32_t v78; // w28
  bool v79; // w22
  System_String_o *v80; // x27
  UILabel_o *maxCostLabel; // x28
  System_String_o *v82; // x0
  UILabel_o *splitCostLabel; // x28
  System_String_o *v84; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x28
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  __int64 v89; // x8
  unsigned __int64 v90; // x25
  UserServantEntity_o *v91; // x28
  PartyServantListViewItem_o *v92; // x27
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v104; // x4
  const MethodInfo *v105; // x1
  const MethodInfo *v106; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  __int64 v112; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BC394E & 1) == 0 )
  {
    sub_1C1ABD4(&CommonRestrictionMaster_TypeInfo, partyItem);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v23);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v24);
    sub_1C1ABD4(&PartyServantListViewManager_TypeInfo, v25);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C1ABD4(&StringLiteral_10431/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v27);
    sub_1C1ABD4(&StringLiteral_10429/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v28);
    sub_1C1ABD4(&StringLiteral_10430/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v29);
    sub_1C1ABD4(&StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v30);
    sub_1C1ABD4(&StringLiteral_10428/*"PARTY_ORGANIZATION_COST_COLOR"*/, v31);
    byte_4BC394E = 1;
  }
  v32 = PartyServantListViewManager_TypeInfo;
  eventUpValInfo = 0LL;
  v112 = 0LL;
  memset(&v110, 0, sizeof(v110));
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v32 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v32->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)warServantSortInfo,
    *(int64_t *)&num,
    tutorialMode,
    (System_String_o *)setupInfo,
    (BattleSetupInfo_o *)questRestrictionInfo,
    (FollowerInfo_o *)method,
    v7);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_86;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v36 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_86;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_86;
  v44 = *(_QWORD *)&memberItemList->max_length;
  p_sort = &this->fields.sort;
  if ( v44 )
  {
    LODWORD(v112) = 0;
    if ( (int)v44 >= 1 )
    {
      v46 = 0;
      while ( v46 < (unsigned int)v44 )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v46];
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v109,
              (System_Collections_Generic_List_object__o *)sort,
              (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v110 = v109;
            while ( 1 )
            {
              v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v110,
                      (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v47 )
                break;
              current = v110.fields._current;
              if ( !v110.fields._current )
                sub_1C1AE30(v47, v48);
              if ( !v36 )
                sub_1C1AE30(v47, v48);
              v50 = System_Collections_Generic_List_int___Contains(
                      v36,
                      (int32_t)v110.fields._current[1].klass,
                      (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v50 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v36->fields._items;
                v53 = Method_System_Collections_Generic_List_int__Add__;
                ++v36->fields._version;
                if ( !items )
                  sub_1C1AE30(v50, klass_low);
                size = v36->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v36,
                    klass_low,
                    *(const MethodInfo_361F86C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                }
                else
                {
                  v36->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v110,
              (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        v46 = v112 + 1;
        LODWORD(v112) = v46;
        LODWORD(v44) = memberItemList->max_length;
        if ( v46 >= (int)v44 )
          goto LABEL_31;
      }
LABEL_87:
      sub_1C1AE38(sort, v34);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v36 )
      goto LABEL_86;
    v55 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v36,
                               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v55 )
      goto LABEL_86;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v55,
                           0LL,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0LL,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    v64 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0LL);
    if ( !v64 )
      goto LABEL_86;
    v64->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
    if ( questRestrictionInfo )
      goto LABEL_36;
  }
  else
  {
    v73 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v73 )
      goto LABEL_86;
    v73->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v37, v38, v39, v40, v41, v42);
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
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v65, v66, v67, v68, v69, v70);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_86;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  maxCost = partyItem->fields.maxCost;
  v76 = OrganizationList;
  HIDWORD(v112) = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
    maxCost = HIDWORD(v112);
    v78 = TotalCostRestriction;
  }
  else
  {
    v78 = 0;
  }
  v79 = v78 != 0 && maxCost > v78;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v78 != 0 && maxCost > v78 )
    {
LABEL_55:
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
      HIDWORD(v112) = v78;
      goto LABEL_58;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v79 )
      goto LABEL_55;
  }
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_58:
  maxCostLabel = this->fields.maxCostLabel;
  v82 = System_Int32__ToString((int32_t)&v112 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_63040368(v80, v82, 0LL);
  if ( !maxCostLabel )
    goto LABEL_86;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_63040368(v80, v84, 0LL);
  if ( !splitCostLabel )
    goto LABEL_86;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v112) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v80 = v87;
  }
  LODWORD(v112) = cost;
  v88 = System_Int32__ToString((int32_t)&v112, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_63040368(v80, v88, 0LL);
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
  if ( !v76 )
    goto LABEL_86;
  v89 = *(_QWORD *)&v76->max_length;
  if ( (int)v89 >= 1 )
  {
    v90 = 0LL;
    while ( v90 < (unsigned int)v89 )
    {
      v91 = v76->m_Items[v90];
      v92 = (PartyServantListViewItem_o *)sub_1C1AE20(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_33235100(
        v92,
        v90,
        v91,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v106);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        goto LABEL_86;
      v99 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v100 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v99 )
        goto LABEL_86;
      v101 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v101 >= *(_DWORD *)(v99 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v92,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v102 = v99 + 8 * v101;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v101 + 1;
        *(_QWORD *)(v102 + 32) = v92;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v102 + 32), (int64_t)v92, v93, v94, v95, v96, v97, v98);
      }
      LODWORD(v89) = v76->max_length;
      if ( (__int64)++v90 >= (int)v89 )
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
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_86:
    sub_1C1AE30(sort, v34);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v104);
  PartyServantListViewManager__SetFilterButtonImage(this, v105);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4BC3948 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_TypeInfo, v1);
    byte_4BC3948 = 1;
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
    sub_1C1AE30(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C1AE30(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BC395A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BC395A = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1C1AE30(v11, v12);
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

  if ( (byte_4BC395D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_PartyServantListViewManager_EndCloseSelectSortKind__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BC395D = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1C1AE30(v10, v11);
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

  if ( (byte_4BC3960 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v6);
    byte_4BC3960 = 1;
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
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C1AE30(itemList, *(_QWORD *)&svtId);
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
  if ( (byte_4BC3965 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index);
    this = (PartyServantListViewManager_o *)sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v9);
    byte_4BC3965 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_1C1AE30(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v10,
                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_17;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_17;
      }
      if ( (LOBYTE(this->fields.itemSortList) || v8->fields._IsFocus_k__BackingField)
        && (BYTE4(this->fields.normalSizeSeed) || !v8->fields._IsFocus_k__BackingField) )
      {
        break;
      }
      if ( sum == ++v10 )
        return 1;
    }
    BYTE4(this->fields.normalSizeSeed) = 0;
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

  if ( (byte_4BC3950 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v5);
    byte_4BC3950 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t __fastcall PartyServantListViewManager__GetModeKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_o *partyServantSelectMenu; // x8

  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    sub_1C1AE30(this, method);
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

  if ( (byte_4BC3964 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, userServantId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v9);
    byte_4BC3964 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C1AE30(0LL, userServantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v20.fields._list = *(_OWORD *)&v19.fields.currentCryptoKey;
  v20.fields._current = (Il2CppObject *)v19.fields.fakeValue;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
          sub_1C1AE30(v11, v12);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v19.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v18 = v19;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v18, 0LL) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *__fastcall PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C1AE30(0LL, method);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_4BC3952 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v14);
    byte_4BC3952 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 305) )
      {
        if ( *(_BYTE *)(itemList + 209) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v58, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v57, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *choiceList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unchoiceList;
    v48 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v48;
    v55 = unchoiceList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_4BC3951 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v14);
    byte_4BC3951 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 304) )
      {
        if ( *(_BYTE *)(itemList + 208) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v58, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v57, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *lockList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unlockList;
    v48 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v48;
    v55 = unlockList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4BC3949 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_TypeInfo, v1);
    byte_4BC3949 = 1;
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
    sub_1C1AE30(servantSortInfo, v1);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  DataManager_o *v14; // x21
  unsigned int v15; // w29
  DataManager_c **v16; // x28
  DataManager_c *v17; // x8
  UserServantEntity_o **v18; // x28
  DataManager_c *v19; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v21; // x22
  int32_t v22; // w23
  PartyServantListViewItem_o *v23; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v26; // q0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int32_t v29; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v31; // x21
  __int64 v32; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-80h]

  if ( (byte_4BC394F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC394F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  size = itemList->fields._size;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v14 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = &v14->klass + (int)v15;
      v19 = v16[4];
      v18 = (UserServantEntity_o **)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        break;
      byval_arg = v17->_1.byval_arg;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
      *(Il2CppType *)&v38.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v37, 0LL);
      if ( size >= 1 )
      {
        v21 = Instance;
        v22 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v22,
                                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v23 = (PartyServantListViewItem_o *)Instance;
          methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (PartyServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v26 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v38.fields.fakeValue = v26;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v36 = v38;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v36, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( size == ++v22 )
            goto LABEL_27;
        }
        if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        PartyServantListViewItem__ModifyItem(v23, *v18, v27);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v23, v11);
          PartyServantListViewItem__ModifyChoiceItem(v23, v28);
        }
      }
LABEL_27:
      if ( ++v15 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1C1AE38(Instance, v11);
    }
LABEL_44:
    sub_1C1AE30(Instance, v11);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v29,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v31 = (ListViewItem_o *)Item;
        v32 = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v32
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v32 - 1] == PartyServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v31->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v31, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v29 )
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
  int64_t monitor; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4BC3958 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnClickBonusFilterKind__, method);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4BC3958 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C1ABEC(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
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
        monitor = 0LL;
LABEL_13:
        ListViewSort__IncrementBonusFilter(v11, v12, v10, monitor, 0LL);
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v14);
        return;
      }
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        monitor = (int64_t)Instance[6].monitor;
        v11 = sort;
        v12 = alignedBonusFilterInfos;
        v10 = 0;
        goto LABEL_13;
      }
    }
    sub_1C1AE30(Instance, v7);
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

  if ( (byte_4BC3959 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_PartyServantListViewManager_EndSelectFilterKind__, v3);
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnClickFilterKind__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BC3959 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_PartyServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C1AE30(v12, v13);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C1AE30(v10, v11);
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

  if ( (byte_4BC395E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4BC395E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(v5, v6);
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

  if ( (byte_4BC395C & 1) == 0 )
  {
    sub_1C1ABD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_PartyServantListViewManager_EndSelectSortKind__, v3);
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnClickSortKind__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BC395C = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_PartyServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v12 )
      sub_1C1AE30(v14, v15);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
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
    sub_1C1AE30(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BC3957 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC3957 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C1AE30(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC3955 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v11);
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v13);
    byte_4BC3955 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v19, v20);
      PartyServantListViewObject__Init_33389280((PartyServantListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_33262872(
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC3956 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BC3956 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      PartyServantListViewObject__Init_33389364((PartyServantListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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

  if ( (byte_4BC395B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17791/*"btn_filter_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17790/*"btn_filter"*/, v3);
    byte_4BC395B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_1C1AE30(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17790/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17791/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_33261980(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__SetMode_33261980(
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
  int32_t v28; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]

  if ( (byte_4BC3954 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C1ABD4(&Method_PartyServantListViewManager_OnMoveEnd__, v8);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v9);
    byte_4BC3954 = 1;
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
      PartyServantListViewManager__RequestListObject_33262872(this, v14, v12);
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
          (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
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
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    if ( !scrollView )
      goto LABEL_39;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, 0LL);
    if ( !scrollView )
      goto LABEL_39;
    v20 = *(_QWORD *)(scrollView + 112);
    v21 = scrollView;
    if ( v20 && (*(_DWORD *)(scrollView + 204) & 0x80000000) != 0 )
    {
      if ( (v19 & 0x80000000) != 0 )
        goto LABEL_26;
      v22 = *(_OWORD *)(v20 + 32);
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
      *(_OWORD *)&v31.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v30 = v31;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v30, 0LL);
      if ( v17 < scrollView )
      {
        v20 = *(_QWORD *)(v21 + 112);
        if ( !v20 )
          goto LABEL_39;
LABEL_26:
        v23 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v31.fields.fakeValue = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v31;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v29, 0LL);
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
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
      v27 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      if ( v19 == v25 )
        v28 = 5;
      else
        v28 = 2;
      PartyServantListViewObject__Init_33389364((PartyServantListViewObject_o *)Item, v28, v27, 0LL);
      if ( ++v25 >= v16->fields._size )
        return;
    }
LABEL_39:
    sub_1C1AE30(scrollView, v10);
  }
}


void __fastcall PartyServantListViewManager__SetMode_33262820(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyServantListViewManager__SetMode_33261980(this, mode, v10);
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
  if ( (byte_4BC3953 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_1C1ABD4(&PartyServantListViewObject_TypeInfo, obj);
    byte_4BC3953 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyServantListViewObject__Init_33388476((PartyServantListViewObject_o *)obj, v7, 0LL);
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

  if ( (byte_4BC395F & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17821/*"btn_sort_up"*/, v3);
    sub_1C1ABD4(&StringLiteral_17912/*"btn_txt_up"*/, v4);
    sub_1C1ABD4(&StringLiteral_17865/*"btn_txt_new"*/, v5);
    sub_1C1ABD4(&StringLiteral_17855/*"btn_txt_down"*/, v6);
    sub_1C1ABD4(&StringLiteral_17872/*"btn_txt_old"*/, v7);
    sub_1C1ABD4(&StringLiteral_17818/*"btn_sort_down"*/, v8);
    byte_4BC395F = 1;
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
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17872/*"btn_txt_old"*/ : &StringLiteral_17865/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17912/*"btn_txt_up"*/ : &StringLiteral_17855/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
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
      sub_1C1AE30(sort, v10);
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
  if ( (byte_4BC394C & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, *(_QWORD *)&selectIndex);
    byte_4BC394C = 1;
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

  if ( (byte_4BC3961 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC3961 = 1;
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


void __fastcall PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC3962 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__, v6);
    byte_4BC3962 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v8);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C1AE30(0LL, v9);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v10.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
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
  System_Collections_Generic_List_object__c *klass; // x22
  bool v14; // w25
  bool v15; // w26
  bool v16; // w27
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v20; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v22; // x8
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

  if ( (byte_4BC3963 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&modeKind);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&PartyServantListViewItem_TypeInfo, v9);
    byte_4BC3963 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1C1AE30(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = modeKind == 1;
  v15 = modeKind == 2;
  v16 = modeKind == 3;
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
      v17 = sub_1C1B0F0(v33.fields._current);
LABEL_23:
      sub_1C1AE30(v17, v18);
    }
    v22 = v33.fields._current[7].klass;
    BYTE1(v33.fields._current[13].monitor) = v14;
    BYTE2(current[13].monitor) = v15;
    BYTE3(current[13].monitor) = v16;
    if ( !v22 )
      sub_1C1AE30(v17, v20);
    byval_arg = v22->_1.byval_arg;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v22->_1.name;
    *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v32;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v31, 0LL);
    v26 = BYTE3(current[13].monitor);
    BYTE4(current[13].monitor) = v24 == (_QWORD)klass;
    if ( v26 )
    {
      v27 = (UserServantEntity_o *)current[7].klass;
      if ( !v27 )
        sub_1C1AE30(0LL, v25);
      if ( UserServantEntity__IsLeave(v27, 0LL) )
      {
        v29 = 0;
      }
      else
      {
        v30 = (UserServantEntity_o *)current[7].klass;
        if ( !v30 )
          sub_1C1AE30(0LL, v28);
        v29 = !UserServantEntity__IsEventJoin(v30, 0LL);
      }
    }
    else
    {
      v29 = 1;
    }
    BYTE5(current[13].monitor) = v29;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4BC3944 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC3944 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC3946 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC3946 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C1B0F0(v7);
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
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC394B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC394B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(
                                 (PartyServantListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C1AE30(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC394A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC394A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BC3945 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC3945 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC3947 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC3947 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1C1B0F0(v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A56E20;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A56DC8;
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
  if ( (byte_4BC3A77 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&PartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4BC3A77 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyServantListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v14, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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