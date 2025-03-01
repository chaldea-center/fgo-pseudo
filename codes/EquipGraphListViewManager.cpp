void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ListViewSort_o *v12; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BFCF1C & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewManager_TypeInfo, v1);
    sub_1C2E12C(&ListViewSort_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_6226/*"EquipGraph"*/, v3);
    sub_1C2E12C(&StringLiteral_15862/*"WarBoardEquipGraph"*/, v4);
    byte_4BFCF1C = 1;
  }
  v5 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor_42114616(v5, (System_String_o *)StringLiteral_6226/*"EquipGraph"*/, 3, 0, 0LL);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v5;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor_42114616(v12, (System_String_o *)StringLiteral_15862/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->warBoardSortStatus = v12;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->warBoardSortStatus,
    (int64_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2E388(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  EquipGraphListViewManager__ModifyList(this, 1, v14);
  EquipGraphListViewManager__SetMode_39781708(this, 2, v15);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyListViewItem_array *v11; // x29
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  EquipGraphListViewManager_c *v31; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v33; // x1
  struct ListViewSort_o **p_sort; // x23
  const MethodInfo *v35; // x1
  __int64 sort; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct ListViewSort_o *v43; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct ListViewSort_o *v54; // x20
  bool v55; // w8
  PartyOrganizationListViewItem_o *v56; // x24
  EquipGraphServantItem_o *v57; // x25
  const MethodInfo *v58; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v70; // x26
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x27
  UserServantEntity_array *v73; // x25
  UILabel_o *v74; // x27
  PartyListViewItem_array *v75; // x20
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_String_o *v79; // x28
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x29
  Il2CppObject *v84; // x0
  __int64 v85; // x8
  unsigned __int64 v86; // x23
  UserServantEntity_o *v87; // x27
  int32_t memberIdx; // w22
  int64_t v89; // x28
  EquipGraphListViewItem_o *v90; // x26
  int64_t v91; // x4
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v104; // x8
  System_String_o *v105; // x21
  const MethodInfo *v106; // x1
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // [xsp+8h] [xbp-78h]
  PartyListViewItem_o *partyItema; // [xsp+10h] [xbp-70h]
  int v110; // [xsp+18h] [xbp-68h] BYREF
  int v111; // [xsp+1Ch] [xbp-64h] BYREF

  v11 = baseDeckItemList;
  if ( (byte_4BFCF03 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v13);
    sub_1C2E12C(&EquipGraphListViewManager_TypeInfo, v14);
    sub_1C2E12C(&EquipGraphServantItem_TypeInfo, v15);
    sub_1C2E12C(&int_TypeInfo, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v19);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v20);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C2E12C(&StringLiteral_11787/*"SERVANT_EQUIP_EMPTY"*/, v22);
    sub_1C2E12C(&StringLiteral_11987/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v23);
    sub_1C2E12C(&StringLiteral_12629/*"SUM_INFO"*/, v24);
    byte_4BFCF03 = 1;
  }
  this->fields.waveDeckItemList = v11;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.waveDeckItemList,
    (int64_t)v11,
    (int64_t)partyItem,
    member,
    (System_String_o *)setupInfo,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  v31 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v31 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v31->static_fields->sortStatus;
  v33 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v33, v25, v26, v27, v28, v29, v30);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_64;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_64;
  v43 = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !v43 )
    goto LABEL_64;
  iconScaleKind = v43->fields.iconScaleKind;
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v37, v38, v39, v40, v41, v42);
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
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v54 )
      goto LABEL_64;
    v55 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v37, v38, v39, v40, v41, v42);
    v54 = this->fields.sort;
    if ( !v54 )
      goto LABEL_64;
    v55 = 0;
  }
  v54->fields.isBonusKind = v55;
  sort = (__int64)PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_64;
  v56 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v57 = (EquipGraphServantItem_o *)sub_1C2E378(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v57, v56, v58);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v57;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.servantItemInfo, (int64_t)v57, v60, v61, v62, v63, v64, v65);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v66);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v67);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_64;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v70 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !v11 )
      goto LABEL_64;
    this->fields.maxWave = *(_QWORD *)&v11->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_64;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_64;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v73 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    partyItema = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v74 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = v11;
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12629/*"SUM_INFO"*/, 0LL);
      if ( !v73 )
        goto LABEL_64;
      v79 = (System_String_o *)sort;
      v111 = *(_QWORD *)&v73->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v111, v76, v77, v78);
      if ( !v70 )
        goto LABEL_64;
      v83 = (Il2CppObject *)sort;
      v110 = *(_DWORD *)(v70 + 156);
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v80, v81, v82);
      sort = (__int64)System_String__Format_63249956(v79, v83, v84, 0LL);
      if ( !v74 )
        goto LABEL_64;
      UILabel__set_text(v74, (System_String_o *)sort, 0LL);
      v11 = v75;
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
    if ( !v73 )
      goto LABEL_64;
    v85 = *(_QWORD *)&v73->max_length;
    if ( (int)v85 >= 1 )
    {
      v86 = 0LL;
      while ( 1 )
      {
        if ( v86 >= (unsigned int)v85 )
          sub_1C2E390(sort, v35);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v87 = v73->m_Items[v86];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v35);
        if ( !*p_servantItemInfo )
          break;
        memberIdx = this->fields.memberIndex;
        v89 = sort;
        v90 = (EquipGraphListViewItem_o *)sub_1C2E378(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor(v90, v86, v87, v89, v91, v11, partyItema, setupInfo, memberIdx, v108);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v98 = *(_QWORD *)(sort + 16);
        v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v98 )
          break;
        v100 = *(int *)(sort + 24);
        if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v90,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = v98 + 8 * v100;
          *(_DWORD *)(sort + 24) = v100 + 1;
          *(_QWORD *)(v101 + 32) = v90;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v101 + 32), (int64_t)v90, v92, v93, v94, v95, v96, v97);
        }
        LODWORD(v85) = v73->max_length;
        if ( (__int64)++v86 >= (int)v85 )
          goto LABEL_55;
      }
LABEL_64:
      sub_1C2E388(sort, v35);
    }
LABEL_55:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_64;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v104 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11787/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11987/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v105 = *v104;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v105, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_64;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v106);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v107);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_39779564(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
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
  EquipGraphListViewManager_c *v24; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  const MethodInfo *v27; // x1
  __int64 sort; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct ListViewSort_o *v45; // x21
  bool v46; // w8
  PartyOrganizationListViewItem_o *v47; // x23
  EquipGraphServantItem_o *v48; // x24
  const MethodInfo *v49; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v61; // x25
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v64; // x24
  UILabel_o *v65; // x26
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_String_o *v69; // x27
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x28
  Il2CppObject *v74; // x0
  __int64 v75; // x8
  unsigned __int64 v76; // x22
  UserServantEntity_o *v77; // x26
  int64_t v78; // x27
  EquipGraphListViewItem_o *v79; // x25
  int64_t v80; // x4
  const MethodInfo *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v94; // x8
  System_String_o *v95; // x21
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x1
  int v98; // [xsp+8h] [xbp-68h] BYREF
  int v99; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BFCF04 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v12);
    sub_1C2E12C(&EquipGraphListViewManager_TypeInfo, v13);
    sub_1C2E12C(&EquipGraphServantItem_TypeInfo, v14);
    sub_1C2E12C(&int_TypeInfo, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v18);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v19);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C2E12C(&StringLiteral_11787/*"SERVANT_EQUIP_EMPTY"*/, v21);
    sub_1C2E12C(&StringLiteral_11987/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_1C2E12C(&StringLiteral_12629/*"SUM_INFO"*/, v23);
    byte_4BFCF04 = 1;
  }
  v24 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v24 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v24->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)warBoardSortStatus,
    *(int64_t *)&member,
    (int32_t)setupInfo,
    (System_String_o *)method,
    v5,
    v6,
    v7);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v29, v30, v31, v32, v33, v34);
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
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v45 )
      goto LABEL_63;
    v46 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v29, v30, v31, v32, v33, v34);
    v45 = this->fields.sort;
    if ( !v45 )
      goto LABEL_63;
    v46 = 0;
  }
  v45->fields.isBonusKind = v46;
  if ( !partyItem )
    goto LABEL_63;
  sort = (__int64)WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_63;
  v47 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v48 = (EquipGraphServantItem_o *)sub_1C2E378(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v48, v47, v49);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v48;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.servantItemInfo, (int64_t)v48, v51, v52, v53, v54, v55, v56);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v57);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v58);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_63;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v61 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v64 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v65 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12629/*"SUM_INFO"*/, 0LL);
      if ( !v64 )
        goto LABEL_63;
      v69 = (System_String_o *)sort;
      v99 = *(_QWORD *)&v64->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v99, v66, v67, v68);
      if ( !v61 )
        goto LABEL_63;
      v73 = (Il2CppObject *)sort;
      v98 = *(_DWORD *)(v61 + 156);
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v70, v71, v72);
      sort = (__int64)System_String__Format_63249956(v69, v73, v74, 0LL);
      if ( !v65 )
        goto LABEL_63;
      UILabel__set_text(v65, (System_String_o *)sort, 0LL);
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
    if ( !v64 )
      goto LABEL_63;
    v75 = *(_QWORD *)&v64->max_length;
    if ( (int)v75 >= 1 )
    {
      v76 = 0LL;
      while ( 1 )
      {
        if ( v76 >= (unsigned int)v75 )
          sub_1C2E390(sort, v27);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v77 = v64->m_Items[v76];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v27);
        if ( !*p_servantItemInfo )
          break;
        v78 = sort;
        v79 = (EquipGraphListViewItem_o *)sub_1C2E378(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_39798584(v79, v76, v77, v78, v80, partyItem, setupInfo, v81);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v88 = *(_QWORD *)(sort + 16);
        v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v88 )
          break;
        v90 = *(int *)(sort + 24);
        if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v79,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = v88 + 8 * v90;
          *(_DWORD *)(sort + 24) = v90 + 1;
          *(_QWORD *)(v91 + 32) = v79;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v91 + 32), (int64_t)v79, v82, v83, v84, v85, v86, v87);
        }
        LODWORD(v75) = v64->max_length;
        if ( (__int64)++v76 >= (int)v75 )
          goto LABEL_54;
      }
LABEL_63:
      sub_1C2E388(sort, v27);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v94 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11787/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11987/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v95 = *v94;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v95, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v96);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v97);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4BFCEFF & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4BFCEFF = 1;
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
    sub_1C2E388(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2E388(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v24; // x2
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v31; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  void *v35; // x8
  __int64 v36; // x11
  struct PartyListViewItem_array *waveDeckItemList; // x25
  __int64 v38; // x8
  unsigned __int64 v39; // x26
  PartyListViewItem_o *v40; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v42; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v44; // x22
  __int64 v45; // x23
  __int64 v46; // x24
  int v47; // w23
  struct PartyListViewItem_array *v48; // x9
  int v49; // w10
  struct PartyListViewItem_array *v50; // x8
  int v51; // w9
  struct EquipGraphListViewItem_o *v52; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v55; // q1
  PartyListViewItem_o *v56; // x20
  _BOOL8 v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x4
  Il2CppObject *v60; // x21
  __int64 v61; // x10
  UnityEngine_Object_o *v62; // x22
  _BOOL8 v63; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  void *v66; // x8
  __int64 v67; // x11
  struct EquipGraphListViewItem_o *v68; // x8
  struct ServantEntity_o *v69; // x10
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  struct EquipGraphListViewItem_o *v75; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v77; // x2
  struct EquipGraphListViewItem_o *v78; // x8
  __int64 v79; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+0h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+28h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4BFCF11 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, result);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v8);
    sub_1C2E12C(&EquipGraphListViewObject_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4BFCF11 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v85.fields._list = *(_OWORD *)&v84.fields.currentCryptoKey;
    v85.fields._current = (Il2CppObject *)v84.fields.fakeValue;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v85,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v25 )
        break;
      current = v85.fields._current;
      if ( !v85.fields._current
        || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v85.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EquipGraphListViewItem_c *)v85.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1C2E388(v25, v26);
      }
      if ( BYTE1(v85.fields._current[9].klass) )
      {
        if ( (klass_high = HIDWORD(v85.fields._current[9].klass),
              BYTE1(v85.fields._current[9].klass) = 0,
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
          v31 = (UnityEngine_Object_o *)current[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v32 = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
          if ( v32 )
          {
            v35 = current[6].monitor;
            if ( !v35
              || (v36 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                  *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)v36)
              || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v36 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1C2E388(v32, v33);
            }
            EquipGraphListViewObject__Init_39813888((EquipGraphListViewObject_o *)current[6].monitor, 4, v34);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v85,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v38 = *(_QWORD *)&waveDeckItemList->max_length;
      if ( (int)v38 >= 1 )
      {
        v39 = 0LL;
        while ( v39 < (unsigned int)v38 )
        {
          v40 = waveDeckItemList->m_Items[v39];
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
            if ( !v40 )
              goto LABEL_106;
            Instance = (int64_t)PartyListViewItem__GetMember(v40, i, 0LL);
            v42 = this->fields.selectItem;
            if ( !v42 )
              goto LABEL_106;
            servantEntity = v42->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_106;
            v44 = (PartyOrganizationListViewItem_o *)Instance;
            v46 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v45 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v86.fields.currentCryptoKey = v46;
            *(_QWORD *)&v86.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v86, 0LL);
            if ( !v44 )
              goto LABEL_106;
            v47 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v44, 0LL);
            if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(EquipSvtId, 0LL) )
              PartyListViewItem__SetEquip(v40, i, 0LL, 0LL);
          }
          LODWORD(v38) = waveDeckItemList->max_length;
          if ( (__int64)++v39 >= (int)v38 )
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
      v24 = Instance;
    }
    else
    {
      v24 = 0LL;
    }
    v48 = this->fields.waveDeckItemList;
    if ( !v48 )
LABEL_106:
      sub_1C2E388(Instance, v16);
    v49 = selectItem->fields._OrganizedWave_k__BackingField - 1;
    if ( v49 >= v48->max_length )
LABEL_111:
      sub_1C2E390(Instance, v16);
    Instance = (int64_t)v48->m_Items[v49];
    if ( !Instance )
      goto LABEL_106;
    PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v24, 0LL);
  }
LABEL_60:
  v50 = this->fields.waveDeckItemList;
  if ( !v50 )
    goto LABEL_106;
  v51 = this->fields.partyNumber - 1;
  if ( v51 >= v50->max_length )
    goto LABEL_111;
  v52 = this->fields.selectItem;
  if ( !v52 )
    goto LABEL_106;
  userSvtEntity = v52->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_106;
  memberIndex = this->fields.memberIndex;
  v55 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v56 = v50->m_Items[v51];
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v83, 0LL);
  if ( !v56 )
    goto LABEL_106;
  PartyListViewItem__SetEquip(v56, memberIndex, Instance, 0LL);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v85 = v82;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v57 )
      break;
    v60 = v85.fields._current;
    if ( !v85.fields._current
      || (v61 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v85.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v61)
      || (EquipGraphListViewItem_c *)v85.fields._current->klass->_2.typeHierarchy[v61 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C2E388(v57, v58);
    }
    if ( BYTE1(v85.fields._current[9].klass) )
      LOWORD(v85.fields._current[9].klass) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v60,
      this->fields.waveDeckItemList,
      v56,
      this->fields.memberIndex,
      v59);
    v62 = (UnityEngine_Object_o *)v60[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v63 = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
    if ( v63 )
    {
      v66 = v60[6].monitor;
      if ( !v66
        || (v67 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v66 + 304LL) < (unsigned int)v67)
        || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v66 + 200LL) + 8 * v67 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1C2E388(v63, v64);
      }
      EquipGraphListViewObject__Init_39813888((EquipGraphListViewObject_o *)v60[6].monitor, 4, v65);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.baseCost = v56->fields.cost;
LABEL_83:
  v68 = this->fields.selectItem;
  if ( !v68 )
    goto LABEL_106;
  v68->fields.isBase = 1;
  if ( (v68->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v69) = 0;
  }
  else
  {
    v69 = v68->fields.servantEntity;
    if ( v69 )
      LODWORD(v69) = v69->fields.cost;
  }
  this->fields.baseCost -= (int)v69;
  v70 = v68->fields.userSvtEntity;
  if ( !v70 )
    goto LABEL_106;
  v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v71;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v81, 0LL);
  if ( !servantItemInfo )
    goto LABEL_106;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v73);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_106;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v74);
  v75 = this->fields.selectItem;
  if ( !v75 )
    goto LABEL_106;
  viewObject = (UnityEngine_Object_o *)v75->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_102;
  v78 = this->fields.selectItem;
  if ( !v78 )
    goto LABEL_106;
  Instance = (int64_t)v78->fields.viewObject;
  if ( !Instance )
    goto LABEL_106;
  v79 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v79
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v79 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_106;
  }
  EquipGraphListViewObject__Init_39813888((EquipGraphListViewObject_o *)Instance, 4, v77);
LABEL_102:
  EquipGraphListViewManager__RefrashListDisp(this, v16);
LABEL_103:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc, 0LL, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4BFCF13 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isDecide);
    sub_1C2E12C(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BFCF13 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1C2E388(v10, v11);
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

  if ( (byte_4BFCF17 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isDecide);
    sub_1C2E12C(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BFCF17 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1C2E388(v9, v10);
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

  if ( (byte_4BFCF1A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4BFCF1A = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C2E388(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C2E388(v13, v14);
    }
    klass = v21.fields._current[7].klass;
    if ( !klass )
      sub_1C2E388(v13, v14);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v22.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v22, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4BFCF1B & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, index);
    this = (EquipGraphListViewManager_o *)sub_1C2E12C(
                                            &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                            v8);
    byte_4BFCF1B = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C2E388(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v9,
                                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4BFCF06 & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4BFCF06 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2E388(0LL, method);
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

  if ( (byte_4BFCF0E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4BFCF0E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C2E388(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v13.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C2E388(v8, v9);
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
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4BFCF0F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4BFCF0F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C2E388(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C2E388(v8, v9);
    }
    if ( BYTE1(v13.fields._current[9].klass) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4BFCF08 & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4BFCF08 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C2E378(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_365308C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C2E378(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_365308C *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 201) )
      {
        if ( *(_BYTE *)(itemList + 173) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v58, 0LL);
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
              *(const MethodInfo_36538E0 **)(*(_QWORD *)(v38 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v57, 0LL);
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
    sub_1C2E388(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *choiceList = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unchoiceList;
    v48 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3655398 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v41;
    sub_1C2E0D0((PartyOrganizationUtility_o *)choiceList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3655398 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v48;
    v55 = unchoiceList;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
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

  if ( (byte_4BFCF07 & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4BFCF07 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C2E378(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_365308C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C2E378(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_365308C *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 200) )
      {
        if ( *(_BYTE *)(itemList + 172) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v58, 0LL);
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
              *(const MethodInfo_36538E0 **)(*(_QWORD *)(v38 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v57, 0LL);
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
    sub_1C2E388(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *lockList = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unlockList;
    v48 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3655398 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v41;
    sub_1C2E0D0((PartyOrganizationUtility_o *)lockList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3655398 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v48;
    v55 = unlockList;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4BFCF00 & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4BFCF00 = 1;
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
    sub_1C2E388(sortStatus, v1);
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
  int64_t *v17; // x21
  DataManager_c *v18; // t1
  Il2CppType byval_arg; // q0
  int64_t v20; // x0
  DataManager_o *v21; // x22
  int32_t v22; // w23
  DataManager_o *v23; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v26; // q0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  const MethodInfo *v34; // x1
  int32_t v35; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v37; // x21
  __int64 v38; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v42; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+60h] [xbp-80h]

  if ( (byte_4BFCF05 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BFCF05 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v42 = Instance;
    while ( 1 )
    {
      v15 = &Instance->klass + (int)v14;
      v18 = v15[4];
      v17 = (int64_t *)(v15 + 4);
      v16 = v18;
      if ( !v18 )
        break;
      byval_arg = v16->_1.byval_arg;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
      *(Il2CppType *)&v45.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v44, 0LL);
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
                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v45.fields.fakeValue = v26;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v43 = v45;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v43, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( size == ++v22 )
            goto LABEL_27;
        }
        if ( v14 >= LODWORD(v42->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v33 = *v17;
        v23->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)*v17;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->fields.masterLoadThreads, v33, v27, v28, v29, v30, v31, v32);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v23, v11);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v23, v34);
        }
      }
LABEL_27:
      Instance = v42;
      if ( ++v14 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v14 >= LODWORD(v42->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1C2E390(Instance, v11);
    }
LABEL_44:
    sub_1C2E388(Instance, v11);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v35 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v35,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v37 = (ListViewItem_o *)Item;
        v38 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v38
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v38 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v37->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v37, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v35 )
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

  if ( (byte_4BFCF15 & 1) == 0 )
  {
    sub_1C2E12C(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__, method);
    byte_4BFCF15 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2E388(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = EquipGraphListViewManager__GetSelect(this, v10);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v11; // x1
  unsigned int Select; // w0

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_1C2E388(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      Select = EquipGraphListViewManager__GetSelect(this, v11);
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

  if ( (byte_4BFCF12 & 1) == 0 )
  {
    sub_1C2E12C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_1C2E12C(&Method_EquipGraphListViewManager_OnClickFilterKind__, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BFCF12 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2E110(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2E378(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C2E388(v12, v13);
    CommonUI__OpenServantFilterSelectMenu_31183916(v10, 5, sort, (ListViewManager_o *)this, v11, -1, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2E388(v10, v11);
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

  if ( (byte_4BFCF18 & 1) == 0 )
  {
    sub_1C2E12C(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__, method);
    byte_4BFCF18 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2E388(v5, v6);
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

  if ( (byte_4BFCF16 & 1) == 0 )
  {
    sub_1C2E12C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_1C2E12C(&Method_EquipGraphListViewManager_OnClickSortKind__, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BFCF16 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2E110(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2E378(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1C2E388(v12, v13);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
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
    sub_1C2E388(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BFCF0D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFCF0D = 1;
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
          sub_1C2E388(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BFCF09 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_12630/*"SUM_OVER_INFO"*/, v7);
    sub_1C2E12C(&StringLiteral_12629/*"SUM_INFO"*/, v8);
    byte_4BFCF09 = 1;
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
                                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
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
    sub_1C2E388(ObjectList, v10);
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
        ? (System_String_o **)&StringLiteral_12629/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12630/*"SUM_OVER_INFO"*/;
    v20 = *v19;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get(v20, 0LL);
    v31 = v17;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
    maxCost = this->fields.maxCost;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v26, v27, v28);
    ObjectList = (System_Collections_Generic_List_object__o *)System_String__Format_63249956(v21, v25, v29, 0LL);
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

  if ( (byte_4BFCF0B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_1C2E12C(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v13);
    byte_4BFCF0B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2E388(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C2E388(v19, v20);
      EquipGraphListViewObject__Init_39815040((EquipGraphListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_39814012(
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

  if ( (byte_4BFCF0C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_1C2E12C(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v11);
    byte_4BFCF0C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2E388(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C2E388(v17, v18);
      EquipGraphListViewObject__Init_39815124((EquipGraphListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void __fastcall EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  struct EquipGraphListViewItem_o **p_selectItem; // x20
  PartyOrganizationUtility_o *p_selectItemCallbackFunc; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 servantItemInfo; // x0
  const MethodInfo *v48; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  EquipGraphListViewObject_o *v52; // x24
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  const MethodInfo *v55; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v57; // w9
  struct EquipGraphListViewItem_o *v58; // x8
  int32_t wearerMember; // w10
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v61; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w21
  System_Reflection_MethodBase_o *v63; // x0
  const MethodInfo *v64; // x2
  struct EquipGraphServantItem_o *v65; // x8
  struct PartyListViewItem_array *v66; // x8
  int v67; // w10
  Il2CppClass **v68; // x8
  Il2CppClass *v69; // x21
  int events; // w22
  struct EquipGraphServantItem_o *v71; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v74; // x21
  System_String_o *v75; // x22
  NotificationDialog_ClickDelegate_o *v76; // x23
  int64_t v77; // x1
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  _QWORD *v86; // x0
  _BOOL4 v87; // w21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  PartyOrganizationUtility_c *klass; // x19
  _QWORD *v95; // x0
  _BOOL4 v96; // w23
  System_Reflection_MethodBase_o *v97; // x0
  System_String_o *v98; // x21
  __int64 v99; // x22
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x23
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x23
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x23
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x23
  struct EquipGraphServantItem_o *v128; // x8
  int32_t v129; // w23
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x23
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x20
  System_String_o *v144; // x20
  Il2CppObject *v145; // x21
  System_String_o *v146; // x22
  CommonConfirmDialog_ClickDelegate_o *v147; // x23
  struct EquipGraphServantItem_o *v148; // x8
  struct PartyListViewItem_array *v149; // x9
  __int64 v150; // x8
  unsigned __int64 v151; // x29
  int v152; // w27
  PartyListViewItem_o *v153; // x21
  int32_t v154; // w22
  struct ServantEntity_o *v155; // x8
  PartyOrganizationListViewItem_o *v156; // x23
  __int64 v157; // x24
  __int64 v158; // x25
  int v159; // w24
  ServantEntity_o *v160; // x21
  System_String_o *v161; // x21
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  __int64 v165; // x22
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x23
  __int64 v173; // x2
  __int64 v174; // x3
  __int64 v175; // x4
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x23
  int32_t weareRarity; // w23
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  int64_t v190; // x23
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  int64_t v197; // x23
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  int64_t wearerServantName; // x20
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x4
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  int64_t v214; // x20
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x4
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  int64_t v224; // x20
  struct EquipGraphServantItem_o *v225; // x8
  int32_t Rarity; // w0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  int64_t v233; // x20
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  int64_t v240; // x20
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  int64_t v247; // x20
  System_String_o *v248; // x20
  Il2CppObject *v249; // x21
  System_String_o *v250; // x22
  System_String_o *v251; // x23
  System_String_o *v252; // x24
  CommonConfirmDialog_ClickDelegate_o *v253; // x25
  struct PartyListViewItem_array *v254; // x8
  int v255; // w9
  struct EquipGraphListViewItem_o *v256; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v259; // q1
  PartyListViewItem_o *v260; // x24
  _BOOL8 v261; // x0
  __int64 v262; // x1
  Il2CppObject *current; // x28
  __int64 v264; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v267; // x23
  _BOOL8 v268; // x0
  __int64 v269; // x1
  const MethodInfo *v270; // x2
  void *v271; // x8
  __int64 v272; // x11
  struct EquipGraphListViewItem_o *v273; // x8
  struct UserServantEntity_o *v274; // x9
  __int128 v275; // q1
  struct EquipGraphServantItem_o *v276; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v278; // x20
  __int64 v279; // x22
  __int64 v280; // x2
  __int64 v281; // x3
  __int64 v282; // x4
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  int64_t v289; // x24
  __int64 v290; // x2
  __int64 v291; // x3
  __int64 v292; // x4
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  int64_t v299; // x24
  int32_t v300; // w24
  int64_t v301; // x2
  int32_t v302; // w3
  System_String_o *v303; // x4
  BattleSetupInfo_o *v304; // x5
  FollowerInfo_o *v305; // x6
  PartyListViewItem_o *v306; // x7
  int64_t v307; // x24
  int64_t v308; // x2
  int32_t v309; // w3
  System_String_o *v310; // x4
  BattleSetupInfo_o *v311; // x5
  FollowerInfo_o *v312; // x6
  PartyListViewItem_o *v313; // x7
  int64_t v314; // x24
  __int64 v315; // x23
  __int64 v316; // x24
  int32_t v317; // w0
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  int64_t v324; // x21
  System_String_o *v325; // x20
  Il2CppObject *v326; // x21
  System_String_o *v327; // x22
  System_String_o *v328; // x23
  System_String_o *v329; // x24
  CommonConfirmDialog_ClickDelegate_o *v330; // x25
  __int64 v331; // x0
  struct PartyListViewItem_array *v332; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v333; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v334; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v335; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v336; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v339; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v340; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v342; // 0:x0.16

  if ( (byte_4BFCF10 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, item);
    sub_1C2E12C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1C2E12C(&NotificationDialog_ClickDelegate_TypeInfo, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15);
    sub_1C2E12C(&EquipGraphListViewItem_TypeInfo, v16);
    sub_1C2E12C(&Method_EquipGraphListViewManager_EndSelectConfirm__, v17);
    sub_1C2E12C(&Method_EquipGraphListViewManager_SelectEquip__, v18);
    sub_1C2E12C(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v19);
    sub_1C2E12C(&EquipGraphListViewObject_TypeInfo, v20);
    sub_1C2E12C(&int_TypeInfo, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v23);
    sub_1C2E12C(&object___TypeInfo, v24);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v25);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_1C2E12C(&Rarity_TypeInfo, v28);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_1C2E12C(&StringLiteral_15789/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v30);
    sub_1C2E12C(&StringLiteral_15790/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v31);
    sub_1C2E12C(&StringLiteral_15786/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v32);
    sub_1C2E12C(&StringLiteral_5627/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v33);
    sub_1C2E12C(&StringLiteral_5626/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v34);
    sub_1C2E12C(&StringLiteral_15782/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v35);
    sub_1C2E12C(&StringLiteral_3802/*"COMMON_CONFIRM_NO"*/, v36);
    sub_1C2E12C(&StringLiteral_3807/*"COMMON_CONFIRM_YES"*/, v37);
    sub_1C2E12C(&StringLiteral_15781/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v38);
    byte_4BFCF10 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v339, 0, sizeof(v339));
  this->fields.selectItem = item;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.selectItem,
    (int64_t)item,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  p_selectItemCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc,
    (int64_t)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_227;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewObject_TypeInfo )
      v52 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v52 = 0LL;
  }
  else
  {
    v52 = 0LL;
  }
  if ( selectItem->fields.isBase )
  {
    v53 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_SelectEquip__);
    v54 = (System_Reflection_MethodBase_o *)sub_1C2E110(v53, v53[4]);
    OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0LL);
    if ( !this->fields.isWaveBattle )
    {
LABEL_18:
      v58 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      wearerMember = v58->fields.wearerMember;
      v58->fields.isBase = 0;
      if ( (wearerMember & 0x80000000) == 0 && wearerMember != this->fields.memberIndex
        || v58->fields._OrganizedWave_k__BackingField > 0
        || v58->fields._IsUnique_k__BackingField )
      {
        if ( (wearerMember & 0x80000000) != 0 )
        {
          LODWORD(servantEntity) = 0;
        }
        else
        {
          servantEntity = v58->fields.servantEntity;
          if ( servantEntity )
            LODWORD(servantEntity) = servantEntity->fields.cost;
        }
        this->fields.baseCost += (int)servantEntity;
        if ( !v52 )
          goto LABEL_227;
        EquipGraphListViewObject__Init_39813888(v52, 4, v55);
      }
      servantItemInfo = (__int64)this->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_227;
      v77 = 0LL;
LABEL_51:
      EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v77, v55);
      servantItemInfo = (__int64)this->fields.servantItemDraw;
      if ( servantItemInfo )
      {
        EquipGraphServantItemDraw__SetItem(
          (EquipGraphServantItemDraw_o *)servantItemInfo,
          this->fields.servantItemInfo,
          v78);
        EquipGraphListViewManager__RefrashListDisp(this, v79);
        if ( callback )
        {
          p_selectItemCallbackFunc->klass = 0LL;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc,
            0LL,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
            callback->fields.original_method_info,
            *(_QWORD *)&callback->fields.extra_arg);
        }
        return;
      }
LABEL_227:
      sub_1C2E388(servantItemInfo, v48);
    }
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_227;
    v57 = this->fields.partyNumber - 1;
    if ( v57 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v57];
      if ( !servantItemInfo )
        goto LABEL_227;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
      goto LABEL_18;
    }
LABEL_229:
    sub_1C2E390(servantItemInfo, v48);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_227;
    v61 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_SelectEquip__);
    v63 = (System_Reflection_MethodBase_o *)sub_1C2E110(v61, v61[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0LL);
      v65 = this->fields.servantItemInfo;
      if ( !v65 )
        goto LABEL_227;
      if ( v65->fields.equipUserSvtEntity )
      {
        v66 = this->fields.waveDeckItemList;
        if ( !v66 )
          goto LABEL_227;
        v67 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v67 >= v66->max_length )
          goto LABEL_229;
        if ( !*p_selectItem )
          goto LABEL_227;
        v68 = &v66->obj.klass + v67;
        v69 = v68[4];
        if ( !v69 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                     (PartyListViewItem_o *)v68[4],
                                     (*p_selectItem)->fields.wearerMember,
                                     0LL);
        if ( !servantItemInfo )
          goto LABEL_227;
        events = (int)v69->_1.events;
        servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                            (PartyOrganizationListViewItem_o *)servantItemInfo,
                            0LL);
        v71 = this->fields.servantItemInfo;
        if ( !v71 )
          goto LABEL_227;
        equipServantEntity = v71->fields.equipServantEntity;
        if ( equipServantEntity )
          LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
        if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v69->_1.interopData) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_15782/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_15781/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v76 = (NotificationDialog_ClickDelegate_o *)sub_1C2E378(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v76,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_31179448(
              (CommonUI_o *)Instance,
              v74,
              v75,
              v76,
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
        v161 = LocalizationManager__Get((System_String_o *)StringLiteral_15789/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_1C2E1D4(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v165 = servantItemInfo;
        LODWORD(v335.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v335, v162, v163, v164);
        if ( !v165 )
          goto LABEL_227;
        v172 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v165 + 24) )
            goto LABEL_229;
          *(_QWORD *)(v165 + 32) = v172;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 32), v172, v166, v167, v168, v169, v170, v171);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v173, v174, v175);
          v182 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v165 + 24) <= 1u )
              goto LABEL_229;
            *(_QWORD *)(v165 + 40) = v182;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 40), v182, v176, v177, v178, v179, v180, v181);
            if ( !*p_selectItem )
              goto LABEL_227;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v190 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v165 + 24) <= 2u )
                goto LABEL_229;
              *(_QWORD *)(v165 + 48) = v190;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 48), v190, v184, v185, v186, v187, v188, v189);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v48);
              v197 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v165 + 24) <= 3u )
                  goto LABEL_229;
                *(_QWORD *)(v165 + 56) = v197;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 56), v197, v191, v192, v193, v194, v195, v196);
                if ( !*p_selectItem )
                  goto LABEL_227;
                wearerServantName = (int64_t)(*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_1C2E268(wearerServantName, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v165 + 24) <= 4u )
                    goto LABEL_229;
                  *(_QWORD *)(v165 + 64) = wearerServantName;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)(v165 + 64),
                    wearerServantName,
                    v198,
                    v199,
                    v200,
                    v201,
                    v202,
                    v203);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v205, v206, v207);
                  v214 = servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v165 + 24) <= 5u )
                      goto LABEL_229;
                    *(_QWORD *)(v165 + 72) = v214;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 72), v214, v208, v209, v210, v211, v212, v213);
                    v336 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v336, v215, v216, v217);
                    v224 = servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v165 + 24) <= 6u )
                        goto LABEL_229;
                      *(_QWORD *)(v165 + 80) = v224;
                      sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 80), v224, v218, v219, v220, v221, v222, v223);
                      v225 = this->fields.servantItemInfo;
                      if ( !v225 )
                        goto LABEL_227;
                      servantItemInfo = (__int64)v225->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_227;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v233 = servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v165 + 24) <= 7u )
                          goto LABEL_229;
                        *(_QWORD *)(v165 + 88) = v233;
                        sub_1C2E0D0((PartyOrganizationUtility_o *)(v165 + 88), v233, v227, v228, v229, v230, v231, v232);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_227;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v48);
                        v240 = servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v165 + 24) <= 8u )
                            goto LABEL_229;
                          *(_QWORD *)(v165 + 96) = v240;
                          sub_1C2E0D0(
                            (PartyOrganizationUtility_o *)(v165 + 96),
                            v240,
                            v234,
                            v235,
                            v236,
                            v237,
                            v238,
                            v239);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_227;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v48);
                          v247 = servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v165 + 24) > 9u )
                            {
                              *(_QWORD *)(v165 + 104) = v247;
                              sub_1C2E0D0(
                                (PartyOrganizationUtility_o *)(v165 + 104),
                                v247,
                                v241,
                                v242,
                                v243,
                                v244,
                                v245,
                                v246);
                              v248 = System_String__Format_63250092(v161, (System_Object_array *)v165, 0LL);
                              v249 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v250 = LocalizationManager__Get((System_String_o *)StringLiteral_15790/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                              v251 = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"COMMON_CONFIRM_YES"*/, 0LL);
                              v252 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COMMON_CONFIRM_NO"*/, 0LL);
                              v253 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v253,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0LL);
                              if ( v249 )
                              {
                                CommonUI__OpenConfirmDialog_31177292(
                                  (CommonUI_o *)v249,
                                  v250,
                                  v248,
                                  v251,
                                  v252,
                                  v253,
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
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v64);
      return;
    }
    goto LABEL_59;
  }
  if ( !selectItem->fields._IsUnique_k__BackingField )
  {
    v95 = Method_EquipGraphListViewManager_SelectEquip__;
    v96 = selectItem->fields.wearerMember >= 0 && selectItem->fields.wearerMember != this->fields.memberIndex;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v95 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_SelectEquip__);
    v97 = (System_Reflection_MethodBase_o *)sub_1C2E110(v95, v95[4]);
    OverwriteAssetSoundName__PlaySystemSe(v97, 0, 0, 0LL);
    if ( !v96 )
    {
      if ( this->fields.isWaveBattle )
      {
        v254 = this->fields.waveDeckItemList;
        if ( !v254 )
          goto LABEL_227;
        v255 = this->fields.partyNumber - 1;
        if ( v255 >= v254->max_length )
          goto LABEL_229;
        v256 = this->fields.selectItem;
        if ( !v256 )
          goto LABEL_227;
        userSvtEntity = v256->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_227;
        memberIndex = this->fields.memberIndex;
        v259 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v260 = v254->m_Items[v255];
        *(_OWORD *)&v335.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v335.fields.fakeValue = v259;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v334 = v335;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v334, 0LL);
        if ( !v260 )
          goto LABEL_227;
        PartyListViewItem__SetEquip(v260, memberIndex, servantItemInfo, 0LL);
      }
      servantItemInfo = (__int64)this->fields.itemList;
      if ( !servantItemInfo )
        goto LABEL_227;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v335,
        (System_Collections_Generic_List_object__o *)servantItemInfo,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v339 = *(System_Collections_Generic_List_Enumerator_object__o *)&v335.fields.currentCryptoKey;
      while ( 1 )
      {
        v261 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v339,
                 (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v261 )
          break;
        current = v339.fields._current;
        if ( !v339.fields._current
          || (v264 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v339.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v264)
          || (EquipGraphListViewItem_c *)v339.fields._current->klass->_2.typeHierarchy[v264 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_1C2E388(v261, v262);
        }
        if ( BYTE1(v339.fields._current[9].klass) )
        {
          if ( (klass_high = HIDWORD(v339.fields._current[9].klass),
                BYTE1(v339.fields._current[9].klass) = 0,
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
            v267 = (UnityEngine_Object_o *)current[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v268 = UnityEngine_Object__op_Inequality(v267, 0LL, 0LL);
            if ( v268 )
            {
              v271 = current[6].monitor;
              if ( !v271
                || (v272 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v271 + 304LL) < (unsigned int)v272)
                || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v271 + 200LL) + 8 * v272 - 8) != EquipGraphListViewObject_TypeInfo )
              {
                sub_1C2E388(v268, v269);
              }
              EquipGraphListViewObject__Init_39813888((EquipGraphListViewObject_o *)current[6].monitor, 4, v270);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v339,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v273 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      v274 = v273->fields.userSvtEntity;
      v273->fields.isBase = 1;
      if ( !v274 )
        goto LABEL_227;
      v275 = *(_OWORD *)&v274->fields.id.fields.fakeValue;
      v276 = this->fields.servantItemInfo;
      *(_OWORD *)&v335.fields.currentCryptoKey = *(_OWORD *)&v274->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v335.fields.fakeValue = v275;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v333 = v335;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v333, 0LL);
      if ( !v276 )
        goto LABEL_227;
      v77 = servantItemInfo;
      servantItemInfo = (__int64)v276;
      goto LABEL_51;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_1C2E1D4(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_227;
    v99 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v48);
    if ( !v99 )
      goto LABEL_227;
    v106 = servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v99 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v99 + 24) )
        goto LABEL_229;
      *(_QWORD *)(v99 + 32) = v106;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v99 + 32), v106, v100, v101, v102, v103, v104, v105);
      if ( !*p_selectItem )
        goto LABEL_227;
      v113 = (int64_t)(*p_selectItem)->fields.wearerServantName;
      if ( !v113 || (servantItemInfo = sub_1C2E268(v113, *(_QWORD *)(*(_QWORD *)v99 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v99 + 24) <= 1u )
          goto LABEL_229;
        *(_QWORD *)(v99 + 40) = v113;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v99 + 40), v113, v107, v108, v109, v110, v111, v112);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_227;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v48);
        v120 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v99 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v99 + 24) <= 2u )
            goto LABEL_229;
          *(_QWORD *)(v99 + 48) = v120;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v99 + 48), v120, v114, v115, v116, v117, v118, v119);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_227;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v48);
          v127 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v99 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v99 + 24) <= 3u )
              goto LABEL_229;
            *(_QWORD *)(v99 + 56) = v127;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v99 + 56), v127, v121, v122, v123, v124, v125, v126);
            v128 = this->fields.servantItemInfo;
            if ( !v128 )
              goto LABEL_227;
            servantItemInfo = (__int64)v128->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_227;
            v129 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v129, 0LL);
            v136 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v99 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v99 + 24) <= 4u )
                goto LABEL_229;
              *(_QWORD *)(v99 + 64) = v136;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v99 + 64), v136, v130, v131, v132, v133, v134, v135);
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v143 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v99 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v99 + 24) > 5u )
                {
                  *(_QWORD *)(v99 + 72) = v143;
                  sub_1C2E0D0((PartyOrganizationUtility_o *)(v99 + 72), v143, v137, v138, v139, v140, v141, v142);
                  v144 = System_String__Format_63250092(v98, (System_Object_array *)v99, 0LL);
                  v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v147 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v147,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v145 )
                  {
                    CommonUI__OpenConfirmDialog(
                      (CommonUI_o *)v145,
                      v146,
                      v144,
                      v147,
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
  v86 = Method_EquipGraphListViewManager_SelectEquip__;
  v87 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v86 = (_QWORD *)sub_1C2E144(Method_EquipGraphListViewManager_SelectEquip__);
  v63 = (System_Reflection_MethodBase_o *)sub_1C2E110(v86, v86[4]);
  if ( v87 )
  {
LABEL_59:
    OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0, 0LL);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_1C2E0D0(p_selectItemCallbackFunc, 0LL, v88, v89, v90, v91, v92, v93);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0LL);
  v148 = this->fields.servantItemInfo;
  if ( !v148 )
    goto LABEL_227;
  if ( !v148->fields.equipUserSvtEntity )
    goto LABEL_119;
  v149 = this->fields.waveDeckItemList;
  if ( !v149 )
    goto LABEL_227;
  v150 = *(_QWORD *)&v149->max_length;
  if ( (int)v150 >= 1 )
  {
    v151 = 0LL;
    v152 = 1;
    v332 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v151 >= (unsigned int)v150 )
        goto LABEL_229;
      v153 = v149->m_Items[v151];
      v154 = 0;
      do
      {
        servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v154 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
          goto LABEL_117;
        if ( !v153 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(v153, v154, 0LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v155 = (*p_selectItem)->fields.servantEntity;
        if ( !v155 )
          goto LABEL_227;
        v156 = (PartyOrganizationListViewItem_o *)servantItemInfo;
        v158 = *(_QWORD *)&v155->fields.id.fields.currentCryptoKey;
        v157 = *(_QWORD *)&v155->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v340.fields.currentCryptoKey = v158;
        *(_QWORD *)&v340.fields.fakeValue = v157;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v340, 0LL);
        if ( !v156 )
          goto LABEL_227;
        v159 = servantItemInfo;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v156, 0LL);
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(EquipSvtId, 0LL);
        ++v154;
      }
      while ( v159 != (_DWORD)servantItemInfo );
      v160 = v156->fields.servantEntity;
      if ( v160 )
        break;
LABEL_117:
      v149 = v332;
      ++v151;
      ++v152;
      LODWORD(v150) = v332->max_length;
      if ( (__int64)v151 >= (int)v150 )
        return;
    }
    userServantEntity = v156->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v278 = LocalizationManager__Get((System_String_o *)StringLiteral_15786/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v279 = sub_1C2E1D4(object___TypeInfo, 5LL);
      LODWORD(v335.fields.currentCryptoKey) = v152;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v335, v280, v281, v282);
      if ( !v279 )
        goto LABEL_227;
      v289 = servantItemInfo;
      if ( !servantItemInfo
        || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v279 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v279 + 24) )
          goto LABEL_229;
        *(_QWORD *)(v279 + 32) = v289;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v279 + 32), v289, v283, v284, v285, v286, v287, v288);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v290, v291, v292);
        v299 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v279 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v279 + 24) <= 1u )
            goto LABEL_229;
          *(_QWORD *)(v279 + 40) = v299;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v279 + 40), v299, v293, v294, v295, v296, v297, v298);
          v300 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v300, 0LL);
          v307 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v279 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v279 + 24) <= 2u )
              goto LABEL_229;
            *(_QWORD *)(v279 + 48) = v307;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v279 + 48), v307, v301, v302, v303, v304, v305, v306);
            servantItemInfo = (__int64)ServantEntity__getClassName(v160, 0LL);
            v314 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v279 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v279 + 24) <= 3u )
                goto LABEL_229;
              *(_QWORD *)(v279 + 56) = v314;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v279 + 56), v314, v308, v309, v310, v311, v312, v313);
              v316 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v315 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v342.fields.currentCryptoKey = v316;
              *(_QWORD *)&v342.fields.fakeValue = v315;
              v317 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v342, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v160, v317, -1, 0, 0LL);
              v324 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1C2E268(servantItemInfo, *(_QWORD *)(*(_QWORD *)v279 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v279 + 24) > 4u )
                {
                  *(_QWORD *)(v279 + 64) = v324;
                  sub_1C2E0D0((PartyOrganizationUtility_o *)(v279 + 64), v324, v318, v319, v320, v321, v322, v323);
                  v325 = System_String__Format_63250092(v278, (System_Object_array *)v279, 0LL);
                  v326 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v327 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v328 = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v329 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v330 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v330,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v326 )
                  {
                    CommonUI__OpenConfirmDialog_31177292(
                      (CommonUI_o *)v326,
                      v327,
                      v325,
                      v328,
                      v329,
                      v330,
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
      v331 = sub_1C2E3AC(servantItemInfo);
      sub_1C2E254(v331, 0LL);
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

  if ( (byte_4BFCF14 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_17819/*"btn_filter_on"*/, method);
    sub_1C2E12C(&StringLiteral_17818/*"btn_filter"*/, v3);
    byte_4BFCF14 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C2E388(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17818/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17819/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_39781708(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_39781708(
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
    sub_1C2E388(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_39814012(this, mode + 1, v8);
}


void __fastcall EquipGraphListViewManager__SetMode_39813960(
        EquipGraphListViewManager_o *this,
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_39781708(this, mode, v10);
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
  if ( (byte_4BFCF0A & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1C2E12C(&EquipGraphListViewObject_TypeInfo, obj);
    byte_4BFCF0A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_39813888((EquipGraphListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4BFCF19 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_17849/*"btn_sort_up"*/, v3);
    sub_1C2E12C(&StringLiteral_17940/*"btn_txt_up"*/, v4);
    sub_1C2E12C(&StringLiteral_17893/*"btn_txt_new"*/, v5);
    sub_1C2E12C(&StringLiteral_17883/*"btn_txt_down"*/, v6);
    sub_1C2E12C(&StringLiteral_17900/*"btn_txt_old"*/, v7);
    sub_1C2E12C(&StringLiteral_17846/*"btn_sort_down"*/, v8);
    byte_4BFCF19 = 1;
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
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17900/*"btn_txt_old"*/ : &StringLiteral_17893/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17846/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17849/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17940/*"btn_txt_up"*/ : &StringLiteral_17883/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17849/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17846/*"btn_sort_down"*/;
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
    sub_1C2E388(sort, v10);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4BFCF1D & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BFCF1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4BFCEF9 & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BFCEF9 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFCEFB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BFCEFB = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFCEFD & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BFCEFD = 1;
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
    v8 = sub_1C6961C(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFCF02 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BFCF02 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C2E388(0LL, v18);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1C2E388(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_42097292((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C2E388(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C2E388(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C2E388(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C2E388(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BFCF01 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BFCF01 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C2E388(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2E388(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BFCEFA & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BFCEFA = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFCEFC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BFCEFC = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFCEFE & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BFCEFE = 1;
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
    v8 = sub_1C6961C(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
  EquipGraphListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  sub_1C2E0D0(
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
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A6FABC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6FA64;
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
  if ( (byte_4BFCF1E & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C2E12C(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4BFCF1E = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EquipGraphListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v14, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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