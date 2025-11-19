void EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ListViewSort_o *v4; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ListViewSort_o *v8; // x19
  struct EquipGraphListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ListViewSort_o *v12; // x19
  struct EquipGraphListViewManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CB5848 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&StringLiteral_11407/*"RewardUpEquipGraph"*/);
    sub_1C6BA08(&StringLiteral_6102/*"EquipGraph"*/);
    sub_1C6BA08(&StringLiteral_3185/*"BondEquipGraph"*/);
    sub_1C6BA08(&StringLiteral_15579/*"WarBoardEquipGraph"*/);
    byte_4CB5848 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v1, (System_String_o *)StringLiteral_6102/*"EquipGraph"*/, 3, 0, 0);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EquipGraphListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v4, (System_String_o *)StringLiteral_3185/*"BondEquipGraph"*/, 3, 0, 0);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->bondSortStatus, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v8, (System_String_o *)StringLiteral_11407/*"RewardUpEquipGraph"*/, 3, 0, 0);
  v9 = EquipGraphListViewManager_TypeInfo->static_fields;
  v9->rewardUpSortStatus = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->rewardUpSortStatus, (int32_t)v8, v10, v11);
  v12 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v12, (System_String_o *)StringLiteral_15579/*"WarBoardEquipGraph"*/, 3, 0, 0);
  v13 = EquipGraphListViewManager_TypeInfo->static_fields;
  v13->warBoardSortStatus = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v13->warBoardSortStatus, (int32_t)v12, v14, v15);
}


void EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  *((_DWORD *)p_seed + 85) = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_41296720(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EquipGraphListViewManager__CreateList(
        EquipGraphListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v13; // x21
  __int64 sort; // x0
  int64_t v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w8
  EquipGraphListViewManager_c *v23; // x0
  struct ListViewSort_o **p_rewardUpSortStatus; // x8
  EquipGraphListViewManager_c *v25; // x0
  EquipGraphListViewManager_c *v26; // x0
  struct ListViewSort_o *v27; // x1
  struct ListViewSort_o **p_sort; // x26
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ListViewSort_o *v34; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct ListViewSort_o *v41; // x20
  bool v42; // w8
  struct PartyOrganizationListViewItem_o *v43; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // x27
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x20
  int32_t v48; // w22
  bool IsTempGrandServant_k__BackingField; // w24
  EquipGraphServantItem_o *v50; // x25
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Int64_array *EquipList; // x0
  __int64 *v54; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  EquipGraphServantItem_o *v57; // x20
  __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x20
  System_Collections_Generic_IEnumerable_T__o *v61; // x20
  System_Func_object__bool__o *v62; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x24
  EquipGraphListViewManager___c_c *v65; // x8
  System_Func_object__int__o *_9__62_2; // x20
  Il2CppObject *v67; // x22
  struct EquipGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  EquipGraphListViewManager___c_c *v71; // x0
  System_Func_object__int__o *_9__62_3; // x20
  Il2CppObject *v73; // x22
  struct EquipGraphListViewManager___c_StaticFields *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  UserGameEntity_o *SelfUserGame; // x24
  int32_t cost; // w20
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x25
  UILabel_o *v82; // x22
  System_String_o *v83; // x20
  Il2CppObject *v84; // x28
  Il2CppObject *v85; // x0
  UnityEngine_GameObject_o *bondSkillChangeMessageLabel; // x20
  System_Collections_Generic_List_object__o *v87; // x26
  __int64 v88; // x23
  int v89; // w8
  void *v90; // x8
  unsigned __int64 v91; // x24
  UserServantEntity_o *v92; // x20
  int64_t v93; // x0
  int32_t v94; // w27
  int64_t v95; // x28
  int32_t v96; // w29
  EquipGraphListViewItem_o *v97; // x22
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  Il2CppObject *v104; // x20
  ServantSkillMaster_o *v105; // x28
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  int v110; // w8
  System_Collections_Generic_HashSet_int__o *v111; // x21
  unsigned int v112; // w27
  CGThumbnailListItem_o *v113; // x29
  __int64 v114; // x24
  __int64 v115; // x20
  __int64 v116; // x22
  __int64 v117; // x20
  __int64 v118; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Func_int__bool__o *klass; // x20
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x22
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  System_Collections_Generic_HashSet_int__o *v124; // x29
  __int64 v125; // x25
  int64_t v126; // x0
  int32_t v127; // w23
  int64_t v128; // x21
  EquipGraphListViewItem_o *v129; // x20
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  Il2CppObject *Master_object; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  struct ServantEntity_o *servantEntity; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v145; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  System_Collections_Generic_List_object__o *v147; // x24
  int32_t v148; // w25
  UserServantEntity_o *v149; // x22
  int64_t EquipUserSvtId; // x0
  int32_t memberIndex; // w27
  int64_t v152; // x28
  int32_t v153; // w21
  EquipGraphListViewItem_o *v154; // x20
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  struct System_Object_array *items; // x8
  _QWORD *v158; // x9
  __int64 size; // x10
  Il2CppClass **v160; // x0
  System_Action_object__o *v161; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v164; // x8
  System_String_o *v165; // x21
  const MethodInfo *v166; // x1
  const MethodInfo *v167; // x1
  const MethodInfo *v168; // [xsp+10h] [xbp-B0h]
  CGThumbnailListItem_o *v169; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_IEnumerable_TSource__o *v170; // [xsp+20h] [xbp-A0h]
  int32_t v171; // [xsp+28h] [xbp-98h]
  int32_t v172; // [xsp+2Ch] [xbp-94h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+30h] [xbp-90h]
  PartyListViewItem_o *v174; // [xsp+38h] [xbp-88h]
  PartyListViewItem_array *v175; // [xsp+40h] [xbp-80h]
  EquipGraphServantItem_o **p_servantItemInfo; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int monitor; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16

  if ( (byte_4CB582F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_EquipGraphListViewItem__TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    sub_1C6BA08(&EquipGraphServantItem_TypeInfo);
    sub_1C6BA08(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_EquipGraphListViewManager___c__CreateList_b__62_2__);
    sub_1C6BA08(&Method_EquipGraphListViewManager___c__CreateList_b__62_3__);
    sub_1C6BA08(&Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__0__);
    sub_1C6BA08(&Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__1__);
    sub_1C6BA08(&EquipGraphListViewManager___c__DisplayClass62_0_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__4__);
    sub_1C6BA08(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__6__);
    sub_1C6BA08(&EquipGraphListViewManager___c__DisplayClass62_1_TypeInfo);
    sub_1C6BA08(&EquipGraphListViewManager___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB582F = 1;
  }
  v13 = sub_1C6BC54(EquipGraphListViewManager___c__DisplayClass62_0_TypeInfo);
  EquipGraphListViewManager___c__DisplayClass62_0___ctor((EquipGraphListViewManager___c__DisplayClass62_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_151;
  *(_QWORD *)(v13 + 32) = this;
  *(_DWORD *)(v13 + 24) = type;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.waveDeckItemList, (int32_t)baseDeckItemList, v18, v19);
  v22 = *(_DWORD *)(v13 + 24);
  this->fields.equipGraphType = v22;
  if ( v22 == 2 )
  {
    v25 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v25 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v25->static_fields->rewardUpSortStatus;
  }
  else if ( v22 == 1 )
  {
    v26 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v26 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v26->static_fields->bondSortStatus;
  }
  else
  {
    v23 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v23 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v23->static_fields->sortStatus;
  }
  v27 = *p_rewardUpSortStatus;
  this->fields.sort = *p_rewardUpSortStatus;
  p_sort = &this->fields.sort;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v27, v20, v21);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_151;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  if ( !partyItem )
    goto LABEL_151;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
  v34 = this->fields.sort;
  if ( !v34 )
    goto LABEL_151;
  iconScaleKind = v34->fields.iconScaleKind;
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
      goto LABEL_25;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v32, v33);
LABEL_25:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (__int64)this->fields.sort;
    this->fields.isQuestStart = isQuestStart;
    if ( !sort )
      goto LABEL_151;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)sort,
                           0,
                           setupInfo->fields.servantEquipFilterEventCampaignIds,
                           setupInfo->fields.servantEquipFilterEventIds,
                           0,
                           0,
                           isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v39, v40);
    v41 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v41 )
      goto LABEL_151;
    v42 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v32, v33);
    v41 = this->fields.sort;
    if ( !v41 )
      goto LABEL_151;
    v42 = 0;
  }
  v41->fields.isBonusKind = v42;
  v43 = PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0);
  p_baseItem = &this->fields.baseItem;
  this->fields.baseItem = v43;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)v43, v45, v46);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_151;
  if ( !baseItem->fields.isFollower )
  {
    v48 = *(_DWORD *)(v13 + 24);
    IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
    v50 = (EquipGraphServantItem_o *)sub_1C6BC54(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v50, baseItem, v48, IsTempGrandServant_k__BackingField, 0);
    this->fields.servantItemInfo = v50;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v50, v51, v52);
    sort = (__int64)this->fields.baseItem;
    if ( !sort )
      goto LABEL_151;
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0);
    *(_QWORD *)(v13 + 16) = EquipList;
    v54 = (__int64 *)(v13 + 16);
    sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)EquipList, v55, v56);
    sort = (__int64)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_151;
    v57 = *p_servantItemInfo;
    if ( *(_BYTE *)(sort + 402) )
    {
      sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
      v15 = sort;
      if ( !v57 )
        goto LABEL_151;
    }
    else
    {
      v58 = *(_QWORD *)(v13 + 16);
      if ( !v58 )
        goto LABEL_151;
      v59 = *(int *)(v13 + 24);
      if ( (unsigned int)v59 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_152;
      v15 = *(_QWORD *)(v58 + 8 * v59 + 32);
      if ( !v57 )
        goto LABEL_151;
    }
    object = (Il2CppObject *)v13;
    EquipGraphServantItem__SetEquipTarget(v57, v15, 0);
    *(_QWORD *)&this->fields.addBaseAtk = 0;
    v60 = *v54;
    if ( !*v54 )
      goto LABEL_151;
    sort = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      sort = (__int64)BalanceConfig_TypeInfo;
    }
    if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == *(_DWORD *)(v60 + 24) )
    {
      if ( !*p_baseItem )
        goto LABEL_151;
      v61 = BasicHelper__ExcludeNull_object_(
              (System_Collections_Generic_IEnumerable_T__o *)(*p_baseItem)->fields.equipUserServantEntityList,
              (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
      v62 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v62,
        (Il2CppObject *)v13,
        Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__1__,
        0);
      v63 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v61,
              (System_Func_TSource__bool__o *)v62,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v63,
                                                                   (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
      v65 = EquipGraphListViewManager___c_TypeInfo;
      if ( !EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo);
        v65 = EquipGraphListViewManager___c_TypeInfo;
      }
      _9__62_2 = (System_Func_object__int__o *)v65->static_fields->__9__62_2;
      if ( !_9__62_2 )
      {
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = EquipGraphListViewManager___c_TypeInfo;
        }
        v67 = (Il2CppObject *)v65->static_fields->__9;
        _9__62_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__62_2, v67, Method_EquipGraphListViewManager___c__CreateList_b__62_2__, 0);
        static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__62_2 = (struct System_Func_UserServantEntity__int__o *)_9__62_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__62_2, (int32_t)_9__62_2, v69, v70);
      }
      this->fields.addBaseAtk = System_Linq_Enumerable__Sum_object_(
                                  v64,
                                  (System_Func_TSource__int__o *)_9__62_2,
                                  (const MethodInfo_3179900 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
      v71 = EquipGraphListViewManager___c_TypeInfo;
      if ( !EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo);
        v71 = EquipGraphListViewManager___c_TypeInfo;
      }
      _9__62_3 = (System_Func_object__int__o *)v71->static_fields->__9__62_3;
      if ( !_9__62_3 )
      {
        if ( !v71->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v71);
          v71 = EquipGraphListViewManager___c_TypeInfo;
        }
        v73 = (Il2CppObject *)v71->static_fields->__9;
        _9__62_3 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__62_3, v73, Method_EquipGraphListViewManager___c__CreateList_b__62_3__, 0);
        v74 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v74->__9__62_3 = (struct System_Func_UserServantEntity__int__o *)_9__62_3;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v74->__9__62_3, (int32_t)_9__62_3, v75, v76);
      }
      this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                                 v64,
                                 (System_Func_TSource__int__o *)_9__62_3,
                                 (const MethodInfo_3179900 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    }
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_151;
    EquipGraphServantItemDraw__SetItem(
      (EquipGraphServantItemDraw_o *)sort,
      this->fields.servantItemInfo,
      this->fields.addBaseHp,
      this->fields.addBaseAtk,
      0);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_151;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    sort = (__int64)this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !sort )
      goto LABEL_151;
    cost = partyItem->fields.cost;
    sort = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0);
    this->fields.baseCost = cost - sort;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !baseDeckItemList )
      goto LABEL_151;
    v175 = baseDeckItemList;
    this->fields.maxWave = baseDeckItemList->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_151;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_151;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v174 = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v82 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUM_INFO"*/, 0);
      if ( !v81 )
        goto LABEL_151;
      v83 = (System_String_o *)sort;
      monitor = (int)v81[1].monitor;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &monitor);
      if ( !SelfUserGame )
        goto LABEL_151;
      v84 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
      sort = (__int64)System_String__Format_64008100(v83, v84, v85, 0);
      if ( !v82 )
        goto LABEL_151;
      UILabel__set_text(v82, (System_String_o *)sort, 0);
    }
    sort = (__int64)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_151;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !*p_sort || !sort )
      goto LABEL_151;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
    bondSkillChangeMessageLabel = this->fields.bondSkillChangeMessageLabel;
    if ( this->fields.equipGraphType == 1 )
    {
      sort = (__int64)*p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_151;
      sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
      v15 = sort > 0;
    }
    else
    {
      v15 = 0;
    }
    if ( !bondSkillChangeMessageLabel )
LABEL_151:
      sub_1C6BC60(sort, v15);
    UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v15, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    v87 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v87,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    v88 = sub_1C6BC54(EquipGraphListViewManager___c__DisplayClass62_1_TypeInfo);
    EquipGraphListViewManager___c__DisplayClass62_1___ctor((EquipGraphListViewManager___c__DisplayClass62_1_o *)v88, 0);
    v89 = *(_DWORD *)(v13 + 24);
    setupInfoa = setupInfo;
    if ( v89 != 2 )
    {
      if ( v89 == 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantSkillMaster___);
        if ( !v88 )
          goto LABEL_151;
        *(_QWORD *)(v88 + 24) = sort;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v88 + 24), sort, v136, v137);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v88 + 16) = Master_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v88 + 16), (int32_t)Master_object, v139, v140);
        if ( !*p_baseItem )
          goto LABEL_151;
        servantEntity = (*p_baseItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_151;
        individuality = servantEntity->fields.individuality;
        *(_QWORD *)(v88 + 32) = individuality;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v88 + 32), (int32_t)individuality, v141, v142);
        v145 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v145,
          (Il2CppObject *)v88,
          Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__4__,
          0);
        v146 = System_Linq_Enumerable__Where_object_(
                 v81,
                 (System_Func_TSource__bool__o *)v145,
                 (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        sort = (__int64)System_Linq_Enumerable__ToList_object_(
                          v146,
                          (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
        if ( !sort )
          goto LABEL_151;
        v147 = (System_Collections_Generic_List_object__o *)sort;
        if ( *(int *)(sort + 24) >= 1 )
        {
          v148 = 0;
          while ( 1 )
          {
            sort = (__int64)System_Collections_Generic_List_object___get_Item(
                              v147,
                              v148,
                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v149 = (UserServantEntity_o *)sort;
            EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, 0);
            memberIndex = this->fields.memberIndex;
            v152 = EquipUserSvtId;
            v153 = (int32_t)object[1].monitor;
            v154 = (EquipGraphListViewItem_o *)sub_1C6BC54(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v154, v148, v149, v152, v175, v174, setupInfo, memberIndex, 0, v153, v168);
            if ( !v87 )
              goto LABEL_151;
            items = v87->fields._items;
            v158 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v87->fields._version;
            if ( !items )
              goto LABEL_151;
            size = v87->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v87,
                (Il2CppObject *)v154,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
            }
            else
            {
              v160 = &items->obj.klass + size;
              v87->fields._size = size + 1;
              v160[4] = (Il2CppClass *)v154;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v160 + 4), (int32_t)v154, v155, v156);
            }
            if ( ++v148 >= v147->fields._size )
              goto LABEL_141;
          }
        }
      }
      else if ( !v89 )
      {
        if ( !v81 )
          goto LABEL_151;
        v90 = v81[1].monitor;
        if ( (int)v90 >= 1 )
        {
          v91 = 0;
          while ( v91 < (unsigned int)v90 )
          {
            sort = (__int64)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v92 = (UserServantEntity_o *)*((_QWORD *)&v81[2].klass + v91);
            v93 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v94 = this->fields.memberIndex;
            v95 = v93;
            v96 = *(_DWORD *)(v13 + 24);
            v97 = (EquipGraphListViewItem_o *)sub_1C6BC54(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v97, v91, v92, v95, v175, v174, setupInfoa, v94, 0, v96, v168);
            if ( !v87 )
              goto LABEL_151;
            v100 = v87->fields._items;
            v101 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v87->fields._version;
            if ( !v100 )
              goto LABEL_151;
            v102 = v87->fields._size;
            if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v87,
                (Il2CppObject *)v97,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &v100->obj.klass + v102;
              v87->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v97;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v103 + 4), (int32_t)v97, v98, v99);
            }
            LODWORD(v90) = v81[1].monitor;
            if ( (__int64)++v91 >= (int)v90 )
              goto LABEL_141;
          }
          goto LABEL_152;
        }
      }
      goto LABEL_141;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v104 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantSkillMaster___);
    if ( !v104 )
      goto LABEL_151;
    v105 = (ServantSkillMaster_o *)sort;
    RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                  (ConstantStrMaster_o *)v104,
                                                                                  0);
    sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpFuncCategory,
                      (const MethodInfo_317FA74 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v88 )
      goto LABEL_151;
    *(_QWORD *)(v88 + 40) = sort;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v88 + 40), sort, v107, v108);
    RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                                 (ConstantStrMaster_o *)v104,
                                                                                 0);
    sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpIgnoreSvtId,
                      (const MethodInfo_317FA74 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v81 )
      goto LABEL_151;
    v110 = (int)v81[1].monitor;
    if ( v110 < 1 )
    {
LABEL_141:
      v161 = (System_Action_object__o *)sub_1C6BC54(System_Action_EquipGraphListViewItem__TypeInfo);
      System_Action_object____ctor(
        v161,
        object,
        Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__0__,
        0);
      if ( v87 )
      {
        System_Collections_Generic_List_object___ForEach(
          v87,
          (System_Action_T__o *)v161,
          (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          emptyMessageLabel = this->fields.emptyMessageLabel;
          v164 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
          v165 = *v164;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (__int64)LocalizationManager__Get(v165, 0);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
            EquipGraphListViewManager__RefrashListDisp(this, v166);
            ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
            EquipGraphListViewManager__SetFilterButtonImage(this, v167);
            return;
          }
        }
      }
      goto LABEL_151;
    }
    v111 = (System_Collections_Generic_HashSet_int__o *)sort;
    v112 = 0;
    v113 = (CGThumbnailListItem_o *)(v88 + 56);
    v172 = 0;
    v169 = (CGThumbnailListItem_o *)(v88 + 56);
    v170 = v81;
    while ( v112 < v110 )
    {
      v114 = *((_QWORD *)&v81[2].klass + (int)v112);
      if ( !v114 )
        goto LABEL_151;
      v116 = *(_QWORD *)(v114 + 80);
      v115 = *(_QWORD *)(v114 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v180.fields.currentCryptoKey = v116;
      *(_QWORD *)&v180.fields.fakeValue = v115;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v180, 0);
      if ( !v111 )
        goto LABEL_151;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v111,
               sort,
               (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        v118 = *(_QWORD *)(v114 + 80);
        v117 = *(_QWORD *)(v114 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v181.fields.currentCryptoKey = v118;
        *(_QWORD *)&v181.fields.fakeValue = v117;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v181, 0);
        if ( !v105 )
          goto LABEL_151;
        ServantSkillList = ServantSkillMaster__getServantSkillList(v105, sort, 0);
        sort = (__int64)UserServantEntity__GetEquipAllCategoryIdList((UserServantEntity_o *)v114, ServantSkillList, 0);
        if ( sort )
        {
          klass = (System_Func_int__bool__o *)v113->klass;
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v113->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v88,
              Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__6__,
              0);
            *(_QWORD *)(v88 + 56) = klass;
            sub_1C6B9AC(v113, (int32_t)klass, v122, v123);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)klass,
                   (const MethodInfo_31451C0 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (__int64)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v124 = v111;
            v125 = v88;
            v126 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v127 = (int32_t)object[1].monitor;
            v128 = v126;
            v171 = this->fields.memberIndex;
            v129 = (EquipGraphListViewItem_o *)sub_1C6BC54(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v129,
              v172,
              (UserServantEntity_o *)v114,
              v128,
              v175,
              v174,
              setupInfoa,
              v171,
              (System_Int32_array *)preLoadCategoryIdList,
              v127,
              v168);
            if ( !v87 )
              goto LABEL_151;
            v132 = v87->fields._items;
            v133 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v87->fields._version;
            if ( !v132 )
              goto LABEL_151;
            v134 = v87->fields._size;
            v88 = v125;
            v111 = v124;
            if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v87,
                (Il2CppObject *)v129,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
            }
            else
            {
              v135 = &v132->obj.klass + v134;
              v87->fields._size = v134 + 1;
              v135[4] = (Il2CppClass *)v129;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v135 + 4), (int32_t)v129, v130, v131);
            }
            v113 = v169;
            v81 = v170;
            ++v172;
          }
        }
      }
      v110 = (int)v81[1].monitor;
      if ( (int)++v112 >= v110 )
        goto LABEL_141;
    }
LABEL_152:
    sub_1C6BC68(sort);
  }
}


void EquipGraphListViewManager__CreateList_41294652(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  EquipGraphListViewManager_c *v9; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 v12; // x1
  __int64 sort; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ListViewSort_o *v22; // x21
  bool v23; // w8
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x23
  EquipGraphServantItem_o *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  EquipGraphServantItem_o *servantItemInfo; // x24
  UserGameEntity_o *SelfUserGame; // x25
  int32_t cost; // w21
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v36; // x24
  UILabel_o *v37; // x26
  System_String_o *v38; // x27
  Il2CppObject *v39; // x28
  Il2CppObject *v40; // x0
  il2cpp_array_size_t v41; // x8
  unsigned __int64 v42; // x22
  UserServantEntity_o *v43; // x26
  int64_t EquipUserSvtId; // x27
  EquipGraphListViewItem_o *v45; // x25
  const MethodInfo *v46; // x6
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v55; // x8
  System_String_o *v56; // x21
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // [xsp+0h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int max_length; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB5830 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    sub_1C6BA08(&EquipGraphServantItem_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB5830 = 1;
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
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.sort,
    (int32_t)warBoardSortStatus,
    member,
    (const MethodInfo *)setupInfo);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  if ( !*p_sort )
    goto LABEL_62;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v14, v15);
LABEL_14:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (__int64)this->fields.sort;
    this->fields.isQuestStart = isQuestStart;
    if ( !sort )
      goto LABEL_62;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)sort,
                           0,
                           setupInfo->fields.servantEquipFilterEventCampaignIds,
                           setupInfo->fields.servantEquipFilterEventIds,
                           0,
                           0,
                           isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v20, v21);
    v22 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v22 )
      goto LABEL_62;
    v23 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v14, v15);
    v22 = this->fields.sort;
    if ( !v22 )
      goto LABEL_62;
    v23 = 0;
  }
  v22->fields.isBonusKind = v23;
  if ( !partyItem )
    goto LABEL_62;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0);
  this->fields.baseItem = MemberItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v25, v26);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_62;
  if ( !baseItem->fields.isFollower )
  {
    v28 = (EquipGraphServantItem_o *)sub_1C6BC54(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v28, baseItem, 0, 0, 0);
    this->fields.servantItemInfo = v28;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v28, v29, v30);
    sort = (__int64)this->fields.baseItem;
    if ( !sort )
      goto LABEL_62;
    servantItemInfo = this->fields.servantItemInfo;
    sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
    if ( !servantItemInfo )
      goto LABEL_62;
    EquipGraphServantItem__SetEquipTarget(servantItemInfo, sort, 0);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_62;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, 0, 0, 0);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_62;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    sort = (__int64)this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !sort )
      goto LABEL_62;
    cost = partyItem->fields.cost;
    this->fields.baseCost = cost - EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_62;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_62;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v36 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v37 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUM_INFO"*/, 0);
      if ( !v36 )
        goto LABEL_62;
      v38 = (System_String_o *)sort;
      max_length = v36->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &max_length);
      if ( !SelfUserGame )
        goto LABEL_62;
      v39 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
      sort = (__int64)System_String__Format_64008100(v38, v39, v40, 0);
      if ( !v37 )
        goto LABEL_62;
      UILabel__set_text(v37, (System_String_o *)sort, 0);
    }
    sort = (__int64)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_62;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !*p_sort )
      goto LABEL_62;
    if ( !sort )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !v36 )
      goto LABEL_62;
    v41 = v36->max_length;
    if ( (int)v41 >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= (unsigned int)v41 )
          sub_1C6BC68(sort);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v43 = v36->m_Items[v42];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
        v45 = (EquipGraphListViewItem_o *)sub_1C6BC54(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_41318596(v45, v42, v43, EquipUserSvtId, partyItem, setupInfo, v46);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v49 = *(_QWORD *)(sort + 16);
        v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v49 )
          break;
        v51 = *(int *)(sort + 24);
        if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v45,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = v49 + 8 * v51;
          *(_DWORD *)(sort + 24) = v51 + 1;
          *(_QWORD *)(v52 + 32) = v45;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v45, v47, v48);
        }
        LODWORD(v41) = v36->max_length;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_53;
      }
LABEL_62:
      sub_1C6BC60(sort, v12);
    }
LABEL_53:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_62;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v55 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v56 = *v55;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v56, 0);
    if ( !emptyMessageLabel )
      goto LABEL_62;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
    EquipGraphListViewManager__RefrashListDisp(this, v57);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v58);
  }
}


void EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4CB582B & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    byte_4CB582B = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v2 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0)
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0)
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0) )
  {
    sub_1C6BC60(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


void EquipGraphListViewManager__EndCloseSelectFilterKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void EquipGraphListViewManager__EndCloseSelectSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void EquipGraphListViewManager__EndSelectConfirm(
        EquipGraphListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t EquipUserSvtId; // x20
  struct PartyListViewItem_array *v11; // x8
  int v12; // w9
  PartyListViewItem_o *v13; // x21
  struct PartyListViewItem_array *v14; // x8
  int v15; // w9
  struct EquipGraphListViewItem_o *v16; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v19; // q1
  PartyListViewItem_o *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  Il2CppObject *v24; // x21
  __int64 v25; // x10
  UnityEngine_Object_o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppClass *v29; // x8
  __int64 v30; // x11
  struct EquipGraphListViewItem_o *v31; // x8
  struct ServantEntity_o *v32; // x9
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *klass; // x21
  System_Action_object__o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x21
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppClass *v44; // x8
  __int64 v45; // x11
  struct EquipGraphListViewItem_o *v46; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  System_Action_object__o *v48; // x21
  struct EquipGraphListViewItem_o *v49; // x8
  System_Collections_Generic_List_T__o *v50; // x20
  System_Func_object__bool__o *v51; // x21
  struct EquipGraphListViewItem_o *v52; // x8
  struct UserServantEntity_o *v53; // x9
  int32_t hp; // w21
  int32_t atk; // w22
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  struct EquipGraphListViewItem_o *v59; // x8
  UnityEngine_Object_o *viewObject; // x20
  struct EquipGraphListViewItem_o *v61; // x8
  __int64 v62; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  struct PartyListViewItem_array *waveDeckItemList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v66; // x26
  PartyListViewItem_o *v67; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v69; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v71; // x22
  __int64 v72; // x23
  __int64 v73; // x24
  int v74; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+38h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4CB583D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_0__);
    sub_1C6BA08(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_1__);
    sub_1C6BA08(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_2__);
    sub_1C6BA08(&EquipGraphListViewObject_TypeInfo);
    sub_1C6BA08(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB583D = 1;
  }
  memset(&v79, 0, sizeof(v79));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( !result )
    goto LABEL_86;
  if ( !this->fields.isWaveBattle )
  {
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_109;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v78,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v79 = *(System_Collections_Generic_List_Enumerator_object__o *)&v78.fields.currentCryptoKey;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v33 )
        break;
      current = v79.fields._current;
      if ( !v79.fields._current
        || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
            v79.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EquipGraphListViewItem_c *)v79.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1C6BC60(v33, v34);
      }
      if ( BYTE1(v79.fields._current[9].monitor) )
      {
        BYTE1(v79.fields._current[9].monitor) = 0;
        if ( EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v34) )
        {
          klass = (System_Collections_Generic_List_object__o *)current[17].klass;
          v38 = (System_Action_object__o *)sub_1C6BC54(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v38,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__84_2__,
            0);
          if ( !klass )
            sub_1C6BC60(v39, v40);
          System_Collections_Generic_List_object___ForEach(
            klass,
            (System_Action_T__o *)v38,
            (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
          v41 = (UnityEngine_Object_o *)current[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v42 = UnityEngine_Object__op_Inequality(v41, 0, 0);
          if ( v42 )
          {
            v44 = current[7].klass;
            if ( !v44
              || (v45 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                  *((unsigned __int8 *)v44->_1.image + 304) < (unsigned int)v45)
              || *(EquipGraphListViewObject_c **)(*((_QWORD *)v44->_1.image + 25) + 8 * v45 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1C6BC60(v42, v43);
            }
            EquipGraphListViewObject__Init_42490548((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    goto LABEL_61;
  }
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_109;
  if ( selectItem->fields._OrganizedWave_k__BackingField < 1 )
  {
    if ( selectItem->fields._IsUnique_k__BackingField )
    {
      waveDeckItemList = this->fields.waveDeckItemList;
      if ( !waveDeckItemList )
        goto LABEL_109;
      max_length = waveDeckItemList->max_length;
      if ( (int)max_length >= 1 )
      {
        v66 = 0;
        while ( v66 < (unsigned int)max_length )
        {
          v67 = waveDeckItemList->m_Items[v66];
          for ( i = 0; ; ++i )
          {
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
              break;
            if ( !v67 )
              goto LABEL_109;
            Instance = (int64_t)PartyListViewItem__GetMember(v67, i, 0);
            v69 = this->fields.selectItem;
            if ( !v69 )
              goto LABEL_109;
            servantEntity = v69->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_109;
            v71 = (PartyOrganizationListViewItem_o *)Instance;
            v73 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v72 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v80.fields.currentCryptoKey = v73;
            *(_QWORD *)&v80.fields.fakeValue = v72;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v80, 0);
            if ( !v71 )
              goto LABEL_109;
            v74 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v71, 0);
            if ( v74 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(EquipSvtId, 0) )
              PartyListViewItem__SetEquip(v67, i, 0, 0, 0);
          }
          LODWORD(max_length) = waveDeckItemList->max_length;
          if ( (__int64)++v66 >= (int)max_length )
            goto LABEL_18;
        }
        goto LABEL_114;
      }
    }
  }
  else
  {
    Instance = (int64_t)this->fields.servantItemInfo;
    if ( !Instance )
      goto LABEL_109;
    EquipUserSvtId = 0;
    if ( EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)Instance, 0) )
    {
      Instance = (int64_t)this->fields.servantItemInfo;
      if ( !Instance )
        goto LABEL_109;
      EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, 0);
    }
    Instance = (int64_t)this->fields.selectItem;
    if ( !Instance || (v11 = this->fields.waveDeckItemList) == 0 )
LABEL_109:
      sub_1C6BC60(Instance, v6);
    v12 = *(_DWORD *)(Instance + 224) - 1;
    if ( (unsigned int)v12 >= LODWORD(v11->max_length) )
LABEL_114:
      sub_1C6BC68(Instance);
    v13 = v11->m_Items[v12];
    Instance = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)Instance, v6);
    if ( !Instance || !v13 )
      goto LABEL_109;
    PartyListViewItem__SetEquip(v13, *(_DWORD *)(Instance + 16), EquipUserSvtId, 0, 0);
  }
LABEL_18:
  v14 = this->fields.waveDeckItemList;
  if ( !v14 )
    goto LABEL_109;
  v15 = this->fields.partyNumber - 1;
  if ( (unsigned int)v15 >= LODWORD(v14->max_length) )
    goto LABEL_114;
  v16 = this->fields.selectItem;
  if ( !v16 )
    goto LABEL_109;
  userSvtEntity = v16->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_109;
  memberIndex = this->fields.memberIndex;
  v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v20 = v14->m_Items[v15];
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v77 = v78;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v77, 0);
  if ( !v20 )
    goto LABEL_109;
  PartyListViewItem__SetEquip(v20, memberIndex, Instance, 0, 0);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v79 = v76;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    v24 = v79.fields._current;
    if ( !v79.fields._current
      || (v25 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v79.fields._current->klass->_2.naturalAligment < (unsigned int)v25)
      || (EquipGraphListViewItem_c *)v79.fields._current->klass->_2.typeHierarchy[v25 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C6BC60(v21, v22);
    }
    if ( BYTE1(v79.fields._current[9].monitor) )
      LOWORD(v79.fields._current[9].monitor) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v24,
      this->fields.waveDeckItemList,
      v20,
      this->fields.memberIndex,
      v23);
    v26 = (UnityEngine_Object_o *)v24[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(v26, 0, 0);
    if ( v27 )
    {
      v29 = v24[7].klass;
      if ( !v29
        || (v30 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
            *((unsigned __int8 *)v29->_1.image + 304) < (unsigned int)v30)
        || *(EquipGraphListViewObject_c **)(*((_QWORD *)v29->_1.image + 25) + 8 * v30 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1C6BC60(v27, v28);
      }
      EquipGraphListViewObject__Init_42490548((EquipGraphListViewObject_o *)v24[7].klass, 4, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v31 = this->fields.selectItem;
  if ( !v31 )
    goto LABEL_109;
  v32 = v31->fields.servantEntity;
  if ( v32 )
    LODWORD(v32) = v32->fields.cost;
  this->fields.baseCost = v20->fields.cost - (_DWORD)v32;
LABEL_61:
  v46 = this->fields.selectItem;
  if ( !v46 )
    goto LABEL_109;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v46->fields.wearerMemberInfoList;
  v46->fields.isBase = 1;
  v48 = (System_Action_object__o *)sub_1C6BC54(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Action_object____ctor(
    v48,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__84_0__,
    0);
  if ( !wearerMemberInfoList )
    goto LABEL_109;
  System_Collections_Generic_List_object___ForEach(
    wearerMemberInfoList,
    (System_Action_T__o *)v48,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v49 = this->fields.selectItem;
  if ( !v49 )
    goto LABEL_109;
  v50 = (System_Collections_Generic_List_T__o *)v49->fields.wearerMemberInfoList;
  v51 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v51,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__84_1__,
    0);
  Instance = BasicHelper__Any_object_(
               v50,
               (System_Func_T__bool__o *)v51,
               (const MethodInfo_3124430 *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
  v52 = this->fields.selectItem;
  if ( (Instance & 1) != 0 )
  {
    if ( !v52 )
      goto LABEL_109;
    v53 = v52->fields.userSvtEntity;
    if ( v53 )
    {
      hp = v53->fields.hp;
      atk = v53->fields.atk;
      goto LABEL_70;
    }
  }
  else if ( !v52 )
  {
    goto LABEL_109;
  }
  hp = 0;
  atk = 0;
LABEL_70:
  v56 = v52->fields.userSvtEntity;
  if ( !v56 )
    goto LABEL_109;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v75 = v78;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v75, 0);
  if ( !servantItemInfo )
    goto LABEL_109;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, 0);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_109;
  EquipGraphServantItemDraw__SetItem(
    (EquipGraphServantItemDraw_o *)Instance,
    this->fields.servantItemInfo,
    this->fields.addBaseHp - hp,
    this->fields.addBaseAtk - atk,
    0);
  Instance = (int64_t)this->fields.bondSkillChangeMessageLabel;
  if ( !Instance )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.equipGraphType == 1, 0);
  v59 = this->fields.selectItem;
  if ( !v59 )
    goto LABEL_109;
  viewObject = (UnityEngine_Object_o *)v59->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0, 0);
  if ( (Instance & 1) == 0 )
    goto LABEL_85;
  v61 = this->fields.selectItem;
  if ( !v61 )
    goto LABEL_109;
  Instance = (int64_t)v61->fields.viewObject;
  if ( !Instance )
    goto LABEL_109;
  v62 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v62
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v62 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_109;
  }
  EquipGraphListViewObject__Init_42490548((EquipGraphListViewObject_o *)Instance, 4, 1, 0);
LABEL_85:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_86:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))selectItemCallbackFunc->fields.invoke_impl)(
      selectItemCallbackFunc->fields.method_code,
      selectItemCallbackFunc->fields.method);
  }
}


void EquipGraphListViewManager__EndSelectFilterKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CB583F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB583F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CB5843 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB5843 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C6BC60(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 naturalAligment; // x11
  _QWORD *monitor; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CB5846 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB5846 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C6BC60(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v15 = v14;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C6BC60(v7, v8);
    }
    monitor = v15.fields._current[7].monitor;
    if ( !monitor )
      sub_1C6BC60(v7, v8);
    v12 = monitor[10];
    v11 = monitor[11];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


bool EquipGraphListViewManager__GetFocusItemIndex(
        EquipGraphListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_4CB5847 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB5847 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C6BC60(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EquipGraphListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( BYTE1(this->fields.listDragPrefab) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


EquipGraphListViewItem_o *EquipGraphListViewManager__GetItem(
        EquipGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CB5832 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB5832 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EquipGraphListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
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


System_String_o *EquipGraphListViewManager__GetScaleButtonSpriteName(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


int32_t EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x11
  int32_t v7; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB583A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CB583A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C6BC60(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
    {
      v7 = *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_14);
      goto LABEL_12;
    }
  }
  v7 = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v7;
}


EquipGraphListViewItem_o *EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB583B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CB583B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C6BC60(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (EquipGraphListViewItem_o *)current;
}


EquipGraphServantItem_o *EquipGraphListViewManager__GetServantItemInfo(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


bool EquipGraphListViewManager__GetSwapChoiceList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4CB5834 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB5834 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 185) )
      {
        if ( *(_BYTE *)(itemList + 155) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v39, 0);
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
              *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v38, 0);
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
    sub_1C6BC60(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_4CB5833 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB5833 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 184) )
      {
        if ( *(_BYTE *)(itemList + 154) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v39, 0);
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
              *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v38, 0);
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
    sub_1C6BC60(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4CB582C & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    byte_4CB582C = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v2 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0)
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0)
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0) )
  {
    sub_1C6BC60(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0);
}


void EquipGraphListViewManager__ModifyList(
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
  struct System_Threading_SynchronizationContext_o **v11; // x21
  DataManager_c *v12; // t1
  Il2CppType byval_arg; // q0
  int64_t v14; // x0
  DataManager_o *v15; // x22
  int32_t v16; // w23
  DataManager_o *v17; // x24
  __int64 naturalAligment; // x10
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int128 v20; // q0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Threading_SynchronizationContext_o *v23; // x1
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v32; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-80h]

  if ( (byte_4CB5831 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB5831 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
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
      v11 = (struct System_Threading_SynchronizationContext_o **)(v9 + 4);
      v10 = v12;
      if ( !v12 )
        break;
      byval_arg = v10->_1.byval_arg;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v10->_1.name;
      *(Il2CppType *)&v35.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v34, 0);
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
                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v17 = Instance;
          naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
          if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (EquipGraphListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          context = Instance->fields.context;
          if ( context )
          {
            v20 = *(_OWORD *)&context[1].monitor;
            *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
            *(_OWORD *)&v35.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v33 = v35;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v33, 0);
            if ( Instance == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_27;
        }
        if ( v8 >= LODWORD(v32->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v23 = *v11;
        v17->fields.context = *v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v17->fields.context, (int32_t)v23, v21, v22);
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
        sub_1C6BC68(Instance);
    }
LABEL_44:
    sub_1C6BC60(Instance, v5);
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
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v27 = (ListViewItem_o *)Item;
        v28 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v28
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v28 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (DataManager_o *)v27->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v25 )
        return;
    }
  }
}


void EquipGraphListViewManager__OnClickBonusFilterKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4CB5841 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_4CB5841 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C6BC60(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = EquipGraphListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Select,
      callbackFunc->fields.method);
  }
}


void EquipGraphListViewManager__OnClickEquipExplanation(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v7; // x1
  unsigned int Select; // w0

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_1C6BC60(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
    if ( callbackFunc )
    {
      Select = EquipGraphListViewManager__GetSelect(this, v7);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        3,
        Select,
        callbackFunc->fields.method);
    }
  }
}


void EquipGraphListViewManager__OnClickFilterKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t equipGraphType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4CB583E & 1) == 0 )
  {
    sub_1C6BA08(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_1C6BA08(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB583E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0);
    if ( !v8 )
      sub_1C6BC60(v10, v11);
    if ( equipGraphType == 2 )
      v12 = 16;
    else
      v12 = 5;
    CommonUI__OpenServantFilterSelectMenu_31424508(v8, v12, sort, (ListViewManager_o *)this, v9, -1, 0);
  }
}


void EquipGraphListViewManager__OnClickListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void EquipGraphListViewManager__OnClickSelectListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v6, v7);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void EquipGraphListViewManager__OnClickSortAscendingOrder(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CB5844 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4CB5844 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C6BC60(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CB5842 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_1C6BA08(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB5842 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C6BC60(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 4, sort, 0, v8, 0);
  }
}


void EquipGraphListViewManager__OnLongPushListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  EquipGraphListViewManager_o *v4; // x20
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
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
    sub_1C6BC60(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        3,
        Index,
        callbackFunc->fields.method);
      return;
    }
    goto LABEL_8;
  }
}


void EquipGraphListViewManager__OnMoveEnd(EquipGraphListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CB5839 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5839 = 1;
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
          sub_1C6BC60(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  int32_t baseCost; // w20
  int32_t v9; // w22
  UILabel_o *v10; // x20
  System_String_o **v11; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB5835 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_12484/*"SUM_OVER_INFO"*/);
    sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB5835 = 1;
  }
  ObjectList = (int *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_20;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( ObjectList[6] >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (int *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            v6,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      (*(void (__fastcall **)(int *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
        ObjectList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
      if ( ++v6 >= v5->fields._size )
        goto LABEL_8;
    }
LABEL_20:
    sub_1C6BC60(ObjectList, v4);
  }
LABEL_8:
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoData2Label, 0, 0) )
  {
    ObjectList = (int *)this->fields.servantItemInfo;
    if ( !ObjectList )
      goto LABEL_20;
    baseCost = this->fields.baseCost;
    v9 = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)ObjectList, 0) + baseCost;
    v10 = this->fields.infoData2Label;
    v11 = v9 <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12483/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12484/*"SUM_OVER_INFO"*/;
    v12 = *v11;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get(v12, 0);
    v17 = v9;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    maxCost = this->fields.maxCost;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = (int *)System_String__Format_64008100(v13, v14, v15, 0);
    if ( !v10 )
      goto LABEL_20;
    UILabel__set_text(v10, (System_String_o *)ObjectList, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject(
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB5837 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C6BA08(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB5837 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      EquipGraphListViewObject__Init_42491344((EquipGraphListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject_41335472(
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB5838 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C6BA08(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB5838 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      EquipGraphListViewObject__Init_42491432((EquipGraphListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct EquipGraphListViewItem_o **p_selectItem; // x21
  CGThumbnailListItem_o *p_selectItemCallbackFunc; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  __int64 selectItem; // x0
  int v13; // w25
  EquipGraphListViewObject_o *v14; // x8
  __int64 naturalAligment; // x11
  EquipGraphListViewObject_o *v16; // x24
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v20; // w9
  struct EquipGraphListViewItem_o *v21; // x8
  _QWORD *v22; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w20
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x2
  struct PartyListViewItem_array *v26; // x8
  int v27; // w9
  PartyListViewItem_o *v28; // x20
  int32_t cost; // w23
  Il2CppObject *Instance; // x20
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  NotificationDialog_ClickDelegate_o *v33; // x23
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x21
  System_Action_object__o *v35; // x23
  bool v36; // w1
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _QWORD *v40; // x0
  _BOOL4 v41; // w20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  CGThumbnailListItem_c *klass; // x19
  bool IsUse; // w0
  _QWORD *v46; // x8
  bool v47; // w23
  System_Reflection_MethodBase_o *v48; // x0
  System_Collections_Generic_List_object__o *v49; // x20
  __int64 v50; // x21
  System_String_o *v51; // x20
  System_Object_array *v52; // x22
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x23
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x23
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x23
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x23
  struct EquipGraphServantItem_o *v65; // x8
  int32_t rarityId; // w23
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x21
  System_String_o *v73; // x0
  System_Object_array *v74; // x1
  struct PartyListViewItem_array *v75; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v77; // x29
  int32_t v78; // w22
  PartyListViewItem_o *v79; // x20
  int32_t v80; // w23
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v82; // x24
  __int64 v83; // x25
  __int64 v84; // x26
  int v85; // w25
  ServantEntity_o *v86; // x20
  struct PartyListViewItem_array *v87; // x8
  int v88; // w9
  struct EquipGraphListViewItem_o *v89; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v92; // q1
  PartyListViewItem_o *v93; // x24
  _BOOL8 v94; // x0
  const MethodInfo *v95; // x1
  Il2CppObject *current; // x23
  __int64 v97; // x10
  int monitor_low; // w8
  int v99; // w24
  _BOOL4 v100; // w0
  System_Collections_Generic_List_object__o *v101; // x24
  System_Action_object__o *v102; // x25
  __int64 v103; // x0
  __int64 v104; // x1
  UnityEngine_Object_o *v105; // x24
  _BOOL8 v106; // x0
  __int64 v107; // x1
  Il2CppClass *v108; // x8
  __int64 v109; // x11
  struct EquipGraphListViewItem_o *v110; // x8
  struct UserServantEntity_o *v111; // x9
  __int128 v112; // q1
  EquipGraphServantItem_o *v113; // x21
  EquipGraphListViewItem_WearerMemberInfo_o *WearerMemberInfo; // x22
  System_String_o *v115; // x20
  struct EquipGraphListViewItem_o *v116; // x8
  System_Object_array *v117; // x21
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x23
  int32_t WearerSvtRarity_k__BackingField; // w23
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  Il2CppObject *v124; // x23
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  Il2CppObject *WearerServantClassName_k__BackingField; // x23
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  Il2CppObject *WearerServantName_k__BackingField; // x22
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  Il2CppObject *v133; // x22
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  Il2CppObject *v137; // x22
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  Il2CppObject *v140; // x22
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  Il2CppObject *v143; // x22
  CGThumbnailListItem_o *v144; // x0
  struct EquipGraphListViewItem_o *v145; // x8
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  Il2CppObject *v148; // x23
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  Il2CppObject *v151; // x23
  int32_t v152; // w23
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  Il2CppObject *v155; // x23
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  Il2CppObject *v158; // x23
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  Il2CppObject *v161; // x22
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  Il2CppObject *v164; // x22
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  Il2CppObject *v167; // x22
  struct EquipGraphServantItem_o *v168; // x8
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  Il2CppObject *v171; // x22
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  Il2CppObject *v174; // x22
  System_String_o *v175; // x20
  Il2CppObject *v176; // x21
  System_String_o *v177; // x22
  System_String_o *v178; // x23
  System_String_o *v179; // x24
  CommonConfirmDialog_ClickDelegate_o *v180; // x25
  System_Func_object__bool__o *v181; // x21
  Il2CppObject *v182; // x22
  System_String_o *v183; // x20
  System_Object_array *v184; // x21
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  __int64 v187; // x23
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  Il2CppClass *v190; // x23
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  __int64 v193; // x23
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  Il2CppClass *v196; // x23
  struct EquipGraphServantItem_o *v197; // x8
  int32_t v198; // w23
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  __int64 v201; // x23
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  __int64 v204; // x22
  System_String_o *v205; // x20
  Il2CppObject *v206; // x21
  System_String_o *v207; // x22
  CommonConfirmDialog_ClickDelegate_o *v208; // x23
  struct UserServantEntity_o *userServantEntity; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v211; // w24
  System_String_o *v212; // x21
  System_Object_array *v213; // x23
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  Il2CppObject *v216; // x22
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  Il2CppObject *v219; // x22
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  Il2CppObject *v222; // x22
  __int64 v223; // x22
  __int64 v224; // x24
  int32_t v225; // w0
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  Il2CppObject *v228; // x20
  CGThumbnailListItem_o *v229; // x0
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  Il2CppObject *v232; // x22
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  Il2CppObject *v235; // x22
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  Il2CppObject *v238; // x22
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  Il2CppObject *v241; // x22
  __int64 v242; // x22
  __int64 v243; // x24
  int32_t v244; // w0
  System_String_o *v245; // x20
  Il2CppObject *v246; // x21
  System_String_o *v247; // x22
  System_String_o *v248; // x23
  System_String_o *v249; // x24
  CommonConfirmDialog_ClickDelegate_o *v250; // x25
  __int64 v251; // x0
  struct PartyListViewItem_array *v252; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v253; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v254; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v255; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v256; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v259; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16

  if ( (byte_4CB583C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&EquipGraphListViewItem_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_1C6BA08(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_1C6BA08(&Method_EquipGraphListViewManager__SelectEquip_b__83_0__);
    sub_1C6BA08(&Method_EquipGraphListViewManager__SelectEquip_b__83_1__);
    sub_1C6BA08(&Method_EquipGraphListViewManager__SelectEquip_b__83_2__);
    sub_1C6BA08(&Method_EquipGraphListViewManager__SelectEquip_b__83_3__);
    sub_1C6BA08(&EquipGraphListViewObject_TypeInfo);
    sub_1C6BA08(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Rarity_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_15500/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15501/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_1C6BA08(&StringLiteral_15494/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15496/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_5486/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_1C6BA08(&StringLiteral_5484/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15497/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15490/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3680/*"COMMON_CONFIRM_NO"*/);
    sub_1C6BA08(&StringLiteral_3685/*"COMMON_CONFIRM_YES"*/);
    sub_1C6BA08(&StringLiteral_5485/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_15489/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_4CB583C = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v259, 0, sizeof(v259));
  this->fields.selectItem = item;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectItem, (int32_t)item, (int32_t)callback, method);
  p_selectItemCallbackFunc = (CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v9, v10);
  selectItem = (__int64)this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_327;
  if ( *(_BYTE *)(selectItem + 264) )
    v13 = *(unsigned __int8 *)(selectItem + 265) ^ 1;
  else
    v13 = 0;
  v14 = *(EquipGraphListViewObject_o **)(selectItem + 112);
  *(_BYTE *)(selectItem + 265) = 1;
  if ( v14
    && (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        v14->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EquipGraphListViewObject_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewObject_TypeInfo )
      v16 = v14;
    else
      v16 = 0;
  }
  else
  {
    v16 = 0;
  }
  if ( *(_BYTE *)(selectItem + 153) )
  {
    v17 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_SelectEquip__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    if ( !this->fields.isWaveBattle )
      goto LABEL_21;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_327;
    v20 = this->fields.partyNumber - 1;
    if ( (unsigned int)v20 < LODWORD(waveDeckItemList->max_length) )
    {
      selectItem = (__int64)waveDeckItemList->m_Items[v20];
      if ( !selectItem )
        goto LABEL_327;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)selectItem, this->fields.memberIndex, 0, 0, 0);
LABEL_21:
      selectItem = (__int64)*p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_327;
      *(_BYTE *)(selectItem + 153) = 0;
      selectItem = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v11);
      v21 = *p_selectItem;
      if ( v13 || (selectItem & 1) == 0 )
      {
        if ( !v21 )
          goto LABEL_327;
        if ( v21->fields._OrganizedWave_k__BackingField <= 0 && !v21->fields._IsUnique_k__BackingField )
        {
LABEL_51:
          selectItem = (__int64)this->fields.servantItemInfo;
          if ( selectItem )
          {
            EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)selectItem, 0, 0);
            selectItem = (__int64)this->fields.servantItemDraw;
            if ( selectItem )
            {
              EquipGraphServantItemDraw__SetItem(
                (EquipGraphServantItemDraw_o *)selectItem,
                this->fields.servantItemInfo,
                this->fields.addBaseHp,
                this->fields.addBaseAtk,
                0);
              selectItem = (__int64)this->fields.bondSkillChangeMessageLabel;
              if ( selectItem )
              {
                v36 = 0;
                goto LABEL_55;
              }
            }
          }
          goto LABEL_327;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_327;
      }
      wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v21->fields.wearerMemberInfoList;
      v35 = (System_Action_object__o *)sub_1C6BC54(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
      System_Action_object____ctor(
        v35,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__83_0__,
        0);
      if ( !wearerMemberInfoList )
        goto LABEL_327;
      System_Collections_Generic_List_object___ForEach(
        wearerMemberInfoList,
        (System_Action_T__o *)v35,
        (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v16 )
        goto LABEL_327;
      EquipGraphListViewObject__Init_42490548(v16, 4, 0, 0);
      goto LABEL_51;
    }
LABEL_329:
    sub_1C6BC68(selectItem);
  }
  if ( *(int *)(selectItem + 224) >= 1 )
  {
    if ( !item )
      goto LABEL_327;
    v22 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_SelectEquip__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v22, v22[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
      if ( (selectItem & 1) != 0 )
      {
        v26 = this->fields.waveDeckItemList;
        if ( !v26 )
          goto LABEL_327;
        v27 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( (unsigned int)v27 >= LODWORD(v26->max_length) )
          goto LABEL_329;
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        v28 = v26->m_Items[v27];
        selectItem = (__int64)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v11);
        if ( !selectItem )
          goto LABEL_327;
        if ( !v28 )
          goto LABEL_327;
        selectItem = (__int64)PartyListViewItem__GetMember(v28, *(_DWORD *)(selectItem + 16), 0);
        if ( !selectItem )
          goto LABEL_327;
        cost = v28->fields.cost;
        selectItem = PartyOrganizationListViewItem__get_EquipCost((PartyOrganizationListViewItem_o *)selectItem, 0);
        if ( !this->fields.servantItemInfo )
          goto LABEL_327;
        if ( cost - (int)selectItem + EquipGraphServantItem__get_EquipCost(this->fields.servantItemInfo, 0) > v28->fields.maxCost )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15490/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0);
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15489/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0);
          v33 = (NotificationDialog_ClickDelegate_o *)sub_1C6BC54(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v33,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__83_1__,
            0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_31419992(
              (CommonUI_o *)Instance,
              v31,
              v32,
              v33,
              -1,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0);
            return;
          }
          goto LABEL_327;
        }
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        WearerMemberInfo = EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v11);
        if ( this->fields.questRestrictionInfo
          && QuestRestrictionInfo__IsWaveSetupSwitchParty(this->fields.questRestrictionInfo, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_15497/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C6BAB0(object___TypeInfo, 8);
          v116 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v117 = (System_Object_array *)selectItem;
          selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(
                                  v116->fields._OrganizedWave_k__BackingField,
                                  0);
          if ( !v117 )
            goto LABEL_327;
          v120 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v117->max_length) )
              goto LABEL_329;
            v117->m_Items[0] = v120;
            sub_1C6B9AC((CGThumbnailListItem_o *)v117->m_Items, (int32_t)v120, v118, v119);
            if ( !WearerMemberInfo )
              goto LABEL_327;
            WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            selectItem = (__int64)Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0);
            v124 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v117->max_length) <= 1 )
                goto LABEL_329;
              v117->m_Items[1] = v124;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[1], (int32_t)v124, v122, v123);
              WearerServantClassName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !WearerServantClassName_k__BackingField
                || (selectItem = sub_1C6BB44(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   v117->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v117->max_length) <= 2 )
                  goto LABEL_329;
                v117->m_Items[2] = WearerServantClassName_k__BackingField;
                sub_1C6B9AC(
                  (CGThumbnailListItem_o *)&v117->m_Items[2],
                  (int32_t)WearerServantClassName_k__BackingField,
                  v125,
                  v126);
                WearerServantName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !WearerServantName_k__BackingField
                  || (selectItem = sub_1C6BB44(WearerServantName_k__BackingField, v117->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v117->max_length) <= 3 )
                    goto LABEL_329;
                  v117->m_Items[3] = WearerServantName_k__BackingField;
                  sub_1C6B9AC(
                    (CGThumbnailListItem_o *)&v117->m_Items[3],
                    (int32_t)WearerServantName_k__BackingField,
                    v128,
                    v129);
                  selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(this->fields.partyNumber, 0);
                  v133 = (Il2CppObject *)selectItem;
                  if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v117->max_length) <= 4 )
                      goto LABEL_329;
                    v117->m_Items[4] = v133;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[4], (int32_t)v133, v131, v132);
                    servantItemInfo = this->fields.servantItemInfo;
                    if ( !servantItemInfo )
                      goto LABEL_327;
                    selectItem = (__int64)Rarity__getRarityType(servantItemInfo->fields.rarityId, 0);
                    v137 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v117->max_length) <= 5 )
                        goto LABEL_329;
                      v117->m_Items[5] = v137;
                      sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[5], (int32_t)v137, v135, v136);
                      selectItem = (__int64)this->fields.servantItemInfo;
                      if ( !selectItem )
                        goto LABEL_327;
                      selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                              (EquipGraphServantItem_o *)selectItem,
                                              0);
                      v140 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v117->max_length) <= 6 )
                          goto LABEL_329;
                        v117->m_Items[6] = v140;
                        sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[6], (int32_t)v140, v138, v139);
                        selectItem = (__int64)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_327;
                        selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0);
                        v143 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v117->max_length) <= 7 )
                            goto LABEL_329;
                          v117->m_Items[7] = v143;
                          v144 = (CGThumbnailListItem_o *)&v117->m_Items[7];
                          goto LABEL_239;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_15500/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C6BAB0(object___TypeInfo, 10);
          v145 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v117 = (System_Object_array *)selectItem;
          LODWORD(v255.fields.currentCryptoKey) = v145->fields._OrganizedWave_k__BackingField;
          selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v255);
          if ( !v117 )
            goto LABEL_327;
          v148 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v117->max_length) )
              goto LABEL_329;
            v117->m_Items[0] = v148;
            sub_1C6B9AC((CGThumbnailListItem_o *)v117->m_Items, (int32_t)v148, v146, v147);
            maxWave = this->fields.maxWave;
            selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
            v151 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v117->max_length) <= 1 )
                goto LABEL_329;
              v117->m_Items[1] = v151;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[1], (int32_t)v151, v149, v150);
              if ( !WearerMemberInfo )
                goto LABEL_327;
              v152 = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              selectItem = (__int64)Rarity__getRarityType(v152, 0);
              v155 = (Il2CppObject *)selectItem;
              if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v117->max_length) <= 2 )
                  goto LABEL_329;
                v117->m_Items[2] = v155;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[2], (int32_t)v155, v153, v154);
                v158 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
                if ( !v158
                  || (selectItem = sub_1C6BB44(
                                     WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                     v117->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v117->max_length) <= 3 )
                    goto LABEL_329;
                  v117->m_Items[3] = v158;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[3], (int32_t)v158, v156, v157);
                  v161 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                  if ( !v161 || (selectItem = sub_1C6BB44(v161, v117->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v117->max_length) <= 4 )
                      goto LABEL_329;
                    v117->m_Items[4] = v161;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[4], (int32_t)v161, v159, v160);
                    partyNumber = this->fields.partyNumber;
                    selectItem = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                    v164 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v117->max_length) <= 5 )
                        goto LABEL_329;
                      v117->m_Items[5] = v164;
                      sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[5], (int32_t)v164, v162, v163);
                      v256 = this->fields.maxWave;
                      selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v256);
                      v167 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v117->max_length) <= 6 )
                          goto LABEL_329;
                        v117->m_Items[6] = v167;
                        sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[6], (int32_t)v167, v165, v166);
                        v168 = this->fields.servantItemInfo;
                        if ( !v168 )
                          goto LABEL_327;
                        selectItem = (__int64)Rarity__getRarityType(v168->fields.rarityId, 0);
                        v171 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v117->max_length) <= 7 )
                            goto LABEL_329;
                          v117->m_Items[7] = v171;
                          sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[7], (int32_t)v171, v169, v170);
                          selectItem = (__int64)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_327;
                          selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0);
                          v174 = (Il2CppObject *)selectItem;
                          if ( !selectItem
                            || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( LODWORD(v117->max_length) <= 8 )
                              goto LABEL_329;
                            v117->m_Items[8] = v174;
                            sub_1C6B9AC((CGThumbnailListItem_o *)&v117->m_Items[8], (int32_t)v174, v172, v173);
                            selectItem = (__int64)this->fields.servantItemInfo;
                            if ( !selectItem )
                              goto LABEL_327;
                            selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                    (EquipGraphServantItem_o *)selectItem,
                                                    0);
                            v143 = (Il2CppObject *)selectItem;
                            if ( !selectItem
                              || (selectItem = sub_1C6BB44(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v117->max_length) <= 9 )
                                goto LABEL_329;
                              v117->m_Items[9] = v143;
                              v144 = (CGThumbnailListItem_o *)&v117->m_Items[9];
LABEL_239:
                              sub_1C6B9AC(v144, (int32_t)v143, v141, v142);
                              v175 = System_String__Format_64008236(v115, v117, 0);
                              v176 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v177 = LocalizationManager__Get((System_String_o *)StringLiteral_15501/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0);
                              v178 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_YES"*/, 0);
                              v179 = LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_NO"*/, 0);
                              v180 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v180,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0);
                              if ( v176 )
                              {
                                CommonUI__OpenConfirmDialog_31417724(
                                  (CommonUI_o *)v176,
                                  v177,
                                  v175,
                                  v178,
                                  v179,
                                  v180,
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
                                  0);
                                return;
                              }
                              goto LABEL_327;
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
        }
LABEL_332:
        v251 = sub_1C6BC84(selectItem);
        sub_1C6BB30(v251, 0);
      }
LABEL_120:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v25);
      return;
    }
LABEL_62:
    OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0;
      sub_1C6B9AC(p_selectItemCallbackFunc, 0, v42, v43);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  if ( !*(_BYTE *)(selectItem + 236) )
  {
    IsUse = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v11);
    v46 = Method_EquipGraphListViewManager_SelectEquip__;
    v47 = IsUse;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_SelectEquip__);
    v48 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v46, v46[4]);
    OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
    if ( !v47 )
    {
      if ( this->fields.isWaveBattle )
      {
        v87 = this->fields.waveDeckItemList;
        if ( !v87 )
          goto LABEL_327;
        v88 = this->fields.partyNumber - 1;
        if ( (unsigned int)v88 >= LODWORD(v87->max_length) )
          goto LABEL_329;
        v89 = this->fields.selectItem;
        if ( !v89 )
          goto LABEL_327;
        userSvtEntity = v89->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_327;
        memberIndex = this->fields.memberIndex;
        v92 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v93 = v87->m_Items[v88];
        *(_OWORD *)&v255.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v255.fields.fakeValue = v92;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v254 = v255;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v254, 0);
        if ( !v93 )
          goto LABEL_327;
        PartyListViewItem__SetEquip(v93, memberIndex, selectItem, 0, 0);
      }
      selectItem = (__int64)this->fields.itemList;
      if ( selectItem )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v255,
          (System_Collections_Generic_List_object__o *)selectItem,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v259 = *(System_Collections_Generic_List_Enumerator_object__o *)&v255.fields.currentCryptoKey;
        while ( 1 )
        {
          v94 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v259,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v94 )
            break;
          current = v259.fields._current;
          if ( !v259.fields._current
            || (v97 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
                v259.fields._current->klass->_2.naturalAligment < (unsigned int)v97)
            || (EquipGraphListViewItem_c *)v259.fields._current->klass->_2.typeHierarchy[v97 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            sub_1C6BC60(v94, v95);
          }
          if ( BYTE1(v259.fields._current[9].monitor) )
          {
            monitor_low = LOBYTE(v259.fields._current[16].monitor);
            BYTE1(v259.fields._current[9].monitor) = 0;
            v99 = monitor_low ? BYTE1(current[16].monitor) ^ 1 : 0;
            if ( (v100 = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v95), !v99) && v100
              || SLODWORD(current[14].klass) > 0
              || BYTE4(current[14].monitor) )
            {
              v101 = (System_Collections_Generic_List_object__o *)current[17].klass;
              v102 = (System_Action_object__o *)sub_1C6BC54(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
              System_Action_object____ctor(
                v102,
                (Il2CppObject *)this,
                Method_EquipGraphListViewManager__SelectEquip_b__83_3__,
                0);
              if ( !v101 )
                sub_1C6BC60(v103, v104);
              System_Collections_Generic_List_object___ForEach(
                v101,
                (System_Action_T__o *)v102,
                (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
              v105 = (UnityEngine_Object_o *)current[7].klass;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v106 = UnityEngine_Object__op_Inequality(v105, 0, 0);
              if ( v106 )
              {
                v108 = current[7].klass;
                if ( !v108
                  || (v109 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                      *((unsigned __int8 *)v108->_1.image + 304) < (unsigned int)v109)
                  || *(EquipGraphListViewObject_c **)(*((_QWORD *)v108->_1.image + 25) + 8 * v109 - 8) != EquipGraphListViewObject_TypeInfo )
                {
                  sub_1C6BC60(v106, v107);
                }
                EquipGraphListViewObject__Init_42490548((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v259,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v110 = *p_selectItem;
        if ( *p_selectItem )
        {
          v111 = v110->fields.userSvtEntity;
          v110->fields.isBase = 1;
          if ( v111 )
          {
            v112 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
            v113 = this->fields.servantItemInfo;
            *(_OWORD *)&v255.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v255.fields.fakeValue = v112;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v253 = v255;
            selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v253, 0);
            if ( v113 )
            {
              EquipGraphServantItem__SetEquipTarget(v113, selectItem, 0);
              selectItem = (__int64)this->fields.servantItemDraw;
              if ( selectItem )
              {
                EquipGraphServantItemDraw__SetItem(
                  (EquipGraphServantItemDraw_o *)selectItem,
                  this->fields.servantItemInfo,
                  this->fields.addBaseHp,
                  this->fields.addBaseAtk,
                  0);
                selectItem = (__int64)this->fields.bondSkillChangeMessageLabel;
                if ( selectItem )
                {
                  v36 = this->fields.equipGraphType == 1;
LABEL_55:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v36, 0);
                  EquipGraphListViewManager__RefrashListDisp(this, v37);
                  if ( callback )
                  {
                    p_selectItemCallbackFunc->klass = 0;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v38, v39);
                    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
                      callback->fields.method_code,
                      callback->fields.method);
                  }
                  return;
                }
              }
            }
          }
        }
      }
LABEL_327:
      sub_1C6BC60(selectItem, v11);
    }
    if ( !*p_selectItem )
      goto LABEL_327;
    v49 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
    if ( !v49 )
      goto LABEL_327;
    if ( v49->fields._size == 1 )
    {
      selectItem = (__int64)System_Collections_Generic_List_object___get_Item(
                              v49,
                              0,
                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
      if ( !selectItem )
        goto LABEL_327;
      v50 = selectItem;
      if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
        goto LABEL_120;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5484/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0);
      selectItem = sub_1C6BAB0(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v52 = (System_Object_array *)selectItem;
      selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v52 )
        goto LABEL_327;
      v55 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v52->max_length) )
        goto LABEL_329;
      v52->m_Items[0] = (Il2CppObject *)v55;
      sub_1C6B9AC((CGThumbnailListItem_o *)v52->m_Items, v55, v53, v54);
      v58 = *(Il2CppObject **)(v50 + 32);
      if ( v58 )
      {
        selectItem = sub_1C6BB44(*(_QWORD *)(v50 + 32), v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 1 )
        goto LABEL_329;
      v52->m_Items[1] = v58;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v52->m_Items[1], (int32_t)v58, v56, v57);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v61 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 2 )
        goto LABEL_329;
      v52->m_Items[2] = (Il2CppObject *)v61;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v52->m_Items[2], v61, v59, v60);
      v64 = *(Il2CppObject **)(v50 + 48);
      if ( v64 )
      {
        selectItem = sub_1C6BB44(*(_QWORD *)(v50 + 48), v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 3 )
        goto LABEL_329;
      v52->m_Items[3] = v64;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v52->m_Items[3], (int32_t)v64, v62, v63);
      v65 = this->fields.servantItemInfo;
      if ( !v65 )
        goto LABEL_327;
      rarityId = v65->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (__int64)Rarity__getRarityType(rarityId, 0);
      v69 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 4 )
        goto LABEL_329;
      v52->m_Items[4] = (Il2CppObject *)v69;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v52->m_Items[4], v69, v67, v68);
      selectItem = (__int64)Rarity__getRarityType(*(_DWORD *)(v50 + 60), 0);
      v72 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 5 )
        goto LABEL_329;
      v52->m_Items[5] = (Il2CppObject *)v72;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v52->m_Items[5], v72, v70, v71);
      v73 = v51;
      v74 = v52;
    }
    else
    {
      v181 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v181,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__83_2__,
        0);
      v182 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
               (System_Collections_Generic_IEnumerable_TSource__o *)v49,
               (System_Func_TSource__bool__o *)v181,
               (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v183 = LocalizationManager__Get((System_String_o *)StringLiteral_5485/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0);
      selectItem = sub_1C6BAB0(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v184 = (System_Object_array *)selectItem;
      selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v184 )
        goto LABEL_327;
      v187 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v184->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v184->max_length) )
        goto LABEL_329;
      v184->m_Items[0] = (Il2CppObject *)v187;
      sub_1C6B9AC((CGThumbnailListItem_o *)v184->m_Items, v187, v185, v186);
      if ( !v182 )
        goto LABEL_327;
      v190 = v182[2].klass;
      if ( v190 )
      {
        selectItem = sub_1C6BB44(v182[2].klass, v184->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v184->max_length) <= 1 )
        goto LABEL_329;
      v184->m_Items[1] = (Il2CppObject *)v190;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v184->m_Items[1], (int32_t)v190, v188, v189);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v193 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v184->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v184->max_length) <= 2 )
        goto LABEL_329;
      v184->m_Items[2] = (Il2CppObject *)v193;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v184->m_Items[2], v193, v191, v192);
      v196 = v182[3].klass;
      if ( v196 )
      {
        selectItem = sub_1C6BB44(v182[3].klass, v184->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v184->max_length) <= 3 )
        goto LABEL_329;
      v184->m_Items[3] = (Il2CppObject *)v196;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v184->m_Items[3], (int32_t)v196, v194, v195);
      v197 = this->fields.servantItemInfo;
      if ( !v197 )
        goto LABEL_327;
      v198 = v197->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (__int64)Rarity__getRarityType(v198, 0);
      v201 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v184->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v184->max_length) <= 4 )
        goto LABEL_329;
      v184->m_Items[4] = (Il2CppObject *)v201;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v184->m_Items[4], v201, v199, v200);
      selectItem = (__int64)Rarity__getRarityType(HIDWORD(v182[3].monitor), 0);
      v204 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C6BB44(selectItem, v184->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v184->max_length) <= 5 )
        goto LABEL_329;
      v184->m_Items[5] = (Il2CppObject *)v204;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v184->m_Items[5], v204, v202, v203);
      v73 = v183;
      v74 = v184;
    }
    v205 = System_String__Format_64008236(v73, v74, 0);
    v206 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v207 = LocalizationManager__Get((System_String_o *)StringLiteral_5486/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
    v208 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v208,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectConfirm__,
      0);
    selectItem = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v206 )
    {
      CommonUI__OpenConfirmDialog(
        (CommonUI_o *)v206,
        v207,
        v205,
        v208,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        0,
        0,
        0);
      return;
    }
    goto LABEL_327;
  }
  if ( !item )
    goto LABEL_327;
  v40 = Method_EquipGraphListViewManager_SelectEquip__;
  v41 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v40 = (_QWORD *)sub_1C6BA20(Method_EquipGraphListViewManager_SelectEquip__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v40, v40[4]);
  if ( v41 )
    goto LABEL_62;
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
  selectItem = (__int64)this->fields.servantItemInfo;
  if ( !selectItem )
    goto LABEL_327;
  selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
  if ( (selectItem & 1) == 0 )
    goto LABEL_120;
  v75 = this->fields.waveDeckItemList;
  if ( !v75 )
    goto LABEL_327;
  max_length = v75->max_length;
  if ( (int)max_length >= 1 )
  {
    v77 = 0;
    v78 = 1;
    v252 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v77 >= (unsigned int)max_length )
        goto LABEL_329;
      v79 = v75->m_Items[v77];
      v80 = 0;
      do
      {
        selectItem = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          selectItem = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v80 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
          goto LABEL_118;
        if ( !v79 )
          goto LABEL_327;
        selectItem = (__int64)PartyListViewItem__GetMember(v79, v80, 0);
        if ( !*p_selectItem )
          goto LABEL_327;
        servantEntity = (*p_selectItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_327;
        v82 = (PartyOrganizationListViewItem_o *)selectItem;
        v84 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
        v83 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v260.fields.currentCryptoKey = v84;
        *(_QWORD *)&v260.fields.fakeValue = v83;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v260, 0);
        if ( !v82 )
          goto LABEL_327;
        v85 = selectItem;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v82, 0);
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(EquipSvtId, 0);
        ++v80;
      }
      while ( v85 != (_DWORD)selectItem );
      v86 = v82->fields.servantEntity;
      if ( v86 )
        break;
LABEL_118:
      v75 = v252;
      ++v77;
      ++v78;
      LODWORD(max_length) = v252->max_length;
      if ( (__int64)v77 >= (int)max_length )
        return;
    }
    userServantEntity = v82->fields.userServantEntity;
    if ( userServantEntity )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v211 = v82->fields.rarityId;
      if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v212 = LocalizationManager__Get((System_String_o *)StringLiteral_15496/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/, 0);
        v213 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
        selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(v78, 0);
        if ( !v213 )
          goto LABEL_327;
        v216 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v213->max_length) )
          goto LABEL_329;
        v213->m_Items[0] = v216;
        sub_1C6B9AC((CGThumbnailListItem_o *)v213->m_Items, (int32_t)v216, v214, v215);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (__int64)Rarity__getRarityType(v211, 0);
        v219 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 1 )
          goto LABEL_329;
        v213->m_Items[1] = v219;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v213->m_Items[1], (int32_t)v219, v217, v218);
        selectItem = (__int64)ServantEntity__getClassName(v86, 0);
        v222 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 2 )
          goto LABEL_329;
        v213->m_Items[2] = v222;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v213->m_Items[2], (int32_t)v222, v220, v221);
        v224 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v223 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v262.fields.currentCryptoKey = v224;
        *(_QWORD *)&v262.fields.fakeValue = v223;
        v225 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v262, 0);
        selectItem = (__int64)ServantEntity__getName(v86, v225, -1, 0, 0);
        v228 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 3 )
          goto LABEL_329;
        v213->m_Items[3] = v228;
        v229 = (CGThumbnailListItem_o *)&v213->m_Items[3];
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v212 = LocalizationManager__Get((System_String_o *)StringLiteral_15494/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0);
        v213 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 5);
        LODWORD(v255.fields.currentCryptoKey) = v78;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v255);
        if ( !v213 )
          goto LABEL_327;
        v232 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v213->max_length) )
          goto LABEL_329;
        v213->m_Items[0] = v232;
        sub_1C6B9AC((CGThumbnailListItem_o *)v213->m_Items, (int32_t)v232, v230, v231);
        maxWave = this->fields.maxWave;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v235 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 1 )
          goto LABEL_329;
        v213->m_Items[1] = v235;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v213->m_Items[1], (int32_t)v235, v233, v234);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (__int64)Rarity__getRarityType(v211, 0);
        v238 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 2 )
          goto LABEL_329;
        v213->m_Items[2] = v238;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v213->m_Items[2], (int32_t)v238, v236, v237);
        selectItem = (__int64)ServantEntity__getClassName(v86, 0);
        v241 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 3 )
          goto LABEL_329;
        v213->m_Items[3] = v241;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v213->m_Items[3], (int32_t)v241, v239, v240);
        v243 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v242 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v263.fields.currentCryptoKey = v243;
        *(_QWORD *)&v263.fields.fakeValue = v242;
        v244 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v263, 0);
        selectItem = (__int64)ServantEntity__getName(v86, v244, -1, 0, 0);
        v228 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C6BB44(selectItem, v213->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v213->max_length) <= 4 )
          goto LABEL_329;
        v213->m_Items[4] = v228;
        v229 = (CGThumbnailListItem_o *)&v213->m_Items[4];
      }
      sub_1C6B9AC(v229, (int32_t)v228, v226, v227);
      v245 = System_String__Format_64008236(v212, v213, 0);
      v246 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v247 = LocalizationManager__Get((System_String_o *)StringLiteral_5486/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v248 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_YES"*/, 0);
      v249 = LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_NO"*/, 0);
      v250 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v250,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      if ( v246 )
      {
        CommonUI__OpenConfirmDialog_31417724(
          (CommonUI_o *)v246,
          v247,
          v245,
          v248,
          v249,
          v250,
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
          0);
        return;
      }
      goto LABEL_327;
    }
  }
}


void EquipGraphListViewManager__SetFilterButtonImage(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CB5840 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17502/*"btn_filter_on"*/);
    sub_1C6BA08(&StringLiteral_17501/*"btn_filter"*/);
    byte_4CB5840 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C6BC60(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17501/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17502/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_41296720(this, mode, v6);
}


void EquipGraphListViewManager__SetMode_41296720(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, 0);
  servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0) )
    goto LABEL_7;
  servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0),
        (servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView) == 0) )
  {
LABEL_10:
    sub_1C6BC60(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_41335472(this, mode + 1, v7);
}


void EquipGraphListViewManager__SetMode_41335420(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_41296720(this, mode, v6);
}


void EquipGraphListViewManager__SetObjectItem(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EquipGraphListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CB5836 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1C6BA08(&EquipGraphListViewObject_TypeInfo);
    byte_4CB5836 = 1;
  }
  if ( !obj
    || (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_42490548((EquipGraphListViewObject_o *)obj, v7, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__SetSortButtonImage(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  int32_t equipGraphType; // w21
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v18; // x20
  float v19; // s0 OVERLAPPED
  float v20; // s3
  float v21; // s1
  float v22; // s2

  if ( (byte_4CB5845 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17538/*"btn_sort_up"*/);
    sub_1C6BA08(&StringLiteral_17636/*"btn_txt_up"*/);
    sub_1C6BA08(&StringLiteral_17587/*"btn_txt_new"*/);
    sub_1C6BA08(&StringLiteral_17577/*"btn_txt_down"*/);
    sub_1C6BA08(&StringLiteral_17594/*"btn_txt_old"*/);
    sub_1C6BA08(&StringLiteral_17535/*"btn_sort_down"*/);
    byte_4CB5845 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_47;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_47;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17594/*"btn_txt_old"*/ : &StringLiteral_17587/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17636/*"btn_txt_up"*/ : &StringLiteral_17577/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  equipGraphType = this->fields.equipGraphType;
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v18 = this->fields.bonusFilterKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                               sort,
                               this->fields.alignedBonusFilterInfos,
                               this->fields.isQuestStart,
                               0);
    if ( !v18 )
      goto LABEL_47;
    UILabel__set_text(v18, (System_String_o *)sort, 0);
    sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
    v19 = 1.0;
    if ( equipGraphType == 1 )
      v19 = 0.5;
    if ( !sort )
      goto LABEL_47;
    v20 = 1.0;
    v21 = v19;
    v22 = v19;
    UIWidget__set_color((UIWidget_o *)sort, *(UnityEngine_Color_o *)&v19, 0);
  }
  if ( equipGraphType == 1 )
  {
    sort = (ListViewSort_o *)this->fields.filterButton;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, __int64, __int64, Il2CppClass **))sort->klass[1]._1.nestedTypes)(
        sort,
        3,
        1,
        sort->klass[1]._1.implementedInterfaces);
      sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
      if ( sort )
      {
        ((void (__fastcall *)(ListViewSort_o *, __int64, __int64, Il2CppClass **))sort->klass[1]._1.nestedTypes)(
          sort,
          3,
          1,
          sort->klass[1]._1.implementedInterfaces);
        return;
      }
    }
LABEL_47:
    sub_1C6BC60(sort, v4);
  }
}


void EquipGraphListViewManager___EndSelectConfirm_b__84_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool EquipGraphListViewManager___EndSelectConfirm_b__84_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void EquipGraphListViewManager___EndSelectConfirm_b__84_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__83_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__83_1(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4CB5849 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB5849 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))selectItemCallbackFunc->fields.invoke_impl)(
      selectItemCallbackFunc->fields.method_code,
      selectItemCallbackFunc->fields.method);
  }
}


bool EquipGraphListViewManager___SelectEquip_b__83_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void EquipGraphListViewManager___SelectEquip_b__83_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager__add_callbackFunc(
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

  if ( (byte_4CB5825 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4CB5825 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v7->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  EquipGraphListViewManager__remove_callbackFunc(v10, v11, v12);
}


void EquipGraphListViewManager__add_callbackFunc2(
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

  if ( (byte_4CB5827 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB5827 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  EquipGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void EquipGraphListViewManager__add_selectItemCallbackFunc(
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

  if ( (byte_4CB5829 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB5829 = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(selectItemCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *EquipGraphListViewManager__get_ClippingObjectList(
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
  __int64 v10; // x1
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

  if ( (byte_4CB582E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB582E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C6BC60(0, v10);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C6BC60(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_44066648((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C6BC60(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C6BC60(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C6BC60(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *EquipGraphListViewManager__get_ObjectList(
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB582D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB582D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


void EquipGraphListViewManager__remove_callbackFunc(
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

  if ( (byte_4CB5826 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4CB5826 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v7->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  EquipGraphListViewManager__add_callbackFunc2(v10, v11, v12);
}


void EquipGraphListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CB5828 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB5828 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  EquipGraphListViewManager__add_selectItemCallbackFunc(v10, v11, v12);
}


void EquipGraphListViewManager__remove_selectItemCallbackFunc(
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

  if ( (byte_4CB582A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB582A = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(selectItemCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  EquipGraphListViewManager__DeleteContinueData(v10);
}


void EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA23C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA236C;
}


System_IAsyncResult_o *EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CB6606 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_4CB6606 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void EquipGraphListViewManager_CallbackFunc__Invoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
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


void EquipGraphListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6607 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager___c_TypeInfo);
    byte_4CB6607 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EquipGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EquipGraphListViewManager___c___ctor(EquipGraphListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EquipGraphListViewManager___c___CreateList_b__62_2(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C6BC60(this, 0);
  return y->fields.atk;
}


int32_t EquipGraphListViewManager___c___CreateList_b__62_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C6BC60(this, 0);
  return y->fields.hp;
}


void EquipGraphListViewManager___c__DisplayClass62_0___ctor(
        EquipGraphListViewManager___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewManager___c__DisplayClass62_0___CreateList_b__0(
        EquipGraphListViewManager___c__DisplayClass62_0_o *this,
        EquipGraphListViewItem_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager___c__DisplayClass62_0_o *v5; // x20
  struct EquipGraphListViewManager_o *_4__this; // x8
  struct System_Int64_array *equipList; // x8
  _QWORD *v8; // x9
  __int64 type; // x10
  Il2CppClass **v10; // x8

  v5 = this;
  if ( (byte_4CB6609 & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4CB6609 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)_4__this->fields.itemList) == 0
    || (equipList = this->fields.equipList,
        v8 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++*(&this->fields.type + 1),
        !equipList) )
  {
    sub_1C6BC60(this, x);
  }
  type = this->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)x,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &equipList->obj.klass + type;
    this->fields.type = type + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


bool EquipGraphListViewManager___c__DisplayClass62_0___CreateList_b__1(
        EquipGraphListViewManager___c__DisplayClass62_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass62_0_o *v4; // x19
  __int128 v5; // q1
  struct System_Int64_array *equipList; // x8
  __int64 type; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4CB6608 & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB6608 = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                                &v9,
                                                                0);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_1C6BC60(this, x);
  type = v4->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
    sub_1C6BC68(this);
  return this != (EquipGraphListViewManager___c__DisplayClass62_0_o *)equipList->m_Items[type];
}


void EquipGraphListViewManager___c__DisplayClass62_1___ctor(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__4(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass62_1_o *v4; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x21
  ServantSkillMaster_o *svtSkillMaster; // x22
  __int64 v7; // x20
  __int64 v8; // x23
  System_Int32_array *ActIndividuality; // x0
  System_Func_int__bool__o *_9__5; // x22
  System_Int32_array *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_4CB660A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_int____78570976);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)sub_1C6BA08(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__5__);
    byte_4CB660A = 1;
  }
  if ( !x )
    goto LABEL_15;
  if ( !UserServantEntity__IsFriendShipSvtEquip(x, 0) )
    return 0;
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.skillMaster;
  svtSkillMaster = v4->fields.svtSkillMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                v15,
                                                                0);
  if ( !svtSkillMaster
    || (this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)ServantSkillMaster__GetEntity(
                                                                      svtSkillMaster,
                                                                      (int32_t)this,
                                                                      1,
                                                                      1,
                                                                      0)) == 0
    || !skillMaster
    || (this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                      skillMaster,
                                                                      HIDWORD(this->fields.svtSkillMaster),
                                                                      (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
LABEL_15:
    sub_1C6BC60(this, x);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
  _9__5 = v4->fields.__9__5;
  v11 = ActIndividuality;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13);
  }
  return BasicHelper__Any_int__51528112(
           v11,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_31241B0 *)Method_BasicHelper_Any_int____78570976);
}


bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_4CB660B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB660B = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4CB660C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4CB660C = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1C6BC60(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}