void __fastcall PartyServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct PartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v8; // x20
  struct PartyServantListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *WAR_SORT_SAVE_KEY; // x19
  ListViewSort_o *v13; // x20
  struct PartyServantListViewManager_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A5726A & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15590/*"WarBoardPartyServant"*/);
    sub_1B885B0(&StringLiteral_10565/*"PartyServant"*/);
    byte_4A5726A = 1;
  }
  PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_10565/*"PartyServant"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_10565/*"PartyServant"*/,
    v1,
    v2);
  v3 = StringLiteral_15590/*"WarBoardPartyServant"*/;
  static_fields = PartyServantListViewManager_TypeInfo->static_fields;
  static_fields->WAR_SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15590/*"WarBoardPartyServant"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->WAR_SORT_SAVE_KEY, v3, v5, v6);
  SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v8 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v8, SORT_SAVE_KEY, 3, 0, 0LL);
  v9 = PartyServantListViewManager_TypeInfo->static_fields;
  v9->servantSortInfo = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->servantSortInfo, (int32_t)v8, v10, v11);
  WAR_SORT_SAVE_KEY = PartyServantListViewManager_TypeInfo->static_fields->WAR_SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v13, WAR_SORT_SAVE_KEY, 3, 0, 0LL);
  v14 = PartyServantListViewManager_TypeInfo->static_fields;
  v14->warServantSortInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->warServantSortInfo, (int32_t)v13, v15, v16);
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
  int32_t v2; // w2
  int32_t v3; // w3
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
  *((_DWORD *)p_seed + 81) = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  PartyServantListViewManager__ModifyList(this, 1, v10);
  PartyServantListViewManager__SetMode_32319108(this, 2, v11);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v12);
}


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
  PartyServantListViewManager_c *v12; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x26
  __int64 v15; // x1
  ListViewSort_o *sort; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct ListViewSort_o *v23; // x22
  Il2CppObject *Master_object; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  _BOOL4 v27; // w8
  struct ListViewSort_o *v28; // x8
  struct ListViewSort_o *v29; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  int32_t maxCost; // w22
  ListViewSort_o *v33; // x27
  int32_t TotalCostRestriction; // w29
  bool v35; // w22
  System_String_o *v36; // x28
  UILabel_o *maxCostLabel; // x29
  System_String_o *v38; // x0
  UILabel_o *splitCostLabel; // x29
  System_String_o *v40; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x29
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x26
  UserServantEntity_o *v47; // x29
  PartyServantListViewItem_o *v48; // x28
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // [xsp+8h] [xbp-88h]
  __int64 v62; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A57251 & 1) == 0 )
  {
    sub_1B885B0(&CommonRestrictionMaster_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10243/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1B885B0(&StringLiteral_10241/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1B885B0(&StringLiteral_10242/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_10240/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_4A57251 = 1;
  }
  v12 = PartyServantListViewManager_TypeInfo;
  v62 = 0LL;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v12 = PartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v12->static_fields->servantSortInfo;
  this->fields.sort = servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.sort,
    (int32_t)servantSortInfo,
    (int32_t)partyItem,
    num);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_69;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = -1;
  if ( !setupInfo )
  {
    v28 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v28 )
      goto LABEL_69;
    v28->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v17, v18);
    this->fields.isBuddyPoint = 0;
LABEL_17:
    v29 = *p_sort;
    if ( !*p_sort )
      goto LABEL_69;
    if ( v29->fields.sortKind == 28 )
      v29->fields.sortKind = 3;
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v21,
    v22);
  v23 = this->fields.sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                             (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                             0LL);
  if ( !v23 )
    goto LABEL_69;
  v23->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  sort = (ListViewSort_o *)EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  if ( !Master_object )
    goto LABEL_69;
  sort = (ListViewSort_o *)EventServantPointRankMaster__IsEnableEvent(
                             (EventServantPointRankMaster_o *)Master_object,
                             (int32_t)sort,
                             0LL);
  v27 = this->fields.isQuestStart;
  this->fields.isBuddyPoint = (unsigned __int8)sort & 1;
  if ( !v27 || ((unsigned __int8)sort & 1) == 0 )
    goto LABEL_17;
LABEL_20:
  if ( questRestrictionInfo )
  {
    QuestRestrictionInfo__SetDeckInfo_40430620(questRestrictionInfo, partyItem, num, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v25, v26);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_69;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_69;
  sort = (ListViewSort_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_69;
  maxCost = partyItem->fields.maxCost;
  v33 = sort;
  HIDWORD(v62) = maxCost;
  if ( questRestrictionInfo )
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
  else
    TotalCostRestriction = 0;
  v35 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v35 )
      goto LABEL_38;
LABEL_40:
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
    goto LABEL_41;
  }
  if ( !v35 )
    goto LABEL_40;
LABEL_38:
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
  HIDWORD(v62) = TotalCostRestriction;
LABEL_41:
  maxCostLabel = this->fields.maxCostLabel;
  v38 = System_Int32__ToString((int32_t)&v62 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_61707032(v36, v38, 0LL);
  if ( !maxCostLabel )
    goto LABEL_69;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_61707032(v36, v40, 0LL);
  if ( !splitCostLabel )
    goto LABEL_69;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v62) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v36 = v43;
  }
  LODWORD(v62) = cost;
  v44 = System_Int32__ToString((int32_t)&v62, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_61707032(v36, v44, 0LL);
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
  if ( !v33 )
    goto LABEL_69;
  v45 = *(_QWORD *)&v33->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    while ( 1 )
    {
      if ( v46 >= (unsigned int)v45 )
        sub_1B88814(sort, v15);
      v47 = (UserServantEntity_o *)*((_QWORD *)&v33->fields.manager + v46);
      v48 = (PartyServantListViewItem_o *)sub_1B887FC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor(
        v48,
        v46,
        v47,
        baseDeckItemList,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v58);
      sort = (ListViewSort_o *)this->fields.itemList;
      if ( !sort )
        break;
      v51 = *(_QWORD *)&sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE;
      v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(&sort->fields.isRequestSave + 2);
      if ( !v51 )
        break;
      v53 = *(int *)&sort->fields.FILTER_DEFAULT_VALUE;
      if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v48,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = v51 + 8 * v53;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v53 + 1;
        *(_QWORD *)(v54 + 32) = v48;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v48, v49, v50);
      }
      LODWORD(v45) = *(_DWORD *)&v33->fields.FILTER_DEFAULT_VALUE;
      if ( (__int64)++v46 >= (int)v45 )
        goto LABEL_63;
    }
LABEL_69:
    sub_1B8880C(sort, v15);
  }
LABEL_63:
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_69;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v56);
  PartyServantListViewManager__SetFilterButtonImage(this, v57);
}


void __fastcall PartyServantListViewManager__CreateList_32314148(
        PartyServantListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  PartyServantListViewManager_c *v11; // x0
  struct ListViewSort_o *warServantSortInfo; // x1
  __int64 v13; // x1
  ListViewSort_o *sort; // x0
  System_Collections_Generic_List_int__o *v15; // x26
  int32_t v16; // w2
  int32_t v17; // w3
  struct PartyOrganizationListViewItem_array *memberItemList; // x29
  __int64 v19; // x8
  struct ListViewSort_o **p_sort; // x23
  int v21; // w9
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x22
  _BOOL8 v25; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  ListViewSort_o *v30; // x28
  System_Int32_array *servantFilterEventCampaignIds; // x27
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct ListViewSort_o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
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
  __int64 v56; // x8
  unsigned __int64 v57; // x25
  UserServantEntity_o *v58; // x28
  PartyServantListViewItem_o *v59; // x27
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v67; // x4
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-70h] BYREF
  __int64 v75; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A57252 & 1) == 0 )
  {
    sub_1B885B0(&CommonRestrictionMaster_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10243/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1B885B0(&StringLiteral_10241/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1B885B0(&StringLiteral_10242/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_10240/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    byte_4A57252 = 1;
  }
  v11 = PartyServantListViewManager_TypeInfo;
  eventUpValInfo = 0LL;
  v75 = 0LL;
  memset(&v73, 0, sizeof(v73));
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v11 = PartyServantListViewManager_TypeInfo;
  }
  warServantSortInfo = v11->static_fields->warServantSortInfo;
  this->fields.sort = warServantSortInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)warServantSortInfo, num, tutorialMode);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_86;
  ListViewSort__Load(sort, 0LL);
  this->fields.isFatigue = 0;
  this->fields.eventId = 0;
  v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_86;
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_86;
  v19 = *(_QWORD *)&memberItemList->max_length;
  p_sort = &this->fields.sort;
  if ( v19 )
  {
    LODWORD(v75) = 0;
    if ( (int)v19 >= 1 )
    {
      v21 = 0;
      while ( v21 < (unsigned int)v19 )
      {
        sort = (ListViewSort_o *)memberItemList->m_Items[v21];
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v72,
              (System_Collections_Generic_List_object__o *)sort,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v73 = v72;
            while ( 1 )
            {
              v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v73,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v22 )
                break;
              current = v73.fields._current;
              if ( !v73.fields._current )
                sub_1B8880C(v22, v23);
              if ( !v15 )
                sub_1B8880C(v22, v23);
              v25 = System_Collections_Generic_List_int___Contains(
                      v15,
                      (int32_t)v73.fields._current[1].klass,
                      (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v25 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v15->fields._items;
                v28 = Method_System_Collections_Generic_List_int__Add__;
                ++v15->fields._version;
                if ( !items )
                  sub_1B8880C(v25, klass_low);
                size = v15->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v15,
                    klass_low,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v15->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v73,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
        }
        v21 = v75 + 1;
        LODWORD(v75) = v21;
        LODWORD(v19) = memberItemList->max_length;
        if ( v21 >= (int)v19 )
          goto LABEL_31;
      }
LABEL_87:
      sub_1B88814(sort, v13);
    }
  }
LABEL_31:
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( !v15 )
      goto LABEL_86;
    v30 = this->fields.sort;
    servantFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    sort = (ListViewSort_o *)System_Collections_Generic_List_int___ToArray(
                               v15,
                               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v30 )
      goto LABEL_86;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           v30,
                           0LL,
                           servantFilterEventCampaignIds,
                           (System_Int32_array *)sort,
                           0LL,
                           setupInfo->fields.servantFilterIds,
                           this->fields.isQuestStart,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v33,
      v34);
    v35 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0LL);
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
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v16, v17);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v36, v37);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_86;
  sort = (ListViewSort_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)sort,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_86;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  maxCost = partyItem->fields.maxCost;
  v43 = OrganizationList;
  HIDWORD(v75) = maxCost;
  if ( questRestrictionInfo )
  {
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
    maxCost = HIDWORD(v75);
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
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
      HIDWORD(v75) = v45;
      goto LABEL_58;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v46 )
      goto LABEL_55;
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_58:
  maxCostLabel = this->fields.maxCostLabel;
  v49 = System_Int32__ToString((int32_t)&v75 + 4, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_61707032(v47, v49, 0LL);
  if ( !maxCostLabel )
    goto LABEL_86;
  UILabel__set_text(maxCostLabel, (System_String_o *)sort, 0LL);
  splitCostLabel = this->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_61707032(v47, v51, 0LL);
  if ( !splitCostLabel )
    goto LABEL_86;
  UILabel__set_text(splitCostLabel, (System_String_o *)sort, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = this->fields.selectCostLabel;
  if ( cost > SHIDWORD(v75) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v47 = v54;
  }
  LODWORD(v75) = cost;
  v55 = System_Int32__ToString((int32_t)&v75, 0LL);
  sort = (ListViewSort_o *)System_String__Concat_61707032(v47, v55, 0LL);
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
  if ( !v43 )
    goto LABEL_86;
  v56 = *(_QWORD *)&v43->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0LL;
    while ( v57 < (unsigned int)v56 )
    {
      v58 = v43->m_Items[v57];
      v59 = (PartyServantListViewItem_o *)sub_1B887FC(PartyServantListViewItem_TypeInfo);
      PartyServantListViewItem___ctor_32292228(
        v59,
        v57,
        v58,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v69);
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
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = v62 + 8 * v64;
        *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE = v64 + 1;
        *(_QWORD *)(v65 + 32) = v59;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 32), (int32_t)v59, v60, v61);
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
  CommonRestrictionMaster__ClearRestrictionCacheList(0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_86:
    sub_1B8880C(sort, v13);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  PartyServantListViewManager__SortItem(this, -1, 0, -1, v67);
  PartyServantListViewManager__SetFilterButtonImage(this, v68);
}


void __fastcall PartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A5724C & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    byte_4A5724C = 1;
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
    sub_1B8880C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall PartyServantListViewManager__DestroyList(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5725E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyServantListViewManager_EndCloseSelectFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5725E = 1;
  }
  if ( isDecide )
  {
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
    PartyServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v9, v10);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall PartyServantListViewManager__EndSelectSortKind(
        PartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A57261 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyServantListViewManager_EndCloseSelectSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57261 = 1;
  }
  if ( isDecide )
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyServantListViewManager__GetAmountSortValue(
        PartyServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4A57264 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57264 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( PartyServantListViewItem__get_SvtId((PartyServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
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
  int32_t v9; // w23
  __int64 methodPtr_low; // x10

  v8 = this;
  if ( (byte_4A57269 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PartyServantListViewManager_o *)sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57269 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_17:
      sub_1B8880C(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (PartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v9,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v9 )
        return 1;
    }
    BYTE4(this->fields.normalSizeSeed) = 0;
    v8->fields._IsFocus_k__BackingField = 0;
    *index = v9;
  }
  return 1;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetItem(
        PartyServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A57254 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57254 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B8880C(this, method);
  return partyServantSelectMenu->fields.modeKind;
}


PartyServantListViewItem_o *__fastcall PartyServantListViewManager__GetPartyServantListViewItem(
        PartyServantListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4A57268 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57268 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, userServantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v15.fields._list = *(_OWORD *)&v14.fields.currentCryptoKey;
  v15.fields._current = (Il2CppObject *)v14.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v15.fields._current;
    if ( v15.fields._current )
    {
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v15.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (PartyServantListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyServantListViewItem_TypeInfo )
      {
        klass = v15.fields._current[7].klass;
        if ( !klass )
          sub_1B8880C(v6, v7);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v13 = v14;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL) == userServantId )
          goto LABEL_15;
      }
    }
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (PartyServantListViewItem_o *)current;
}


System_String_o *__fastcall PartyServantListViewManager__GetScaleButtonSpriteName(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PartyServantListViewManager__GetSwapChoiceList(
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
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
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
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A57256 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57256 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 305) )
      {
        if ( *(_BYTE *)(itemList + 209) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
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
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool __fastcall PartyServantListViewManager__GetSwapLockList(
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
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
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
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A57255 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57255 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PartyServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 304) )
      {
        if ( *(_BYTE *)(itemList + 208) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
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
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void __fastcall PartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A5724D & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    byte_4A5724D = 1;
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
    sub_1B8880C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  DataManager_o *v8; // x21
  unsigned int v9; // w29
  DataManager_c **v10; // x28
  DataManager_c *v11; // x8
  UserServantEntity_o **v12; // x28
  DataManager_c *v13; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v15; // x22
  int32_t v16; // w23
  PartyServantListViewItem_o *v17; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v20; // q0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v25; // x21
  __int64 v26; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-80h]

  if ( (byte_4A57253 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57253 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  v8 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = &v8->klass + (int)v9;
      v13 = v10[4];
      v12 = (UserServantEntity_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        break;
      byval_arg = v11->_1.byval_arg;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v11->_1.name;
      *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
      if ( size >= 1 )
      {
        v15 = Instance;
        v16 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v16,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v17 = (PartyServantListViewItem_o *)Instance;
          methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (PartyServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v20 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v32.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v32;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v30, 0LL);
            if ( Instance == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_27;
        }
        if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        PartyServantListViewItem__ModifyItem(v17, *v12, v21);
        if ( !isIconSizeChange )
        {
          PartyServantListViewItem__ModifyLockItem(v17, v5);
          PartyServantListViewItem__ModifyChoiceItem(v17, v22);
        }
      }
LABEL_27:
      if ( ++v9 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1B88814(Instance, v5);
    }
LABEL_44:
    sub_1B8880C(Instance, v5);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v23,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v25 = (ListViewItem_o *)Item;
        v26 = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v26
          && (PartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[v26 - 1] == PartyServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v25->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v25, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v23 )
        return;
    }
  }
}


void __fastcall PartyServantListViewManager__OnClickBonusFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
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
  int64_t monitor; // x3
  const MethodInfo *v13; // x4

  if ( (byte_4A5725C & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5725C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    alignedBonusFilterInfos = this->fields.alignedBonusFilterInfos;
    if ( this->fields.isQuestStart )
    {
      if ( sort )
      {
        v9 = 1;
        v10 = this->fields.sort;
        v11 = this->fields.alignedBonusFilterInfos;
        monitor = 0LL;
LABEL_13:
        ListViewSort__IncrementBonusFilter(v10, v11, v9, monitor, 0LL);
        PartyServantListViewManager__SortItem(this, -1, 0, -1, v13);
        return;
      }
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance && sort )
      {
        monitor = (int64_t)Instance[6].monitor;
        v10 = sort;
        v11 = alignedBonusFilterInfos;
        v9 = 0;
        goto LABEL_13;
      }
    }
    sub_1B8880C(Instance, v6);
  }
}


void __fastcall PartyServantListViewManager__OnClickFilterKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5725D & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyServantListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_PartyServantListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5725D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, this->fields.eventId, 0LL);
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
  struct PartyServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
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

  if ( (byte_4A57262 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4A57262 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    PartyServantListViewManager__SortItem(this, -1, 0, -1, v7);
  }
}


void __fastcall PartyServantListViewManager__OnClickSortKind(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A57260 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyServantListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_PartyServantListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57260 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_1B8880C(v11, v12);
    CommonUI__OpenServantSortSelectMenu(v9, v5, sort, 0, v10, 0LL);
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
  int32_t v8; // w3
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
    sub_1B8880C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
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
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5725B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5725B = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57259 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1B885B0(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57259 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      PartyServantListViewObject__Init_32321104((PartyServantListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewManager__RequestListObject_32319992(
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

  if ( (byte_4A5725A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1B885B0(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5725A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      PartyServantListViewObject__Init_32320496((PartyServantListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__SetFilterButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x20
  System_String_o **v5; // x8

  if ( (byte_4A5725F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5725F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, this->fields.eventId, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall PartyServantListViewManager__SetMode(
        PartyServantListViewManager_o *this,
        int32_t mode,
        PartyServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyServantListViewManager__SetMode_32319108(this, mode, v6);
}


void __fastcall PartyServantListViewManager__SetMode_32319108(
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
  __int64 v15; // x8
  int64_t v16; // x23
  __int128 v17; // q0
  __int128 v18; // q0
  int size; // w8
  int32_t v20; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-80h]

  if ( (byte_4A57258 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PartyServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57258 = 1;
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
      v9 = 2;
      goto LABEL_12;
    case 2:
      v9 = 3;
      goto LABEL_12;
    case 3:
      v9 = 4;
LABEL_12:
      PartyServantListViewManager__RequestListObject_32319992(this, v9, v7);
      return;
    case 4:
      PartyServantListViewManager__SortItem(this, -1, 0, -1, v8);
      return;
    case 5:
      scrollView = (int64_t)PartyServantListViewManager__get_ClippingObjectList(this, v5);
      if ( !scrollView )
        goto LABEL_39;
      v10 = *(_DWORD *)(scrollView + 24);
      v11 = (System_Collections_Generic_List_object__o *)scrollView;
      if ( v10 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
          0.0,
          0LL);
        return;
      }
      this->fields.callbackCount = v10;
      v12 = 0LL;
      v13 = 0;
      v14 = -1;
      break;
    default:
      return;
  }
  do
  {
    scrollView = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v13,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
    if ( !scrollView )
      goto LABEL_39;
    scrollView = (int64_t)PartyServantListViewObject__GetItem((PartyServantListViewObject_o *)scrollView, v5);
    if ( !scrollView )
      goto LABEL_39;
    v15 = *(_QWORD *)(scrollView + 112);
    v16 = scrollView;
    if ( v15 && (*(_DWORD *)(scrollView + 204) & 0x80000000) != 0 )
    {
      if ( (v14 & 0x80000000) != 0 )
        goto LABEL_26;
      v17 = *(_OWORD *)(v15 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      scrollView = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
      if ( v12 < scrollView )
      {
        v15 = *(_QWORD *)(v16 + 112);
        if ( !v15 )
          goto LABEL_39;
LABEL_26:
        v18 = *(_OWORD *)(v15 + 32);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
        *(_OWORD *)&v27.fields.fakeValue = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v27;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
        v14 = v13;
      }
    }
    size = v11->fields._size;
    ++v13;
  }
  while ( v13 < size );
  if ( size >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v20,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyServantListViewObject__get_Item__);
      v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_PartyServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      if ( v14 == v20 )
        v24 = 5;
      else
        v24 = 2;
      PartyServantListViewObject__Init_32320496((PartyServantListViewObject_o *)Item, v24, v22, v23);
      if ( ++v20 >= v11->fields._size )
        return;
    }
LABEL_39:
    sub_1B8880C(scrollView, v5);
  }
}


void __fastcall PartyServantListViewManager__SetMode_32319940(
        PartyServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyServantListViewManager__SetMode_32319108(this, mode, v6);
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
  if ( (byte_4A57257 & 1) == 0 )
  {
    this = (PartyServantListViewManager_o *)sub_1B885B0(&PartyServantListViewObject_TypeInfo);
    byte_4A57257 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyServantListViewObject__Init_32318984((PartyServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall PartyServantListViewManager__SetSortButtonImage(
        PartyServantListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A57263 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A57263 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_42;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_42;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_42:
      sub_1B8880C(sort, v4);
    }
  }
}


void __fastcall PartyServantListViewManager__SortItem(
        PartyServantListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  if ( (byte_4A57250 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57250 = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, isAllDisp, addEmptyTarminal, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.updateTime = NetworkManager__getTime(0LL);
}


void __fastcall PartyServantListViewManager__Update(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A57265 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57265 = 1;
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
      PartyServantListViewManager__UpdateDisp(this, v5);
    }
  }
}


void __fastcall PartyServantListViewManager__UpdateDisp(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57266 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__get_Count__);
    byte_4A57266 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  if ( ObjectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__MoveNext__) )
    {
      if ( !v6.fields._current )
        sub_1B8880C(0LL, v5);
      PartyServantListViewObject__UpdateDisp((PartyServantListViewObject_o *)v6.fields._current, v5);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyServantListViewObject__Dispose__);
  }
}


void __fastcall PartyServantListViewManager__UpdateItemState(
        PartyServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  System_Collections_Generic_List_object__c *klass; // x22
  bool v9; // w25
  bool v10; // w26
  bool v11; // w27
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  PartyServantListViewItem_c *v15; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v17; // x8
  Il2CppType byval_arg; // q0
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

  if ( (byte_4A57267 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A57267 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1B8880C(SelfUserGame, v6);
  }
  klass = v7[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = modeKind == 1;
  v10 = modeKind == 2;
  v11 = modeKind == 3;
  *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      goto LABEL_23;
    v15 = PartyServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (PartyServantListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
    {
      v12 = sub_1B88ACC(v28.fields._current);
LABEL_23:
      sub_1B8880C(v12, v13);
    }
    v17 = v28.fields._current[7].klass;
    LOBYTE(v28.fields._current[13].monitor) = v9;
    BYTE1(current[13].monitor) = v10;
    BYTE2(current[13].monitor) = v11;
    if ( !v17 )
      sub_1B8880C(v12, v15);
    byval_arg = v17->_1.byval_arg;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
    *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
    v21 = BYTE2(current[13].monitor);
    BYTE3(current[13].monitor) = v19 == (_QWORD)klass;
    if ( v21 )
    {
      v22 = (UserServantEntity_o *)current[7].klass;
      if ( !v22 )
        sub_1B8880C(0LL, v20);
      if ( UserServantEntity__IsLeave(v22, 0LL) )
      {
        v24 = 0;
      }
      else
      {
        v25 = (UserServantEntity_o *)current[7].klass;
        if ( !v25 )
          sub_1B8880C(0LL, v23);
        v24 = !UserServantEntity__IsEventJoin(v25, 0LL);
      }
    }
    else
    {
      v24 = 1;
    }
    BYTE4(current[13].monitor) = v24;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4A57248 & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A57248 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5724A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5724A = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1B88ACC(v7);
  PartyServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ClippingObjectList(
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5724F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5724F = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)PartyServantListViewObject__GetItem(
                                 (PartyServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
}


bool __fastcall PartyServantListViewManager__get_IsFocus(PartyServantListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
}


System_Collections_Generic_List_PartyServantListViewObject__o *__fastcall PartyServantListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5724E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5724E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyServantListViewObject__o *)v3;
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

  if ( (byte_4A57249 & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A57249 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5724B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5724B = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyServantListViewManager_o *)sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C948C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9434;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A5726B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_ResultKind_TypeInfo);
    byte_4A5726B = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             PartyServantListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PartyServantListViewManager_CallbackFunc__EndInvoke(
        PartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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