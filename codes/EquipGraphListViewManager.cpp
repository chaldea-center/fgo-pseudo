void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  ListViewSort_o *v11; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FBE3B & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewManager_TypeInfo, v1);
    sub_1B640C8(&ListViewSort_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_6047/*"EquipGraph"*/, v4);
    sub_1B640C8(&StringLiteral_15513/*"WarBoardEquipGraph"*/, v5);
    byte_49FBE3B = 1;
  }
  v6 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_40426136(v6, (System_String_o *)StringLiteral_6047/*"EquipGraph"*/, 3, 0, 0LL);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v6;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v6,
    v7,
    v8);
  v11 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v9, v10);
  ListViewSort___ctor_40426136(v11, (System_String_o *)StringLiteral_15513/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->warBoardSortStatus = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->warBoardSortStatus, (int32_t)v11, v13, v14);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_38325092(this, 2, v11);
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
  __int64 sort; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct ListViewSort_o *v32; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct ListViewSort_o *v39; // x20
  bool v40; // w8
  __int64 v41; // x1
  __int64 v42; // x2
  PartyOrganizationListViewItem_o *v43; // x24
  EquipGraphServantItem_o *v44; // x25
  const MethodInfo *v45; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v53; // x26
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x27
  UserServantEntity_array *v56; // x25
  UILabel_o *v57; // x27
  PartyListViewItem_array *v58; // x20
  System_String_o *v59; // x28
  Il2CppObject *v60; // x29
  Il2CppObject *v61; // x0
  const MethodInfo *v62; // x1
  __int64 v63; // x8
  unsigned __int64 v64; // x23
  UserServantEntity_o *v65; // x27
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t memberIdx; // w22
  int64_t v69; // x28
  EquipGraphListViewItem_o *v70; // x26
  int64_t v71; // x4
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v80; // x8
  System_String_o *v81; // x21
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // [xsp+8h] [xbp-78h]
  PartyListViewItem_o *partyItema; // [xsp+10h] [xbp-70h]
  int v86; // [xsp+18h] [xbp-68h] BYREF
  int v87; // [xsp+1Ch] [xbp-64h] BYREF

  v9 = baseDeckItemList;
  if ( (byte_49FBE23 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v11);
    sub_1B640C8(&EquipGraphListViewManager_TypeInfo, v12);
    sub_1B640C8(&EquipGraphServantItem_TypeInfo, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/, v20);
    sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v22);
    byte_49FBE23 = 1;
  }
  this->fields.waveDeckItemList = v9;
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v27, v23, v24);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_64;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_64;
  v32 = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !v32 )
    goto LABEL_64;
  iconScaleKind = v32->fields.iconScaleKind;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v30, v31);
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v37,
      v38);
    v39 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v39 )
      goto LABEL_64;
    v40 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v30, v31);
    v39 = this->fields.sort;
    if ( !v39 )
      goto LABEL_64;
    v40 = 0;
  }
  v39->fields.isBonusKind = v40;
  sort = (__int64)PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_64;
  v43 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v44 = (EquipGraphServantItem_o *)sub_1B64314(EquipGraphServantItem_TypeInfo, v41, v42);
    EquipGraphServantItem___ctor(v44, v43, v45);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v44;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v44, v47, v48);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v49);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v50);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_64;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v53 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !v9 )
      goto LABEL_64;
    this->fields.maxWave = *(_QWORD *)&v9->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_64;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_64;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v56 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    partyItema = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v57 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = v9;
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
      if ( !v56 )
        goto LABEL_64;
      v59 = (System_String_o *)sort;
      v87 = *(_QWORD *)&v56->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v87);
      if ( !v53 )
        goto LABEL_64;
      v60 = (Il2CppObject *)sort;
      v86 = *(_DWORD *)(v53 + 156);
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
      sort = (__int64)System_String__Format_61389768(v59, v60, v61, 0LL);
      if ( !v57 )
        goto LABEL_64;
      UILabel__set_text(v57, (System_String_o *)sort, 0LL);
      v9 = v58;
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
    if ( !v56 )
      goto LABEL_64;
    v63 = *(_QWORD *)&v56->max_length;
    if ( (int)v63 >= 1 )
    {
      v64 = 0LL;
      while ( 1 )
      {
        if ( v64 >= (unsigned int)v63 )
          sub_1B6432C(sort, v62);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v65 = v56->m_Items[v64];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v62);
        if ( !*p_servantItemInfo )
          break;
        memberIdx = this->fields.memberIndex;
        v69 = sort;
        v70 = (EquipGraphListViewItem_o *)sub_1B64314(EquipGraphListViewItem_TypeInfo, v66, v67);
        EquipGraphListViewItem___ctor(v70, v64, v65, v69, v71, v9, partyItema, setupInfo, memberIdx, v84);
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
            (Il2CppObject *)v70,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = v74 + 8 * v76;
          *(_DWORD *)(sort + 24) = v76 + 1;
          *(_QWORD *)(v77 + 32) = v70;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 32), (int32_t)v70, v72, v73);
        }
        LODWORD(v63) = v56->max_length;
        if ( (__int64)++v64 >= (int)v63 )
          goto LABEL_55;
      }
LABEL_64:
      sub_1B64324(sort);
    }
LABEL_55:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_64;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v80 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v81 = *v80;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v81, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_64;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v82);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v83);
  }
}


void __fastcall EquipGraphListViewManager__CreateList_38322948(
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
  __int64 sort; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct ListViewSort_o *v33; // x21
  bool v34; // w8
  __int64 v35; // x1
  __int64 v36; // x2
  PartyOrganizationListViewItem_o *v37; // x23
  EquipGraphServantItem_o *v38; // x24
  const MethodInfo *v39; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v47; // x25
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v50; // x24
  UILabel_o *v51; // x26
  System_String_o *v52; // x27
  Il2CppObject *v53; // x28
  Il2CppObject *v54; // x0
  const MethodInfo *v55; // x1
  __int64 v56; // x8
  unsigned __int64 v57; // x22
  UserServantEntity_o *v58; // x26
  __int64 v59; // x1
  __int64 v60; // x2
  int64_t v61; // x27
  EquipGraphListViewItem_o *v62; // x25
  int64_t v63; // x4
  const MethodInfo *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v73; // x8
  System_String_o *v74; // x21
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  int v77; // [xsp+8h] [xbp-68h] BYREF
  int v78; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FBE24 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v9);
    sub_1B640C8(&EquipGraphListViewManager_TypeInfo, v10);
    sub_1B640C8(&EquipGraphServantItem_TypeInfo, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v19);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v20);
    byte_49FBE24 = 1;
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
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v25, v26);
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v31,
      v32);
    v33 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v33 )
      goto LABEL_63;
    v34 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v25, v26);
    v33 = this->fields.sort;
    if ( !v33 )
      goto LABEL_63;
    v34 = 0;
  }
  v33->fields.isBonusKind = v34;
  if ( !partyItem )
    goto LABEL_63;
  sort = (__int64)WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_63;
  v37 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v38 = (EquipGraphServantItem_o *)sub_1B64314(EquipGraphServantItem_TypeInfo, v35, v36);
    EquipGraphServantItem___ctor(v38, v37, v39);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v38, v41, v42);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v43);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v44);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_63;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v47 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v50 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v51 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
      if ( !v50 )
        goto LABEL_63;
      v52 = (System_String_o *)sort;
      v78 = *(_QWORD *)&v50->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v78);
      if ( !v47 )
        goto LABEL_63;
      v53 = (Il2CppObject *)sort;
      v77 = *(_DWORD *)(v47 + 156);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
      sort = (__int64)System_String__Format_61389768(v52, v53, v54, 0LL);
      if ( !v51 )
        goto LABEL_63;
      UILabel__set_text(v51, (System_String_o *)sort, 0LL);
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
    if ( !v50 )
      goto LABEL_63;
    v56 = *(_QWORD *)&v50->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0LL;
      while ( 1 )
      {
        if ( v57 >= (unsigned int)v56 )
          sub_1B6432C(sort, v55);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v58 = v50->m_Items[v57];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v55);
        if ( !*p_servantItemInfo )
          break;
        v61 = sort;
        v62 = (EquipGraphListViewItem_o *)sub_1B64314(EquipGraphListViewItem_TypeInfo, v59, v60);
        EquipGraphListViewItem___ctor_38341900(v62, v57, v58, v61, v63, partyItem, setupInfo, v64);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v67 = *(_QWORD *)(sort + 16);
        v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v67 )
          break;
        v69 = *(int *)(sort + 24);
        if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v62,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = v67 + 8 * v69;
          *(_DWORD *)(sort + 24) = v69 + 1;
          *(_QWORD *)(v70 + 32) = v62;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v62, v65, v66);
        }
        LODWORD(v56) = v50->max_length;
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_54;
      }
LABEL_63:
      sub_1B64324(sort);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v73 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v74 = *v73;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v74, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v75);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v76);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_49FBE1F & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewManager_TypeInfo, v1);
    byte_49FBE1F = 1;
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
    sub_1B64324(sortStatus);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
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
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v26; // x20
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x2
  void *v29; // x8
  __int64 v30; // x11
  struct PartyListViewItem_array *waveDeckItemList; // x25
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  PartyListViewItem_o *v34; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v36; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v38; // x22
  __int64 v39; // x23
  __int64 v40; // x24
  int v41; // w23
  struct PartyListViewItem_array *v42; // x9
  int v43; // w10
  struct PartyListViewItem_array *v44; // x8
  int v45; // w9
  struct EquipGraphListViewItem_o *v46; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v49; // q1
  PartyListViewItem_o *v50; // x20
  _BOOL8 v51; // x0
  const MethodInfo *v52; // x4
  Il2CppObject *v53; // x21
  __int64 v54; // x10
  UnityEngine_Object_o *v55; // x22
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x2
  void *v58; // x8
  __int64 v59; // x11
  struct EquipGraphListViewItem_o *v60; // x8
  struct ServantEntity_o *v61; // x10
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  struct EquipGraphListViewItem_o *v67; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  struct EquipGraphListViewItem_o *v71; // x8
  __int64 v72; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+0h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+28h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_49FBE31 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, result);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v8);
    sub_1B640C8(&EquipGraphListViewObject_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_49FBE31 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v78.fields._list = *(_OWORD *)&v77.fields.currentCryptoKey;
    v78.fields._current = (Il2CppObject *)v77.fields.fakeValue;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v78,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v21 )
        break;
      current = v78.fields._current;
      if ( !v78.fields._current
        || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v78.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EquipGraphListViewItem_c *)v78.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1B64324(v21);
      }
      if ( BYTE1(v78.fields._current[9].klass) )
      {
        if ( (klass_high = HIDWORD(v78.fields._current[9].klass),
              BYTE1(v78.fields._current[9].klass) = 0,
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
          v26 = (UnityEngine_Object_o *)current[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v27 = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
          if ( v27 )
          {
            v29 = current[6].monitor;
            if ( !v29
              || (v30 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                  *(unsigned __int8 *)(*(_QWORD *)v29 + 304LL) < (unsigned int)v30)
              || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v30 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1B64324(v27);
            }
            EquipGraphListViewObject__Init_38357192((EquipGraphListViewObject_o *)current[6].monitor, 4, v28);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v32 = *(_QWORD *)&waveDeckItemList->max_length;
      if ( (int)v32 >= 1 )
      {
        v33 = 0LL;
        while ( v33 < (unsigned int)v32 )
        {
          v34 = waveDeckItemList->m_Items[v33];
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
            if ( !v34 )
              goto LABEL_106;
            Instance = (int64_t)PartyListViewItem__GetMember(v34, i, 0LL);
            v36 = this->fields.selectItem;
            if ( !v36 )
              goto LABEL_106;
            servantEntity = v36->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_106;
            v38 = (PartyOrganizationListViewItem_o *)Instance;
            v40 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v39 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v79.fields.currentCryptoKey = v40;
            *(_QWORD *)&v79.fields.fakeValue = v39;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v79, 0LL);
            if ( !v38 )
              goto LABEL_106;
            v41 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v38, 0LL);
            if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL) )
              PartyListViewItem__SetEquip(v34, i, 0LL, 0LL);
          }
          LODWORD(v32) = waveDeckItemList->max_length;
          if ( (__int64)++v33 >= (int)v32 )
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
    v42 = this->fields.waveDeckItemList;
    if ( !v42 )
LABEL_106:
      sub_1B64324(Instance);
    v43 = selectItem->fields._OrganizedWave_k__BackingField - 1;
    if ( v43 >= v42->max_length )
LABEL_111:
      sub_1B6432C(Instance, v16);
    Instance = (int64_t)v42->m_Items[v43];
    if ( !Instance )
      goto LABEL_106;
    PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v20, 0LL);
  }
LABEL_60:
  v44 = this->fields.waveDeckItemList;
  if ( !v44 )
    goto LABEL_106;
  v45 = this->fields.partyNumber - 1;
  if ( v45 >= v44->max_length )
    goto LABEL_111;
  v46 = this->fields.selectItem;
  if ( !v46 )
    goto LABEL_106;
  userSvtEntity = v46->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_106;
  memberIndex = this->fields.memberIndex;
  v49 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v50 = v44->m_Items[v45];
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v76 = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v76, 0LL);
  if ( !v50 )
    goto LABEL_106;
  PartyListViewItem__SetEquip(v50, memberIndex, Instance, 0LL);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v78 = v75;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v51 )
      break;
    v53 = v78.fields._current;
    if ( !v78.fields._current
      || (v54 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v78.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v54)
      || (EquipGraphListViewItem_c *)v78.fields._current->klass->_2.typeHierarchy[v54 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B64324(v51);
    }
    if ( BYTE1(v78.fields._current[9].klass) )
      LOWORD(v78.fields._current[9].klass) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v53,
      this->fields.waveDeckItemList,
      v50,
      this->fields.memberIndex,
      v52);
    v55 = (UnityEngine_Object_o *)v53[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v56 = UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
    if ( v56 )
    {
      v58 = v53[6].monitor;
      if ( !v58
        || (v59 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v58 + 304LL) < (unsigned int)v59)
        || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v58 + 200LL) + 8 * v59 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1B64324(v56);
      }
      EquipGraphListViewObject__Init_38357192((EquipGraphListViewObject_o *)v53[6].monitor, 4, v57);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.baseCost = v50->fields.cost;
LABEL_83:
  v60 = this->fields.selectItem;
  if ( !v60 )
    goto LABEL_106;
  v60->fields.isBase = 1;
  if ( (v60->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v61) = 0;
  }
  else
  {
    v61 = v60->fields.servantEntity;
    if ( v61 )
      LODWORD(v61) = v61->fields.cost;
  }
  this->fields.baseCost -= (int)v61;
  v62 = v60->fields.userSvtEntity;
  if ( !v62 )
    goto LABEL_106;
  v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v63;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v74 = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v74, 0LL);
  if ( !servantItemInfo )
    goto LABEL_106;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v65);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_106;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v66);
  v67 = this->fields.selectItem;
  if ( !v67 )
    goto LABEL_106;
  viewObject = (UnityEngine_Object_o *)v67->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_102;
  v71 = this->fields.selectItem;
  if ( !v71 )
    goto LABEL_106;
  Instance = (int64_t)v71->fields.viewObject;
  if ( !Instance )
    goto LABEL_106;
  v72 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v72
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v72 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_106;
  }
  EquipGraphListViewObject__Init_38357192((EquipGraphListViewObject_o *)Instance, 4, v70);
LABEL_102:
  EquipGraphListViewManager__RefrashListDisp(this, v69);
LABEL_103:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v17, v18);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FBE33 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FBE33 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49FBE37 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FBE37 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1B64324(v11);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v10, 0LL);
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
  __int64 methodPtr_low; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49FBE3A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49FBE3A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  v20 = v19;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v20.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B64324(v13);
    }
    klass = v20.fields._current[7].klass;
    if ( !klass )
      sub_1B64324(v13);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v21.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v12;
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

  if ( (byte_49FBE26 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49FBE26 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(0LL);
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
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBE2E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_49FBE2E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v12.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B64324(v8);
    }
    if ( BYTE1(v12.fields._current[9].klass) )
    {
      klass_high = HIDWORD(v12.fields._current[1].klass);
      goto LABEL_12;
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FBE2F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_49FBE2F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1B64324(v8);
    }
    if ( BYTE1(v12.fields._current[9].klass) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49FBE28 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_49FBE28 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 201) )
      {
        if ( *(_BYTE *)(itemList + 173) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v46 = unchoiceList;
    v45 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unchoiceList = v42;
    v46 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49FBE27 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_49FBE27 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 200) )
      {
        if ( *(_BYTE *)(itemList + 172) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v46 = unlockList;
    v45 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unlockList = v42;
    v46 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_49FBE20 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewManager_TypeInfo, v1);
    byte_49FBE20 = 1;
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
    sub_1B64324(sortStatus);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v13; // w20
  DataManager_c **v14; // x21
  DataManager_c *v15; // x8
  struct System_Collections_Generic_List_Thread__o **v16; // x21
  DataManager_c *v17; // t1
  Il2CppType byval_arg; // q0
  int64_t v19; // x0
  const MethodInfo *v20; // x1
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

  if ( (byte_49FBE25 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FBE25 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v13 = 0;
    v38 = Instance;
    while ( 1 )
    {
      v14 = &Instance->klass + (int)v13;
      v17 = v14[4];
      v16 = (struct System_Collections_Generic_List_Thread__o **)(v14 + 4);
      v15 = v17;
      if ( !v17 )
        break;
      byval_arg = v15->_1.byval_arg;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v15->_1.name;
      *(Il2CppType *)&v41.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v40 = v41;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v40, 0LL);
      if ( size >= 1 )
      {
        v21 = (DataManager_o *)v19;
        v22 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v22,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( size == ++v22 )
            goto LABEL_27;
        }
        if ( v13 >= LODWORD(v38->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v29 = *v16;
        v23->fields.masterLoadThreads = *v16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->fields.masterLoadThreads, (int32_t)v29, v27, v28);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v23, v20);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v23, v30);
        }
      }
LABEL_27:
      Instance = v38;
      if ( ++v13 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v13 >= LODWORD(v38->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1B6432C(Instance, v20);
    }
LABEL_44:
    sub_1B64324(Instance);
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
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ListViewSort_o *sort; // x0

  if ( (byte_49FBE35 & 1) == 0 )
  {
    sub_1B640C8(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__, method);
    byte_49FBE35 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
    sub_1B64324(this);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49FBE32 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_1B640C8(&Method_EquipGraphListViewManager_OnClickFilterKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FBE32 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantFilterSelectMenu_30352028(v10, 5, sort, (ListViewManager_o *)this, v13, -1, 0LL);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v6);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_49FBE38 & 1) == 0 )
  {
    sub_1B640C8(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FBE38 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  __int64 v11; // x1
  __int64 v12; // x2
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49FBE36 & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_1B640C8(&Method_EquipGraphListViewManager_OnClickSortKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FBE36 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantSortSelectMenu(v10, 4, sort, 0, v13, 0LL);
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
    sub_1B64324(this);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49FBE2D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBE2D = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v16; // w22
  UILabel_o *v17; // x20
  System_String_o **v18; // x8
  System_String_o *v19; // x21
  System_String_o *v20; // x21
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FBE29 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_12322/*"SUM_OVER_INFO"*/, v7);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v8);
    byte_49FBE29 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_22;
  v10 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v10,
                                                                  v11,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v11 >= v10->fields._size )
        goto LABEL_8;
    }
LABEL_22:
    sub_1B64324(ObjectList);
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
    v16 = (_DWORD)equipServantEntity + baseCost;
    v17 = this->fields.infoData2Label;
    v18 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12321/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12322/*"SUM_OVER_INFO"*/;
    v19 = *v18;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get(v19, 0LL);
    v24 = v16;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    maxCost = this->fields.maxCost;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = (System_Collections_Generic_List_object__o *)System_String__Format_61389768(v20, v21, v22, 0LL);
    if ( !v17 )
      goto LABEL_22;
    UILabel__set_text(v17, (System_String_o *)ObjectList, 0LL);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FBE2B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49FBE2B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      EquipGraphListViewObject__Init_38358344((EquipGraphListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_38357316(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FBE2C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49FBE2C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      EquipGraphListViewObject__Init_38358428((EquipGraphListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  EquipGraphListViewObject_o *v43; // x24
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  __int64 v46; // x1
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
  __int64 v68; // x1
  __int64 v69; // x2
  NotificationDialog_ClickDelegate_o *v70; // x23
  int64_t v71; // x1
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  _QWORD *v76; // x0
  _BOOL4 v77; // w21
  int32_t v78; // w2
  int32_t v79; // w3
  ServantStatusBattleListViewItem_c *klass; // x19
  _QWORD *v81; // x0
  _BOOL4 v82; // w23
  System_Reflection_MethodBase_o *v83; // x0
  System_String_o *v84; // x21
  const MethodInfo *v85; // x1
  __int64 v86; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  __int64 v89; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_String_o *v92; // x23
  const MethodInfo *v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  __int64 v96; // x23
  const MethodInfo *v97; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  __int64 v100; // x23
  struct EquipGraphServantItem_o *v101; // x8
  int32_t v102; // w23
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x23
  int32_t v106; // w2
  int32_t v107; // w3
  __int64 v108; // x20
  System_String_o *v109; // x20
  Il2CppObject *v110; // x21
  System_String_o *v111; // x22
  __int64 v112; // x1
  __int64 v113; // x2
  CommonConfirmDialog_ClickDelegate_o *v114; // x23
  struct EquipGraphServantItem_o *v115; // x8
  struct PartyListViewItem_array *v116; // x9
  __int64 v117; // x8
  unsigned __int64 v118; // x29
  int v119; // w27
  PartyListViewItem_o *v120; // x21
  int32_t v121; // w22
  struct ServantEntity_o *v122; // x8
  PartyOrganizationListViewItem_o *v123; // x23
  __int64 v124; // x24
  __int64 v125; // x25
  int v126; // w24
  ServantEntity_o *v127; // x21
  System_String_o *v128; // x21
  __int64 v129; // x22
  int32_t v130; // w2
  int32_t v131; // w3
  __int64 v132; // x23
  int32_t v133; // w2
  int32_t v134; // w3
  __int64 v135; // x23
  int32_t weareRarity; // w23
  int32_t v137; // w2
  int32_t v138; // w3
  __int64 v139; // x23
  const MethodInfo *v140; // x1
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x23
  int32_t v144; // w2
  int32_t v145; // w3
  struct System_String_o *wearerServantName; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  __int64 v149; // x20
  int32_t v150; // w2
  int32_t v151; // w3
  __int64 v152; // x20
  struct EquipGraphServantItem_o *v153; // x8
  int32_t Rarity; // w0
  int32_t v155; // w2
  int32_t v156; // w3
  __int64 v157; // x20
  const MethodInfo *v158; // x1
  int32_t v159; // w2
  int32_t v160; // w3
  __int64 v161; // x20
  const MethodInfo *v162; // x1
  int32_t v163; // w2
  int32_t v164; // w3
  __int64 v165; // x20
  System_String_o *v166; // x20
  Il2CppObject *v167; // x21
  System_String_o *v168; // x22
  System_String_o *v169; // x23
  System_String_o *v170; // x24
  __int64 v171; // x1
  __int64 v172; // x2
  CommonConfirmDialog_ClickDelegate_o *v173; // x25
  struct PartyListViewItem_array *v174; // x8
  int v175; // w9
  struct EquipGraphListViewItem_o *v176; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v179; // q1
  PartyListViewItem_o *v180; // x24
  _BOOL8 v181; // x0
  Il2CppObject *current; // x28
  __int64 v183; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v186; // x23
  _BOOL8 v187; // x0
  const MethodInfo *v188; // x2
  void *v189; // x8
  __int64 v190; // x11
  struct EquipGraphListViewItem_o *v191; // x8
  struct UserServantEntity_o *v192; // x9
  __int128 v193; // q1
  struct EquipGraphServantItem_o *v194; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v196; // x20
  __int64 v197; // x22
  int32_t v198; // w2
  int32_t v199; // w3
  __int64 v200; // x24
  int32_t v201; // w2
  int32_t v202; // w3
  __int64 v203; // x24
  int32_t v204; // w24
  int32_t v205; // w2
  int32_t v206; // w3
  __int64 v207; // x24
  int32_t v208; // w2
  int32_t v209; // w3
  __int64 v210; // x24
  __int64 v211; // x23
  __int64 v212; // x24
  int32_t v213; // w0
  int32_t v214; // w2
  int32_t v215; // w3
  __int64 v216; // x21
  System_String_o *v217; // x20
  Il2CppObject *v218; // x21
  System_String_o *v219; // x22
  System_String_o *v220; // x23
  System_String_o *v221; // x24
  __int64 v222; // x1
  __int64 v223; // x2
  CommonConfirmDialog_ClickDelegate_o *v224; // x25
  __int64 v225; // x0
  struct PartyListViewItem_array *v226; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v230; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v233; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16

  if ( (byte_49FBE30 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_1B640C8(&EquipGraphListViewItem_TypeInfo, v12);
    sub_1B640C8(&Method_EquipGraphListViewManager_EndSelectConfirm__, v13);
    sub_1B640C8(&Method_EquipGraphListViewManager_SelectEquip__, v14);
    sub_1B640C8(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v15);
    sub_1B640C8(&EquipGraphListViewObject_TypeInfo, v16);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&object___TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1B640C8(&Rarity_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B640C8(&StringLiteral_15443/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v26);
    sub_1B640C8(&StringLiteral_15444/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v27);
    sub_1B640C8(&StringLiteral_15440/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v28);
    sub_1B640C8(&StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v29);
    sub_1B640C8(&StringLiteral_5493/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v30);
    sub_1B640C8(&StringLiteral_15436/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v31);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v32);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v33);
    sub_1B640C8(&StringLiteral_15435/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v34);
    byte_49FBE30 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v233, 0, sizeof(v233));
  this->fields.selectItem = item;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectItem,
    (int32_t)item,
    (int32_t)callback,
    (int32_t)method);
  p_selectItemCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v37, v38);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_227;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewObject_TypeInfo )
      v43 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v43 = 0LL;
  }
  else
  {
    v43 = 0LL;
  }
  if ( selectItem->fields.isBase )
  {
    v44 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_SelectEquip__);
    v45 = (System_Reflection_MethodBase_o *)sub_1B640AC(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
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
        if ( !v43 )
          goto LABEL_227;
        EquipGraphListViewObject__Init_38357192(v43, 4, v47);
      }
      servantItemInfo = (__int64)this->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_227;
      v71 = 0LL;
LABEL_51:
      EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v71, v47);
      servantItemInfo = (__int64)this->fields.servantItemDraw;
      if ( servantItemInfo )
      {
        EquipGraphServantItemDraw__SetItem(
          (EquipGraphServantItemDraw_o *)servantItemInfo,
          this->fields.servantItemInfo,
          v72);
        EquipGraphListViewManager__RefrashListDisp(this, v73);
        if ( callback )
        {
          p_selectItemCallbackFunc->klass = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v74, v75);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
            callback->fields.original_method_info,
            *(_QWORD *)&callback->fields.extra_arg);
        }
        return;
      }
LABEL_227:
      sub_1B64324(servantItemInfo);
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
    sub_1B6432C(servantItemInfo, v46);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_227;
    v53 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_SelectEquip__);
    v55 = (System_Reflection_MethodBase_o *)sub_1B640AC(v53, v53[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_15436/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_15435/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v70 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v68, v69);
          NotificationDialog_ClickDelegate___ctor(
            v70,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_30347532(
              (CommonUI_o *)Instance,
              v66,
              v67,
              v70,
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
        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_15443/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_1B64170(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v129 = servantItemInfo;
        LODWORD(v229.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v229);
        if ( !v129 )
          goto LABEL_227;
        v132 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v129 + 24) )
            goto LABEL_229;
          *(_QWORD *)(v129 + 32) = v132;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 32), v132, v130, v131);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
          v135 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v129 + 24) <= 1u )
              goto LABEL_229;
            *(_QWORD *)(v129 + 40) = v135;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 40), v135, v133, v134);
            if ( !*p_selectItem )
              goto LABEL_227;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v139 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v129 + 24) <= 2u )
                goto LABEL_229;
              *(_QWORD *)(v129 + 48) = v139;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 48), v139, v137, v138);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v140);
              v143 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v129 + 24) <= 3u )
                  goto LABEL_229;
                *(_QWORD *)(v129 + 56) = v143;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 56), v143, v141, v142);
                if ( !*p_selectItem )
                  goto LABEL_227;
                wearerServantName = (*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_1B64204(wearerServantName, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v129 + 24) <= 4u )
                    goto LABEL_229;
                  *(_QWORD *)(v129 + 64) = wearerServantName;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 64), (int32_t)wearerServantName, v144, v145);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                  v149 = servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v129 + 24) <= 5u )
                      goto LABEL_229;
                    *(_QWORD *)(v129 + 72) = v149;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 72), v149, v147, v148);
                    v230 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v230);
                    v152 = servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v129 + 24) <= 6u )
                        goto LABEL_229;
                      *(_QWORD *)(v129 + 80) = v152;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 80), v152, v150, v151);
                      v153 = this->fields.servantItemInfo;
                      if ( !v153 )
                        goto LABEL_227;
                      servantItemInfo = (__int64)v153->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_227;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v157 = servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v129 + 24) <= 7u )
                          goto LABEL_229;
                        *(_QWORD *)(v129 + 88) = v157;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 88), v157, v155, v156);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_227;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v158);
                        v161 = servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v129 + 24) <= 8u )
                            goto LABEL_229;
                          *(_QWORD *)(v129 + 96) = v161;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 96), v161, v159, v160);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_227;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v162);
                          v165 = servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v129 + 24) > 9u )
                            {
                              *(_QWORD *)(v129 + 104) = v165;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 104), v165, v163, v164);
                              v166 = System_String__Format_61389904(v128, (System_Object_array *)v129, 0LL);
                              v167 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v168 = LocalizationManager__Get((System_String_o *)StringLiteral_15444/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                              v169 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                              v170 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
                              v173 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                              CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                              v171,
                                                                              v172);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v173,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0LL);
                              if ( v167 )
                              {
                                CommonUI__OpenConfirmDialog_30345400(
                                  (CommonUI_o *)v167,
                                  v168,
                                  v166,
                                  v169,
                                  v170,
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
    v81 = Method_EquipGraphListViewManager_SelectEquip__;
    v82 = selectItem->fields.wearerMember >= 0 && selectItem->fields.wearerMember != this->fields.memberIndex;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v81 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_SelectEquip__);
    v83 = (System_Reflection_MethodBase_o *)sub_1B640AC(v81, v81[4]);
    OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0LL);
    if ( !v82 )
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
        *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v229.fields.fakeValue = v179;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v228 = v229;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v228, 0LL);
        if ( !v180 )
          goto LABEL_227;
        PartyListViewItem__SetEquip(v180, memberIndex, servantItemInfo, 0LL);
      }
      servantItemInfo = (__int64)this->fields.itemList;
      if ( !servantItemInfo )
        goto LABEL_227;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v229,
        (System_Collections_Generic_List_object__o *)servantItemInfo,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v233 = *(System_Collections_Generic_List_Enumerator_object__o *)&v229.fields.currentCryptoKey;
      while ( 1 )
      {
        v181 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v233,
                 (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v181 )
          break;
        current = v233.fields._current;
        if ( !v233.fields._current
          || (v183 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v233.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v183)
          || (EquipGraphListViewItem_c *)v233.fields._current->klass->_2.typeHierarchy[v183 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_1B64324(v181);
        }
        if ( BYTE1(v233.fields._current[9].klass) )
        {
          if ( (klass_high = HIDWORD(v233.fields._current[9].klass),
                BYTE1(v233.fields._current[9].klass) = 0,
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
            v186 = (UnityEngine_Object_o *)current[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v187 = UnityEngine_Object__op_Inequality(v186, 0LL, 0LL);
            if ( v187 )
            {
              v189 = current[6].monitor;
              if ( !v189
                || (v190 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v189 + 304LL) < (unsigned int)v190)
                || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v189 + 200LL) + 8 * v190 - 8) != EquipGraphListViewObject_TypeInfo )
              {
                sub_1B64324(v187);
              }
              EquipGraphListViewObject__Init_38357192((EquipGraphListViewObject_o *)current[6].monitor, 4, v188);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v233,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v191 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      v192 = v191->fields.userSvtEntity;
      v191->fields.isBase = 1;
      if ( !v192 )
        goto LABEL_227;
      v193 = *(_OWORD *)&v192->fields.id.fields.fakeValue;
      v194 = this->fields.servantItemInfo;
      *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)&v192->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v229.fields.fakeValue = v193;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v227 = v229;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v227, 0LL);
      if ( !v194 )
        goto LABEL_227;
      v71 = servantItemInfo;
      servantItemInfo = (__int64)v194;
      goto LABEL_51;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_5493/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_1B64170(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_227;
    v86 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v85);
    if ( !v86 )
      goto LABEL_227;
    v89 = servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v86 + 24) )
        goto LABEL_229;
      *(_QWORD *)(v86 + 32) = v89;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 32), v89, v87, v88);
      if ( !*p_selectItem )
        goto LABEL_227;
      v92 = (*p_selectItem)->fields.wearerServantName;
      if ( !v92 || (servantItemInfo = sub_1B64204(v92, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v86 + 24) <= 1u )
          goto LABEL_229;
        *(_QWORD *)(v86 + 40) = v92;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 40), (int32_t)v92, v90, v91);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_227;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v93);
        v96 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v86 + 24) <= 2u )
            goto LABEL_229;
          *(_QWORD *)(v86 + 48) = v96;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 48), v96, v94, v95);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_227;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v97);
          v100 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v86 + 24) <= 3u )
              goto LABEL_229;
            *(_QWORD *)(v86 + 56) = v100;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 56), v100, v98, v99);
            v101 = this->fields.servantItemInfo;
            if ( !v101 )
              goto LABEL_227;
            servantItemInfo = (__int64)v101->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_227;
            v102 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v102, 0LL);
            v105 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v86 + 24) <= 4u )
                goto LABEL_229;
              *(_QWORD *)(v86 + 64) = v105;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 64), v105, v103, v104);
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v108 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v86 + 24) > 5u )
                {
                  *(_QWORD *)(v86 + 72) = v108;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 72), v108, v106, v107);
                  v109 = System_String__Format_61389904(v84, (System_Object_array *)v86, 0LL);
                  v110 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v114 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v112,
                                                                  v113);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v114,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v110 )
                  {
                    CommonUI__OpenConfirmDialog(
                      (CommonUI_o *)v110,
                      v111,
                      v109,
                      v114,
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
  v76 = Method_EquipGraphListViewManager_SelectEquip__;
  v77 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v76 = (_QWORD *)sub_1B640E0(Method_EquipGraphListViewManager_SelectEquip__);
  v55 = (System_Reflection_MethodBase_o *)sub_1B640AC(v76, v76[4]);
  if ( v77 )
  {
LABEL_59:
    OverwriteAssetSoundName__PlaySystemSe(v55, 2, 0LL);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_1B6406C(p_selectItemCallbackFunc, 0, v78, v79);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
  v115 = this->fields.servantItemInfo;
  if ( !v115 )
    goto LABEL_227;
  if ( !v115->fields.equipUserSvtEntity )
    goto LABEL_119;
  v116 = this->fields.waveDeckItemList;
  if ( !v116 )
    goto LABEL_227;
  v117 = *(_QWORD *)&v116->max_length;
  if ( (int)v117 >= 1 )
  {
    v118 = 0LL;
    v119 = 1;
    v226 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v118 >= (unsigned int)v117 )
        goto LABEL_229;
      v120 = v116->m_Items[v118];
      v121 = 0;
      do
      {
        servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v121 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
          goto LABEL_117;
        if ( !v120 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(v120, v121, 0LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v122 = (*p_selectItem)->fields.servantEntity;
        if ( !v122 )
          goto LABEL_227;
        v123 = (PartyOrganizationListViewItem_o *)servantItemInfo;
        v125 = *(_QWORD *)&v122->fields.id.fields.currentCryptoKey;
        v124 = *(_QWORD *)&v122->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v234.fields.currentCryptoKey = v125;
        *(_QWORD *)&v234.fields.fakeValue = v124;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v234, 0LL);
        if ( !v123 )
          goto LABEL_227;
        v126 = servantItemInfo;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v123, 0LL);
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL);
        ++v121;
      }
      while ( v126 != (_DWORD)servantItemInfo );
      v127 = v123->fields.servantEntity;
      if ( v127 )
        break;
LABEL_117:
      v116 = v226;
      ++v118;
      ++v119;
      LODWORD(v117) = v226->max_length;
      if ( (__int64)v118 >= (int)v117 )
        return;
    }
    userServantEntity = v123->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v196 = LocalizationManager__Get((System_String_o *)StringLiteral_15440/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v197 = sub_1B64170(object___TypeInfo, 5LL);
      LODWORD(v229.fields.currentCryptoKey) = v119;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v229);
      if ( !v197 )
        goto LABEL_227;
      v200 = servantItemInfo;
      if ( !servantItemInfo
        || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v197 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v197 + 24) )
          goto LABEL_229;
        *(_QWORD *)(v197 + 32) = v200;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 32), v200, v198, v199);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v203 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v197 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v197 + 24) <= 1u )
            goto LABEL_229;
          *(_QWORD *)(v197 + 40) = v203;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 40), v203, v201, v202);
          v204 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v204, 0LL);
          v207 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v197 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v197 + 24) <= 2u )
              goto LABEL_229;
            *(_QWORD *)(v197 + 48) = v207;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 48), v207, v205, v206);
            servantItemInfo = (__int64)ServantEntity__getClassName(v127, 0LL);
            v210 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v197 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v197 + 24) <= 3u )
                goto LABEL_229;
              *(_QWORD *)(v197 + 56) = v210;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 56), v210, v208, v209);
              v212 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v211 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v236.fields.currentCryptoKey = v212;
              *(_QWORD *)&v236.fields.fakeValue = v211;
              v213 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v236, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v127, v213, -1, 0LL);
              v216 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1B64204(servantItemInfo, *(_QWORD *)(*(_QWORD *)v197 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v197 + 24) > 4u )
                {
                  *(_QWORD *)(v197 + 64) = v216;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 64), v216, v214, v215);
                  v217 = System_String__Format_61389904(v196, (System_Object_array *)v197, 0LL);
                  v218 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v219 = LocalizationManager__Get((System_String_o *)StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v220 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v221 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v224 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v222,
                                                                  v223);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v224,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v218 )
                  {
                    CommonUI__OpenConfirmDialog_30345400(
                      (CommonUI_o *)v218,
                      v219,
                      v217,
                      v220,
                      v221,
                      v224,
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
      v225 = sub_1B64348(servantItemInfo);
      sub_1B641F0(v225, 0LL);
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

  if ( (byte_49FBE34 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49FBE34 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EquipGraphListViewManager__SetMode_38325092(this, mode, v6);
}


void __fastcall EquipGraphListViewManager__SetMode_38325092(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v5);
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
    sub_1B64324(servantItemDraw);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_38357316(this, mode + 1, v7);
}


void __fastcall EquipGraphListViewManager__SetMode_38357264(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EquipGraphListViewManager__SetMode_38325092(this, mode, v6);
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
  if ( (byte_49FBE2A & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1B640C8(&EquipGraphListViewObject_TypeInfo, obj);
    byte_49FBE2A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_38357192((EquipGraphListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v22; // x20

  if ( (byte_49FBE39 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49FBE39 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_40;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_40;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v20 = v17;
    else
      v20 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v22 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1B64324(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager___SelectEquip_b__71_0(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_49FBE3C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FBE3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectItemCallbackFunc, 0, v5, v6);
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

  if ( (byte_49FBE19 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FBE19 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FBE1B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FBE1B = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FBE1D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FBE1D = 1;
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
    v8 = sub_1B9F5B8(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FBE22 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FBE22 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v12;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FBE21 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FBE21 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v12;
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

  if ( (byte_49FBE1A & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FBE1A = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FBE1C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FBE1C = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FBE1E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FBE1E = 1;
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
    v8 = sub_1B9F5B8(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AC834;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC7DC;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49FBE3D & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_49FBE3D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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