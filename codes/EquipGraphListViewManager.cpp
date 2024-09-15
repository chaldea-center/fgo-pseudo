void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  ListViewSort_o *v8; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A2D95A & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewManager_TypeInfo, v1);
    sub_1B761C0(&ListViewSort_TypeInfo, v2);
    sub_1B761C0(&StringLiteral_6073/*"EquipGraph"*/, v3);
    sub_1B761C0(&StringLiteral_15575/*"WarBoardEquipGraph"*/, v4);
    byte_4A2D95A = 1;
  }
  v5 = (ListViewSort_o *)sub_1B7640C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40573660(v5, (System_String_o *)StringLiteral_6073/*"EquipGraph"*/, 3, 0, 0LL);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v5;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_1B7640C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40573660(v8, (System_String_o *)StringLiteral_15575/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->warBoardSortStatus = v8;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->warBoardSortStatus, (int32_t)v8, v10, v11);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B7641C(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_38460128(this, 2, v11);
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
  PartyListViewItem_array *v9; // x29
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
  int32_t v23; // w2
  int32_t v24; // w3
  EquipGraphListViewManager_c *v25; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v27; // x1
  struct ListViewSort_o **p_sort; // x23
  const MethodInfo *v29; // x1
  __int64 sort; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct ListViewSort_o *v33; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct ListViewSort_o *v40; // x20
  bool v41; // w8
  PartyOrganizationListViewItem_o *v42; // x24
  EquipGraphServantItem_o *v43; // x25
  const MethodInfo *v44; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v52; // x26
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x27
  UserServantEntity_array *v55; // x25
  UILabel_o *v56; // x27
  PartyListViewItem_array *v57; // x20
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_String_o *v61; // x28
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x29
  Il2CppObject *v66; // x0
  __int64 v67; // x8
  unsigned __int64 v68; // x23
  UserServantEntity_o *v69; // x27
  int32_t memberIdx; // w22
  int64_t v71; // x28
  EquipGraphListViewItem_o *v72; // x26
  int64_t v73; // x4
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  __int64 v79; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v82; // x8
  System_String_o *v83; // x21
  const MethodInfo *v84; // x1
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // [xsp+8h] [xbp-78h]
  PartyListViewItem_o *partyItema; // [xsp+10h] [xbp-70h]
  int v88; // [xsp+18h] [xbp-68h] BYREF
  int v89; // [xsp+1Ch] [xbp-64h] BYREF

  v9 = baseDeckItemList;
  if ( (byte_4A2D941 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v11);
    sub_1B761C0(&EquipGraphListViewManager_TypeInfo, v12);
    sub_1B761C0(&EquipGraphServantItem_TypeInfo, v13);
    sub_1B761C0(&int_TypeInfo, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v16);
    sub_1B761C0(&LocalizationManager_TypeInfo, v17);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v18);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B761C0(&StringLiteral_11571/*"SERVANT_EQUIP_EMPTY"*/, v20);
    sub_1B761C0(&StringLiteral_11768/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_1B761C0(&StringLiteral_12372/*"SUM_INFO"*/, v22);
    byte_4A2D941 = 1;
  }
  this->fields.waveDeckItemList = v9;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.waveDeckItemList,
    (int32_t)v9,
    (int32_t)partyItem,
    member);
  v25 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v25 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v25->static_fields->sortStatus;
  v27 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v27, v23, v24);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_64;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_64;
  v33 = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !v33 )
    goto LABEL_64;
  iconScaleKind = v33->fields.iconScaleKind;
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v31, v32);
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
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v38,
      v39);
    v40 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v40 )
      goto LABEL_64;
    v41 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v31, v32);
    v40 = this->fields.sort;
    if ( !v40 )
      goto LABEL_64;
    v41 = 0;
  }
  v40->fields.isBonusKind = v41;
  sort = (__int64)PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_64;
  v42 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v43 = (EquipGraphServantItem_o *)sub_1B7640C(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v43, v42, v44);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v43;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v43, v46, v47);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v48);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v49);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_64;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v52 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !v9 )
      goto LABEL_64;
    this->fields.maxWave = *(_QWORD *)&v9->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_64;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_64;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v55 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    partyItema = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v56 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = v9;
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
      if ( !v55 )
        goto LABEL_64;
      v61 = (System_String_o *)sort;
      v89 = *(_QWORD *)&v55->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v89, v58, v59, v60);
      if ( !v52 )
        goto LABEL_64;
      v65 = (Il2CppObject *)sort;
      v88 = *(_DWORD *)(v52 + 156);
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v62, v63, v64);
      sort = (__int64)System_String__Format_61549432(v61, v65, v66, 0LL);
      if ( !v56 )
        goto LABEL_64;
      UILabel__set_text(v56, (System_String_o *)sort, 0LL);
      v9 = v57;
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
    if ( !v55 )
      goto LABEL_64;
    v67 = *(_QWORD *)&v55->max_length;
    if ( (int)v67 >= 1 )
    {
      v68 = 0LL;
      while ( 1 )
      {
        if ( v68 >= (unsigned int)v67 )
          sub_1B76424(sort, v29);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v69 = v55->m_Items[v68];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v29);
        if ( !*p_servantItemInfo )
          break;
        memberIdx = this->fields.memberIndex;
        v71 = sort;
        v72 = (EquipGraphListViewItem_o *)sub_1B7640C(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor(v72, v68, v69, v71, v73, v9, partyItema, setupInfo, memberIdx, v86);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v76 = *(_QWORD *)(sort + 16);
        v77 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v76 )
          break;
        v78 = *(int *)(sort + 24);
        if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v72,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = v76 + 8 * v78;
          *(_DWORD *)(sort + 24) = v78 + 1;
          *(_QWORD *)(v79 + 32) = v72;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v79 + 32), (int32_t)v72, v74, v75);
        }
        LODWORD(v67) = v55->max_length;
        if ( (__int64)++v68 >= (int)v67 )
          goto LABEL_55;
      }
LABEL_64:
      sub_1B7641C(sort, v29);
    }
LABEL_55:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_64;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v82 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11571/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11768/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v83 = *v82;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v83, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_64;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v84);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v85);
  }
}


void __fastcall EquipGraphListViewManager__CreateList_38457984(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
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
  EquipGraphListViewManager_c *v21; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  const MethodInfo *v24; // x1
  __int64 sort; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct ListViewSort_o *v34; // x21
  bool v35; // w8
  PartyOrganizationListViewItem_o *v36; // x23
  EquipGraphServantItem_o *v37; // x24
  const MethodInfo *v38; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v46; // x25
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v49; // x24
  UILabel_o *v50; // x26
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_String_o *v54; // x27
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x28
  Il2CppObject *v59; // x0
  __int64 v60; // x8
  unsigned __int64 v61; // x22
  UserServantEntity_o *v62; // x26
  int64_t v63; // x27
  EquipGraphListViewItem_o *v64; // x25
  int64_t v65; // x4
  const MethodInfo *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v75; // x8
  System_String_o *v76; // x21
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x1
  int v79; // [xsp+8h] [xbp-68h] BYREF
  int v80; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A2D942 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v9);
    sub_1B761C0(&EquipGraphListViewManager_TypeInfo, v10);
    sub_1B761C0(&EquipGraphServantItem_TypeInfo, v11);
    sub_1B761C0(&int_TypeInfo, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14);
    sub_1B761C0(&LocalizationManager_TypeInfo, v15);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v16);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B761C0(&StringLiteral_11571/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_1B761C0(&StringLiteral_11768/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v19);
    sub_1B761C0(&StringLiteral_12372/*"SUM_INFO"*/, v20);
    byte_4A2D942 = 1;
  }
  v21 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v21 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v21->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_1B76164(
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v26, v27);
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
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v32,
      v33);
    v34 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v34 )
      goto LABEL_63;
    v35 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v26, v27);
    v34 = this->fields.sort;
    if ( !v34 )
      goto LABEL_63;
    v35 = 0;
  }
  v34->fields.isBonusKind = v35;
  if ( !partyItem )
    goto LABEL_63;
  sort = (__int64)WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_63;
  v36 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v37 = (EquipGraphServantItem_o *)sub_1B7640C(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v37, v36, v38);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v37;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v37, v40, v41);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v42);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v43);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_63;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v46 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v49 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v50 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
      if ( !v49 )
        goto LABEL_63;
      v54 = (System_String_o *)sort;
      v80 = *(_QWORD *)&v49->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v80, v51, v52, v53);
      if ( !v46 )
        goto LABEL_63;
      v58 = (Il2CppObject *)sort;
      v79 = *(_DWORD *)(v46 + 156);
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v55, v56, v57);
      sort = (__int64)System_String__Format_61549432(v54, v58, v59, 0LL);
      if ( !v50 )
        goto LABEL_63;
      UILabel__set_text(v50, (System_String_o *)sort, 0LL);
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
    if ( !v49 )
      goto LABEL_63;
    v60 = *(_QWORD *)&v49->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = 0LL;
      while ( 1 )
      {
        if ( v61 >= (unsigned int)v60 )
          sub_1B76424(sort, v24);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v62 = v49->m_Items[v61];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v24);
        if ( !*p_servantItemInfo )
          break;
        v63 = sort;
        v64 = (EquipGraphListViewItem_o *)sub_1B7640C(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_38476936(v64, v61, v62, v63, v65, partyItem, setupInfo, v66);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v69 = *(_QWORD *)(sort + 16);
        v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v69 )
          break;
        v71 = *(int *)(sort + 24);
        if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v64,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = v69 + 8 * v71;
          *(_DWORD *)(sort + 24) = v71 + 1;
          *(_QWORD *)(v72 + 32) = v64;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v72 + 32), (int32_t)v64, v67, v68);
        }
        LODWORD(v60) = v49->max_length;
        if ( (__int64)++v61 >= (int)v60 )
          goto LABEL_54;
      }
LABEL_63:
      sub_1B7641C(sort, v24);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v75 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11571/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11768/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v76 = *v75;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v76, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v77);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v78);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A2D93D & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4A2D93D = 1;
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
    sub_1B7641C(sortStatus, v1);
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
    sub_1B7641C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectConfirm(
        EquipGraphListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v20; // x2
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v27; // x20
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  void *v31; // x8
  __int64 v32; // x11
  struct PartyListViewItem_array *waveDeckItemList; // x25
  __int64 v34; // x8
  unsigned __int64 v35; // x26
  PartyListViewItem_o *v36; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v38; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v40; // x22
  __int64 v41; // x23
  __int64 v42; // x24
  int v43; // w23
  struct PartyListViewItem_array *v44; // x9
  int v45; // w10
  struct PartyListViewItem_array *v46; // x8
  int v47; // w9
  struct EquipGraphListViewItem_o *v48; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v51; // q1
  PartyListViewItem_o *v52; // x20
  _BOOL8 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x4
  Il2CppObject *v56; // x21
  __int64 v57; // x10
  UnityEngine_Object_o *v58; // x22
  _BOOL8 v59; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x2
  void *v62; // x8
  __int64 v63; // x11
  struct EquipGraphListViewItem_o *v64; // x8
  struct ServantEntity_o *v65; // x10
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  struct EquipGraphListViewItem_o *v71; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v73; // x2
  struct EquipGraphListViewItem_o *v74; // x8
  __int64 v75; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+0h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+28h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4A2D94F & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, result);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v8);
    sub_1B761C0(&EquipGraphListViewObject_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v11);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4A2D94F = 1;
  }
  memset(&v81, 0, sizeof(v81));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v80,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v81.fields._list = *(_OWORD *)&v80.fields.currentCryptoKey;
    v81.fields._current = (Il2CppObject *)v80.fields.fakeValue;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v81,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v21 )
        break;
      current = v81.fields._current;
      if ( !v81.fields._current
        || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v81.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EquipGraphListViewItem_c *)v81.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1B7641C(v21, v22);
      }
      if ( BYTE1(v81.fields._current[9].klass) )
      {
        if ( (klass_high = HIDWORD(v81.fields._current[9].klass),
              BYTE1(v81.fields._current[9].klass) = 0,
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
          v27 = (UnityEngine_Object_o *)current[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v28 = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
          if ( v28 )
          {
            v31 = current[6].monitor;
            if ( !v31
              || (v32 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                  *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)v32)
              || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v32 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1B7641C(v28, v29);
            }
            EquipGraphListViewObject__Init_38492228((EquipGraphListViewObject_o *)current[6].monitor, 4, v30);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v81,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v34 = *(_QWORD *)&waveDeckItemList->max_length;
      if ( (int)v34 >= 1 )
      {
        v35 = 0LL;
        while ( v35 < (unsigned int)v34 )
        {
          v36 = waveDeckItemList->m_Items[v35];
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
            if ( !v36 )
              goto LABEL_106;
            Instance = (int64_t)PartyListViewItem__GetMember(v36, i, 0LL);
            v38 = this->fields.selectItem;
            if ( !v38 )
              goto LABEL_106;
            servantEntity = v38->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_106;
            v40 = (PartyOrganizationListViewItem_o *)Instance;
            v42 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v41 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v82.fields.currentCryptoKey = v42;
            *(_QWORD *)&v82.fields.fakeValue = v41;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v82, 0LL);
            if ( !v40 )
              goto LABEL_106;
            v43 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v40, 0LL);
            if ( v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(EquipSvtId, 0LL) )
              PartyListViewItem__SetEquip(v36, i, 0LL, 0LL);
          }
          LODWORD(v34) = waveDeckItemList->max_length;
          if ( (__int64)++v35 >= (int)v34 )
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
      Instance = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, v16);
      selectItem = this->fields.selectItem;
      if ( !selectItem )
        goto LABEL_106;
      v20 = Instance;
    }
    else
    {
      v20 = 0LL;
    }
    v44 = this->fields.waveDeckItemList;
    if ( !v44 )
LABEL_106:
      sub_1B7641C(Instance, v16);
    v45 = selectItem->fields._OrganizedWave_k__BackingField - 1;
    if ( v45 >= v44->max_length )
LABEL_111:
      sub_1B76424(Instance, v16);
    Instance = (int64_t)v44->m_Items[v45];
    if ( !Instance )
      goto LABEL_106;
    PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v20, 0LL);
  }
LABEL_60:
  v46 = this->fields.waveDeckItemList;
  if ( !v46 )
    goto LABEL_106;
  v47 = this->fields.partyNumber - 1;
  if ( v47 >= v46->max_length )
    goto LABEL_111;
  v48 = this->fields.selectItem;
  if ( !v48 )
    goto LABEL_106;
  userSvtEntity = v48->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_106;
  memberIndex = this->fields.memberIndex;
  v51 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v52 = v46->m_Items[v47];
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v79, 0LL);
  if ( !v52 )
    goto LABEL_106;
  PartyListViewItem__SetEquip(v52, memberIndex, Instance, 0LL);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v81 = v78;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v53 )
      break;
    v56 = v81.fields._current;
    if ( !v81.fields._current
      || (v57 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v81.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v57)
      || (EquipGraphListViewItem_c *)v81.fields._current->klass->_2.typeHierarchy[v57 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B7641C(v53, v54);
    }
    if ( BYTE1(v81.fields._current[9].klass) )
      LOWORD(v81.fields._current[9].klass) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v56,
      this->fields.waveDeckItemList,
      v52,
      this->fields.memberIndex,
      v55);
    v58 = (UnityEngine_Object_o *)v56[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v59 = UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
    if ( v59 )
    {
      v62 = v56[6].monitor;
      if ( !v62
        || (v63 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v62 + 304LL) < (unsigned int)v63)
        || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v62 + 200LL) + 8 * v63 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1B7641C(v59, v60);
      }
      EquipGraphListViewObject__Init_38492228((EquipGraphListViewObject_o *)v56[6].monitor, 4, v61);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.baseCost = v52->fields.cost;
LABEL_83:
  v64 = this->fields.selectItem;
  if ( !v64 )
    goto LABEL_106;
  v64->fields.isBase = 1;
  if ( (v64->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v65) = 0;
  }
  else
  {
    v65 = v64->fields.servantEntity;
    if ( v65 )
      LODWORD(v65) = v65->fields.cost;
  }
  this->fields.baseCost -= (int)v65;
  v66 = v64->fields.userSvtEntity;
  if ( !v66 )
    goto LABEL_106;
  v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v77 = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v77, 0LL);
  if ( !servantItemInfo )
    goto LABEL_106;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v69);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_106;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v70);
  v71 = this->fields.selectItem;
  if ( !v71 )
    goto LABEL_106;
  viewObject = (UnityEngine_Object_o *)v71->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_102;
  v74 = this->fields.selectItem;
  if ( !v74 )
    goto LABEL_106;
  Instance = (int64_t)v74->fields.viewObject;
  if ( !Instance )
    goto LABEL_106;
  v75 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v75
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v75 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_106;
  }
  EquipGraphListViewObject__Init_38492228((EquipGraphListViewObject_o *)Instance, 4, v73);
LABEL_102:
  EquipGraphListViewManager__RefrashListDisp(this, v16);
LABEL_103:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))selectItemCallbackFunc->fields.m_target)(
      selectItemCallbackFunc->fields.original_method_info,
      *(_QWORD *)&selectItemCallbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectFilterKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A2D951 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A2D951 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B7641C(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A2D955 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A2D955 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1B7641C(v9, v10);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 methodPtr_low; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A2D958 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4A2D958 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B7641C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B7641C(v13, v14);
    }
    klass = v21.fields._current[7].klass;
    if ( !klass )
      sub_1B7641C(v13, v14);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v22.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v22, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v12;
}


bool __fastcall EquipGraphListViewManager__GetFocusItemIndex(
        EquipGraphListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t v9; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A2D959 & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, index);
    this = (EquipGraphListViewManager_o *)sub_1B761C0(
                                            &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                            v8);
    byte_4A2D959 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1B7641C(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v9,
                                              (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetItem(
        EquipGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EquipGraphListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A2D944 & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A2D944 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B7641C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A2D94C & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4A2D94C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B7641C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v13.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B7641C(v8, v9);
    }
    if ( BYTE1(v13.fields._current[9].klass) )
    {
      klass_high = HIDWORD(v13.fields._current[1].klass);
      goto LABEL_12;
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A2D94D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4A2D94D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B7641C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B7641C(v8, v9);
    }
    if ( BYTE1(v13.fields._current[9].klass) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v19; // w3
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
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4A2D946 & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B761C0(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A2D946 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B7640C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_34BEDB4 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B7640C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_34BEDB4 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 201) )
      {
        if ( *(_BYTE *)(itemList + 173) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v47, 0LL);
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
              *(const MethodInfo_34BF608 **)(*(_QWORD *)(v34 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v46, 0LL);
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
    sub_1B7641C(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34C10C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1B76164((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34C10C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1B76164((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
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
  int32_t v19; // w3
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
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4A2D945 & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B761C0(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A2D945 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B7640C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_34BEDB4 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B7640C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_34BEDB4 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 200) )
      {
        if ( *(_BYTE *)(itemList + 172) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v47, 0LL);
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
              *(const MethodInfo_34BF608 **)(*(_QWORD *)(v34 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v46, 0LL);
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
    sub_1B7641C(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34C10C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1B76164((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34C10C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1B76164((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A2D93E & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4A2D93E = 1;
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
    sub_1B7641C(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
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
  int size; // w26
  unsigned int v14; // w20
  DataManager_c **v15; // x21
  DataManager_c *v16; // x8
  struct System_Collections_Generic_List_Thread__o **v17; // x21
  DataManager_c *v18; // t1
  Il2CppType byval_arg; // q0
  int64_t v20; // x0
  DataManager_o *v21; // x22
  int32_t v22; // w23
  DataManager_o *v23; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v26; // q0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Collections_Generic_List_Thread__o *v29; // x1
  const MethodInfo *v30; // x1
  int32_t v31; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v33; // x21
  __int64 v34; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v38; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+60h] [xbp-80h]

  if ( (byte_4A2D943 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A2D943 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v14 = 0;
    v38 = Instance;
    while ( 1 )
    {
      v15 = &Instance->klass + (int)v14;
      v18 = v15[4];
      v17 = (struct System_Collections_Generic_List_Thread__o **)(v15 + 4);
      v16 = v18;
      if ( !v18 )
        break;
      byval_arg = v16->_1.byval_arg;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
      *(Il2CppType *)&v41.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v40 = v41;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v40, 0LL);
      if ( size >= 1 )
      {
        v21 = (DataManager_o *)v20;
        v22 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v22,
                                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v23 = Instance;
          methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (EquipGraphListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v26 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v41.fields.fakeValue = v26;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v39 = v41;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v39, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( size == ++v22 )
            goto LABEL_27;
        }
        if ( v14 >= LODWORD(v38->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v29 = *v17;
        v23->fields.masterLoadThreads = *v17;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v23->fields.masterLoadThreads, (int32_t)v29, v27, v28);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v23, v11);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v23, v30);
        }
      }
LABEL_27:
      Instance = v38;
      if ( ++v14 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v14 >= LODWORD(v38->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1B76424(Instance, v11);
    }
LABEL_44:
    sub_1B7641C(Instance, v11);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v31 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v31,
               (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v33 = (ListViewItem_o *)Item;
        v34 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v34
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v34 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v33->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v33, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v31 )
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

  if ( (byte_4A2D953 & 1) == 0 )
  {
    sub_1B761C0(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__, method);
    byte_4A2D953 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B7641C(0LL, v5);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
    sub_1B7641C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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

  if ( (byte_4A2D950 & 1) == 0 )
  {
    sub_1B761C0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_1B761C0(&Method_EquipGraphListViewManager_OnClickFilterKind__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A2D950 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B761A4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B7640C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B7641C(v12, v13);
    CommonUI__OpenServantFilterSelectMenu_30426028(v10, 5, sort, (ListViewManager_o *)this, v11, -1, 0LL);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B7641C(v6, v7);
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

  if ( (byte_4A2D956 & 1) == 0 )
  {
    sub_1B761C0(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A2D956 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B7641C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A2D954 & 1) == 0 )
  {
    sub_1B761C0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_1B761C0(&Method_EquipGraphListViewManager_OnClickSortKind__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A2D954 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B761A4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B7640C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B7641C(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 4, sort, 0, v11, 0LL);
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
    sub_1B7641C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
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

  if ( (byte_4A2D94B & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2D94B = 1;
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
          sub_1B7641C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v17; // w22
  UILabel_o *v18; // x20
  System_String_o **v19; // x8
  System_String_o *v20; // x21
  System_String_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A2D947 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_1B761C0(&LocalizationManager_TypeInfo, v5);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_12373/*"SUM_OVER_INFO"*/, v7);
    sub_1B761C0(&StringLiteral_12372/*"SUM_INFO"*/, v8);
    byte_4A2D947 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_22;
  v11 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v11,
                                                                  v12,
                                                                  (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v12 >= v11->fields._size )
        goto LABEL_8;
    }
LABEL_22:
    sub_1B7641C(ObjectList, v10);
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
    v17 = (_DWORD)equipServantEntity + baseCost;
    v18 = this->fields.infoData2Label;
    v19 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12372/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12373/*"SUM_OVER_INFO"*/;
    v20 = *v19;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get(v20, 0LL);
    v31 = v17;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
    maxCost = this->fields.maxCost;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v26, v27, v28);
    ObjectList = (System_Collections_Generic_List_object__o *)System_String__Format_61549432(v21, v25, v29, 0LL);
    if ( !v18 )
      goto LABEL_22;
    UILabel__set_text(v18, (System_String_o *)ObjectList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A2D949 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_1B761C0(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_1B761C0(&StringLiteral_9932/*"OnMoveEnd"*/, v13);
    byte_4A2D949 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B7641C(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9932/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B7641C(v19, v20);
      EquipGraphListViewObject__Init_38493380((EquipGraphListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_38492352(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A2D94A & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_1B761C0(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_1B761C0(&StringLiteral_9932/*"OnMoveEnd"*/, v11);
    byte_4A2D94A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B7641C(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9932/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B7641C(v17, v18);
      EquipGraphListViewObject__Init_38493464((EquipGraphListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void __fastcall EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
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
  struct EquipGraphListViewItem_o **p_selectItem; // x20
  ServantStatusBattleListViewItem_o *p_selectItemCallbackFunc; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 servantItemInfo; // x0
  const MethodInfo *v40; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  EquipGraphListViewObject_o *v44; // x24
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v49; // w9
  struct EquipGraphListViewItem_o *v50; // x8
  int32_t wearerMember; // w10
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v53; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w21
  System_Reflection_MethodBase_o *v55; // x0
  const MethodInfo *v56; // x2
  struct EquipGraphServantItem_o *v57; // x8
  struct PartyListViewItem_array *v58; // x8
  int v59; // w10
  Il2CppClass **v60; // x8
  Il2CppClass *v61; // x21
  int events; // w22
  struct EquipGraphServantItem_o *v63; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  NotificationDialog_ClickDelegate_o *v68; // x23
  int64_t v69; // x1
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  _QWORD *v74; // x0
  _BOOL4 v75; // w21
  int32_t v76; // w2
  int32_t v77; // w3
  ServantStatusBattleListViewItem_c *klass; // x19
  _QWORD *v79; // x0
  _BOOL4 v80; // w23
  System_Reflection_MethodBase_o *v81; // x0
  System_String_o *v82; // x21
  __int64 v83; // x22
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x23
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_String_o *v89; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x23
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x23
  struct EquipGraphServantItem_o *v96; // x8
  int32_t v97; // w23
  int32_t v98; // w2
  int32_t v99; // w3
  __int64 v100; // x23
  int32_t v101; // w2
  int32_t v102; // w3
  __int64 v103; // x20
  System_String_o *v104; // x20
  Il2CppObject *v105; // x21
  System_String_o *v106; // x22
  CommonConfirmDialog_ClickDelegate_o *v107; // x23
  struct EquipGraphServantItem_o *v108; // x8
  struct PartyListViewItem_array *v109; // x9
  __int64 v110; // x8
  unsigned __int64 v111; // x29
  int v112; // w27
  PartyListViewItem_o *v113; // x21
  int32_t v114; // w22
  struct ServantEntity_o *v115; // x8
  PartyOrganizationListViewItem_o *v116; // x23
  __int64 v117; // x24
  __int64 v118; // x25
  int v119; // w24
  ServantEntity_o *v120; // x21
  System_String_o *v121; // x21
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  __int64 v125; // x22
  int32_t v126; // w2
  int32_t v127; // w3
  __int64 v128; // x23
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  int32_t v132; // w2
  int32_t v133; // w3
  __int64 v134; // x23
  int32_t weareRarity; // w23
  int32_t v136; // w2
  int32_t v137; // w3
  __int64 v138; // x23
  int32_t v139; // w2
  int32_t v140; // w3
  __int64 v141; // x23
  int32_t v142; // w2
  int32_t v143; // w3
  struct System_String_o *wearerServantName; // x20
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  int32_t v148; // w2
  int32_t v149; // w3
  __int64 v150; // x20
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  int32_t v154; // w2
  int32_t v155; // w3
  __int64 v156; // x20
  struct EquipGraphServantItem_o *v157; // x8
  int32_t Rarity; // w0
  int32_t v159; // w2
  int32_t v160; // w3
  __int64 v161; // x20
  int32_t v162; // w2
  int32_t v163; // w3
  __int64 v164; // x20
  int32_t v165; // w2
  int32_t v166; // w3
  __int64 v167; // x20
  System_String_o *v168; // x20
  Il2CppObject *v169; // x21
  System_String_o *v170; // x22
  System_String_o *v171; // x23
  System_String_o *v172; // x24
  CommonConfirmDialog_ClickDelegate_o *v173; // x25
  struct PartyListViewItem_array *v174; // x8
  int v175; // w9
  struct EquipGraphListViewItem_o *v176; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v179; // q1
  PartyListViewItem_o *v180; // x24
  _BOOL8 v181; // x0
  __int64 v182; // x1
  Il2CppObject *current; // x28
  __int64 v184; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v187; // x23
  _BOOL8 v188; // x0
  __int64 v189; // x1
  const MethodInfo *v190; // x2
  void *v191; // x8
  __int64 v192; // x11
  struct EquipGraphListViewItem_o *v193; // x8
  struct UserServantEntity_o *v194; // x9
  __int128 v195; // q1
  struct EquipGraphServantItem_o *v196; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v198; // x20
  __int64 v199; // x22
  __int64 v200; // x2
  __int64 v201; // x3
  __int64 v202; // x4
  int32_t v203; // w2
  int32_t v204; // w3
  __int64 v205; // x24
  __int64 v206; // x2
  __int64 v207; // x3
  __int64 v208; // x4
  int32_t v209; // w2
  int32_t v210; // w3
  __int64 v211; // x24
  int32_t v212; // w24
  int32_t v213; // w2
  int32_t v214; // w3
  __int64 v215; // x24
  int32_t v216; // w2
  int32_t v217; // w3
  __int64 v218; // x24
  __int64 v219; // x23
  __int64 v220; // x24
  int32_t v221; // w0
  int32_t v222; // w2
  int32_t v223; // w3
  __int64 v224; // x21
  System_String_o *v225; // x20
  Il2CppObject *v226; // x21
  System_String_o *v227; // x22
  System_String_o *v228; // x23
  System_String_o *v229; // x24
  CommonConfirmDialog_ClickDelegate_o *v230; // x25
  __int64 v231; // x0
  struct PartyListViewItem_array *v232; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v233; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v234; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v235; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v236; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v239; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v240; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // 0:x0.16

  if ( (byte_4A2D94E & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, item);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1B761C0(&NotificationDialog_ClickDelegate_TypeInfo, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_1B761C0(&EquipGraphListViewItem_TypeInfo, v12);
    sub_1B761C0(&Method_EquipGraphListViewManager_EndSelectConfirm__, v13);
    sub_1B761C0(&Method_EquipGraphListViewManager_SelectEquip__, v14);
    sub_1B761C0(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v15);
    sub_1B761C0(&EquipGraphListViewObject_TypeInfo, v16);
    sub_1B761C0(&int_TypeInfo, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18);
    sub_1B761C0(&LocalizationManager_TypeInfo, v19);
    sub_1B761C0(&object___TypeInfo, v20);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v21);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1B761C0(&Rarity_TypeInfo, v24);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B761C0(&StringLiteral_15505/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v26);
    sub_1B761C0(&StringLiteral_15506/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v27);
    sub_1B761C0(&StringLiteral_15502/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v28);
    sub_1B761C0(&StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v29);
    sub_1B761C0(&StringLiteral_5518/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v30);
    sub_1B761C0(&StringLiteral_15498/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v31);
    sub_1B761C0(&StringLiteral_3758/*"COMMON_CONFIRM_NO"*/, v32);
    sub_1B761C0(&StringLiteral_3762/*"COMMON_CONFIRM_YES"*/, v33);
    sub_1B761C0(&StringLiteral_15497/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v34);
    byte_4A2D94E = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v239, 0, sizeof(v239));
  this->fields.selectItem = item;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectItem,
    (int32_t)item,
    (int32_t)callback,
    (int32_t)method);
  p_selectItemCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v37, v38);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_227;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewObject_TypeInfo )
      v44 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v44 = 0LL;
  }
  else
  {
    v44 = 0LL;
  }
  if ( selectItem->fields.isBase )
  {
    v45 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_SelectEquip__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B761A4(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0LL);
    if ( !this->fields.isWaveBattle )
    {
LABEL_18:
      v50 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      wearerMember = v50->fields.wearerMember;
      v50->fields.isBase = 0;
      if ( (wearerMember & 0x80000000) == 0 && wearerMember != this->fields.memberIndex
        || v50->fields._OrganizedWave_k__BackingField > 0
        || v50->fields._IsUnique_k__BackingField )
      {
        if ( (wearerMember & 0x80000000) != 0 )
        {
          LODWORD(servantEntity) = 0;
        }
        else
        {
          servantEntity = v50->fields.servantEntity;
          if ( servantEntity )
            LODWORD(servantEntity) = servantEntity->fields.cost;
        }
        this->fields.baseCost += (int)servantEntity;
        if ( !v44 )
          goto LABEL_227;
        EquipGraphListViewObject__Init_38492228(v44, 4, v47);
      }
      servantItemInfo = (__int64)this->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_227;
      v69 = 0LL;
LABEL_51:
      EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v69, v47);
      servantItemInfo = (__int64)this->fields.servantItemDraw;
      if ( servantItemInfo )
      {
        EquipGraphServantItemDraw__SetItem(
          (EquipGraphServantItemDraw_o *)servantItemInfo,
          this->fields.servantItemInfo,
          v70);
        EquipGraphListViewManager__RefrashListDisp(this, v71);
        if ( callback )
        {
          p_selectItemCallbackFunc->klass = 0LL;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v72, v73);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
            callback->fields.original_method_info,
            *(_QWORD *)&callback->fields.extra_arg);
        }
        return;
      }
LABEL_227:
      sub_1B7641C(servantItemInfo, v40);
    }
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_227;
    v49 = this->fields.partyNumber - 1;
    if ( v49 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v49];
      if ( !servantItemInfo )
        goto LABEL_227;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
      goto LABEL_18;
    }
LABEL_229:
    sub_1B76424(servantItemInfo, v40);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_227;
    v53 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_SelectEquip__);
    v55 = (System_Reflection_MethodBase_o *)sub_1B761A4(v53, v53[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
      v57 = this->fields.servantItemInfo;
      if ( !v57 )
        goto LABEL_227;
      if ( v57->fields.equipUserSvtEntity )
      {
        v58 = this->fields.waveDeckItemList;
        if ( !v58 )
          goto LABEL_227;
        v59 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v59 >= v58->max_length )
          goto LABEL_229;
        if ( !*p_selectItem )
          goto LABEL_227;
        v60 = &v58->obj.klass + v59;
        v61 = v60[4];
        if ( !v61 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                     (PartyListViewItem_o *)v60[4],
                                     (*p_selectItem)->fields.wearerMember,
                                     0LL);
        if ( !servantItemInfo )
          goto LABEL_227;
        events = (int)v61->_1.events;
        servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                            (PartyOrganizationListViewItem_o *)servantItemInfo,
                            0LL);
        v63 = this->fields.servantItemInfo;
        if ( !v63 )
          goto LABEL_227;
        equipServantEntity = v63->fields.equipServantEntity;
        if ( equipServantEntity )
          LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
        if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v61->_1.interopData) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_15497/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v68 = (NotificationDialog_ClickDelegate_o *)sub_1B7640C(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v68,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_30421532(
              (CommonUI_o *)Instance,
              v66,
              v67,
              v68,
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
        v121 = LocalizationManager__Get((System_String_o *)StringLiteral_15505/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_1B76268(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v125 = servantItemInfo;
        LODWORD(v235.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v235, v122, v123, v124);
        if ( !v125 )
          goto LABEL_227;
        v128 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v125 + 24) )
            goto LABEL_229;
          *(_QWORD *)(v125 + 32) = v128;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 32), v128, v126, v127);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v129, v130, v131);
          v134 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v125 + 24) <= 1u )
              goto LABEL_229;
            *(_QWORD *)(v125 + 40) = v134;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 40), v134, v132, v133);
            if ( !*p_selectItem )
              goto LABEL_227;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v138 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v125 + 24) <= 2u )
                goto LABEL_229;
              *(_QWORD *)(v125 + 48) = v138;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 48), v138, v136, v137);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v40);
              v141 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v125 + 24) <= 3u )
                  goto LABEL_229;
                *(_QWORD *)(v125 + 56) = v141;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 56), v141, v139, v140);
                if ( !*p_selectItem )
                  goto LABEL_227;
                wearerServantName = (*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_1B762FC(wearerServantName, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v125 + 24) <= 4u )
                    goto LABEL_229;
                  *(_QWORD *)(v125 + 64) = wearerServantName;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 64), (int32_t)wearerServantName, v142, v143);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v145, v146, v147);
                  v150 = servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v125 + 24) <= 5u )
                      goto LABEL_229;
                    *(_QWORD *)(v125 + 72) = v150;
                    sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 72), v150, v148, v149);
                    v236 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v236, v151, v152, v153);
                    v156 = servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v125 + 24) <= 6u )
                        goto LABEL_229;
                      *(_QWORD *)(v125 + 80) = v156;
                      sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 80), v156, v154, v155);
                      v157 = this->fields.servantItemInfo;
                      if ( !v157 )
                        goto LABEL_227;
                      servantItemInfo = (__int64)v157->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_227;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v161 = servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v125 + 24) <= 7u )
                          goto LABEL_229;
                        *(_QWORD *)(v125 + 88) = v161;
                        sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 88), v161, v159, v160);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_227;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v40);
                        v164 = servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v125 + 24) <= 8u )
                            goto LABEL_229;
                          *(_QWORD *)(v125 + 96) = v164;
                          sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 96), v164, v162, v163);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_227;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v40);
                          v167 = servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v125 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v125 + 24) > 9u )
                            {
                              *(_QWORD *)(v125 + 104) = v167;
                              sub_1B76164((ServantStatusBattleListViewItem_o *)(v125 + 104), v167, v165, v166);
                              v168 = System_String__Format_61549568(v121, (System_Object_array *)v125, 0LL);
                              v169 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v170 = LocalizationManager__Get((System_String_o *)StringLiteral_15506/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                              v171 = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"COMMON_CONFIRM_YES"*/, 0LL);
                              v172 = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_NO"*/, 0LL);
                              v173 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v173,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0LL);
                              if ( v169 )
                              {
                                CommonUI__OpenConfirmDialog_30419380(
                                  (CommonUI_o *)v169,
                                  v170,
                                  v168,
                                  v171,
                                  v172,
                                  v173,
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
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v56);
      return;
    }
    goto LABEL_59;
  }
  if ( !selectItem->fields._IsUnique_k__BackingField )
  {
    v79 = Method_EquipGraphListViewManager_SelectEquip__;
    v80 = selectItem->fields.wearerMember >= 0 && selectItem->fields.wearerMember != this->fields.memberIndex;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v79 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_SelectEquip__);
    v81 = (System_Reflection_MethodBase_o *)sub_1B761A4(v79, v79[4]);
    OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0LL);
    if ( !v80 )
    {
      if ( this->fields.isWaveBattle )
      {
        v174 = this->fields.waveDeckItemList;
        if ( !v174 )
          goto LABEL_227;
        v175 = this->fields.partyNumber - 1;
        if ( v175 >= v174->max_length )
          goto LABEL_229;
        v176 = this->fields.selectItem;
        if ( !v176 )
          goto LABEL_227;
        userSvtEntity = v176->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_227;
        memberIndex = this->fields.memberIndex;
        v179 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v180 = v174->m_Items[v175];
        *(_OWORD *)&v235.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v235.fields.fakeValue = v179;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v234 = v235;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v234, 0LL);
        if ( !v180 )
          goto LABEL_227;
        PartyListViewItem__SetEquip(v180, memberIndex, servantItemInfo, 0LL);
      }
      servantItemInfo = (__int64)this->fields.itemList;
      if ( !servantItemInfo )
        goto LABEL_227;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v235,
        (System_Collections_Generic_List_object__o *)servantItemInfo,
        (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v239 = *(System_Collections_Generic_List_Enumerator_object__o *)&v235.fields.currentCryptoKey;
      while ( 1 )
      {
        v181 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v239,
                 (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v181 )
          break;
        current = v239.fields._current;
        if ( !v239.fields._current
          || (v184 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v239.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v184)
          || (EquipGraphListViewItem_c *)v239.fields._current->klass->_2.typeHierarchy[v184 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_1B7641C(v181, v182);
        }
        if ( BYTE1(v239.fields._current[9].klass) )
        {
          if ( (klass_high = HIDWORD(v239.fields._current[9].klass),
                BYTE1(v239.fields._current[9].klass) = 0,
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
            v187 = (UnityEngine_Object_o *)current[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v188 = UnityEngine_Object__op_Inequality(v187, 0LL, 0LL);
            if ( v188 )
            {
              v191 = current[6].monitor;
              if ( !v191
                || (v192 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v191 + 304LL) < (unsigned int)v192)
                || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v191 + 200LL) + 8 * v192 - 8) != EquipGraphListViewObject_TypeInfo )
              {
                sub_1B7641C(v188, v189);
              }
              EquipGraphListViewObject__Init_38492228((EquipGraphListViewObject_o *)current[6].monitor, 4, v190);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v239,
        (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v193 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      v194 = v193->fields.userSvtEntity;
      v193->fields.isBase = 1;
      if ( !v194 )
        goto LABEL_227;
      v195 = *(_OWORD *)&v194->fields.id.fields.fakeValue;
      v196 = this->fields.servantItemInfo;
      *(_OWORD *)&v235.fields.currentCryptoKey = *(_OWORD *)&v194->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v235.fields.fakeValue = v195;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v233 = v235;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v233, 0LL);
      if ( !v196 )
        goto LABEL_227;
      v69 = servantItemInfo;
      servantItemInfo = (__int64)v196;
      goto LABEL_51;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_1B76268(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_227;
    v83 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v40);
    if ( !v83 )
      goto LABEL_227;
    v86 = servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v83 + 24) )
        goto LABEL_229;
      *(_QWORD *)(v83 + 32) = v86;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v83 + 32), v86, v84, v85);
      if ( !*p_selectItem )
        goto LABEL_227;
      v89 = (*p_selectItem)->fields.wearerServantName;
      if ( !v89 || (servantItemInfo = sub_1B762FC(v89, *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v83 + 24) <= 1u )
          goto LABEL_229;
        *(_QWORD *)(v83 + 40) = v89;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v83 + 40), (int32_t)v89, v87, v88);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_227;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v40);
        v92 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v83 + 24) <= 2u )
            goto LABEL_229;
          *(_QWORD *)(v83 + 48) = v92;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v83 + 48), v92, v90, v91);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_227;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v40);
          v95 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v83 + 24) <= 3u )
              goto LABEL_229;
            *(_QWORD *)(v83 + 56) = v95;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v83 + 56), v95, v93, v94);
            v96 = this->fields.servantItemInfo;
            if ( !v96 )
              goto LABEL_227;
            servantItemInfo = (__int64)v96->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_227;
            v97 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v97, 0LL);
            v100 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v83 + 24) <= 4u )
                goto LABEL_229;
              *(_QWORD *)(v83 + 64) = v100;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v83 + 64), v100, v98, v99);
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v103 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v83 + 24) > 5u )
                {
                  *(_QWORD *)(v83 + 72) = v103;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v83 + 72), v103, v101, v102);
                  v104 = System_String__Format_61549568(v82, (System_Object_array *)v83, 0LL);
                  v105 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v107 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v107,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v105 )
                  {
                    CommonUI__OpenConfirmDialog(
                      (CommonUI_o *)v105,
                      v106,
                      v104,
                      v107,
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
  v74 = Method_EquipGraphListViewManager_SelectEquip__;
  v75 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v74 = (_QWORD *)sub_1B761D8(Method_EquipGraphListViewManager_SelectEquip__);
  v55 = (System_Reflection_MethodBase_o *)sub_1B761A4(v74, v74[4]);
  if ( v75 )
  {
LABEL_59:
    OverwriteAssetSoundName__PlaySystemSe(v55, 2, 0LL);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_1B76164(p_selectItemCallbackFunc, 0, v76, v77);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
  v108 = this->fields.servantItemInfo;
  if ( !v108 )
    goto LABEL_227;
  if ( !v108->fields.equipUserSvtEntity )
    goto LABEL_119;
  v109 = this->fields.waveDeckItemList;
  if ( !v109 )
    goto LABEL_227;
  v110 = *(_QWORD *)&v109->max_length;
  if ( (int)v110 >= 1 )
  {
    v111 = 0LL;
    v112 = 1;
    v232 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v111 >= (unsigned int)v110 )
        goto LABEL_229;
      v113 = v109->m_Items[v111];
      v114 = 0;
      do
      {
        servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v114 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
          goto LABEL_117;
        if ( !v113 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(v113, v114, 0LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v115 = (*p_selectItem)->fields.servantEntity;
        if ( !v115 )
          goto LABEL_227;
        v116 = (PartyOrganizationListViewItem_o *)servantItemInfo;
        v118 = *(_QWORD *)&v115->fields.id.fields.currentCryptoKey;
        v117 = *(_QWORD *)&v115->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v240.fields.currentCryptoKey = v118;
        *(_QWORD *)&v240.fields.fakeValue = v117;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v240, 0LL);
        if ( !v116 )
          goto LABEL_227;
        v119 = servantItemInfo;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v116, 0LL);
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(EquipSvtId, 0LL);
        ++v114;
      }
      while ( v119 != (_DWORD)servantItemInfo );
      v120 = v116->fields.servantEntity;
      if ( v120 )
        break;
LABEL_117:
      v109 = v232;
      ++v111;
      ++v112;
      LODWORD(v110) = v232->max_length;
      if ( (__int64)v111 >= (int)v110 )
        return;
    }
    userServantEntity = v116->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v198 = LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v199 = sub_1B76268(object___TypeInfo, 5LL);
      LODWORD(v235.fields.currentCryptoKey) = v112;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v235, v200, v201, v202);
      if ( !v199 )
        goto LABEL_227;
      v205 = servantItemInfo;
      if ( !servantItemInfo
        || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v199 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v199 + 24) )
          goto LABEL_229;
        *(_QWORD *)(v199 + 32) = v205;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v199 + 32), v205, v203, v204);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v206, v207, v208);
        v211 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v199 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v199 + 24) <= 1u )
            goto LABEL_229;
          *(_QWORD *)(v199 + 40) = v211;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v199 + 40), v211, v209, v210);
          v212 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v212, 0LL);
          v215 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v199 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v199 + 24) <= 2u )
              goto LABEL_229;
            *(_QWORD *)(v199 + 48) = v215;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v199 + 48), v215, v213, v214);
            servantItemInfo = (__int64)ServantEntity__getClassName(v120, 0LL);
            v218 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v199 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v199 + 24) <= 3u )
                goto LABEL_229;
              *(_QWORD *)(v199 + 56) = v218;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v199 + 56), v218, v216, v217);
              v220 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v219 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v242.fields.currentCryptoKey = v220;
              *(_QWORD *)&v242.fields.fakeValue = v219;
              v221 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v242, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v120, v221, -1, 0LL);
              v224 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B762FC(servantItemInfo, *(_QWORD *)(*(_QWORD *)v199 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v199 + 24) > 4u )
                {
                  *(_QWORD *)(v199 + 64) = v224;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v199 + 64), v224, v222, v223);
                  v225 = System_String__Format_61549568(v198, (System_Object_array *)v199, 0LL);
                  v226 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v227 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v228 = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v229 = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v230 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v230,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v226 )
                  {
                    CommonUI__OpenConfirmDialog_30419380(
                      (CommonUI_o *)v226,
                      v227,
                      v225,
                      v228,
                      v229,
                      v230,
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
      v231 = sub_1B76440(servantItemInfo);
      sub_1B762E8(v231, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4A2D952 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17505/*"btn_filter_on"*/, method);
    sub_1B761C0(&StringLiteral_17504/*"btn_filter"*/, v3);
    byte_4A2D952 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B7641C(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17504/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17505/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EquipGraphListViewManager__SetMode_38460128(this, mode, v6);
}


void __fastcall EquipGraphListViewManager__SetMode_38460128(
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
    sub_1B7641C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_38492352(this, mode + 1, v8);
}


void __fastcall EquipGraphListViewManager__SetMode_38492300(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EquipGraphListViewManager__SetMode_38460128(this, mode, v6);
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
  if ( (byte_4A2D948 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1B761C0(&EquipGraphListViewObject_TypeInfo, obj);
    byte_4A2D948 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1B7641C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_38492228((EquipGraphListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall EquipGraphListViewManager__SetSortButtonImage(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4A2D957 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&StringLiteral_17535/*"btn_sort_up"*/, v3);
    sub_1B761C0(&StringLiteral_17622/*"btn_txt_up"*/, v4);
    sub_1B761C0(&StringLiteral_17578/*"btn_txt_new"*/, v5);
    sub_1B761C0(&StringLiteral_17568/*"btn_txt_down"*/, v6);
    sub_1B761C0(&StringLiteral_17585/*"btn_txt_old"*/, v7);
    sub_1B761C0(&StringLiteral_17532/*"btn_sort_down"*/, v8);
    byte_4A2D957 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_40;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_40;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17585/*"btn_txt_old"*/ : &StringLiteral_17578/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17532/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17535/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17622/*"btn_txt_up"*/ : &StringLiteral_17568/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17535/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17532/*"btn_sort_down"*/;
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
    if ( sort )
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
    }
LABEL_40:
    sub_1B7641C(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A2D95B & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A2D95B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7);
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

  if ( (byte_4A2D937 & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A2D937 = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B766DC(v7);
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

  if ( (byte_4A2D939 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2D939 = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B766DC(v7);
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

  if ( (byte_4A2D93B & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2D93B = 1;
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
    v8 = sub_1BB16B0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B766DC(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
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
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A2D940 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    byte_4A2D940 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B7641C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B7641C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B7641C(0LL, v18);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B7641C(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40537020((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B7641C(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B7641C(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B7641C(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B7641C(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v11;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
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
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A2D93F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    byte_4A2D93F = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B7641C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B7641C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B7641C(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B7641C(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v11;
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

  if ( (byte_4A2D938 & 1) == 0 )
  {
    sub_1B761C0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A2D938 = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B766DC(v7);
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

  if ( (byte_4A2D93A & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2D93A = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B766DC(v7);
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

  if ( (byte_4A2D93C & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2D93C = 1;
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
    v8 = sub_1BB16B0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B766DC(v7);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19BDE84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19BDE2C;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4A2D95C & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B761C0(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4A2D95C = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EquipGraphListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B76174(this, v14, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
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