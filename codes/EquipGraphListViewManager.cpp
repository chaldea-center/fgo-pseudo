void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *v10; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ListViewSort_o *v20; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B159D8 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6188/*"EquipGraph"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_15748/*"WarBoardEquipGraph"*/, v8, v9);
    byte_4B159D8 = 1;
  }
  v10 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v10, (System_String_o *)StringLiteral_6188/*"EquipGraph"*/, 3, 0, 0LL);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v20 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v17, v18, v19);
  ListViewSort___ctor_41480716(v20, (System_String_o *)StringLiteral_15748/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->warBoardSortStatus = v20;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->warBoardSortStatus,
    (int64_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  PartyOrganizationUtility_o *p_seed; // x0
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
  p_seed = (PartyOrganizationUtility_o *)&this->fields.seed;
  p_seed[2].fields._SelectedNormalFollowerDeckId_k__BackingField = v11;
  sub_1BCA784(p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  EquipGraphListViewManager__ModifyList(this, 1, v14);
  EquipGraphListViewManager__SetMode_39175340(this, 2, v15);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  EquipGraphListViewManager_c *v44; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v46; // x1
  struct ListViewSort_o **p_sort; // x23
  const MethodInfo *v48; // x1
  __int64 sort; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct ListViewSort_o *v56; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct ListViewSort_o *v67; // x20
  bool v68; // w8
  __int64 v69; // x2
  __int64 v70; // x3
  PartyOrganizationListViewItem_o *v71; // x24
  EquipGraphServantItem_o *v72; // x25
  const MethodInfo *v73; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x24
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v85; // x26
  UserServantEntity_array *ServantEquipList; // x0
  __int64 v87; // x1
  UnityEngine_Object_o *infoDataLabel; // x27
  UserServantEntity_array *v89; // x25
  UILabel_o *v90; // x27
  PartyListViewItem_array *v91; // x20
  System_String_o *v92; // x28
  Il2CppObject *v93; // x29
  Il2CppObject *v94; // x0
  __int64 v95; // x8
  unsigned __int64 v96; // x23
  UserServantEntity_o *v97; // x27
  __int64 v98; // x2
  __int64 v99; // x3
  int32_t memberIdx; // w22
  int64_t v101; // x28
  EquipGraphListViewItem_o *v102; // x26
  int64_t v103; // x4
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v116; // x8
  System_String_o *v117; // x21
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  const MethodInfo *v120; // [xsp+8h] [xbp-78h]
  PartyListViewItem_o *partyItema; // [xsp+10h] [xbp-70h]
  int v122; // [xsp+18h] [xbp-68h] BYREF
  int v123; // [xsp+1Ch] [xbp-64h] BYREF

  v11 = baseDeckItemList;
  if ( (byte_4B159BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList, partyItem);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&EquipGraphServantItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v35, v36);
    byte_4B159BF = 1;
  }
  this->fields.waveDeckItemList = v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.waveDeckItemList,
    (int64_t)v11,
    (int64_t)partyItem,
    member,
    (System_String_o *)setupInfo,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  v44 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v37);
    v44 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v44->static_fields->sortStatus;
  v46 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v46, v38, v39, v40, v41, v42, v43);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_64;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_64;
  v56 = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !v56 )
    goto LABEL_64;
  iconScaleKind = v56->fields.iconScaleKind;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v50, v51, v52, v53, v54, v55);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v67 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v67 )
      goto LABEL_64;
    v68 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v50, v51, v52, v53, v54, v55);
    v67 = this->fields.sort;
    if ( !v67 )
      goto LABEL_64;
    v68 = 0;
  }
  v67->fields.isBonusKind = v68;
  sort = (__int64)PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_64;
  v71 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v72 = (EquipGraphServantItem_o *)sub_1BCAA2C(EquipGraphServantItem_TypeInfo, v48, v69, v70);
    EquipGraphServantItem___ctor(v72, v71, v73);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v72;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantItemInfo, (int64_t)v72, v75, v76, v77, v78, v79, v80);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v81);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_64;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v82);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_64;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v85 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !v11 )
      goto LABEL_64;
    this->fields.maxWave = *(_QWORD *)&v11->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_64;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_64;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v89 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
    partyItema = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v90 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
      v91 = v11;
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      if ( !v89 )
        goto LABEL_64;
      v92 = (System_String_o *)sort;
      v123 = *(_QWORD *)&v89->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v123);
      if ( !v85 )
        goto LABEL_64;
      v93 = (Il2CppObject *)sort;
      v122 = *(_DWORD *)(v85 + 156);
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
      sort = (__int64)System_String__Format_62415592(v92, v93, v94, 0LL);
      if ( !v90 )
        goto LABEL_64;
      UILabel__set_text(v90, (System_String_o *)sort, 0LL);
      v11 = v91;
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
    if ( !v89 )
      goto LABEL_64;
    v95 = *(_QWORD *)&v89->max_length;
    if ( (int)v95 >= 1 )
    {
      v96 = 0LL;
      while ( 1 )
      {
        if ( v96 >= (unsigned int)v95 )
          sub_1BCAA44(sort, v48);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v97 = v89->m_Items[v96];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v48);
        if ( !*p_servantItemInfo )
          break;
        memberIdx = this->fields.memberIndex;
        v101 = sort;
        v102 = (EquipGraphListViewItem_o *)sub_1BCAA2C(EquipGraphListViewItem_TypeInfo, v48, v98, v99);
        EquipGraphListViewItem___ctor(v102, v96, v97, v101, v103, v11, partyItema, setupInfo, memberIdx, v120);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v110 = *(_QWORD *)(sort + 16);
        v111 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v110 )
          break;
        v112 = *(int *)(sort + 24);
        if ( (unsigned int)v112 >= *(_DWORD *)(v110 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v102,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
        }
        else
        {
          v113 = v110 + 8 * v112;
          *(_DWORD *)(sort + 24) = v112 + 1;
          *(_QWORD *)(v113 + 32) = v102;
          sub_1BCA784((PartyOrganizationUtility_o *)(v113 + 32), (int64_t)v102, v104, v105, v106, v107, v108, v109);
        }
        LODWORD(v95) = v89->max_length;
        if ( (__int64)++v96 >= (int)v95 )
          goto LABEL_55;
      }
LABEL_64:
      sub_1BCAA3C(sort, v48);
    }
LABEL_55:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_64;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v116 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v117 = *v116;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    sort = (__int64)LocalizationManager__Get(v117, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_64;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v118);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v119);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_39173196(
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  EquipGraphListViewManager_c *v36; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  const MethodInfo *v39; // x1
  __int64 sort; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct ListViewSort_o *v57; // x21
  bool v58; // w8
  __int64 v59; // x2
  __int64 v60; // x3
  PartyOrganizationListViewItem_o *v61; // x23
  EquipGraphServantItem_o *v62; // x24
  const MethodInfo *v63; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v75; // x25
  UserServantEntity_array *ServantEquipList; // x0
  __int64 v77; // x1
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v79; // x24
  UILabel_o *v80; // x26
  System_String_o *v81; // x27
  Il2CppObject *v82; // x28
  Il2CppObject *v83; // x0
  __int64 v84; // x8
  unsigned __int64 v85; // x22
  UserServantEntity_o *v86; // x26
  __int64 v87; // x2
  __int64 v88; // x3
  int64_t v89; // x27
  EquipGraphListViewItem_o *v90; // x25
  int64_t v91; // x4
  const MethodInfo *v92; // x7
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v105; // x8
  System_String_o *v106; // x21
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x1
  int v109; // [xsp+8h] [xbp-68h] BYREF
  int v110; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B159C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem, *(_QWORD *)&member);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v12, v13);
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&EquipGraphServantItem_TypeInfo, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v34, v35);
    byte_4B159C0 = 1;
  }
  v36 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, partyItem);
    v36 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v36->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v41, v42, v43, v44, v45, v46);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v57 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v57 )
      goto LABEL_63;
    v58 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v41, v42, v43, v44, v45, v46);
    v57 = this->fields.sort;
    if ( !v57 )
      goto LABEL_63;
    v58 = 0;
  }
  v57->fields.isBonusKind = v58;
  if ( !partyItem )
    goto LABEL_63;
  sort = (__int64)WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !sort )
    goto LABEL_63;
  v61 = (PartyOrganizationListViewItem_o *)sort;
  if ( !*(_BYTE *)(sort + 128) )
  {
    v62 = (EquipGraphServantItem_o *)sub_1BCAA2C(EquipGraphServantItem_TypeInfo, v39, v59, v60);
    EquipGraphServantItem___ctor(v62, v61, v63);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v62;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantItemInfo, (int64_t)v62, v65, v66, v67, v68, v69, v70);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, v71);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, v72);
    sort = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_63;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v75 = sort;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v79 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v80 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      if ( !v79 )
        goto LABEL_63;
      v81 = (System_String_o *)sort;
      v110 = *(_QWORD *)&v79->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v110);
      if ( !v75 )
        goto LABEL_63;
      v82 = (Il2CppObject *)sort;
      v109 = *(_DWORD *)(v75 + 156);
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
      sort = (__int64)System_String__Format_62415592(v81, v82, v83, 0LL);
      if ( !v80 )
        goto LABEL_63;
      UILabel__set_text(v80, (System_String_o *)sort, 0LL);
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
    if ( !v79 )
      goto LABEL_63;
    v84 = *(_QWORD *)&v79->max_length;
    if ( (int)v84 >= 1 )
    {
      v85 = 0LL;
      while ( 1 )
      {
        if ( v85 >= (unsigned int)v84 )
          sub_1BCAA44(sort, v39);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v86 = v79->m_Items[v85];
        sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, v39);
        if ( !*p_servantItemInfo )
          break;
        v89 = sort;
        v90 = (EquipGraphListViewItem_o *)sub_1BCAA2C(EquipGraphListViewItem_TypeInfo, v39, v87, v88);
        EquipGraphListViewItem___ctor_39192148(v90, v85, v86, v89, v91, partyItem, setupInfo, v92);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v99 = *(_QWORD *)(sort + 16);
        v100 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v99 )
          break;
        v101 = *(int *)(sort + 24);
        if ( (unsigned int)v101 >= *(_DWORD *)(v99 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v90,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
        }
        else
        {
          v102 = v99 + 8 * v101;
          *(_DWORD *)(sort + 24) = v101 + 1;
          *(_QWORD *)(v102 + 32) = v90;
          sub_1BCA784((PartyOrganizationUtility_o *)(v102 + 32), (int64_t)v90, v93, v94, v95, v96, v97, v98);
        }
        LODWORD(v84) = v79->max_length;
        if ( (__int64)++v85 >= (int)v84 )
          goto LABEL_54;
      }
LABEL_63:
      sub_1BCAA3C(sort, v39);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v105 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v106 = *v105;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    sort = (__int64)LocalizationManager__Get(v106, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v107);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v108);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EquipGraphListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4B159BB & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v1, v2);
    byte_4B159BB = 1;
  }
  v3 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1);
    v3 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_1BCAA3C(sortStatus, v1);
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
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t Instance; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v34; // x2
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v41; // x20
  _BOOL8 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  void *v45; // x8
  __int64 v46; // x11
  struct PartyListViewItem_array *waveDeckItemList; // x25
  __int64 v48; // x8
  unsigned __int64 v49; // x26
  PartyListViewItem_o *v50; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v52; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v54; // x22
  __int64 v55; // x23
  __int64 v56; // x24
  int v57; // w23
  struct PartyListViewItem_array *v58; // x9
  int v59; // w10
  struct PartyListViewItem_array *v60; // x8
  int v61; // w9
  struct EquipGraphListViewItem_o *v62; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v65; // q1
  PartyListViewItem_o *v66; // x20
  _BOOL8 v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x4
  Il2CppObject *v70; // x21
  __int64 v71; // x10
  __int64 v72; // x1
  UnityEngine_Object_o *v73; // x22
  _BOOL8 v74; // x0
  __int64 v75; // x1
  const MethodInfo *v76; // x2
  void *v77; // x8
  __int64 v78; // x11
  struct EquipGraphListViewItem_o *v79; // x8
  struct ServantEntity_o *v80; // x10
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x2
  struct EquipGraphListViewItem_o *v86; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v88; // x2
  struct EquipGraphListViewItem_o *v89; // x8
  __int64 v90; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+0h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+28h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4B159CD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, result, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&EquipGraphListViewObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24);
    byte_4B159CD = 1;
  }
  memset(&v96, 0, sizeof(v96));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v95,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v96.fields._list = *(_OWORD *)&v95.fields.currentCryptoKey;
    v96.fields._current = (Il2CppObject *)v95.fields.fakeValue;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v96,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v35 )
        break;
      current = v96.fields._current;
      if ( !v96.fields._current
        || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v96.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EquipGraphListViewItem_c *)v96.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v35, v36);
      }
      if ( BYTE1(v96.fields._current[9].klass) )
      {
        if ( (klass_high = HIDWORD(v96.fields._current[9].klass),
              BYTE1(v96.fields._current[9].klass) = 0,
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
          v41 = (UnityEngine_Object_o *)current[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
          v42 = UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
          if ( v42 )
          {
            v45 = current[6].monitor;
            if ( !v45
              || (v46 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                  *(unsigned __int8 *)(*(_QWORD *)v45 + 304LL) < (unsigned int)v46)
              || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v46 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1BCAA3C(v42, v43);
            }
            EquipGraphListViewObject__Init_39207440((EquipGraphListViewObject_o *)current[6].monitor, 4, v44);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v96,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v48 = *(_QWORD *)&waveDeckItemList->max_length;
      if ( (int)v48 >= 1 )
      {
        v49 = 0LL;
        while ( v49 < (unsigned int)v48 )
        {
          v50 = waveDeckItemList->m_Items[v49];
          for ( i = 0; ; ++i )
          {
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL) )
              break;
            if ( !v50 )
              goto LABEL_106;
            Instance = (int64_t)PartyListViewItem__GetMember(v50, i, 0LL);
            v52 = this->fields.selectItem;
            if ( !v52 )
              goto LABEL_106;
            servantEntity = v52->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_106;
            v54 = (PartyOrganizationListViewItem_o *)Instance;
            v56 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v55 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
            *(_QWORD *)&v97.fields.currentCryptoKey = v56;
            *(_QWORD *)&v97.fields.fakeValue = v55;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v97, 0LL);
            if ( !v54 )
              goto LABEL_106;
            v57 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v54, 0LL);
            if ( v57 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL) )
              PartyListViewItem__SetEquip(v50, i, 0LL, 0LL);
          }
          LODWORD(v48) = waveDeckItemList->max_length;
          if ( (__int64)++v49 >= (int)v48 )
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
      Instance = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, v26);
      selectItem = this->fields.selectItem;
      if ( !selectItem )
        goto LABEL_106;
      v34 = Instance;
    }
    else
    {
      v34 = 0LL;
    }
    v58 = this->fields.waveDeckItemList;
    if ( !v58 )
LABEL_106:
      sub_1BCAA3C(Instance, v26);
    v59 = selectItem->fields._OrganizedWave_k__BackingField - 1;
    if ( v59 >= v58->max_length )
LABEL_111:
      sub_1BCAA44(Instance, v26);
    Instance = (int64_t)v58->m_Items[v59];
    if ( !Instance )
      goto LABEL_106;
    PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v34, 0LL);
  }
LABEL_60:
  v60 = this->fields.waveDeckItemList;
  if ( !v60 )
    goto LABEL_106;
  v61 = this->fields.partyNumber - 1;
  if ( v61 >= v60->max_length )
    goto LABEL_111;
  v62 = this->fields.selectItem;
  if ( !v62 )
    goto LABEL_106;
  userSvtEntity = v62->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_106;
  memberIndex = this->fields.memberIndex;
  v65 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v66 = v60->m_Items[v61];
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
  v94 = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v94, 0LL);
  if ( !v66 )
    goto LABEL_106;
  PartyListViewItem__SetEquip(v66, memberIndex, Instance, 0LL);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v96 = v93;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v67 )
      break;
    v70 = v96.fields._current;
    if ( !v96.fields._current
      || (v71 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v96.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v71)
      || (EquipGraphListViewItem_c *)v96.fields._current->klass->_2.typeHierarchy[v71 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BCAA3C(v67, v68);
    }
    if ( BYTE1(v96.fields._current[9].klass) )
      LOWORD(v96.fields._current[9].klass) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v70,
      this->fields.waveDeckItemList,
      v66,
      this->fields.memberIndex,
      v69);
    v73 = (UnityEngine_Object_o *)v70[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
    v74 = UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
    if ( v74 )
    {
      v77 = v70[6].monitor;
      if ( !v77
        || (v78 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v77 + 304LL) < (unsigned int)v78)
        || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v77 + 200LL) + 8 * v78 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1BCAA3C(v74, v75);
      }
      EquipGraphListViewObject__Init_39207440((EquipGraphListViewObject_o *)v70[6].monitor, 4, v76);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.baseCost = v66->fields.cost;
LABEL_83:
  v79 = this->fields.selectItem;
  if ( !v79 )
    goto LABEL_106;
  v79->fields.isBase = 1;
  if ( (v79->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v80) = 0;
  }
  else
  {
    v80 = v79->fields.servantEntity;
    if ( v80 )
      LODWORD(v80) = v80->fields.cost;
  }
  this->fields.baseCost -= (int)v80;
  v81 = v79->fields.userSvtEntity;
  if ( !v81 )
    goto LABEL_106;
  v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v82;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
  v92 = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v92, 0LL);
  if ( !servantItemInfo )
    goto LABEL_106;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v84);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_106;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v85);
  v86 = this->fields.selectItem;
  if ( !v86 )
    goto LABEL_106;
  viewObject = (UnityEngine_Object_o *)v86->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_102;
  v89 = this->fields.selectItem;
  if ( !v89 )
    goto LABEL_106;
  Instance = (int64_t)v89->fields.viewObject;
  if ( !Instance )
    goto LABEL_106;
  v90 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v90
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v90 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_106;
  }
  EquipGraphListViewObject__Init_39207440((EquipGraphListViewObject_o *)Instance, 4, v88);
LABEL_102:
  EquipGraphListViewManager__RefrashListDisp(this, v26);
LABEL_103:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc, 0LL, v27, v28, v29, v30, v31, v32);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B159CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B159CF = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B159D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B159D3 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v18; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B159D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    byte_4B159D6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = 0LL;
  v27 = v26;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
      break;
    if ( !v27.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BCAA3C(v19, v20);
    }
    klass = v27.fields._current[7].klass;
    if ( !klass )
      sub_1BCAA3C(v19, v20);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    *(_QWORD *)&v28.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v28.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL) == svtId )
      ++v18;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v18;
}


bool __fastcall EquipGraphListViewManager__GetFocusItemIndex(
        EquipGraphListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B159D7 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, index, list);
    this = (EquipGraphListViewManager_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                            v8,
                                            v9);
    byte_4B159D7 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v10,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
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
  __int64 v6; // x2
  EquipGraphListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B159C2 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B159C2 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B159CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    byte_4B159CA = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v18.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v18.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BCAA3C(v13, v14);
    }
    if ( BYTE1(v18.fields._current[9].klass) )
    {
      klass_high = HIDWORD(v18.fields._current[1].klass);
      goto LABEL_12;
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B159CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    byte_4B159CB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v18.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BCAA3C(v13, v14);
    }
    if ( BYTE1(v18.fields._current[9].klass) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B159C4 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B159C4 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 112);
      if ( v39 && *(_BYTE *)(itemList + 201) )
      {
        if ( *(_BYTE *)(itemList + 173) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unchoiceList;
    v59 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v59;
    v66 = unchoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B159C3 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B159C3 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 112);
      if ( v39 && *(_BYTE *)(itemList + 200) )
      {
        if ( *(_BYTE *)(itemList + 172) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EquipGraphListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4B159BC & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v1, v2);
    byte_4B159BC = 1;
  }
  v3 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1);
    v3 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_1BCAA3C(sortStatus, v1);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v20; // w20
  DataManager_c **v21; // x21
  DataManager_c *v22; // x8
  int64_t *v23; // x21
  DataManager_c *v24; // t1
  Il2CppType byval_arg; // q0
  int64_t v26; // x0
  DataManager_o *v27; // x22
  int32_t v28; // w23
  DataManager_o *v29; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v32; // q0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  const MethodInfo *v40; // x1
  int32_t v41; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v43; // x21
  __int64 v44; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v48; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+60h] [xbp-80h]

  if ( (byte_4B159C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B159C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v20 = 0;
    v48 = Instance;
    while ( 1 )
    {
      v21 = &Instance->klass + (int)v20;
      v24 = v21[4];
      v23 = (int64_t *)(v21 + 4);
      v22 = v24;
      if ( !v24 )
        break;
      byval_arg = v22->_1.byval_arg;
      *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v22->_1.name;
      *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
      v50 = v51;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
      if ( size >= 1 )
      {
        v27 = (DataManager_o *)v26;
        v28 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v28,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v29 = Instance;
          methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (EquipGraphListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v32 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v51.fields.fakeValue = v32;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
            v49 = v51;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v49, 0LL);
            if ( Instance == v27 )
              break;
          }
          if ( size == ++v28 )
            goto LABEL_27;
        }
        if ( v20 >= LODWORD(v48->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v39 = *v23;
        v29->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)*v23;
        sub_1BCA784((PartyOrganizationUtility_o *)&v29->fields.masterLoadThreads, v39, v33, v34, v35, v36, v37, v38);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v29, v17);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v29, v40);
        }
      }
LABEL_27:
      Instance = v48;
      if ( ++v20 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v20 >= LODWORD(v48->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1BCAA44(Instance, v17);
    }
LABEL_44:
    sub_1BCAA3C(Instance, v17);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v41 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v41,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v43 = (ListViewItem_o *)Item;
        v44 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v44
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v44 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v43->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v43, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v41 )
        return;
    }
  }
}


void __fastcall EquipGraphListViewManager__OnClickBonusFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B159D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B159D1 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B159CE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B159CE = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu_30773292(v14, 5, sort, (ListViewManager_o *)this, v18, -1, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v10, v11);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B159D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B159D4 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B159D2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B159D2 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 4, sort, 0, v18, 0LL);
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
    sub_1BCAA3C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B159C9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B159C9 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v24; // w22
  UILabel_o *v25; // x20
  System_String_o **v26; // x8
  System_String_o *v27; // x21
  System_String_o *v28; // x21
  Il2CppObject *v29; // x22
  Il2CppObject *v30; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B159C5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_12533/*"SUM_OVER_INFO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v14, v15);
    byte_4B159C5 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_22;
  v18 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v18,
                                                                  v19,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v19 >= v18->fields._size )
        goto LABEL_8;
    }
LABEL_22:
    sub_1BCAA3C(ObjectList, v17);
  }
LABEL_8:
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
    v24 = (_DWORD)equipServantEntity + baseCost;
    v25 = this->fields.infoData2Label;
    v26 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12532/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12533/*"SUM_OVER_INFO"*/;
    v27 = *v26;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    v28 = LocalizationManager__Get(v27, 0LL);
    v32 = v24;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    maxCost = this->fields.maxCost;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = (System_Collections_Generic_List_object__o *)System_String__Format_62415592(v28, v29, v30, 0LL);
    if ( !v25 )
      goto LABEL_22;
    UILabel__set_text(v25, (System_String_o *)ObjectList, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B159C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_OnMoveEnd__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B159C7 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      EquipGraphListViewObject__Init_39208592((EquipGraphListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_39207564(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B159C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B159C8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      EquipGraphListViewObject__Init_39208676((EquipGraphListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  struct EquipGraphListViewItem_o **p_selectItem; // x20
  PartyOrganizationUtility_o *p_selectItemCallbackFunc; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 servantItemInfo; // x0
  const MethodInfo *v76; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  EquipGraphListViewObject_o *v80; // x24
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  const MethodInfo *v83; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v85; // w9
  struct EquipGraphListViewItem_o *v86; // x8
  int32_t wearerMember; // w10
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v89; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w21
  System_Reflection_MethodBase_o *v91; // x0
  const MethodInfo *v92; // x2
  struct EquipGraphServantItem_o *v93; // x8
  struct PartyListViewItem_array *v94; // x8
  int v95; // w10
  Il2CppClass **v96; // x8
  Il2CppClass *v97; // x21
  int events; // w22
  struct EquipGraphServantItem_o *v99; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  __int64 v101; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v103; // x21
  System_String_o *v104; // x22
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  NotificationDialog_ClickDelegate_o *v108; // x23
  int64_t v109; // x1
  const MethodInfo *v110; // x2
  const MethodInfo *v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  _QWORD *v118; // x0
  _BOOL4 v119; // w21
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  PartyOrganizationUtility_c *klass; // x19
  _QWORD *v127; // x0
  _BOOL4 v128; // w23
  System_Reflection_MethodBase_o *v129; // x0
  System_String_o *v130; // x21
  __int64 v131; // x22
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x23
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x23
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  int64_t v152; // x23
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  int64_t v159; // x23
  struct EquipGraphServantItem_o *v160; // x8
  __int64 v161; // x1
  int32_t v162; // w23
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x23
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x20
  System_String_o *v177; // x20
  Il2CppObject *v178; // x21
  System_String_o *v179; // x22
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  CommonConfirmDialog_ClickDelegate_o *v183; // x23
  struct EquipGraphServantItem_o *v184; // x8
  struct PartyListViewItem_array *v185; // x9
  __int64 v186; // x8
  unsigned __int64 v187; // x29
  int v188; // w27
  PartyListViewItem_o *v189; // x21
  int32_t v190; // w22
  struct ServantEntity_o *v191; // x8
  PartyOrganizationListViewItem_o *v192; // x23
  __int64 v193; // x24
  __int64 v194; // x25
  int v195; // w24
  ServantEntity_o *v196; // x21
  System_String_o *v197; // x21
  __int64 v198; // x22
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x23
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int64_t v212; // x23
  int32_t weareRarity; // w23
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  int64_t v220; // x23
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  int64_t v227; // x23
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  int64_t wearerServantName; // x20
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  int64_t v241; // x20
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  int64_t v248; // x20
  struct EquipGraphServantItem_o *v249; // x8
  int32_t Rarity; // w0
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  int64_t v257; // x20
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  int64_t v264; // x20
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  int64_t v271; // x20
  System_String_o *v272; // x20
  Il2CppObject *v273; // x21
  System_String_o *v274; // x22
  System_String_o *v275; // x23
  System_String_o *v276; // x24
  __int64 v277; // x1
  __int64 v278; // x2
  __int64 v279; // x3
  CommonConfirmDialog_ClickDelegate_o *v280; // x25
  struct PartyListViewItem_array *v281; // x8
  int v282; // w9
  struct EquipGraphListViewItem_o *v283; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v286; // q1
  PartyListViewItem_o *v287; // x24
  _BOOL8 v288; // x0
  __int64 v289; // x1
  Il2CppObject *current; // x28
  __int64 v291; // x10
  int klass_high; // w8
  _DWORD *monitor; // x8
  UnityEngine_Object_o *v294; // x23
  _BOOL8 v295; // x0
  __int64 v296; // x1
  const MethodInfo *v297; // x2
  void *v298; // x8
  __int64 v299; // x11
  struct EquipGraphListViewItem_o *v300; // x8
  struct UserServantEntity_o *v301; // x9
  __int128 v302; // q1
  struct EquipGraphServantItem_o *v303; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v305; // x20
  __int64 v306; // x22
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  int64_t v313; // x24
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  int64_t v320; // x24
  __int64 v321; // x1
  int32_t v322; // w24
  int64_t v323; // x2
  int32_t v324; // w3
  System_String_o *v325; // x4
  BattleSetupInfo_o *v326; // x5
  FollowerInfo_o *v327; // x6
  PartyListViewItem_o *v328; // x7
  int64_t v329; // x24
  int64_t v330; // x2
  int32_t v331; // w3
  System_String_o *v332; // x4
  BattleSetupInfo_o *v333; // x5
  FollowerInfo_o *v334; // x6
  PartyListViewItem_o *v335; // x7
  int64_t v336; // x24
  __int64 v337; // x1
  __int64 v338; // x23
  __int64 v339; // x24
  int32_t v340; // w0
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  int64_t v347; // x21
  System_String_o *v348; // x20
  Il2CppObject *v349; // x21
  System_String_o *v350; // x22
  System_String_o *v351; // x23
  System_String_o *v352; // x24
  __int64 v353; // x1
  __int64 v354; // x2
  __int64 v355; // x3
  CommonConfirmDialog_ClickDelegate_o *v356; // x25
  __int64 v357; // x0
  struct PartyListViewItem_array *v358; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v359; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v360; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v362; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v365; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v366; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v368; // 0:x0.16

  if ( (byte_4B159CC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, callback);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v19, v20);
    sub_1BCA7E0(&EquipGraphListViewItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_EndSelectConfirm__, v23, v24);
    sub_1BCA7E0(&Method_EquipGraphListViewManager_SelectEquip__, v25, v26);
    sub_1BCA7E0(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v27, v28);
    sub_1BCA7E0(&EquipGraphListViewObject_TypeInfo, v29, v30);
    sub_1BCA7E0(&int_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&object___TypeInfo, v37, v38);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43, v44);
    sub_1BCA7E0(&Rarity_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47, v48);
    sub_1BCA7E0(&StringLiteral_15678/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_15679/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_15675/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_5597/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_5596/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_15671/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_15670/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v65, v66);
    byte_4B159CC = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v365, 0, sizeof(v365));
  this->fields.selectItem = item;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc,
    (int64_t)callback,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_227;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewObject_TypeInfo )
      v80 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v80 = 0LL;
  }
  else
  {
    v80 = 0LL;
  }
  if ( selectItem->fields.isBase )
  {
    v81 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v81 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_SelectEquip__);
    v82 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v81, v81[4]);
    OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0LL);
    if ( !this->fields.isWaveBattle )
    {
LABEL_18:
      v86 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      wearerMember = v86->fields.wearerMember;
      v86->fields.isBase = 0;
      if ( (wearerMember & 0x80000000) == 0 && wearerMember != this->fields.memberIndex
        || v86->fields._OrganizedWave_k__BackingField > 0
        || v86->fields._IsUnique_k__BackingField )
      {
        if ( (wearerMember & 0x80000000) != 0 )
        {
          LODWORD(servantEntity) = 0;
        }
        else
        {
          servantEntity = v86->fields.servantEntity;
          if ( servantEntity )
            LODWORD(servantEntity) = servantEntity->fields.cost;
        }
        this->fields.baseCost += (int)servantEntity;
        if ( !v80 )
          goto LABEL_227;
        EquipGraphListViewObject__Init_39207440(v80, 4, v83);
      }
      servantItemInfo = (__int64)this->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_227;
      v109 = 0LL;
LABEL_51:
      EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v109, v83);
      servantItemInfo = (__int64)this->fields.servantItemDraw;
      if ( servantItemInfo )
      {
        EquipGraphServantItemDraw__SetItem(
          (EquipGraphServantItemDraw_o *)servantItemInfo,
          this->fields.servantItemInfo,
          v110);
        EquipGraphListViewManager__RefrashListDisp(this, v111);
        if ( callback )
        {
          p_selectItemCallbackFunc->klass = 0LL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc,
            0LL,
            v112,
            v113,
            v114,
            v115,
            v116,
            v117);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
            callback->fields.original_method_info,
            *(_QWORD *)&callback->fields.extra_arg);
        }
        return;
      }
LABEL_227:
      sub_1BCAA3C(servantItemInfo, v76);
    }
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_227;
    v85 = this->fields.partyNumber - 1;
    if ( v85 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v85];
      if ( !servantItemInfo )
        goto LABEL_227;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
      goto LABEL_18;
    }
LABEL_229:
    sub_1BCAA44(servantItemInfo, v76);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_227;
    v89 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v89 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_SelectEquip__);
    v91 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v89, v89[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0LL);
      v93 = this->fields.servantItemInfo;
      if ( !v93 )
        goto LABEL_227;
      if ( v93->fields.equipUserSvtEntity )
      {
        v94 = this->fields.waveDeckItemList;
        if ( !v94 )
          goto LABEL_227;
        v95 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v95 >= v94->max_length )
          goto LABEL_229;
        if ( !*p_selectItem )
          goto LABEL_227;
        v96 = &v94->obj.klass + v95;
        v97 = v96[4];
        if ( !v97 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                     (PartyListViewItem_o *)v96[4],
                                     (*p_selectItem)->fields.wearerMember,
                                     0LL);
        if ( !servantItemInfo )
          goto LABEL_227;
        events = (int)v97->_1.events;
        servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                            (PartyOrganizationListViewItem_o *)servantItemInfo,
                            0LL);
        v99 = this->fields.servantItemInfo;
        if ( !v99 )
          goto LABEL_227;
        equipServantEntity = v99->fields.equipServantEntity;
        if ( equipServantEntity )
          LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
        if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v97->_1.interopData) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v101);
          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_15671/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_15670/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v108 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         NotificationDialog_ClickDelegate_TypeInfo,
                                                         v105,
                                                         v106,
                                                         v107);
          NotificationDialog_ClickDelegate___ctor(
            v108,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_30768824(
              (CommonUI_o *)Instance,
              v103,
              v104,
              v108,
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
        v197 = LocalizationManager__Get((System_String_o *)StringLiteral_15678/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_1BCA888(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v198 = servantItemInfo;
        LODWORD(v361.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v361);
        if ( !v198 )
          goto LABEL_227;
        v205 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v198 + 24) )
            goto LABEL_229;
          *(_QWORD *)(v198 + 32) = v205;
          sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 32), v205, v199, v200, v201, v202, v203, v204);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
          v212 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v198 + 24) <= 1u )
              goto LABEL_229;
            *(_QWORD *)(v198 + 40) = v212;
            sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 40), v212, v206, v207, v208, v209, v210, v211);
            if ( !*p_selectItem )
              goto LABEL_227;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v76);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v220 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v198 + 24) <= 2u )
                goto LABEL_229;
              *(_QWORD *)(v198 + 48) = v220;
              sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 48), v220, v214, v215, v216, v217, v218, v219);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v76);
              v227 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v198 + 24) <= 3u )
                  goto LABEL_229;
                *(_QWORD *)(v198 + 56) = v227;
                sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 56), v227, v221, v222, v223, v224, v225, v226);
                if ( !*p_selectItem )
                  goto LABEL_227;
                wearerServantName = (int64_t)(*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_1BCA91C(wearerServantName, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v198 + 24) <= 4u )
                    goto LABEL_229;
                  *(_QWORD *)(v198 + 64) = wearerServantName;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v198 + 64),
                    wearerServantName,
                    v228,
                    v229,
                    v230,
                    v231,
                    v232,
                    v233);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                  v241 = servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v198 + 24) <= 5u )
                      goto LABEL_229;
                    *(_QWORD *)(v198 + 72) = v241;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 72), v241, v235, v236, v237, v238, v239, v240);
                    v362 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v362);
                    v248 = servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v198 + 24) <= 6u )
                        goto LABEL_229;
                      *(_QWORD *)(v198 + 80) = v248;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 80), v248, v242, v243, v244, v245, v246, v247);
                      v249 = this->fields.servantItemInfo;
                      if ( !v249 )
                        goto LABEL_227;
                      servantItemInfo = (__int64)v249->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_227;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v257 = servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v198 + 24) <= 7u )
                          goto LABEL_229;
                        *(_QWORD *)(v198 + 88) = v257;
                        sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 88), v257, v251, v252, v253, v254, v255, v256);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_227;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v76);
                        v264 = servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v198 + 24) <= 8u )
                            goto LABEL_229;
                          *(_QWORD *)(v198 + 96) = v264;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)(v198 + 96),
                            v264,
                            v258,
                            v259,
                            v260,
                            v261,
                            v262,
                            v263);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_227;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v76);
                          v271 = servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v198 + 24) > 9u )
                            {
                              *(_QWORD *)(v198 + 104) = v271;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)(v198 + 104),
                                v271,
                                v265,
                                v266,
                                v267,
                                v268,
                                v269,
                                v270);
                              v272 = System_String__Format_62415728(v197, (System_Object_array *)v198, 0LL);
                              v273 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v274 = LocalizationManager__Get((System_String_o *)StringLiteral_15679/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                              v275 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
                              v276 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
                              v280 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                              CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                              v277,
                                                                              v278,
                                                                              v279);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v280,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0LL);
                              if ( v273 )
                              {
                                CommonUI__OpenConfirmDialog_30766668(
                                  (CommonUI_o *)v273,
                                  v274,
                                  v272,
                                  v275,
                                  v276,
                                  v280,
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
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v92);
      return;
    }
    goto LABEL_59;
  }
  if ( !selectItem->fields._IsUnique_k__BackingField )
  {
    v127 = Method_EquipGraphListViewManager_SelectEquip__;
    v128 = selectItem->fields.wearerMember >= 0 && selectItem->fields.wearerMember != this->fields.memberIndex;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v127 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_SelectEquip__);
    v129 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v127, v127[4]);
    OverwriteAssetSoundName__PlaySystemSe(v129, 0, 0LL);
    if ( !v128 )
    {
      if ( this->fields.isWaveBattle )
      {
        v281 = this->fields.waveDeckItemList;
        if ( !v281 )
          goto LABEL_227;
        v282 = this->fields.partyNumber - 1;
        if ( v282 >= v281->max_length )
          goto LABEL_229;
        v283 = this->fields.selectItem;
        if ( !v283 )
          goto LABEL_227;
        userSvtEntity = v283->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_227;
        memberIndex = this->fields.memberIndex;
        v286 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v287 = v281->m_Items[v282];
        *(_OWORD *)&v361.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v361.fields.fakeValue = v286;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v76);
        v360 = v361;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v360, 0LL);
        if ( !v287 )
          goto LABEL_227;
        PartyListViewItem__SetEquip(v287, memberIndex, servantItemInfo, 0LL);
      }
      servantItemInfo = (__int64)this->fields.itemList;
      if ( !servantItemInfo )
        goto LABEL_227;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v361,
        (System_Collections_Generic_List_object__o *)servantItemInfo,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v365 = *(System_Collections_Generic_List_Enumerator_object__o *)&v361.fields.currentCryptoKey;
      while ( 1 )
      {
        v288 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v365,
                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v288 )
          break;
        current = v365.fields._current;
        if ( !v365.fields._current
          || (v291 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v365.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v291)
          || (EquipGraphListViewItem_c *)v365.fields._current->klass->_2.typeHierarchy[v291 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_1BCAA3C(v288, v289);
        }
        if ( BYTE1(v365.fields._current[9].klass) )
        {
          if ( (klass_high = HIDWORD(v365.fields._current[9].klass),
                BYTE1(v365.fields._current[9].klass) = 0,
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
            v294 = (UnityEngine_Object_o *)current[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v289);
            v295 = UnityEngine_Object__op_Inequality(v294, 0LL, 0LL);
            if ( v295 )
            {
              v298 = current[6].monitor;
              if ( !v298
                || (v299 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v298 + 304LL) < (unsigned int)v299)
                || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v298 + 200LL) + 8 * v299 - 8) != EquipGraphListViewObject_TypeInfo )
              {
                sub_1BCAA3C(v295, v296);
              }
              EquipGraphListViewObject__Init_39207440((EquipGraphListViewObject_o *)current[6].monitor, 4, v297);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v365,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v300 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_227;
      v301 = v300->fields.userSvtEntity;
      v300->fields.isBase = 1;
      if ( !v301 )
        goto LABEL_227;
      v302 = *(_OWORD *)&v301->fields.id.fields.fakeValue;
      v303 = this->fields.servantItemInfo;
      *(_OWORD *)&v361.fields.currentCryptoKey = *(_OWORD *)&v301->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v361.fields.fakeValue = v302;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v76);
      v359 = v361;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v359, 0LL);
      if ( !v303 )
        goto LABEL_227;
      v109 = servantItemInfo;
      servantItemInfo = (__int64)v303;
      goto LABEL_51;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
    v130 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_1BCA888(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_227;
    v131 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v76);
    if ( !v131 )
      goto LABEL_227;
    v138 = servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v131 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v131 + 24) )
        goto LABEL_229;
      *(_QWORD *)(v131 + 32) = v138;
      sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 32), v138, v132, v133, v134, v135, v136, v137);
      if ( !*p_selectItem )
        goto LABEL_227;
      v145 = (int64_t)(*p_selectItem)->fields.wearerServantName;
      if ( !v145 || (servantItemInfo = sub_1BCA91C(v145, *(_QWORD *)(*(_QWORD *)v131 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v131 + 24) <= 1u )
          goto LABEL_229;
        *(_QWORD *)(v131 + 40) = v145;
        sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 40), v145, v139, v140, v141, v142, v143, v144);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_227;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v76);
        v152 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v131 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v131 + 24) <= 2u )
            goto LABEL_229;
          *(_QWORD *)(v131 + 48) = v152;
          sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 48), v152, v146, v147, v148, v149, v150, v151);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_227;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v76);
          v159 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v131 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v131 + 24) <= 3u )
              goto LABEL_229;
            *(_QWORD *)(v131 + 56) = v159;
            sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 56), v159, v153, v154, v155, v156, v157, v158);
            v160 = this->fields.servantItemInfo;
            if ( !v160 )
              goto LABEL_227;
            servantItemInfo = (__int64)v160->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_227;
            v162 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v161);
            servantItemInfo = (__int64)Rarity__getRarityType(v162, 0LL);
            v169 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v131 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v131 + 24) <= 4u )
                goto LABEL_229;
              *(_QWORD *)(v131 + 64) = v169;
              sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 64), v169, v163, v164, v165, v166, v167, v168);
              if ( !*p_selectItem )
                goto LABEL_227;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v176 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v131 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v131 + 24) > 5u )
                {
                  *(_QWORD *)(v131 + 72) = v176;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 72), v176, v170, v171, v172, v173, v174, v175);
                  v177 = System_String__Format_62415728(v130, (System_Object_array *)v131, 0LL);
                  v178 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v179 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v183 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v180,
                                                                  v181,
                                                                  v182);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v183,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v76);
                  if ( v178 )
                  {
                    CommonUI__OpenConfirmDialog(
                      (CommonUI_o *)v178,
                      v179,
                      v177,
                      v183,
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
  v118 = Method_EquipGraphListViewManager_SelectEquip__;
  v119 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v118 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListViewManager_SelectEquip__);
  v91 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v118, v118[4]);
  if ( v119 )
  {
LABEL_59:
    OverwriteAssetSoundName__PlaySystemSe(v91, 2, 0LL);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_1BCA784(p_selectItemCallbackFunc, 0LL, v120, v121, v122, v123, v124, v125);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0LL);
  v184 = this->fields.servantItemInfo;
  if ( !v184 )
    goto LABEL_227;
  if ( !v184->fields.equipUserSvtEntity )
    goto LABEL_119;
  v185 = this->fields.waveDeckItemList;
  if ( !v185 )
    goto LABEL_227;
  v186 = *(_QWORD *)&v185->max_length;
  if ( (int)v186 >= 1 )
  {
    v187 = 0LL;
    v188 = 1;
    v358 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v187 >= (unsigned int)v186 )
        goto LABEL_229;
      v189 = v185->m_Items[v187];
      v190 = 0;
      do
      {
        servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v76);
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v190 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
          goto LABEL_117;
        if ( !v189 )
          goto LABEL_227;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(v189, v190, 0LL);
        if ( !*p_selectItem )
          goto LABEL_227;
        v191 = (*p_selectItem)->fields.servantEntity;
        if ( !v191 )
          goto LABEL_227;
        v192 = (PartyOrganizationListViewItem_o *)servantItemInfo;
        v194 = *(_QWORD *)&v191->fields.id.fields.currentCryptoKey;
        v193 = *(_QWORD *)&v191->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76);
        *(_QWORD *)&v366.fields.currentCryptoKey = v194;
        *(_QWORD *)&v366.fields.fakeValue = v193;
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v366, 0LL);
        if ( !v192 )
          goto LABEL_227;
        v195 = servantItemInfo;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v192, 0LL);
        servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL);
        ++v190;
      }
      while ( v195 != (_DWORD)servantItemInfo );
      v196 = v192->fields.servantEntity;
      if ( v196 )
        break;
LABEL_117:
      v185 = v358;
      ++v187;
      ++v188;
      LODWORD(v186) = v358->max_length;
      if ( (__int64)v187 >= (int)v186 )
        return;
    }
    userServantEntity = v192->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
      v305 = LocalizationManager__Get((System_String_o *)StringLiteral_15675/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v306 = sub_1BCA888(object___TypeInfo, 5LL);
      LODWORD(v361.fields.currentCryptoKey) = v188;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v361);
      if ( !v306 )
        goto LABEL_227;
      v313 = servantItemInfo;
      if ( !servantItemInfo
        || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v306 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v306 + 24) )
          goto LABEL_229;
        *(_QWORD *)(v306 + 32) = v313;
        sub_1BCA784((PartyOrganizationUtility_o *)(v306 + 32), v313, v307, v308, v309, v310, v311, v312);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v320 = servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v306 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v306 + 24) <= 1u )
            goto LABEL_229;
          *(_QWORD *)(v306 + 40) = v320;
          sub_1BCA784((PartyOrganizationUtility_o *)(v306 + 40), v320, v314, v315, v316, v317, v318, v319);
          v322 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v321);
          servantItemInfo = (__int64)Rarity__getRarityType(v322, 0LL);
          v329 = servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v306 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v306 + 24) <= 2u )
              goto LABEL_229;
            *(_QWORD *)(v306 + 48) = v329;
            sub_1BCA784((PartyOrganizationUtility_o *)(v306 + 48), v329, v323, v324, v325, v326, v327, v328);
            servantItemInfo = (__int64)ServantEntity__getClassName(v196, 0LL);
            v336 = servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v306 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v306 + 24) <= 3u )
                goto LABEL_229;
              *(_QWORD *)(v306 + 56) = v336;
              sub_1BCA784((PartyOrganizationUtility_o *)(v306 + 56), v336, v330, v331, v332, v333, v334, v335);
              v339 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v338 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v337);
              *(_QWORD *)&v368.fields.currentCryptoKey = v339;
              *(_QWORD *)&v368.fields.fakeValue = v338;
              v340 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v368, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v196, v340, -1, 0LL);
              v347 = servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_1BCA91C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v306 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v306 + 24) > 4u )
                {
                  *(_QWORD *)(v306 + 64) = v347;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v306 + 64), v347, v341, v342, v343, v344, v345, v346);
                  v348 = System_String__Format_62415728(v305, (System_Object_array *)v306, 0LL);
                  v349 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v350 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v351 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v352 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v356 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v353,
                                                                  v354,
                                                                  v355);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v356,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v349 )
                  {
                    CommonUI__OpenConfirmDialog_30766668(
                      (CommonUI_o *)v349,
                      v350,
                      v348,
                      v351,
                      v352,
                      v356,
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
      v357 = sub_1BCAA60(servantItemInfo);
      sub_1BCA908(v357, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B159D0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B159D0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_39175340(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_39175340(
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
    sub_1BCAA3C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_39207564(this, mode + 1, v8);
}


void __fastcall EquipGraphListViewManager__SetMode_39207512(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_39175340(this, mode, v10);
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
  if ( (byte_4B159C6 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1BCA7E0(&EquipGraphListViewObject_TypeInfo, obj, item);
    byte_4B159C6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_39207440((EquipGraphListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall EquipGraphListViewManager__SetSortButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B159D5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B159D5 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_40;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_40;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1BCAA3C(sort, v17);
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

  if ( (byte_4B159D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B159D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectItemCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B159B5 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B159B5 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B159B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B159B7 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B159B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B159B9 = 1;
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
    v8 = sub_1C05CD0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B159BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B159BE = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v21;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B159BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B159BD = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v21;
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

  if ( (byte_4B159B6 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B159B6 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B159B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B159B8 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B159BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B159BA = 1;
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
    v8 = sub_1C05CD0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0D240;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D1E8;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B159DA & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&EquipGraphListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B159DA = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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