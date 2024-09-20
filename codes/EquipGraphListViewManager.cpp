void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  ListViewSort_o *v4; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5AA83 & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_6074/*"EquipGraph"*/);
    sub_1B885B0(&StringLiteral_15581/*"WarBoardEquipGraph"*/);
    byte_4A5AA83 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_6074/*"EquipGraph"*/, 3, 0, 0LL);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v4, (System_String_o *)StringLiteral_15581/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->warBoardSortStatus = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->warBoardSortStatus, (int32_t)v4, v6, v7);
}


void __fastcall EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_38562776(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EquipGraphListViewManager__CreateList(
        EquipGraphListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  EquipGraphListViewManager_c *v13; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v15; // x1
  struct ListViewSort_o **p_sort; // x23
  const MethodInfo *v17; // x1
  __int64 sort; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct ListViewSort_o *v21; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct ListViewSort_o *v28; // x20
  bool v29; // w8
  PartyOrganizationListViewItem_o *v30; // x24
  EquipGraphServantItem_o *v31; // x25
  const MethodInfo *v32; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v40; // x26
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x27
  UserServantEntity_array *v43; // x25
  UILabel_o *v44; // x27
  PartyListViewItem_array *v45; // x20
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_String_o *v49; // x28
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x29
  Il2CppObject *v54; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x23
  UserServantEntity_o *v57; // x27
  int32_t memberIdx; // w22
  int64_t v59; // x28
  EquipGraphListViewItem_o *v60; // x26
  int64_t v61; // x4
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v70; // x8
  System_String_o *v71; // x21
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // [xsp+8h] [xbp-78h]
  PartyListViewItem_o *partyItema; // [xsp+10h] [xbp-70h]
  int v76; // [xsp+18h] [xbp-68h] BYREF
  int v77; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5AA6A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    sub_1B885B0(&EquipGraphServantItem_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5AA6A = 1;
  }
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.waveDeckItemList,
    (int32_t)baseDeckItemList,
    (int32_t)partyItem,
    member);
  v13 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v13 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v13->static_fields->sortStatus;
  v15 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v15, v11, v12);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_64;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_64;
  v21 = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !v21 )
    goto LABEL_64;
  iconScaleKind = v21->fields.iconScaleKind;
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
      goto LABEL_15;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v19, v20);
LABEL_15:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (__int64)this->fields.sort;
    this->fields.isQuestStart = isQuestStart;
    if ( !sort )
      goto LABEL_64;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)sort,
                           0LL,
                           setupInfo->fields.servantEquipFilterEventCampaignIds,
                           setupInfo->fields.servantEquipFilterEventIds,
                           0LL,
                           0LL,
                           isQuestStart,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v26,
      v27);
    v28 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v28 )
      goto LABEL_64;
    v29 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v19, v20);
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_64;
    v29 = 0;
  }
  v28->fields.isBonusKind = v29;
  sort = (__int64)PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_64;
  v30 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v31 = (EquipGraphServantItem_o *)sub_1B887FC(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v31, v30, v32);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v31;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v31, v34, v35);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v36);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v37);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_64;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v40 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !baseDeckItemList )
      goto LABEL_64;
    this->fields.maxWave = *(_QWORD *)&baseDeckItemList->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_64;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_64;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v43 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    partyItema = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v44 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = baseDeckItemList;
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
      if ( !v43 )
        goto LABEL_64;
      v49 = (System_String_o *)sort;
      v77 = *(_QWORD *)&v43->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v77, v46, v47, v48);
      if ( !v40 )
        goto LABEL_64;
      v53 = (Il2CppObject *)sort;
      v76 = *(_DWORD *)(v40 + 156);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v50, v51, v52);
      sort = (__int64)System_String__Format_61721404(v49, v53, v54, 0LL);
      if ( !v44 )
        goto LABEL_64;
      UILabel__set_text(v44, (System_String_o *)sort, 0LL);
      baseDeckItemList = v45;
    }
    sort = (__int64)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_64;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
    if ( !*p_sort )
      goto LABEL_64;
    if ( !sort )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v43 )
      goto LABEL_64;
    v55 = *(_QWORD *)&v43->max_length;
    if ( (int)v55 >= 1 )
    {
      v56 = 0LL;
      while ( 1 )
      {
        if ( v56 >= (unsigned int)v55 )
          sub_1B88814(sort, v17);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v57 = v43->m_Items[v56];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v17);
        if ( !*p_servantItemInfo )
          break;
        memberIdx = this->fields.memberIndex;
        v59 = sort;
        v60 = (EquipGraphListViewItem_o *)sub_1B887FC(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor(v60, v56, v57, v59, v61, baseDeckItemList, partyItema, setupInfo, memberIdx, v74);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v64 = *(_QWORD *)(sort + 16);
        v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v64 )
          break;
        v66 = *(int *)(sort + 24);
        if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v60,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = v64 + 8 * v66;
          *(_DWORD *)(sort + 24) = v66 + 1;
          *(_QWORD *)(v67 + 32) = v60;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v67 + 32), (int32_t)v60, v62, v63);
        }
        LODWORD(v55) = v43->max_length;
        if ( (__int64)++v56 >= (int)v55 )
          goto LABEL_55;
      }
LABEL_64:
      sub_1B8880C(sort, v17);
    }
LABEL_55:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_64;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v70 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v71 = *v70;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v71, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_64;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v72);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v73);
  }
}


void __fastcall EquipGraphListViewManager__CreateList_38560632(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  EquipGraphListViewManager_c *v9; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  const MethodInfo *v12; // x1
  __int64 sort; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct ListViewSort_o *v22; // x21
  bool v23; // w8
  PartyOrganizationListViewItem_o *v24; // x23
  EquipGraphServantItem_o *v25; // x24
  const MethodInfo *v26; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v34; // x25
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v37; // x24
  UILabel_o *v38; // x26
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_String_o *v42; // x27
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x28
  Il2CppObject *v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x22
  UserServantEntity_o *v50; // x26
  int64_t v51; // x27
  EquipGraphListViewItem_o *v52; // x25
  int64_t v53; // x4
  const MethodInfo *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v63; // x8
  System_String_o *v64; // x21
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  int v67; // [xsp+8h] [xbp-68h] BYREF
  int v68; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5AA6B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    sub_1B885B0(&EquipGraphServantItem_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5AA6B = 1;
  }
  v9 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v9 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v9->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.sort,
    (int32_t)warBoardSortStatus,
    member,
    (int32_t)setupInfo);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_63;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !*p_sort )
    goto LABEL_63;
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
      goto LABEL_14;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v14, v15);
LABEL_14:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (__int64)this->fields.sort;
    this->fields.isQuestStart = isQuestStart;
    if ( !sort )
      goto LABEL_63;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)sort,
                           0LL,
                           setupInfo->fields.servantEquipFilterEventCampaignIds,
                           setupInfo->fields.servantEquipFilterEventIds,
                           0LL,
                           0LL,
                           isQuestStart,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v20,
      v21);
    v22 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v22 )
      goto LABEL_63;
    v23 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v14, v15);
    v22 = this->fields.sort;
    if ( !v22 )
      goto LABEL_63;
    v23 = 0;
  }
  v22->fields.isBonusKind = v23;
  if ( !partyItem )
    goto LABEL_63;
  sort = (__int64)WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_63;
  v24 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v25 = (EquipGraphServantItem_o *)sub_1B887FC(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v25, v24, v26);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v25, v28, v29);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v30);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v31);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_63;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v34 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v37 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v38 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
      if ( !v37 )
        goto LABEL_63;
      v42 = (System_String_o *)sort;
      v68 = *(_QWORD *)&v37->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v68, v39, v40, v41);
      if ( !v34 )
        goto LABEL_63;
      v46 = (Il2CppObject *)sort;
      v67 = *(_DWORD *)(v34 + 156);
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v43, v44, v45);
      sort = (__int64)System_String__Format_61721404(v42, v46, v47, 0LL);
      if ( !v38 )
        goto LABEL_63;
      UILabel__set_text(v38, (System_String_o *)sort, 0LL);
    }
    sort = (__int64)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
    if ( !*p_sort )
      goto LABEL_63;
    if ( !sort )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v37 )
      goto LABEL_63;
    v48 = *(_QWORD *)&v37->max_length;
    if ( (int)v48 >= 1 )
    {
      v49 = 0LL;
      while ( 1 )
      {
        if ( v49 >= (unsigned int)v48 )
          sub_1B88814(sort, v12);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v50 = v37->m_Items[v49];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v12);
        if ( !*p_servantItemInfo )
          break;
        v51 = sort;
        v52 = (EquipGraphListViewItem_o *)sub_1B887FC(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_38579584(v52, v49, v50, v51, v53, partyItem, setupInfo, v54);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v57 = *(_QWORD *)(sort + 16);
        v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v57 )
          break;
        v59 = *(int *)(sort + 24);
        if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v52,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = v57 + 8 * v59;
          *(_DWORD *)(sort + 24) = v59 + 1;
          *(_QWORD *)(v60 + 32) = v52;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v52, v55, v56);
        }
        LODWORD(v48) = v37->max_length;
        if ( (__int64)++v49 >= (int)v48 )
          goto LABEL_54;
      }
LABEL_63:
      sub_1B8880C(sort, v12);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v63 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v64 = *v63;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v64, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v65);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v66);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A5AA66 & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    byte_4A5AA66 = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v2 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_1B8880C(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


void __fastcall EquipGraphListViewManager__EndCloseSelectFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListViewManager__EndCloseSelectSortKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListViewManager__EndSelectConfirm(
        EquipGraphListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v10; // x2
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v17; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  void *v21; // x8
  __int64 v22; // x11
  struct PartyListViewItem_array *waveDeckItemList; // x25
  __int64 v24; // x8
  unsigned __int64 v25; // x26
  PartyListViewItem_o *v26; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v28; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v30; // x22
  __int64 v31; // x23
  __int64 v32; // x24
  int v33; // w23
  struct PartyListViewItem_array *v34; // x9
  int v35; // w10
  struct PartyListViewItem_array *v36; // x8
  int v37; // w9
  struct EquipGraphListViewItem_o *v38; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v41; // q1
  PartyListViewItem_o *v42; // x20
  _BOOL8 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x4
  Il2CppObject *v46; // x21
  __int64 v47; // x10
  UnityEngine_Object_o *v48; // x22
  _BOOL8 v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  void *v52; // x8
  __int64 v53; // x11
  struct EquipGraphListViewItem_o *v54; // x8
  struct ServantEntity_o *v55; // x10
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  struct EquipGraphListViewItem_o *v61; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v63; // x2
  struct EquipGraphListViewItem_o *v64; // x8
  __int64 v65; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+28h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4A5AA78 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&EquipGraphListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AA78 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( !result )
    goto LABEL_103;
  if ( !this->fields.isWaveBattle )
  {
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_106;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v71.fields._list = *(_OWORD *)&v70.fields.currentCryptoKey;
    v71.fields._current = (Il2CppObject *)v70.fields.fakeValue;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v71,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v71.fields._current;
      if ( !v71.fields._current
        || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v71.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EquipGraphListViewItem_c *)v71.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1B8880C(v11, v12);
      }
      if ( BYTE1(v71.fields._current[9].klass) )
      {
        if ( (klass_high = HIDWORD(v71.fields._current[9].klass),
              BYTE1(v71.fields._current[9].klass) = 0,
              (klass_high & 0x80000000) == 0)
          && klass_high != this->fields.memberIndex
          || SHIDWORD(current[14].monitor) > 0
          || LOBYTE(current[15].monitor) )
        {
          if ( (klass_high & 0x80000000) != 0 )
          {
            LODWORD(monitor) = 0;
          }
          else
          {
            monitor = current[7].monitor;
            if ( monitor )
              LODWORD(monitor) = monitor[38];
          }
          this->fields.baseCost += (int)monitor;
          v17 = (UnityEngine_Object_o *)current[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v18 = UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
          if ( v18 )
          {
            v21 = current[6].monitor;
            if ( !v21
              || (v22 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                  *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)v22)
              || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v22 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1B8880C(v18, v19);
            }
            EquipGraphListViewObject__Init_38594876((EquipGraphListViewObject_o *)current[6].monitor, 4, v20);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v71,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    goto LABEL_83;
  }
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_106;
  if ( selectItem->fields._OrganizedWave_k__BackingField < 1 )
  {
    if ( selectItem->fields._IsUnique_k__BackingField )
    {
      waveDeckItemList = this->fields.waveDeckItemList;
      if ( !waveDeckItemList )
        goto LABEL_106;
      v24 = *(_QWORD *)&waveDeckItemList->max_length;
      if ( (int)v24 >= 1 )
      {
        v25 = 0LL;
        while ( v25 < (unsigned int)v24 )
        {
          v26 = waveDeckItemList->m_Items[v25];
          for ( i = 0; ; ++i )
          {
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL) )
              break;
            if ( !v26 )
              goto LABEL_106;
            Instance = (int64_t)PartyListViewItem__GetMember(v26, i, 0LL);
            v28 = this->fields.selectItem;
            if ( !v28 )
              goto LABEL_106;
            servantEntity = v28->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_106;
            v30 = (PartyOrganizationListViewItem_o *)Instance;
            v32 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v31 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v32;
            *(_QWORD *)&v72.fields.fakeValue = v31;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v72, 0LL);
            if ( !v30 )
              goto LABEL_106;
            v33 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v30, 0LL);
            if ( v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL) )
              PartyListViewItem__SetEquip(v26, i, 0LL, 0LL);
          }
          LODWORD(v24) = waveDeckItemList->max_length;
          if ( (__int64)++v25 >= (int)v24 )
            goto LABEL_60;
        }
        goto LABEL_111;
      }
    }
  }
  else
  {
    Instance = (int64_t)this->fields.servantItemInfo;
    if ( !Instance )
      goto LABEL_106;
    if ( *(_QWORD *)(Instance + 72) )
    {
      Instance = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, v6);
      selectItem = this->fields.selectItem;
      if ( !selectItem )
        goto LABEL_106;
      v10 = Instance;
    }
    else
    {
      v10 = 0LL;
    }
    v34 = this->fields.waveDeckItemList;
    if ( !v34 )
LABEL_106:
      sub_1B8880C(Instance, v6);
    v35 = selectItem->fields._OrganizedWave_k__BackingField - 1;
    if ( v35 >= v34->max_length )
LABEL_111:
      sub_1B88814(Instance, v6);
    Instance = (int64_t)v34->m_Items[v35];
    if ( !Instance )
      goto LABEL_106;
    PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v10, 0LL);
  }
LABEL_60:
  v36 = this->fields.waveDeckItemList;
  if ( !v36 )
    goto LABEL_106;
  v37 = this->fields.partyNumber - 1;
  if ( v37 >= v36->max_length )
    goto LABEL_111;
  v38 = this->fields.selectItem;
  if ( !v38 )
    goto LABEL_106;
  userSvtEntity = v38->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_106;
  memberIndex = this->fields.memberIndex;
  v41 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v42 = v36->m_Items[v37];
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v69 = v70;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v69, 0LL);
  if ( !v42 )
    goto LABEL_106;
  PartyListViewItem__SetEquip(v42, memberIndex, Instance, 0LL);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v71 = v68;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v43 )
      break;
    v46 = v71.fields._current;
    if ( !v71.fields._current
      || (v47 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v71.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v47)
      || (EquipGraphListViewItem_c *)v71.fields._current->klass->_2.typeHierarchy[v47 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B8880C(v43, v44);
    }
    if ( BYTE1(v71.fields._current[9].klass) )
      LOWORD(v71.fields._current[9].klass) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v46,
      this->fields.waveDeckItemList,
      v42,
      this->fields.memberIndex,
      v45);
    v48 = (UnityEngine_Object_o *)v46[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v49 = UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
    if ( v49 )
    {
      v52 = v46[6].monitor;
      if ( !v52
        || (v53 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v52 + 304LL) < (unsigned int)v53)
        || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v52 + 200LL) + 8 * v53 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1B8880C(v49, v50);
      }
      EquipGraphListViewObject__Init_38594876((EquipGraphListViewObject_o *)v46[6].monitor, 4, v51);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.baseCost = v42->fields.cost;
LABEL_83:
  v54 = this->fields.selectItem;
  if ( !v54 )
    goto LABEL_106;
  v54->fields.isBase = 1;
  if ( (v54->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v55) = 0;
  }
  else
  {
    v55 = v54->fields.servantEntity;
    if ( v55 )
      LODWORD(v55) = v55->fields.cost;
  }
  this->fields.baseCost -= (int)v55;
  v56 = v54->fields.userSvtEntity;
  if ( !v56 )
    goto LABEL_106;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v67 = v70;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v67, 0LL);
  if ( !servantItemInfo )
    goto LABEL_106;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v59);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_106;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v60);
  v61 = this->fields.selectItem;
  if ( !v61 )
    goto LABEL_106;
  viewObject = (UnityEngine_Object_o *)v61->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_102;
  v64 = this->fields.selectItem;
  if ( !v64 )
    goto LABEL_106;
  Instance = (int64_t)v64->fields.viewObject;
  if ( !Instance )
    goto LABEL_106;
  v65 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v65
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v65 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_106;
  }
  EquipGraphListViewObject__Init_38594876((EquipGraphListViewObject_o *)Instance, 4, v63);
LABEL_102:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_103:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))selectItemCallbackFunc->fields.m_target)(
      selectItemCallbackFunc->fields.original_method_info,
      *(_QWORD *)&selectItemCallbackFunc->fields.extra_arg);
  }
}


void __fastcall EquipGraphListViewManager__EndSelectFilterKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5AA7A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AA7A = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5AA7E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AA7E = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5AA81 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5AA81 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0LL;
  v15 = v14;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v15.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B8880C(v7, v8);
    }
    klass = v15.fields._current[7].klass;
    if ( !klass )
      sub_1B8880C(v7, v8);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v16.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


bool __fastcall EquipGraphListViewManager__GetFocusItemIndex(
        EquipGraphListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5AA82 & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5AA82 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1B8880C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EquipGraphListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( BYTE1(this->fields.sortOrderButton) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetItem(
        EquipGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5AA6D & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5AA6D = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EquipGraphListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
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


System_String_o *__fastcall EquipGraphListViewManager__GetScaleButtonSpriteName(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AA75 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4A5AA75 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v9.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B8880C(v4, v5);
    }
    if ( BYTE1(v9.fields._current[9].klass) )
    {
      klass_high = HIDWORD(v9.fields._current[1].klass);
      goto LABEL_12;
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5AA76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4A5AA76 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v9.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B8880C(v4, v5);
    }
    if ( BYTE1(v9.fields._current[9].klass) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (EquipGraphListViewItem_o *)current;
}


EquipGraphServantItem_o *__fastcall EquipGraphListViewManager__GetServantItemInfo(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


bool __fastcall EquipGraphListViewManager__GetSwapChoiceList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA6F & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5AA6F = 1;
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
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 201) )
      {
        if ( *(_BYTE *)(itemList + 173) )
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


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA6E & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5AA6E = 1;
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
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 200) )
      {
        if ( *(_BYTE *)(itemList + 172) )
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


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A5AA67 & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewManager_TypeInfo);
    byte_4A5AA67 = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v2 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_1B8880C(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v8; // w20
  DataManager_c **v9; // x21
  DataManager_c *v10; // x8
  struct System_Collections_Generic_List_Thread__o **v11; // x21
  DataManager_c *v12; // t1
  Il2CppType byval_arg; // q0
  int64_t v14; // x0
  DataManager_o *v15; // x22
  int32_t v16; // w23
  DataManager_o *v17; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v20; // q0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Collections_Generic_List_Thread__o *v23; // x1
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v32; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-80h]

  if ( (byte_4A5AA6C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AA6C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  size = itemList->fields._size;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    v32 = Instance;
    while ( 1 )
    {
      v9 = &Instance->klass + (int)v8;
      v12 = v9[4];
      v11 = (struct System_Collections_Generic_List_Thread__o **)(v9 + 4);
      v10 = v12;
      if ( !v12 )
        break;
      byval_arg = v10->_1.byval_arg;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v10->_1.name;
      *(Il2CppType *)&v35.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v34, 0LL);
      if ( size >= 1 )
      {
        v15 = (DataManager_o *)v14;
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
          v17 = Instance;
          methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (EquipGraphListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v20 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v35.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v33 = v35;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
            if ( Instance == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_27;
        }
        if ( v8 >= LODWORD(v32->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v23 = *v11;
        v17->fields.masterLoadThreads = *v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->fields.masterLoadThreads, (int32_t)v23, v21, v22);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v17, v5);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v17, v24);
        }
      }
LABEL_27:
      Instance = v32;
      if ( ++v8 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v8 >= LODWORD(v32->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1B88814(Instance, v5);
    }
LABEL_44:
    sub_1B8880C(Instance, v5);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v25 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v25,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v27 = (ListViewItem_o *)Item;
        v28 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v28
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v28 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v27->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v25 )
        return;
    }
  }
}


void __fastcall EquipGraphListViewManager__OnClickBonusFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A5AA7C & 1) == 0 )
  {
    sub_1B885B0(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_4A5AA7C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = EquipGraphListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Select,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall EquipGraphListViewManager__OnClickEquipExplanation(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v7; // x1
  unsigned int Select; // w0

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_1B8880C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
    if ( callbackFunc )
    {
      Select = EquipGraphListViewManager__GetSelect(this, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        3LL,
        Select,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall EquipGraphListViewManager__OnClickFilterKind(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA79 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AA79 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_30500992(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListViewManager__OnClickSelectListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
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


void __fastcall EquipGraphListViewManager__OnClickSortAscendingOrder(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A5AA7F & 1) == 0 )
  {
    sub_1B885B0(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4A5AA7F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5AA7D & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AA7D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 4, sort, 0, v8, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnLongPushListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  EquipGraphListViewManager_o *v4; // x20
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  unsigned int Index; // w0

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    goto LABEL_8;
  if ( equipGraphListMenu->fields.modeKind )
    return;
  v4 = this;
  this = (EquipGraphListViewManager_o *)this->fields.scrollView;
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


void __fastcall EquipGraphListViewManager__OnMoveEnd(EquipGraphListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5AA74 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA74 = 1;
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


void __fastcall EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v11; // w22
  UILabel_o *v12; // x20
  System_String_o **v13; // x8
  System_String_o *v14; // x21
  System_String_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5AA70 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12377/*"SUM_OVER_INFO"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5AA70 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_22;
  v5 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v6 >= v5->fields._size )
        goto LABEL_8;
    }
LABEL_22:
    sub_1B8880C(ObjectList, v4);
  }
LABEL_8:
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(infoData2Label, 0LL, 0LL);
  if ( ((unsigned __int8)ObjectList & 1) != 0 )
  {
    servantItemInfo = this->fields.servantItemInfo;
    if ( !servantItemInfo )
      goto LABEL_22;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    baseCost = this->fields.baseCost;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    v11 = (_DWORD)equipServantEntity + baseCost;
    v12 = this->fields.infoData2Label;
    v13 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12376/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12377/*"SUM_OVER_INFO"*/;
    v14 = *v13;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get(v14, 0LL);
    v25 = v11;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16, v17, v18);
    maxCost = this->fields.maxCost;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v20, v21, v22);
    ObjectList = (System_Collections_Generic_List_object__o *)System_String__Format_61721404(v15, v19, v23, 0LL);
    if ( !v12 )
      goto LABEL_22;
    UILabel__set_text(v12, (System_String_o *)ObjectList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA72 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1B885B0(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5AA72 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      EquipGraphListViewObject__Init_38596028((EquipGraphListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_38595000(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA73 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1B885B0(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5AA73 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      EquipGraphListViewObject__Init_38596112((EquipGraphListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void __fastcall EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct EquipGraphListViewItem_o **p_selectItem; // x20
  ServantStatusBattleListViewItem_o *p_selectItemCallbackFunc; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 servantItemInfo; // x0
  const MethodInfo *v12; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  EquipGraphListViewObject_o *v16; // x24
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v21; // w9
  struct EquipGraphListViewItem_o *v22; // x8
  int32_t wearerMember; // w10
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v25; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w21
  System_Reflection_MethodBase_o *v27; // x0
  const MethodInfo *v28; // x2
  struct EquipGraphServantItem_o *v29; // x8
  struct PartyListViewItem_array *v30; // x8
  int v31; // w10
  Il2CppClass **v32; // x8
  Il2CppClass *v33; // x21
  int events; // w22
  struct EquipGraphServantItem_o *v35; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v38; // x21
  System_String_o *v39; // x22
  NotificationDialog_ClickDelegate_o *v40; // x23
  int64_t v41; // x1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  _QWORD *v46; // x0
  _BOOL4 v47; // w21
  int32_t v48; // w2
  int32_t v49; // w3
  ServantStatusBattleListViewItem_c *klass; // x19
  _QWORD *v51; // x0
  _BOOL4 v52; // w23
  System_Reflection_MethodBase_o *v53; // x0
  System_String_o *v54; // x21
  __int64 v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_String_o *v61; // x23
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x23
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x23
  struct EquipGraphServantItem_o *v68; // x8
  int32_t v69; // w23
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x23
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x20
  System_String_o *v76; // x20
  Il2CppObject *v77; // x21
  System_String_o *v78; // x22
  CommonConfirmDialog_ClickDelegate_o *v79; // x23
  struct EquipGraphServantItem_o *v80; // x8
  struct PartyListViewItem_array *v81; // x9
  __int64 v82; // x8
  unsigned __int64 v83; // x29
  int v84; // w27
  PartyListViewItem_o *v85; // x21
  int32_t v86; // w22
  struct ServantEntity_o *v87; // x8
  PartyOrganizationListViewItem_o *v88; // x23
  __int64 v89; // x24
  __int64 v90; // x25
  int v91; // w24
  ServantEntity_o *v92; // x21
  System_String_o *v93; // x21
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x22
  int32_t v98; // w2
  int32_t v99; // w3
  __int64 v100; // x23
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  int32_t v104; // w2
  int32_t v105; // w3
  __int64 v106; // x23
  int32_t weareRarity; // w23
  int32_t v108; // w2
  int32_t v109; // w3
  __int64 v110; // x23
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x23
  int32_t v114; // w2
  int32_t v115; // w3
  struct System_String_o *wearerServantName; // x20
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  int32_t v120; // w2
  int32_t v121; // w3
  __int64 v122; // x20
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  int32_t v126; // w2
  int32_t v127; // w3
  __int64 v128; // x20
  struct EquipGraphServantItem_o *v129; // x8
  int32_t Rarity; // w0
  int32_t v131; // w2
  int32_t v132; // w3
  __int64 v133; // x20
  int32_t v134; // w2
  int32_t v135; // w3
  __int64 v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  __int64 v139; // x20
  System_String_o *v140; // x20
  Il2CppObject *v141; // x21
  System_String_o *v142; // x22
  System_String_o *v143; // x23
  System_String_o *v144; // x24
  CommonConfirmDialog_ClickDelegate_o *v145; // x25
  struct PartyListViewItem_array *v146; // x8
  int v147; // w9
  struct EquipGraphListViewItem_o *v148; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v151; // q1
  PartyListViewItem_o *v152; // x24
  _BOOL8 v153; // x0
  __int64 v154; // x1
  Il2CppObject *current; // x28
  __int64 v156; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v159; // x23
  _BOOL8 v160; // x0
  __int64 v161; // x1
  const MethodInfo *v162; // x2
  void *v163; // x8
  __int64 v164; // x11
  struct EquipGraphListViewItem_o *v165; // x8
  struct UserServantEntity_o *v166; // x9
  __int128 v167; // q1
  struct EquipGraphServantItem_o *v168; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v170; // x20
  __int64 v171; // x22
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  int32_t v175; // w2
  int32_t v176; // w3
  __int64 v177; // x24
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  int32_t v181; // w2
  int32_t v182; // w3
  __int64 v183; // x24
  int32_t v184; // w24
  int32_t v185; // w2
  int32_t v186; // w3
  __int64 v187; // x24
  int32_t v188; // w2
  int32_t v189; // w3
  __int64 v190; // x24
  __int64 v191; // x23
  __int64 v192; // x24
  int32_t v193; // w0
  int32_t v194; // w2
  int32_t v195; // w3
  __int64 v196; // x21
  System_String_o *v197; // x20
  Il2CppObject *v198; // x21
  System_String_o *v199; // x22
  System_String_o *v200; // x23
  System_String_o *v201; // x24
  CommonConfirmDialog_ClickDelegate_o *v202; // x25
  __int64 v203; // x0
  struct PartyListViewItem_array *v204; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v208; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16

  if ( (byte_4A5AA77 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_1B885B0(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_1B885B0(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__);
    sub_1B885B0(&EquipGraphListViewObject_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_15511/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15512/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_1B885B0(&StringLiteral_15508/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5520/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_1B885B0(&StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15504/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_15503/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_4A5AA77 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v211, 0, sizeof(v211));
  this->fields.selectItem = item;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectItem,
    (int32_t)item,
    (int32_t)callback,
    (int32_t)method);
  p_selectItemCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v9, v10);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_227;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewObject_TypeInfo )
      v16 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( selectItem->fields.isBase )
  {
    v17 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_SelectEquip__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    if ( !this->fields.isWaveBattle )
    {
LABEL_18:
      v22 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      wearerMember = v22->fields.wearerMember;
      v22->fields.isBase = 0;
      if ( (wearerMember & 0x80000000) == 0 && wearerMember != this->fields.memberIndex
        || v22->fields._OrganizedWave_k__BackingField > 0
        || v22->fields._IsUnique_k__BackingField )
      {
        if ( (wearerMember & 0x80000000) != 0 )
        {
          LODWORD(servantEntity) = 0;
        }
        else
        {
          servantEntity = v22->fields.servantEntity;
          if ( servantEntity )
            LODWORD(servantEntity) = servantEntity->fields.cost;
        }
        this->fields.baseCost += (int)servantEntity;
        if ( !v16 )
          goto LABEL_227;
        EquipGraphListViewObject__Init_38594876(v16, 4, v19);
      }
      servantItemInfo = (__int64)this->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_227;
      v41 = 0LL;
LABEL_51:
      EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v41, v19);
      servantItemInfo = (__int64)this->fields.servantItemDraw;
      if ( servantItemInfo )
      {
        EquipGraphServantItemDraw__SetItem(
          (EquipGraphServantItemDraw_o *)servantItemInfo,
          this->fields.servantItemInfo,
          v42);
        EquipGraphListViewManager__RefrashListDisp(this, v43);
        if ( callback )
        {
          p_selectItemCallbackFunc->klass = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v44, v45);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
            callback->fields.original_method_info,
            *(_QWORD *)&callback->fields.extra_arg);
        }
        return;
      }
LABEL_227:
      sub_1B8880C(servantItemInfo, v12);
    }
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_227;
    v21 = this->fields.partyNumber - 1;
    if ( v21 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v21];
      if ( !servantItemInfo )
        goto LABEL_227;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
      goto LABEL_18;
    }
LABEL_229:
    sub_1B88814(servantItemInfo, v12);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_227;
    v25 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_SelectEquip__);
    v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v25, v25[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
      v29 = this->fields.servantItemInfo;
      if ( !v29 )
        goto LABEL_227;
      if ( v29->fields.equipUserSvtEntity )
      {
        v30 = this->fields.waveDeckItemList;
        if ( !v30 )
          goto LABEL_227;
        v31 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v31 >= v30->max_length )
          goto LABEL_229;
        if ( !*p_selectItem )
          goto LABEL_227;
        v32 = &v30->obj.klass + v31;
        v33 = v32[4];
        if ( !v33 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                     (PartyListViewItem_o *)v32[4],
                                     (*p_selectItem)->fields.wearerMember,
                                     0LL);
        if ( !servantItemInfo )
          goto LABEL_227;
        events = (int)v33->_1.events;
        servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                            (PartyOrganizationListViewItem_o *)servantItemInfo,
                            0LL);
        v35 = this->fields.servantItemInfo;
        if ( !v35 )
          goto LABEL_227;
        equipServantEntity = v35->fields.equipServantEntity;
        if ( equipServantEntity )
          LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
        if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v33->_1.interopData) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15504/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15503/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v40 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v40,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_30496496(
              (CommonUI_o *)Instance,
              v38,
              v39,
              v40,
              -1,
              0,
              0,
              0,
              0,
              0,
              0LL,
              0LL,
              0,
              0,
              0LL,
              1,
              0LL,
              0LL,
              0LL,
              0LL);
            return;
          }
          goto LABEL_227;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_15511/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_1B88658(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v97 = servantItemInfo;
        LODWORD(v207.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v207, v94, v95, v96);
        if ( !v97 )
          goto LABEL_227;
        v100 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v97 + 24) )
            goto LABEL_229;
          *(_QWORD *)(v97 + 32) = v100;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 32), v100, v98, v99);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v101, v102, v103);
          v106 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v97 + 24) <= 1u )
              goto LABEL_229;
            *(_QWORD *)(v97 + 40) = v106;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 40), v106, v104, v105);
            if ( !*p_selectItem )
              goto LABEL_227;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v110 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v97 + 24) <= 2u )
                goto LABEL_229;
              *(_QWORD *)(v97 + 48) = v110;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 48), v110, v108, v109);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v12);
              v113 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v97 + 24) <= 3u )
                  goto LABEL_229;
                *(_QWORD *)(v97 + 56) = v113;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 56), v113, v111, v112);
                if ( !*p_selectItem )
                  goto LABEL_227;
                wearerServantName = (*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_1B886EC(wearerServantName, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v97 + 24) <= 4u )
                    goto LABEL_229;
                  *(_QWORD *)(v97 + 64) = wearerServantName;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 64), (int32_t)wearerServantName, v114, v115);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v117, v118, v119);
                  v122 = servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v97 + 24) <= 5u )
                      goto LABEL_229;
                    *(_QWORD *)(v97 + 72) = v122;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 72), v122, v120, v121);
                    v208 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v208, v123, v124, v125);
                    v128 = servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v97 + 24) <= 6u )
                        goto LABEL_229;
                      *(_QWORD *)(v97 + 80) = v128;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 80), v128, v126, v127);
                      v129 = this->fields.servantItemInfo;
                      if ( !v129 )
                        goto LABEL_227;
                      servantItemInfo = (__int64)v129->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_227;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v133 = servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v97 + 24) <= 7u )
                          goto LABEL_229;
                        *(_QWORD *)(v97 + 88) = v133;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 88), v133, v131, v132);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_227;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v12);
                        v136 = servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v97 + 24) <= 8u )
                            goto LABEL_229;
                          *(_QWORD *)(v97 + 96) = v136;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 96), v136, v134, v135);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_227;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v12);
                          v139 = servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v97 + 24) > 9u )
                            {
                              *(_QWORD *)(v97 + 104) = v139;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 104), v139, v137, v138);
                              v140 = System_String__Format_61721540(v93, (System_Object_array *)v97, 0LL);
                              v141 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v142 = LocalizationManager__Get((System_String_o *)StringLiteral_15512/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                              v143 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
                              v144 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
                              v145 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v145,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0LL);
                              if ( v141 )
                              {
                                CommonUI__OpenConfirmDialog_30494344(
                                  (CommonUI_o *)v141,
                                  v142,
                                  v140,
                                  v143,
                                  v144,
                                  v145,
                                  24,
                                  24,
                                  15.0,
                                  740,
                                  0,
                                  480,
                                  -162.5,
                                  0,
                                  0,
                                  280,
                                  0,
                                  0LL);
                                return;
                              }
                              goto LABEL_227;
                            }
                            goto LABEL_229;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_231;
      }
LABEL_119:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v28);
      return;
    }
    goto LABEL_59;
  }
  if ( !selectItem->fields._IsUnique_k__BackingField )
  {
    v51 = Method_EquipGraphListViewManager_SelectEquip__;
    v52 = selectItem->fields.wearerMember >= 0 && selectItem->fields.wearerMember != this->fields.memberIndex;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v51 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_SelectEquip__);
    v53 = (System_Reflection_MethodBase_o *)sub_1B88594(v51, v51[4]);
    OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
    if ( !v52 )
    {
      if ( this->fields.isWaveBattle )
      {
        v146 = this->fields.waveDeckItemList;
        if ( !v146 )
          goto LABEL_227;
        v147 = this->fields.partyNumber - 1;
        if ( v147 >= v146->max_length )
          goto LABEL_229;
        v148 = this->fields.selectItem;
        if ( !v148 )
          goto LABEL_227;
        userSvtEntity = v148->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_227;
        memberIndex = this->fields.memberIndex;
        v151 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v152 = v146->m_Items[v147];
        *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v207.fields.fakeValue = v151;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v206 = v207;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v206, 0LL);
        if ( !v152 )
          goto LABEL_227;
        PartyListViewItem__SetEquip(v152, memberIndex, servantItemInfo, 0LL);
      }
      servantItemInfo = (__int64)this->fields.itemList;
      if ( !servantItemInfo )
        goto LABEL_227;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v207,
        (System_Collections_Generic_List_object__o *)servantItemInfo,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v211 = *(System_Collections_Generic_List_Enumerator_object__o *)&v207.fields.currentCryptoKey;
      while ( 1 )
      {
        v153 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v211,
                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v153 )
          break;
        current = v211.fields._current;
        if ( !v211.fields._current
          || (v156 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v211.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v156)
          || (EquipGraphListViewItem_c *)v211.fields._current->klass->_2.typeHierarchy[v156 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_1B8880C(v153, v154);
        }
        if ( BYTE1(v211.fields._current[9].klass) )
        {
          if ( (klass_high = HIDWORD(v211.fields._current[9].klass),
                BYTE1(v211.fields._current[9].klass) = 0,
                (klass_high & 0x80000000) == 0)
            && klass_high != this->fields.memberIndex
            || SHIDWORD(current[14].monitor) > 0
            || LOBYTE(current[15].monitor) )
          {
            if ( (klass_high & 0x80000000) != 0 )
            {
              LODWORD(monitor) = 0;
            }
            else
            {
              monitor = current[7].monitor;
              if ( monitor )
                LODWORD(monitor) = monitor[38];
            }
            this->fields.baseCost += (int)monitor;
            v159 = (UnityEngine_Object_o *)current[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v160 = UnityEngine_Object__op_Inequality(v159, 0LL, 0LL);
            if ( v160 )
            {
              v163 = current[6].monitor;
              if ( !v163
                || (v164 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v163 + 304LL) < (unsigned int)v164)
                || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v163 + 200LL) + 8 * v164 - 8) != EquipGraphListViewObject_TypeInfo )
              {
                sub_1B8880C(v160, v161);
              }
              EquipGraphListViewObject__Init_38594876((EquipGraphListViewObject_o *)current[6].monitor, 4, v162);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v211,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v165 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      v166 = v165->fields.userSvtEntity;
      v165->fields.isBase = 1;
      if ( !v166 )
        goto LABEL_227;
      v167 = *(_OWORD *)&v166->fields.id.fields.fakeValue;
      v168 = this->fields.servantItemInfo;
      *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)&v166->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v207.fields.fakeValue = v167;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v205 = v207;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v205, 0LL);
      if ( !v168 )
        goto LABEL_227;
      v41 = servantItemInfo;
      servantItemInfo = (__int64)v168;
      goto LABEL_51;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_1B88658(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_227;
    v55 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v12);
    if ( !v55 )
      goto LABEL_227;
    v58 = servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v55 + 24) )
        goto LABEL_229;
      *(_QWORD *)(v55 + 32) = v58;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 32), v58, v56, v57);
      if ( !*p_selectItem )
        goto LABEL_227;
      v61 = (*p_selectItem)->fields.wearerServantName;
      if ( !v61 || (servantItemInfo = sub_1B886EC(v61, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v55 + 24) <= 1u )
          goto LABEL_229;
        *(_QWORD *)(v55 + 40) = v61;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 40), (int32_t)v61, v59, v60);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_227;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v12);
        v64 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v55 + 24) <= 2u )
            goto LABEL_229;
          *(_QWORD *)(v55 + 48) = v64;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 48), v64, v62, v63);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_227;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v12);
          v67 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v55 + 24) <= 3u )
              goto LABEL_229;
            *(_QWORD *)(v55 + 56) = v67;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 56), v67, v65, v66);
            v68 = this->fields.servantItemInfo;
            if ( !v68 )
              goto LABEL_227;
            servantItemInfo = (__int64)v68->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_227;
            v69 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v69, 0LL);
            v72 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v55 + 24) <= 4u )
                goto LABEL_229;
              *(_QWORD *)(v55 + 64) = v72;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 64), v72, v70, v71);
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v75 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v55 + 24) > 5u )
                {
                  *(_QWORD *)(v55 + 72) = v75;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 72), v75, v73, v74);
                  v76 = System_String__Format_61721540(v54, (System_Object_array *)v55, 0LL);
                  v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v79 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v79,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v77 )
                  {
                    CommonUI__OpenConfirmDialog(
                      (CommonUI_o *)v77,
                      v78,
                      v76,
                      v79,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_227;
                }
                goto LABEL_229;
              }
            }
          }
        }
      }
    }
    goto LABEL_231;
  }
  if ( !item )
    goto LABEL_227;
  v46 = Method_EquipGraphListViewManager_SelectEquip__;
  v47 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v46 = (_QWORD *)sub_1B885C8(Method_EquipGraphListViewManager_SelectEquip__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v46, v46[4]);
  if ( v47 )
  {
LABEL_59:
    OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_1B88554(p_selectItemCallbackFunc, 0, v48, v49);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  v80 = this->fields.servantItemInfo;
  if ( !v80 )
    goto LABEL_227;
  if ( !v80->fields.equipUserSvtEntity )
    goto LABEL_119;
  v81 = this->fields.waveDeckItemList;
  if ( !v81 )
    goto LABEL_227;
  v82 = *(_QWORD *)&v81->max_length;
  if ( (int)v82 >= 1 )
  {
    v83 = 0LL;
    v84 = 1;
    v204 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v83 >= (unsigned int)v82 )
        goto LABEL_229;
      v85 = v81->m_Items[v83];
      v86 = 0;
      do
      {
        servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v86 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
          goto LABEL_117;
        if ( !v85 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(v85, v86, 0LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v87 = (*p_selectItem)->fields.servantEntity;
        if ( !v87 )
          goto LABEL_227;
        v88 = (PartyOrganizationListViewItem_o *)servantItemInfo;
        v90 = *(_QWORD *)&v87->fields.id.fields.currentCryptoKey;
        v89 = *(_QWORD *)&v87->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v212.fields.currentCryptoKey = v90;
        *(_QWORD *)&v212.fields.fakeValue = v89;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v212, 0LL);
        if ( !v88 )
          goto LABEL_227;
        v91 = servantItemInfo;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v88, 0LL);
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL);
        ++v86;
      }
      while ( v91 != (_DWORD)servantItemInfo );
      v92 = v88->fields.servantEntity;
      if ( v92 )
        break;
LABEL_117:
      v81 = v204;
      ++v83;
      ++v84;
      LODWORD(v82) = v204->max_length;
      if ( (__int64)v83 >= (int)v82 )
        return;
    }
    userServantEntity = v88->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v170 = LocalizationManager__Get((System_String_o *)StringLiteral_15508/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v171 = sub_1B88658(object___TypeInfo, 5LL);
      LODWORD(v207.fields.currentCryptoKey) = v84;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v207, v172, v173, v174);
      if ( !v171 )
        goto LABEL_227;
      v177 = servantItemInfo;
      if ( !servantItemInfo
        || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v171 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v171 + 24) )
          goto LABEL_229;
        *(_QWORD *)(v171 + 32) = v177;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 32), v177, v175, v176);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v178, v179, v180);
        v183 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v171 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v171 + 24) <= 1u )
            goto LABEL_229;
          *(_QWORD *)(v171 + 40) = v183;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 40), v183, v181, v182);
          v184 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v184, 0LL);
          v187 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v171 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v171 + 24) <= 2u )
              goto LABEL_229;
            *(_QWORD *)(v171 + 48) = v187;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 48), v187, v185, v186);
            servantItemInfo = (__int64)ServantEntity__getClassName(v92, 0LL);
            v190 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v171 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v171 + 24) <= 3u )
                goto LABEL_229;
              *(_QWORD *)(v171 + 56) = v190;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 56), v190, v188, v189);
              v192 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v191 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v214.fields.currentCryptoKey = v192;
              *(_QWORD *)&v214.fields.fakeValue = v191;
              v193 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v214, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v92, v193, -1, 0LL);
              v196 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B886EC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v171 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v171 + 24) > 4u )
                {
                  *(_QWORD *)(v171 + 64) = v196;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 64), v196, v194, v195);
                  v197 = System_String__Format_61721540(v170, (System_Object_array *)v171, 0LL);
                  v198 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v199 = LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v200 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v201 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v202 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v202,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v198 )
                  {
                    CommonUI__OpenConfirmDialog_30494344(
                      (CommonUI_o *)v198,
                      v199,
                      v197,
                      v200,
                      v201,
                      v202,
                      26,
                      26,
                      15.0,
                      740,
                      0,
                      480,
                      -162.5,
                      0,
                      0,
                      280,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_227;
                }
                goto LABEL_229;
              }
            }
          }
        }
      }
LABEL_231:
      v203 = sub_1B88830(servantItemInfo);
      sub_1B886D8(v203, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A5AA7B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5AA7B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EquipGraphListViewManager__SetMode_38562776(this, mode, v6);
}


void __fastcall EquipGraphListViewManager__SetMode_38562776(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v8; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v6);
  servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0LL) )
    goto LABEL_7;
  servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0LL),
        (servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_38595000(this, mode + 1, v8);
}


void __fastcall EquipGraphListViewManager__SetMode_38594948(
        EquipGraphListViewManager_o *this,
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
  EquipGraphListViewManager__SetMode_38562776(this, mode, v6);
}


void __fastcall EquipGraphListViewManager__SetObjectItem(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EquipGraphListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5AA71 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1B885B0(&EquipGraphListViewObject_TypeInfo);
    byte_4A5AA71 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_38594876((EquipGraphListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall EquipGraphListViewManager__SetSortButtonImage(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA80 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5AA80 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_40;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_40;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
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
    if ( sort )
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
    }
LABEL_40:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall EquipGraphListViewManager___SelectEquip_b__71_0(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4A5AA84 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AA84 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))selectItemCallbackFunc->fields.m_target)(
      selectItemCallbackFunc->fields.original_method_info,
      *(_QWORD *)&selectItemCallbackFunc->fields.extra_arg);
  }
}


void __fastcall EquipGraphListViewManager__add_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct EquipGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  EquipGraphListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5AA60 & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4A5AA60 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v7->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EquipGraphListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__add_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5AA62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5AA62 = 1;
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
  sub_1B88ACC(v7);
  EquipGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__add_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *selectItemCallbackFunc; // x21
  struct System_Action_o **p_selectItemCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5AA64 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5AA64 = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(selectItemCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA69 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA69 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, v10);
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
          v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
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
        v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
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
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A5AA68 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA68 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
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
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


void __fastcall EquipGraphListViewManager__remove_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct EquipGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5AA61 & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4A5AA61 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v7->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EquipGraphListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__remove_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5AA63 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5AA63 = 1;
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
  sub_1B88ACC(v7);
  EquipGraphListViewManager__add_selectItemCallbackFunc(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__remove_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *selectItemCallbackFunc; // x21
  struct System_Action_o **p_selectItemCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4A5AA65 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5AA65 = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(selectItemCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EquipGraphListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19CEEC4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEE6C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4A5AA85 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_4A5AA85 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             EquipGraphListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__Invoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
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