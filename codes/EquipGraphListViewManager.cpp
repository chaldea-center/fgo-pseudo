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

  if ( (byte_4C42538 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&StringLiteral_11408/*"RewardUpEquipGraph"*/);
    sub_1C37058(&StringLiteral_6112/*"EquipGraph"*/);
    sub_1C37058(&StringLiteral_3193/*"BondEquipGraph"*/);
    sub_1C37058(&StringLiteral_15582/*"WarBoardEquipGraph"*/);
    byte_4C42538 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v1, (System_String_o *)StringLiteral_6112/*"EquipGraph"*/, 3, 0, 0);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EquipGraphListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v4, (System_String_o *)StringLiteral_3193/*"BondEquipGraph"*/, 3, 0, 0);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->bondSortStatus, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v8, (System_String_o *)StringLiteral_11408/*"RewardUpEquipGraph"*/, 3, 0, 0);
  v9 = EquipGraphListViewManager_TypeInfo->static_fields;
  v9->rewardUpSortStatus = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->rewardUpSortStatus, (int32_t)v8, v10, v11);
  v12 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v12, (System_String_o *)StringLiteral_15582/*"WarBoardEquipGraph"*/, 3, 0, 0);
  v13 = EquipGraphListViewManager_TypeInfo->static_fields;
  v13->warBoardSortStatus = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->warBoardSortStatus, (int32_t)v12, v14, v15);
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
  sub_1C36FFC((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_41062900(this, 2, v11);
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
  int64_t sort; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w8
  EquipGraphListViewManager_c *v22; // x0
  struct ListViewSort_o **p_rewardUpSortStatus; // x8
  EquipGraphListViewManager_c *v24; // x0
  EquipGraphListViewManager_c *v25; // x0
  struct ListViewSort_o *v26; // x1
  struct ListViewSort_o **p_sort; // x26
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct ListViewSort_o *v33; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ListViewSort_o *v40; // x20
  bool v41; // w8
  struct PartyOrganizationListViewItem_o *v42; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // x27
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x20
  int32_t v47; // w22
  bool IsTempGrandServant_k__BackingField; // w24
  EquipGraphServantItem_o *v49; // x25
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Int64_array *EquipList; // x0
  __int64 *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  EquipGraphServantItem_o *v56; // x20
  int64_t v57; // x1
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
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x5
  __int64 v87; // x6
  __int64 v88; // x7
  System_String_o *v89; // x20
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  __int64 v93; // x5
  __int64 v94; // x6
  __int64 v95; // x7
  Il2CppObject *v96; // x28
  Il2CppObject *v97; // x0
  UnityEngine_GameObject_o *bondSkillChangeMessageLabel; // x20
  bool v99; // w1
  System_Collections_Generic_List_object__o *v100; // x26
  __int64 v101; // x23
  int v102; // w8
  void *v103; // x8
  unsigned __int64 v104; // x24
  UserServantEntity_o *v105; // x20
  int64_t v106; // x0
  int32_t v107; // w27
  int64_t v108; // x28
  int32_t v109; // w29
  EquipGraphListViewItem_o *v110; // x22
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x0
  Il2CppObject *v117; // x20
  ServantSkillMaster_o *v118; // x28
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  int v123; // w8
  System_Collections_Generic_HashSet_int__o *v124; // x21
  unsigned int v125; // w27
  CGThumbnailListItem_o *v126; // x29
  __int64 v127; // x24
  __int64 v128; // x20
  __int64 v129; // x22
  __int64 v130; // x20
  __int64 v131; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Func_int__bool__o *klass; // x20
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x22
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  System_Collections_Generic_HashSet_int__o *v137; // x29
  __int64 v138; // x25
  int64_t v139; // x0
  int32_t v140; // w23
  int64_t v141; // x21
  EquipGraphListViewItem_o *v142; // x20
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  Il2CppClass **v148; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  Il2CppObject *Master_object; // x0
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  struct ServantEntity_o *servantEntity; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v158; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v159; // x0
  System_Collections_Generic_List_object__o *v160; // x24
  int32_t v161; // w25
  UserServantEntity_o *v162; // x22
  int64_t EquipUserSvtId; // x0
  int32_t memberIndex; // w27
  int64_t v165; // x28
  int32_t v166; // w21
  EquipGraphListViewItem_o *v167; // x20
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct System_Object_array *items; // x8
  _QWORD *v171; // x9
  __int64 size; // x10
  Il2CppClass **v173; // x0
  System_Action_object__o *v174; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v177; // x8
  System_String_o *v178; // x21
  const MethodInfo *v179; // x1
  const MethodInfo *v180; // x1
  const MethodInfo *v181; // [xsp+10h] [xbp-B0h]
  CGThumbnailListItem_o *v182; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_IEnumerable_TSource__o *v183; // [xsp+20h] [xbp-A0h]
  int32_t v184; // [xsp+28h] [xbp-98h]
  int32_t v185; // [xsp+2Ch] [xbp-94h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+30h] [xbp-90h]
  PartyListViewItem_o *v187; // [xsp+38h] [xbp-88h]
  PartyListViewItem_array *v188; // [xsp+40h] [xbp-80h]
  EquipGraphServantItem_o **p_servantItemInfo; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int monitor; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16

  if ( (byte_4C4251F & 1) == 0 )
  {
    sub_1C37058(&System_Action_EquipGraphListViewItem__TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_All_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    sub_1C37058(&EquipGraphServantItem_TypeInfo);
    sub_1C37058(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EquipGraphListViewManager___c__CreateList_b__62_2__);
    sub_1C37058(&Method_EquipGraphListViewManager___c__CreateList_b__62_3__);
    sub_1C37058(&Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__0__);
    sub_1C37058(&Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__1__);
    sub_1C37058(&EquipGraphListViewManager___c__DisplayClass62_0_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__4__);
    sub_1C37058(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__6__);
    sub_1C37058(&EquipGraphListViewManager___c__DisplayClass62_1_TypeInfo);
    sub_1C37058(&EquipGraphListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_11608/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C37058(&StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C4251F = 1;
  }
  v13 = sub_1C372A4(EquipGraphListViewManager___c__DisplayClass62_0_TypeInfo);
  EquipGraphListViewManager___c__DisplayClass62_0___ctor((EquipGraphListViewManager___c__DisplayClass62_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_151;
  *(_QWORD *)(v13 + 32) = this;
  *(_DWORD *)(v13 + 24) = type;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v15, v16);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.waveDeckItemList, (int32_t)baseDeckItemList, v17, v18);
  v21 = *(_DWORD *)(v13 + 24);
  this->fields.equipGraphType = v21;
  if ( v21 == 2 )
  {
    v24 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v24 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v24->static_fields->rewardUpSortStatus;
  }
  else if ( v21 == 1 )
  {
    v25 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v25 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v25->static_fields->bondSortStatus;
  }
  else
  {
    v22 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v22 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v22->static_fields->sortStatus;
  }
  v26 = *p_rewardUpSortStatus;
  this->fields.sort = *p_rewardUpSortStatus;
  p_sort = &this->fields.sort;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v26, v19, v20);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_151;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  if ( !partyItem )
    goto LABEL_151;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v28, v29);
  v33 = this->fields.sort;
  if ( !v33 )
    goto LABEL_151;
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
      goto LABEL_25;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v31, v32);
LABEL_25:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (int64_t)this->fields.sort;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v38, v39);
    v40 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v40 )
      goto LABEL_151;
    v41 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v31, v32);
    v40 = this->fields.sort;
    if ( !v40 )
      goto LABEL_151;
    v41 = 0;
  }
  v40->fields.isBonusKind = v41;
  v42 = PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0);
  p_baseItem = &this->fields.baseItem;
  this->fields.baseItem = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)v42, v44, v45);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_151;
  if ( !baseItem->fields.isFollower )
  {
    v47 = *(_DWORD *)(v13 + 24);
    IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
    v49 = (EquipGraphServantItem_o *)sub_1C372A4(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v49, baseItem, v47, IsTempGrandServant_k__BackingField, 0);
    this->fields.servantItemInfo = v49;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v49, v50, v51);
    sort = (int64_t)this->fields.baseItem;
    if ( !sort )
      goto LABEL_151;
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0);
    *(_QWORD *)(v13 + 16) = EquipList;
    v53 = (__int64 *)(v13 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)EquipList, v54, v55);
    sort = (int64_t)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_151;
    v56 = *p_servantItemInfo;
    if ( *(_BYTE *)(sort + 402) )
    {
      sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
      v57 = sort;
      if ( !v56 )
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
      v57 = *(_QWORD *)(v58 + 8 * v59 + 32);
      if ( !v56 )
        goto LABEL_151;
    }
    object = (Il2CppObject *)v13;
    EquipGraphServantItem__SetEquipTarget(v56, v57, 0);
    *(_QWORD *)&this->fields.addBaseAtk = 0;
    v60 = *v53;
    if ( !*v53 )
      goto LABEL_151;
    sort = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      sort = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == *(_DWORD *)(v60 + 24) )
    {
      if ( !*p_baseItem )
        goto LABEL_151;
      v61 = BasicHelper__ExcludeNull_object_(
              (System_Collections_Generic_IEnumerable_T__o *)(*p_baseItem)->fields.equipUserServantEntityList,
              (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
      v62 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v62,
        (Il2CppObject *)v13,
        Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__1__,
        0);
      v63 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v61,
              (System_Func_TSource__bool__o *)v62,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v63,
                                                                   (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
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
        _9__62_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__62_2, v67, Method_EquipGraphListViewManager___c__CreateList_b__62_2__, 0);
        static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__62_2 = (struct System_Func_UserServantEntity__int__o *)_9__62_2;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__62_2, (int32_t)_9__62_2, v69, v70);
      }
      this->fields.addBaseAtk = System_Linq_Enumerable__Sum_object_(
                                  v64,
                                  (System_Func_TSource__int__o *)_9__62_2,
                                  (const MethodInfo_31259AC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
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
        _9__62_3 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__62_3, v73, Method_EquipGraphListViewManager___c__CreateList_b__62_3__, 0);
        v74 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v74->__9__62_3 = (struct System_Func_UserServantEntity__int__o *)_9__62_3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v74->__9__62_3, (int32_t)_9__62_3, v75, v76);
      }
      this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                                 v64,
                                 (System_Func_TSource__int__o *)_9__62_3,
                                 (const MethodInfo_31259AC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    }
    sort = (int64_t)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_151;
    EquipGraphServantItemDraw__SetItem(
      (EquipGraphServantItemDraw_o *)sort,
      this->fields.servantItemInfo,
      this->fields.addBaseHp,
      this->fields.addBaseAtk,
      0);
    sort = (int64_t)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_151;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    sort = (int64_t)this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !sort )
      goto LABEL_151;
    cost = partyItem->fields.cost;
    sort = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0);
    this->fields.baseCost = cost - sort;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !baseDeckItemList )
      goto LABEL_151;
    v188 = baseDeckItemList;
    this->fields.maxWave = baseDeckItemList->max_length;
    sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_151;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_151;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v187 = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v82 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
      if ( !v81 )
        goto LABEL_151;
      v89 = (System_String_o *)sort;
      monitor = (int)v81[1].monitor;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &monitor, v83, v84, v85, v86, v87, v88);
      if ( !SelfUserGame )
        goto LABEL_151;
      v96 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v90, v91, v92, v93, v94, v95);
      sort = (int64_t)System_String__Format_63602948(v89, v96, v97, 0);
      if ( !v82 )
        goto LABEL_151;
      UILabel__set_text(v82, (System_String_o *)sort, 0);
    }
    sort = (int64_t)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_151;
    sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !*p_sort || !sort )
      goto LABEL_151;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
    bondSkillChangeMessageLabel = this->fields.bondSkillChangeMessageLabel;
    if ( this->fields.equipGraphType == 1 )
    {
      sort = (int64_t)*p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_151;
      sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
      v99 = sort > 0;
    }
    else
    {
      v99 = 0;
    }
    if ( !bondSkillChangeMessageLabel )
LABEL_151:
      sub_1C372B4(sort);
    UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v99, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    v100 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v100,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    v101 = sub_1C372A4(EquipGraphListViewManager___c__DisplayClass62_1_TypeInfo);
    EquipGraphListViewManager___c__DisplayClass62_1___ctor((EquipGraphListViewManager___c__DisplayClass62_1_o *)v101, 0);
    v102 = *(_DWORD *)(v13 + 24);
    setupInfoa = setupInfo;
    if ( v102 != 2 )
    {
      if ( v102 == 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sort = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillMaster___);
        if ( !v101 )
          goto LABEL_151;
        *(_QWORD *)(v101 + 24) = sort;
        sub_1C36FFC((CGThumbnailListItem_o *)(v101 + 24), sort, v149, v150);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v101 + 16) = Master_object;
        sub_1C36FFC((CGThumbnailListItem_o *)(v101 + 16), (int32_t)Master_object, v152, v153);
        if ( !*p_baseItem )
          goto LABEL_151;
        servantEntity = (*p_baseItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_151;
        individuality = servantEntity->fields.individuality;
        *(_QWORD *)(v101 + 32) = individuality;
        sub_1C36FFC((CGThumbnailListItem_o *)(v101 + 32), (int32_t)individuality, v154, v155);
        v158 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v158,
          (Il2CppObject *)v101,
          Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__4__,
          0);
        v159 = System_Linq_Enumerable__Where_object_(
                 v81,
                 (System_Func_TSource__bool__o *)v158,
                 (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        sort = (int64_t)System_Linq_Enumerable__ToList_object_(
                          v159,
                          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
        if ( !sort )
          goto LABEL_151;
        v160 = (System_Collections_Generic_List_object__o *)sort;
        if ( *(int *)(sort + 24) >= 1 )
        {
          v161 = 0;
          while ( 1 )
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v160,
                              v161,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v162 = (UserServantEntity_o *)sort;
            EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, 0);
            memberIndex = this->fields.memberIndex;
            v165 = EquipUserSvtId;
            v166 = (int32_t)object[1].monitor;
            v167 = (EquipGraphListViewItem_o *)sub_1C372A4(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v167, v161, v162, v165, v188, v187, setupInfo, memberIndex, 0, v166, v181);
            if ( !v100 )
              goto LABEL_151;
            items = v100->fields._items;
            v171 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v100->fields._version;
            if ( !items )
              goto LABEL_151;
            size = v100->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v100,
                (Il2CppObject *)v167,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
            }
            else
            {
              v173 = &items->obj.klass + size;
              v100->fields._size = size + 1;
              v173[4] = (Il2CppClass *)v167;
              sub_1C36FFC((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v167, v168, v169);
            }
            if ( ++v161 >= v160->fields._size )
              goto LABEL_141;
          }
        }
      }
      else if ( !v102 )
      {
        if ( !v81 )
          goto LABEL_151;
        v103 = v81[1].monitor;
        if ( (int)v103 >= 1 )
        {
          v104 = 0;
          while ( v104 < (unsigned int)v103 )
          {
            sort = (int64_t)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v105 = (UserServantEntity_o *)*((_QWORD *)&v81[2].klass + v104);
            v106 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v107 = this->fields.memberIndex;
            v108 = v106;
            v109 = *(_DWORD *)(v13 + 24);
            v110 = (EquipGraphListViewItem_o *)sub_1C372A4(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v110, v104, v105, v108, v188, v187, setupInfoa, v107, 0, v109, v181);
            if ( !v100 )
              goto LABEL_151;
            v113 = v100->fields._items;
            v114 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v100->fields._version;
            if ( !v113 )
              goto LABEL_151;
            v115 = v100->fields._size;
            if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v100,
                (Il2CppObject *)v110,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
            }
            else
            {
              v116 = &v113->obj.klass + v115;
              v100->fields._size = v115 + 1;
              v116[4] = (Il2CppClass *)v110;
              sub_1C36FFC((CGThumbnailListItem_o *)(v116 + 4), (int32_t)v110, v111, v112);
            }
            LODWORD(v103) = v81[1].monitor;
            if ( (__int64)++v104 >= (int)v103 )
              goto LABEL_141;
          }
          goto LABEL_152;
        }
      }
      goto LABEL_141;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v117 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    sort = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillMaster___);
    if ( !v117 )
      goto LABEL_151;
    v118 = (ServantSkillMaster_o *)sort;
    RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                  (ConstantStrMaster_o *)v117,
                                                                                  0);
    sort = (int64_t)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpFuncCategory,
                      (const MethodInfo_312BB20 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v101 )
      goto LABEL_151;
    *(_QWORD *)(v101 + 40) = sort;
    sub_1C36FFC((CGThumbnailListItem_o *)(v101 + 40), sort, v120, v121);
    RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                                 (ConstantStrMaster_o *)v117,
                                                                                 0);
    sort = (int64_t)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpIgnoreSvtId,
                      (const MethodInfo_312BB20 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v81 )
      goto LABEL_151;
    v123 = (int)v81[1].monitor;
    if ( v123 < 1 )
    {
LABEL_141:
      v174 = (System_Action_object__o *)sub_1C372A4(System_Action_EquipGraphListViewItem__TypeInfo);
      System_Action_object____ctor(
        v174,
        object,
        Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__0__,
        0);
      if ( v100 )
      {
        System_Collections_Generic_List_object___ForEach(
          v100,
          (System_Action_T__o *)v174,
          (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          emptyMessageLabel = this->fields.emptyMessageLabel;
          v177 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11608/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
          v178 = *v177;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (int64_t)LocalizationManager__Get(v178, 0);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
            EquipGraphListViewManager__RefrashListDisp(this, v179);
            ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
            EquipGraphListViewManager__SetFilterButtonImage(this, v180);
            return;
          }
        }
      }
      goto LABEL_151;
    }
    v124 = (System_Collections_Generic_HashSet_int__o *)sort;
    v125 = 0;
    v126 = (CGThumbnailListItem_o *)(v101 + 56);
    v185 = 0;
    v182 = (CGThumbnailListItem_o *)(v101 + 56);
    v183 = v81;
    while ( v125 < v123 )
    {
      v127 = *((_QWORD *)&v81[2].klass + (int)v125);
      if ( !v127 )
        goto LABEL_151;
      v129 = *(_QWORD *)(v127 + 80);
      v128 = *(_QWORD *)(v127 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v193.fields.currentCryptoKey = v129;
      *(_QWORD *)&v193.fields.fakeValue = v128;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v193, 0);
      if ( !v124 )
        goto LABEL_151;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v124,
               sort,
               (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        v131 = *(_QWORD *)(v127 + 80);
        v130 = *(_QWORD *)(v127 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v194.fields.currentCryptoKey = v131;
        *(_QWORD *)&v194.fields.fakeValue = v130;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v194, 0);
        if ( !v118 )
          goto LABEL_151;
        ServantSkillList = ServantSkillMaster__getServantSkillList(v118, sort, 0);
        sort = (int64_t)UserServantEntity__GetEquipAllCategoryIdList((UserServantEntity_o *)v127, ServantSkillList, 0);
        if ( sort )
        {
          klass = (System_Func_int__bool__o *)v126->klass;
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v126->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v101,
              Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__6__,
              0);
            *(_QWORD *)(v101 + 56) = klass;
            sub_1C36FFC(v126, (int32_t)klass, v135, v136);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)klass,
                   (const MethodInfo_30F1AB0 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (int64_t)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v137 = v124;
            v138 = v101;
            v139 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v140 = (int32_t)object[1].monitor;
            v141 = v139;
            v184 = this->fields.memberIndex;
            v142 = (EquipGraphListViewItem_o *)sub_1C372A4(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v142,
              v185,
              (UserServantEntity_o *)v127,
              v141,
              v188,
              v187,
              setupInfoa,
              v184,
              (System_Int32_array *)preLoadCategoryIdList,
              v140,
              v181);
            if ( !v100 )
              goto LABEL_151;
            v145 = v100->fields._items;
            v146 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v100->fields._version;
            if ( !v145 )
              goto LABEL_151;
            v147 = v100->fields._size;
            v101 = v138;
            v124 = v137;
            if ( (unsigned int)v147 >= LODWORD(v145->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v100,
                (Il2CppObject *)v142,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
            }
            else
            {
              v148 = &v145->obj.klass + v147;
              v100->fields._size = v147 + 1;
              v148[4] = (Il2CppClass *)v142;
              sub_1C36FFC((CGThumbnailListItem_o *)(v148 + 4), (int32_t)v142, v143, v144);
            }
            v126 = v182;
            v81 = v183;
            ++v185;
          }
        }
      }
      v123 = (int)v81[1].monitor;
      if ( (int)++v125 >= v123 )
        goto LABEL_141;
    }
LABEL_152:
    sub_1C372BC(sort);
  }
}


void EquipGraphListViewManager__CreateList_41060832(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  EquipGraphListViewManager_c *v9; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  int64_t sort; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ListViewSort_o *v21; // x21
  bool v22; // w8
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x23
  EquipGraphServantItem_o *v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  EquipGraphServantItem_o *servantItemInfo; // x24
  UserGameEntity_o *SelfUserGame; // x25
  int32_t cost; // w21
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v35; // x24
  UILabel_o *v36; // x26
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  System_String_o *v43; // x27
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x28
  Il2CppObject *v51; // x0
  il2cpp_array_size_t v52; // x8
  unsigned __int64 v53; // x22
  UserServantEntity_o *v54; // x26
  int64_t EquipUserSvtId; // x27
  EquipGraphListViewItem_o *v56; // x25
  const MethodInfo *v57; // x6
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v66; // x8
  System_String_o *v67; // x21
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // [xsp+0h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int max_length; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C42520 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    sub_1C37058(&EquipGraphServantItem_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_11608/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C37058(&StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C42520 = 1;
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
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.sort,
    (int32_t)warBoardSortStatus,
    member,
    (const MethodInfo *)setupInfo);
  sort = (int64_t)this->fields.sort;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v13, v14);
LABEL_14:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (int64_t)this->fields.sort;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v19, v20);
    v21 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v21 )
      goto LABEL_62;
    v22 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v13, v14);
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_62;
    v22 = 0;
  }
  v21->fields.isBonusKind = v22;
  if ( !partyItem )
    goto LABEL_62;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0);
  this->fields.baseItem = MemberItem;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v24, v25);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_62;
  if ( !baseItem->fields.isFollower )
  {
    v27 = (EquipGraphServantItem_o *)sub_1C372A4(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v27, baseItem, 0, 0, 0);
    this->fields.servantItemInfo = v27;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v27, v28, v29);
    sort = (int64_t)this->fields.baseItem;
    if ( !sort )
      goto LABEL_62;
    servantItemInfo = this->fields.servantItemInfo;
    sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
    if ( !servantItemInfo )
      goto LABEL_62;
    EquipGraphServantItem__SetEquipTarget(servantItemInfo, sort, 0);
    sort = (int64_t)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_62;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, 0, 0, 0);
    sort = (int64_t)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_62;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    sort = (int64_t)this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !sort )
      goto LABEL_62;
    cost = partyItem->fields.cost;
    this->fields.baseCost = cost - EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0);
    sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_62;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_62;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v35 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v36 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
      if ( !v35 )
        goto LABEL_62;
      v43 = (System_String_o *)sort;
      max_length = v35->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &max_length, v37, v38, v39, v40, v41, v42);
      if ( !SelfUserGame )
        goto LABEL_62;
      v50 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v44, v45, v46, v47, v48, v49);
      sort = (int64_t)System_String__Format_63602948(v43, v50, v51, 0);
      if ( !v36 )
        goto LABEL_62;
      UILabel__set_text(v36, (System_String_o *)sort, 0);
    }
    sort = (int64_t)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_62;
    sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !*p_sort )
      goto LABEL_62;
    if ( !sort )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !v35 )
      goto LABEL_62;
    v52 = v35->max_length;
    if ( (int)v52 >= 1 )
    {
      v53 = 0;
      while ( 1 )
      {
        if ( v53 >= (unsigned int)v52 )
          sub_1C372BC(sort);
        sort = (int64_t)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v54 = v35->m_Items[v53];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
        v56 = (EquipGraphListViewItem_o *)sub_1C372A4(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_41084776(v56, v53, v54, EquipUserSvtId, partyItem, setupInfo, v57);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          break;
        v60 = *(_QWORD *)(sort + 16);
        v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v60 )
          break;
        v62 = *(int *)(sort + 24);
        if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v56,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = v60 + 8 * v62;
          *(_DWORD *)(sort + 24) = v62 + 1;
          *(_QWORD *)(v63 + 32) = v56;
          sub_1C36FFC((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v56, v58, v59);
        }
        LODWORD(v52) = v35->max_length;
        if ( (__int64)++v53 >= (int)v52 )
          goto LABEL_53;
      }
LABEL_62:
      sub_1C372B4(sort);
    }
LABEL_53:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_62;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v66 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11608/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v67 = *v66;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (int64_t)LocalizationManager__Get(v67, 0);
    if ( !emptyMessageLabel )
      goto LABEL_62;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
    EquipGraphListViewManager__RefrashListDisp(this, v68);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v69);
  }
}


void EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  EquipGraphListViewManager_c *v1; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4C4251B & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    byte_4C4251B = 1;
  }
  v1 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v1 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v1->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0)
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0)
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0) )
  {
    sub_1C372B4(sortStatus);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct EquipGraphListViewItem_o *selectItem; // x8
  const MethodInfo *v9; // x1
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
  const MethodInfo *v22; // x4
  Il2CppObject *v23; // x21
  __int64 v24; // x10
  UnityEngine_Object_o *v25; // x22
  _BOOL8 v26; // x0
  Il2CppClass *v27; // x8
  __int64 v28; // x11
  struct EquipGraphListViewItem_o *v29; // x8
  struct ServantEntity_o *v30; // x9
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *klass; // x21
  System_Action_object__o *v36; // x22
  __int64 v37; // x0
  UnityEngine_Object_o *v38; // x21
  _BOOL8 v39; // x0
  Il2CppClass *v40; // x8
  __int64 v41; // x11
  struct EquipGraphListViewItem_o *v42; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  System_Action_object__o *v44; // x21
  struct EquipGraphListViewItem_o *v45; // x8
  System_Collections_Generic_List_T__o *v46; // x20
  System_Func_object__bool__o *v47; // x21
  struct EquipGraphListViewItem_o *v48; // x8
  struct UserServantEntity_o *v49; // x9
  int32_t hp; // w21
  int32_t atk; // w22
  struct UserServantEntity_o *v52; // x8
  __int128 v53; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  struct EquipGraphListViewItem_o *v55; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v57; // x1
  struct EquipGraphListViewItem_o *v58; // x8
  __int64 v59; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  struct PartyListViewItem_array *waveDeckItemList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v63; // x26
  PartyListViewItem_o *v64; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v66; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v68; // x22
  __int64 v69; // x23
  __int64 v70; // x24
  int v71; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+10h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+38h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4C4252D & 1) == 0 )
  {
    sub_1C37058(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_0__);
    sub_1C37058(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_1__);
    sub_1C37058(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_2__);
    sub_1C37058(&EquipGraphListViewObject_TypeInfo);
    sub_1C37058(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4252D = 1;
  }
  memset(&v76, 0, sizeof(v76));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v75,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v76 = *(System_Collections_Generic_List_Enumerator_object__o *)&v75.fields.currentCryptoKey;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v76,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v31 )
        break;
      current = v76.fields._current;
      if ( !v76.fields._current
        || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
            v76.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EquipGraphListViewItem_c *)v76.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1C372B4(v31);
      }
      if ( BYTE1(v76.fields._current[9].monitor) )
      {
        BYTE1(v76.fields._current[9].monitor) = 0;
        if ( EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v32) )
        {
          klass = (System_Collections_Generic_List_object__o *)current[17].klass;
          v36 = (System_Action_object__o *)sub_1C372A4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v36,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__84_2__,
            0);
          if ( !klass )
            sub_1C372B4(v37);
          System_Collections_Generic_List_object___ForEach(
            klass,
            (System_Action_T__o *)v36,
            (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
          v38 = (UnityEngine_Object_o *)current[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v39 = UnityEngine_Object__op_Inequality(v38, 0, 0);
          if ( v39 )
          {
            v40 = current[7].klass;
            if ( !v40
              || (v41 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                  *((unsigned __int8 *)v40->_1.image + 304) < (unsigned int)v41)
              || *(EquipGraphListViewObject_c **)(*((_QWORD *)v40->_1.image + 25) + 8 * v41 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1C372B4(v39);
            }
            EquipGraphListViewObject__Init_42251276((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v76,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v63 = 0;
        while ( v63 < (unsigned int)max_length )
        {
          v64 = waveDeckItemList->m_Items[v63];
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
            if ( !v64 )
              goto LABEL_109;
            Instance = (int64_t)PartyListViewItem__GetMember(v64, i, 0);
            v66 = this->fields.selectItem;
            if ( !v66 )
              goto LABEL_109;
            servantEntity = v66->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_109;
            v68 = (PartyOrganizationListViewItem_o *)Instance;
            v70 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v69 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v77.fields.currentCryptoKey = v70;
            *(_QWORD *)&v77.fields.fakeValue = v69;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v77, 0);
            if ( !v68 )
              goto LABEL_109;
            v71 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v68, 0);
            if ( v71 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(EquipSvtId, 0) )
              PartyListViewItem__SetEquip(v64, i, 0, 0, 0);
          }
          LODWORD(max_length) = waveDeckItemList->max_length;
          if ( (__int64)++v63 >= (int)max_length )
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
      sub_1C372B4(Instance);
    v12 = *(_DWORD *)(Instance + 224) - 1;
    if ( (unsigned int)v12 >= LODWORD(v11->max_length) )
LABEL_114:
      sub_1C372BC(Instance);
    v13 = v11->m_Items[v12];
    Instance = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)Instance, v9);
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
  *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v75.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v74 = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v74, 0);
  if ( !v20 )
    goto LABEL_109;
  PartyListViewItem__SetEquip(v20, memberIndex, Instance, 0, 0);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v76 = v73;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    v23 = v76.fields._current;
    if ( !v76.fields._current
      || (v24 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v76.fields._current->klass->_2.naturalAligment < (unsigned int)v24)
      || (EquipGraphListViewItem_c *)v76.fields._current->klass->_2.typeHierarchy[v24 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C372B4(v21);
    }
    if ( BYTE1(v76.fields._current[9].monitor) )
      LOWORD(v76.fields._current[9].monitor) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v23,
      this->fields.waveDeckItemList,
      v20,
      this->fields.memberIndex,
      v22);
    v25 = (UnityEngine_Object_o *)v23[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__op_Inequality(v25, 0, 0);
    if ( v26 )
    {
      v27 = v23[7].klass;
      if ( !v27
        || (v28 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
            *((unsigned __int8 *)v27->_1.image + 304) < (unsigned int)v28)
        || *(EquipGraphListViewObject_c **)(*((_QWORD *)v27->_1.image + 25) + 8 * v28 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1C372B4(v26);
      }
      EquipGraphListViewObject__Init_42251276((EquipGraphListViewObject_o *)v23[7].klass, 4, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v29 = this->fields.selectItem;
  if ( !v29 )
    goto LABEL_109;
  v30 = v29->fields.servantEntity;
  if ( v30 )
    LODWORD(v30) = v30->fields.cost;
  this->fields.baseCost = v20->fields.cost - (_DWORD)v30;
LABEL_61:
  v42 = this->fields.selectItem;
  if ( !v42 )
    goto LABEL_109;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v42->fields.wearerMemberInfoList;
  v42->fields.isBase = 1;
  v44 = (System_Action_object__o *)sub_1C372A4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Action_object____ctor(
    v44,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__84_0__,
    0);
  if ( !wearerMemberInfoList )
    goto LABEL_109;
  System_Collections_Generic_List_object___ForEach(
    wearerMemberInfoList,
    (System_Action_T__o *)v44,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v45 = this->fields.selectItem;
  if ( !v45 )
    goto LABEL_109;
  v46 = (System_Collections_Generic_List_T__o *)v45->fields.wearerMemberInfoList;
  v47 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__84_1__,
    0);
  Instance = BasicHelper__Any_object_(
               v46,
               (System_Func_T__bool__o *)v47,
               (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
  v48 = this->fields.selectItem;
  if ( (Instance & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_109;
    v49 = v48->fields.userSvtEntity;
    if ( v49 )
    {
      hp = v49->fields.hp;
      atk = v49->fields.atk;
      goto LABEL_70;
    }
  }
  else if ( !v48 )
  {
    goto LABEL_109;
  }
  hp = 0;
  atk = 0;
LABEL_70:
  v52 = v48->fields.userSvtEntity;
  if ( !v52 )
    goto LABEL_109;
  v53 = *(_OWORD *)&v52->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&v52->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v75.fields.fakeValue = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v72 = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v72, 0);
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
  v55 = this->fields.selectItem;
  if ( !v55 )
    goto LABEL_109;
  viewObject = (UnityEngine_Object_o *)v55->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0, 0);
  if ( (Instance & 1) == 0 )
    goto LABEL_85;
  v58 = this->fields.selectItem;
  if ( !v58 )
    goto LABEL_109;
  Instance = (int64_t)v58->fields.viewObject;
  if ( !Instance )
    goto LABEL_109;
  v59 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v59
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v59 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_109;
  }
  EquipGraphListViewObject__Init_42251276((EquipGraphListViewObject_o *)Instance, 4, 1, 0);
LABEL_85:
  EquipGraphListViewManager__RefrashListDisp(this, v57);
LABEL_86:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7);
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

  if ( (byte_4C4252F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4252F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C372B4(v8);
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

  if ( (byte_4C42533 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C42533 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C372B4(v7);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0);
}


int64_t EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  _BOOL8 v7; // x0
  __int64 naturalAligment; // x11
  _QWORD *monitor; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C42536 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C42536 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v14 = v13;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v14.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C372B4(v7);
    }
    monitor = v14.fields._current[7].monitor;
    if ( !monitor )
      sub_1C372B4(v7);
    v11 = monitor[10];
    v10 = monitor[11];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v11;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C42537 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C42537 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C372B4(this);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C42522 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C42522 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C372B4(0);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


int32_t EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 naturalAligment; // x11
  int32_t v6; // w19
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4252A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C4252A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v8.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v8.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v8.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C372B4(v4);
    }
    if ( *((_BYTE *)&v8.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
    {
      v6 = *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_14);
      goto LABEL_12;
    }
  }
  v6 = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


EquipGraphListViewItem_o *EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x19
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C4252B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C4252B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v8.fields._current;
    if ( !v8.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v8.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v8.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C372B4(v4);
    }
    if ( *((_BYTE *)&v8.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
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

  if ( (byte_4C42524 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C42524 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 185) )
      {
        if ( *(_BYTE *)(itemList + 155) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C372B4(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)choiceList, 0, v9, v10);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v36, v35, v33, v34);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
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

  if ( (byte_4C42523 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C42523 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 184) )
      {
        if ( *(_BYTE *)(itemList + 154) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C372B4(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)lockList, 0, v9, v10);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  EquipGraphListViewManager_c *v1; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4C4251C & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    byte_4C4251C = 1;
  }
  v1 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v1 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v1->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0)
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0)
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0) )
  {
    sub_1C372B4(sortStatus);
  }
  ListViewSort__InitLoad(sortStatus, 0);
}


void EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v7; // w20
  DataManager_c **v8; // x21
  DataManager_c *v9; // x8
  struct System_Threading_SynchronizationContext_o **v10; // x21
  DataManager_c *v11; // t1
  Il2CppType byval_arg; // q0
  int64_t v13; // x0
  DataManager_o *v14; // x22
  int32_t v15; // w23
  DataManager_o *v16; // x24
  __int64 naturalAligment; // x10
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int128 v19; // q0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Threading_SynchronizationContext_o *v22; // x1
  const MethodInfo *v23; // x1
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

  if ( (byte_4C42521 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42521 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v7 = 0;
    v32 = Instance;
    while ( 1 )
    {
      v8 = &Instance->klass + (int)v7;
      v11 = v8[4];
      v10 = (struct System_Threading_SynchronizationContext_o **)(v8 + 4);
      v9 = v11;
      if ( !v11 )
        break;
      byval_arg = v9->_1.byval_arg;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v9->_1.name;
      *(Il2CppType *)&v35.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v34, 0);
      if ( size >= 1 )
      {
        v14 = (DataManager_o *)v13;
        v15 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v15,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v16 = Instance;
          naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
          if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (EquipGraphListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          context = Instance->fields.context;
          if ( context )
          {
            v19 = *(_OWORD *)&context[1].monitor;
            *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
            *(_OWORD *)&v35.fields.fakeValue = v19;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v33 = v35;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v33, 0);
            if ( Instance == v14 )
              break;
          }
          if ( size == ++v15 )
            goto LABEL_27;
        }
        if ( v7 >= LODWORD(v32->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v22 = *v10;
        v16->fields.context = *v10;
        sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.context, (int32_t)v22, v20, v21);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v16, v23);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v16, v24);
        }
      }
LABEL_27:
      Instance = v32;
      if ( ++v7 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v7 >= LODWORD(v32->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1C372BC(Instance);
    }
LABEL_44:
    sub_1C372B4(Instance);
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
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ListViewSort_o *sort; // x0

  if ( (byte_4C42531 & 1) == 0 )
  {
    sub_1C37058(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_4C42531 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
    sub_1C372B4(this);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  int32_t v11; // w1

  if ( (byte_4C4252E & 1) == 0 )
  {
    sub_1C37058(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_1C37058(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4252E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0);
    if ( !v8 )
      sub_1C372B4(v10);
    if ( equipGraphType == 2 )
      v11 = 16;
    else
      v11 = 5;
    CommonUI__OpenServantFilterSelectMenu_31215100(v8, v11, sort, (ListViewManager_o *)this, v9, -1, 0);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C372B4(v6);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C42534 & 1) == 0 )
  {
    sub_1C37058(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4C42534 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(v5);
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

  if ( (byte_4C42532 & 1) == 0 )
  {
    sub_1C37058(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_1C37058(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C42532 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C372B4(v9);
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
    sub_1C372B4(this);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C42529 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42529 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  int32_t baseCost; // w20
  int32_t v8; // w22
  UILabel_o *v9; // x20
  System_String_o **v10; // x8
  System_String_o *v11; // x21
  System_String_o *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42525 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_12479/*"SUM_OVER_INFO"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C42525 = 1;
  }
  ObjectList = (int *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_20;
  v4 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( ObjectList[6] >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      ObjectList = (int *)System_Collections_Generic_List_object___get_Item(
                            v4,
                            v5,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      (*(void (__fastcall **)(int *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
        ObjectList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
      if ( ++v5 >= v4->fields._size )
        goto LABEL_8;
    }
LABEL_20:
    sub_1C372B4(ObjectList);
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
    v8 = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)ObjectList, 0) + baseCost;
    v9 = this->fields.infoData2Label;
    v10 = v8 <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12478/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12479/*"SUM_OVER_INFO"*/;
    v11 = *v10;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get(v11, 0);
    v28 = v8;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15, v16, v17, v18);
    maxCost = this->fields.maxCost;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v20, v21, v22, v23, v24, v25);
    ObjectList = (int *)System_String__Format_63602948(v12, v19, v26, 0);
    if ( !v9 )
      goto LABEL_20;
    UILabel__set_text(v9, (System_String_o *)ObjectList, 0);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C42527 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C37058(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C42527 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      EquipGraphListViewObject__Init_42252072((EquipGraphListViewObject_o *)current, mode, v10, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject_41101652(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C42528 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C37058(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C42528 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      EquipGraphListViewObject__Init_42252160((EquipGraphListViewObject_o *)current, mode, v8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  int64_t selectItem; // x0
  int v13; // w25
  EquipGraphListViewObject_o *v14; // x8
  __int64 naturalAligment; // x11
  EquipGraphListViewObject_o *v16; // x24
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v21; // w9
  struct EquipGraphListViewItem_o *v22; // x8
  _QWORD *v23; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w20
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  struct PartyListViewItem_array *v28; // x8
  int v29; // w9
  PartyListViewItem_o *v30; // x20
  int32_t cost; // w23
  const MethodInfo *v32; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  NotificationDialog_ClickDelegate_o *v36; // x23
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x21
  System_Action_object__o *v38; // x23
  bool v39; // w1
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  _QWORD *v43; // x0
  _BOOL4 v44; // w20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  CGThumbnailListItem_c *klass; // x19
  bool IsUse; // w0
  _QWORD *v49; // x8
  bool v50; // w23
  System_Reflection_MethodBase_o *v51; // x0
  System_Collections_Generic_List_object__o *v52; // x20
  int64_t v53; // x21
  System_String_o *v54; // x20
  System_Object_array *v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int64_t v58; // x23
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x23
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int64_t v64; // x23
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x23
  struct EquipGraphServantItem_o *v68; // x8
  int32_t rarityId; // w23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int64_t v72; // x23
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int64_t v75; // x21
  System_String_o *v76; // x0
  System_Object_array *v77; // x1
  struct PartyListViewItem_array *v78; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v80; // x29
  int32_t v81; // w22
  PartyListViewItem_o *v82; // x20
  int32_t v83; // w23
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v85; // x24
  __int64 v86; // x25
  __int64 v87; // x26
  int v88; // w25
  ServantEntity_o *v89; // x20
  struct PartyListViewItem_array *v90; // x8
  int v91; // w9
  struct EquipGraphListViewItem_o *v92; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v95; // q1
  PartyListViewItem_o *v96; // x24
  _BOOL8 v97; // x0
  const MethodInfo *v98; // x1
  Il2CppObject *current; // x23
  __int64 v100; // x10
  int monitor_low; // w8
  int v102; // w24
  _BOOL4 v103; // w0
  System_Collections_Generic_List_object__o *v104; // x24
  System_Action_object__o *v105; // x25
  __int64 v106; // x0
  UnityEngine_Object_o *v107; // x24
  _BOOL8 v108; // x0
  Il2CppClass *v109; // x8
  __int64 v110; // x11
  struct EquipGraphListViewItem_o *v111; // x8
  struct UserServantEntity_o *v112; // x9
  __int128 v113; // q1
  EquipGraphServantItem_o *v114; // x21
  EquipGraphListViewItem_WearerMemberInfo_o *WearerMemberInfo; // x22
  System_String_o *v116; // x20
  struct EquipGraphListViewItem_o *v117; // x8
  System_Object_array *v118; // x21
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  Il2CppObject *v121; // x23
  int32_t WearerSvtRarity_k__BackingField; // w23
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x23
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  Il2CppObject *WearerServantClassName_k__BackingField; // x23
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  Il2CppObject *WearerServantName_k__BackingField; // x22
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  Il2CppObject *v134; // x22
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  Il2CppObject *v138; // x22
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  Il2CppObject *v141; // x22
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  Il2CppObject *v144; // x22
  CGThumbnailListItem_o *v145; // x0
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  __int64 v149; // x5
  __int64 v150; // x6
  __int64 v151; // x7
  struct EquipGraphListViewItem_o *v152; // x8
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  Il2CppObject *v155; // x23
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  __int64 v159; // x5
  __int64 v160; // x6
  __int64 v161; // x7
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  Il2CppObject *v164; // x23
  int32_t v165; // w23
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  Il2CppObject *v168; // x23
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  Il2CppObject *v171; // x23
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  Il2CppObject *v174; // x22
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  __int64 v178; // x5
  __int64 v179; // x6
  __int64 v180; // x7
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  Il2CppObject *v183; // x22
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  __int64 v187; // x5
  __int64 v188; // x6
  __int64 v189; // x7
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  Il2CppObject *v192; // x22
  struct EquipGraphServantItem_o *v193; // x8
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  Il2CppObject *v196; // x22
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  Il2CppObject *v199; // x22
  System_String_o *v200; // x20
  Il2CppObject *v201; // x21
  System_String_o *v202; // x22
  System_String_o *v203; // x23
  System_String_o *v204; // x24
  CommonConfirmDialog_ClickDelegate_o *v205; // x25
  System_Func_object__bool__o *v206; // x21
  Il2CppObject *v207; // x22
  System_String_o *v208; // x20
  System_Object_array *v209; // x21
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  int64_t v212; // x23
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  Il2CppClass *v215; // x23
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  int64_t v218; // x23
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  Il2CppClass *v221; // x23
  struct EquipGraphServantItem_o *v222; // x8
  int32_t v223; // w23
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  int64_t v226; // x23
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  int64_t v229; // x22
  System_String_o *v230; // x20
  Il2CppObject *v231; // x21
  System_String_o *v232; // x22
  CommonConfirmDialog_ClickDelegate_o *v233; // x23
  struct UserServantEntity_o *userServantEntity; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v236; // w24
  System_String_o *v237; // x21
  System_Object_array *v238; // x23
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  Il2CppObject *v241; // x22
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  Il2CppObject *v244; // x22
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  Il2CppObject *v247; // x22
  __int64 v248; // x22
  __int64 v249; // x24
  int32_t v250; // w0
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  Il2CppObject *v253; // x20
  CGThumbnailListItem_o *v254; // x0
  __int64 v255; // x2
  __int64 v256; // x3
  __int64 v257; // x4
  __int64 v258; // x5
  __int64 v259; // x6
  __int64 v260; // x7
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  Il2CppObject *v263; // x22
  __int64 v264; // x2
  __int64 v265; // x3
  __int64 v266; // x4
  __int64 v267; // x5
  __int64 v268; // x6
  __int64 v269; // x7
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  Il2CppObject *v272; // x22
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  Il2CppObject *v275; // x22
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  Il2CppObject *v278; // x22
  __int64 v279; // x22
  __int64 v280; // x24
  int32_t v281; // w0
  System_String_o *v282; // x20
  Il2CppObject *v283; // x21
  System_String_o *v284; // x22
  System_String_o *v285; // x23
  System_String_o *v286; // x24
  CommonConfirmDialog_ClickDelegate_o *v287; // x25
  __int64 v288; // x0
  struct PartyListViewItem_array *v289; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v290; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v291; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v293; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v296; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16

  if ( (byte_4C4252C & 1) == 0 )
  {
    sub_1C37058(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EquipGraphListViewItem_TypeInfo);
    sub_1C37058(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_1C37058(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_1C37058(&Method_EquipGraphListViewManager__SelectEquip_b__83_0__);
    sub_1C37058(&Method_EquipGraphListViewManager__SelectEquip_b__83_1__);
    sub_1C37058(&Method_EquipGraphListViewManager__SelectEquip_b__83_2__);
    sub_1C37058(&Method_EquipGraphListViewManager__SelectEquip_b__83_3__);
    sub_1C37058(&EquipGraphListViewObject_TypeInfo);
    sub_1C37058(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_15503/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_1C37058(&StringLiteral_15504/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_1C37058(&StringLiteral_15497/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_1C37058(&StringLiteral_15499/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/);
    sub_1C37058(&StringLiteral_5496/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_1C37058(&StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_1C37058(&StringLiteral_15500/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/);
    sub_1C37058(&StringLiteral_15493/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C37058(&StringLiteral_5495/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_15492/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_4C4252C = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v296, 0, sizeof(v296));
  this->fields.selectItem = item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectItem, (int32_t)item, (int32_t)callback, method);
  p_selectItemCallbackFunc = (CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v9, v10);
  selectItem = (int64_t)this->fields.selectItem;
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
      v17 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_SelectEquip__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    if ( !this->fields.isWaveBattle )
      goto LABEL_21;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_327;
    v21 = this->fields.partyNumber - 1;
    if ( (unsigned int)v21 < LODWORD(waveDeckItemList->max_length) )
    {
      selectItem = (int64_t)waveDeckItemList->m_Items[v21];
      if ( !selectItem )
        goto LABEL_327;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)selectItem, this->fields.memberIndex, 0, 0, 0);
LABEL_21:
      selectItem = (int64_t)*p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_327;
      *(_BYTE *)(selectItem + 153) = 0;
      selectItem = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v19);
      v22 = *p_selectItem;
      if ( v13 || (selectItem & 1) == 0 )
      {
        if ( !v22 )
          goto LABEL_327;
        if ( v22->fields._OrganizedWave_k__BackingField <= 0 && !v22->fields._IsUnique_k__BackingField )
        {
LABEL_51:
          selectItem = (int64_t)this->fields.servantItemInfo;
          if ( selectItem )
          {
            EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)selectItem, 0, 0);
            selectItem = (int64_t)this->fields.servantItemDraw;
            if ( selectItem )
            {
              EquipGraphServantItemDraw__SetItem(
                (EquipGraphServantItemDraw_o *)selectItem,
                this->fields.servantItemInfo,
                this->fields.addBaseHp,
                this->fields.addBaseAtk,
                0);
              selectItem = (int64_t)this->fields.bondSkillChangeMessageLabel;
              if ( selectItem )
              {
                v39 = 0;
                goto LABEL_55;
              }
            }
          }
          goto LABEL_327;
        }
      }
      else if ( !v22 )
      {
        goto LABEL_327;
      }
      wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v22->fields.wearerMemberInfoList;
      v38 = (System_Action_object__o *)sub_1C372A4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
      System_Action_object____ctor(
        v38,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__83_0__,
        0);
      if ( !wearerMemberInfoList )
        goto LABEL_327;
      System_Collections_Generic_List_object___ForEach(
        wearerMemberInfoList,
        (System_Action_T__o *)v38,
        (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v16 )
        goto LABEL_327;
      EquipGraphListViewObject__Init_42251276(v16, 4, 0, 0);
      goto LABEL_51;
    }
LABEL_329:
    sub_1C372BC(selectItem);
  }
  if ( *(int *)(selectItem + 224) >= 1 )
  {
    if ( !item )
      goto LABEL_327;
    v23 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_SelectEquip__);
    v25 = (System_Reflection_MethodBase_o *)sub_1C3703C(v23, v23[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
      selectItem = (int64_t)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
      if ( (selectItem & 1) != 0 )
      {
        v28 = this->fields.waveDeckItemList;
        if ( !v28 )
          goto LABEL_327;
        v29 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
          goto LABEL_329;
        selectItem = (int64_t)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        v30 = v28->m_Items[v29];
        selectItem = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v26);
        if ( !selectItem )
          goto LABEL_327;
        if ( !v30 )
          goto LABEL_327;
        selectItem = (int64_t)PartyListViewItem__GetMember(v30, *(_DWORD *)(selectItem + 16), 0);
        if ( !selectItem )
          goto LABEL_327;
        cost = v30->fields.cost;
        selectItem = PartyOrganizationListViewItem__get_EquipCost((PartyOrganizationListViewItem_o *)selectItem, 0);
        if ( !this->fields.servantItemInfo )
          goto LABEL_327;
        if ( cost - (int)selectItem + EquipGraphServantItem__get_EquipCost(this->fields.servantItemInfo, 0) > v30->fields.maxCost )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_15493/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0);
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_15492/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0);
          v36 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v36,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__83_1__,
            0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_31210584(
              (CommonUI_o *)Instance,
              v34,
              v35,
              v36,
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
        selectItem = (int64_t)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        WearerMemberInfo = EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v32);
        if ( this->fields.questRestrictionInfo
          && QuestRestrictionInfo__IsWaveSetupSwitchParty(this->fields.questRestrictionInfo, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v116 = LocalizationManager__Get((System_String_o *)StringLiteral_15500/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C37100(object___TypeInfo, 8);
          v117 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v118 = (System_Object_array *)selectItem;
          selectItem = (int64_t)LocalizationManager__ConvertNumberToRomaNumber(
                                  v117->fields._OrganizedWave_k__BackingField,
                                  0);
          if ( !v118 )
            goto LABEL_327;
          v121 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v118->max_length) )
              goto LABEL_329;
            v118->m_Items[0] = v121;
            sub_1C36FFC((CGThumbnailListItem_o *)v118->m_Items, (int32_t)v121, v119, v120);
            if ( !WearerMemberInfo )
              goto LABEL_327;
            WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            selectItem = (int64_t)Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0);
            v125 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v118->max_length) <= 1 )
                goto LABEL_329;
              v118->m_Items[1] = v125;
              sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[1], (int32_t)v125, v123, v124);
              WearerServantClassName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !WearerServantClassName_k__BackingField
                || (selectItem = sub_1C37194(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   v118->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v118->max_length) <= 2 )
                  goto LABEL_329;
                v118->m_Items[2] = WearerServantClassName_k__BackingField;
                sub_1C36FFC(
                  (CGThumbnailListItem_o *)&v118->m_Items[2],
                  (int32_t)WearerServantClassName_k__BackingField,
                  v126,
                  v127);
                WearerServantName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !WearerServantName_k__BackingField
                  || (selectItem = sub_1C37194(WearerServantName_k__BackingField, v118->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v118->max_length) <= 3 )
                    goto LABEL_329;
                  v118->m_Items[3] = WearerServantName_k__BackingField;
                  sub_1C36FFC(
                    (CGThumbnailListItem_o *)&v118->m_Items[3],
                    (int32_t)WearerServantName_k__BackingField,
                    v129,
                    v130);
                  selectItem = (int64_t)LocalizationManager__ConvertNumberToRomaNumber(this->fields.partyNumber, 0);
                  v134 = (Il2CppObject *)selectItem;
                  if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v118->max_length) <= 4 )
                      goto LABEL_329;
                    v118->m_Items[4] = v134;
                    sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[4], (int32_t)v134, v132, v133);
                    servantItemInfo = this->fields.servantItemInfo;
                    if ( !servantItemInfo )
                      goto LABEL_327;
                    selectItem = (int64_t)Rarity__getRarityType(servantItemInfo->fields.rarityId, 0);
                    v138 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v118->max_length) <= 5 )
                        goto LABEL_329;
                      v118->m_Items[5] = v138;
                      sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[5], (int32_t)v138, v136, v137);
                      selectItem = (int64_t)this->fields.servantItemInfo;
                      if ( !selectItem )
                        goto LABEL_327;
                      selectItem = (int64_t)EquipGraphServantItem__get_ClassName(
                                              (EquipGraphServantItem_o *)selectItem,
                                              0);
                      v141 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v118->max_length) <= 6 )
                          goto LABEL_329;
                        v118->m_Items[6] = v141;
                        sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[6], (int32_t)v141, v139, v140);
                        selectItem = (int64_t)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_327;
                        selectItem = (int64_t)EquipGraphServantItem__get_NameText(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0);
                        v144 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v118->max_length) <= 7 )
                            goto LABEL_329;
                          v118->m_Items[7] = v144;
                          v145 = (CGThumbnailListItem_o *)&v118->m_Items[7];
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
          v116 = LocalizationManager__Get((System_String_o *)StringLiteral_15503/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C37100(object___TypeInfo, 10);
          v152 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v118 = (System_Object_array *)selectItem;
          LODWORD(v292.fields.currentCryptoKey) = v152->fields._OrganizedWave_k__BackingField;
          selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v292, v146, v147, v148, v149, v150, v151);
          if ( !v118 )
            goto LABEL_327;
          v155 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v118->max_length) )
              goto LABEL_329;
            v118->m_Items[0] = v155;
            sub_1C36FFC((CGThumbnailListItem_o *)v118->m_Items, (int32_t)v155, v153, v154);
            maxWave = this->fields.maxWave;
            selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v156, v157, v158, v159, v160, v161);
            v164 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v118->max_length) <= 1 )
                goto LABEL_329;
              v118->m_Items[1] = v164;
              sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[1], (int32_t)v164, v162, v163);
              if ( !WearerMemberInfo )
                goto LABEL_327;
              v165 = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              selectItem = (int64_t)Rarity__getRarityType(v165, 0);
              v168 = (Il2CppObject *)selectItem;
              if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v118->max_length) <= 2 )
                  goto LABEL_329;
                v118->m_Items[2] = v168;
                sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[2], (int32_t)v168, v166, v167);
                v171 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
                if ( !v171
                  || (selectItem = sub_1C37194(
                                     WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                     v118->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v118->max_length) <= 3 )
                    goto LABEL_329;
                  v118->m_Items[3] = v171;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[3], (int32_t)v171, v169, v170);
                  v174 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                  if ( !v174 || (selectItem = sub_1C37194(v174, v118->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v118->max_length) <= 4 )
                      goto LABEL_329;
                    v118->m_Items[4] = v174;
                    sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[4], (int32_t)v174, v172, v173);
                    partyNumber = this->fields.partyNumber;
                    selectItem = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v175, v176, v177, v178, v179, v180);
                    v183 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v118->max_length) <= 5 )
                        goto LABEL_329;
                      v118->m_Items[5] = v183;
                      sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[5], (int32_t)v183, v181, v182);
                      v293 = this->fields.maxWave;
                      selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v293, v184, v185, v186, v187, v188, v189);
                      v192 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v118->max_length) <= 6 )
                          goto LABEL_329;
                        v118->m_Items[6] = v192;
                        sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[6], (int32_t)v192, v190, v191);
                        v193 = this->fields.servantItemInfo;
                        if ( !v193 )
                          goto LABEL_327;
                        selectItem = (int64_t)Rarity__getRarityType(v193->fields.rarityId, 0);
                        v196 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v118->max_length) <= 7 )
                            goto LABEL_329;
                          v118->m_Items[7] = v196;
                          sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[7], (int32_t)v196, v194, v195);
                          selectItem = (int64_t)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_327;
                          selectItem = (int64_t)EquipGraphServantItem__get_ClassName(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0);
                          v199 = (Il2CppObject *)selectItem;
                          if ( !selectItem
                            || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( LODWORD(v118->max_length) <= 8 )
                              goto LABEL_329;
                            v118->m_Items[8] = v199;
                            sub_1C36FFC((CGThumbnailListItem_o *)&v118->m_Items[8], (int32_t)v199, v197, v198);
                            selectItem = (int64_t)this->fields.servantItemInfo;
                            if ( !selectItem )
                              goto LABEL_327;
                            selectItem = (int64_t)EquipGraphServantItem__get_NameText(
                                                    (EquipGraphServantItem_o *)selectItem,
                                                    0);
                            v144 = (Il2CppObject *)selectItem;
                            if ( !selectItem
                              || (selectItem = sub_1C37194(selectItem, v118->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v118->max_length) <= 9 )
                                goto LABEL_329;
                              v118->m_Items[9] = v144;
                              v145 = (CGThumbnailListItem_o *)&v118->m_Items[9];
LABEL_239:
                              sub_1C36FFC(v145, (int32_t)v144, v142, v143);
                              v200 = System_String__Format_63603084(v116, v118, 0);
                              v201 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v202 = LocalizationManager__Get((System_String_o *)StringLiteral_15504/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0);
                              v203 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
                              v204 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
                              v205 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v205,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0);
                              if ( v201 )
                              {
                                CommonUI__OpenConfirmDialog_31208316(
                                  (CommonUI_o *)v201,
                                  v202,
                                  v200,
                                  v203,
                                  v204,
                                  v205,
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
        v288 = sub_1C372D8(selectItem);
        sub_1C37180(v288, 0);
      }
LABEL_120:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v27);
      return;
    }
LABEL_62:
    OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0;
      sub_1C36FFC(p_selectItemCallbackFunc, 0, v45, v46);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  if ( !*(_BYTE *)(selectItem + 236) )
  {
    IsUse = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v11);
    v49 = Method_EquipGraphListViewManager_SelectEquip__;
    v50 = IsUse;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v49 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_SelectEquip__);
    v51 = (System_Reflection_MethodBase_o *)sub_1C3703C(v49, v49[4]);
    OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0, 0);
    if ( !v50 )
    {
      if ( this->fields.isWaveBattle )
      {
        v90 = this->fields.waveDeckItemList;
        if ( !v90 )
          goto LABEL_327;
        v91 = this->fields.partyNumber - 1;
        if ( (unsigned int)v91 >= LODWORD(v90->max_length) )
          goto LABEL_329;
        v92 = this->fields.selectItem;
        if ( !v92 )
          goto LABEL_327;
        userSvtEntity = v92->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_327;
        memberIndex = this->fields.memberIndex;
        v95 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v96 = v90->m_Items[v91];
        *(_OWORD *)&v292.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v292.fields.fakeValue = v95;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v291 = v292;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v291, 0);
        if ( !v96 )
          goto LABEL_327;
        PartyListViewItem__SetEquip(v96, memberIndex, selectItem, 0, 0);
      }
      selectItem = (int64_t)this->fields.itemList;
      if ( selectItem )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v292,
          (System_Collections_Generic_List_object__o *)selectItem,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v296 = *(System_Collections_Generic_List_Enumerator_object__o *)&v292.fields.currentCryptoKey;
        while ( 1 )
        {
          v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v296,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v97 )
            break;
          current = v296.fields._current;
          if ( !v296.fields._current
            || (v100 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
                v296.fields._current->klass->_2.naturalAligment < (unsigned int)v100)
            || (EquipGraphListViewItem_c *)v296.fields._current->klass->_2.typeHierarchy[v100 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            sub_1C372B4(v97);
          }
          if ( BYTE1(v296.fields._current[9].monitor) )
          {
            monitor_low = LOBYTE(v296.fields._current[16].monitor);
            BYTE1(v296.fields._current[9].monitor) = 0;
            v102 = monitor_low ? BYTE1(current[16].monitor) ^ 1 : 0;
            if ( (v103 = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v98), !v102) && v103
              || SLODWORD(current[14].klass) > 0
              || BYTE4(current[14].monitor) )
            {
              v104 = (System_Collections_Generic_List_object__o *)current[17].klass;
              v105 = (System_Action_object__o *)sub_1C372A4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
              System_Action_object____ctor(
                v105,
                (Il2CppObject *)this,
                Method_EquipGraphListViewManager__SelectEquip_b__83_3__,
                0);
              if ( !v104 )
                sub_1C372B4(v106);
              System_Collections_Generic_List_object___ForEach(
                v104,
                (System_Action_T__o *)v105,
                (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
              v107 = (UnityEngine_Object_o *)current[7].klass;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v108 = UnityEngine_Object__op_Inequality(v107, 0, 0);
              if ( v108 )
              {
                v109 = current[7].klass;
                if ( !v109
                  || (v110 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                      *((unsigned __int8 *)v109->_1.image + 304) < (unsigned int)v110)
                  || *(EquipGraphListViewObject_c **)(*((_QWORD *)v109->_1.image + 25) + 8 * v110 - 8) != EquipGraphListViewObject_TypeInfo )
                {
                  sub_1C372B4(v108);
                }
                EquipGraphListViewObject__Init_42251276((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v296,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v111 = *p_selectItem;
        if ( *p_selectItem )
        {
          v112 = v111->fields.userSvtEntity;
          v111->fields.isBase = 1;
          if ( v112 )
          {
            v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
            v114 = this->fields.servantItemInfo;
            *(_OWORD *)&v292.fields.currentCryptoKey = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v292.fields.fakeValue = v113;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v290 = v292;
            selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v290, 0);
            if ( v114 )
            {
              EquipGraphServantItem__SetEquipTarget(v114, selectItem, 0);
              selectItem = (int64_t)this->fields.servantItemDraw;
              if ( selectItem )
              {
                EquipGraphServantItemDraw__SetItem(
                  (EquipGraphServantItemDraw_o *)selectItem,
                  this->fields.servantItemInfo,
                  this->fields.addBaseHp,
                  this->fields.addBaseAtk,
                  0);
                selectItem = (int64_t)this->fields.bondSkillChangeMessageLabel;
                if ( selectItem )
                {
                  v39 = this->fields.equipGraphType == 1;
LABEL_55:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v39, 0);
                  EquipGraphListViewManager__RefrashListDisp(this, v40);
                  if ( callback )
                  {
                    p_selectItemCallbackFunc->klass = 0;
                    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v41, v42);
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
      sub_1C372B4(selectItem);
    }
    if ( !*p_selectItem )
      goto LABEL_327;
    v52 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
    if ( !v52 )
      goto LABEL_327;
    if ( v52->fields._size == 1 )
    {
      selectItem = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v52,
                              0,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
      if ( !selectItem )
        goto LABEL_327;
      v53 = selectItem;
      if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
        goto LABEL_120;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0);
      selectItem = sub_1C37100(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v55 = (System_Object_array *)selectItem;
      selectItem = (int64_t)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v55 )
        goto LABEL_327;
      v58 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v55->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v55->max_length) )
        goto LABEL_329;
      v55->m_Items[0] = (Il2CppObject *)v58;
      sub_1C36FFC((CGThumbnailListItem_o *)v55->m_Items, v58, v56, v57);
      v61 = *(Il2CppObject **)(v53 + 32);
      if ( v61 )
      {
        selectItem = sub_1C37194(*(_QWORD *)(v53 + 32), v55->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v55->max_length) <= 1 )
        goto LABEL_329;
      v55->m_Items[1] = v61;
      sub_1C36FFC((CGThumbnailListItem_o *)&v55->m_Items[1], (int32_t)v61, v59, v60);
      selectItem = (int64_t)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (int64_t)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v64 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v55->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v55->max_length) <= 2 )
        goto LABEL_329;
      v55->m_Items[2] = (Il2CppObject *)v64;
      sub_1C36FFC((CGThumbnailListItem_o *)&v55->m_Items[2], v64, v62, v63);
      v67 = *(Il2CppObject **)(v53 + 48);
      if ( v67 )
      {
        selectItem = sub_1C37194(*(_QWORD *)(v53 + 48), v55->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v55->max_length) <= 3 )
        goto LABEL_329;
      v55->m_Items[3] = v67;
      sub_1C36FFC((CGThumbnailListItem_o *)&v55->m_Items[3], (int32_t)v67, v65, v66);
      v68 = this->fields.servantItemInfo;
      if ( !v68 )
        goto LABEL_327;
      rarityId = v68->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (int64_t)Rarity__getRarityType(rarityId, 0);
      v72 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v55->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v55->max_length) <= 4 )
        goto LABEL_329;
      v55->m_Items[4] = (Il2CppObject *)v72;
      sub_1C36FFC((CGThumbnailListItem_o *)&v55->m_Items[4], v72, v70, v71);
      selectItem = (int64_t)Rarity__getRarityType(*(_DWORD *)(v53 + 60), 0);
      v75 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v55->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v55->max_length) <= 5 )
        goto LABEL_329;
      v55->m_Items[5] = (Il2CppObject *)v75;
      sub_1C36FFC((CGThumbnailListItem_o *)&v55->m_Items[5], v75, v73, v74);
      v76 = v54;
      v77 = v55;
    }
    else
    {
      v206 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v206,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__83_2__,
        0);
      v207 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
               (System_Collections_Generic_IEnumerable_TSource__o *)v52,
               (System_Func_TSource__bool__o *)v206,
               (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v208 = LocalizationManager__Get((System_String_o *)StringLiteral_5495/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0);
      selectItem = sub_1C37100(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v209 = (System_Object_array *)selectItem;
      selectItem = (int64_t)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v209 )
        goto LABEL_327;
      v212 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v209->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v209->max_length) )
        goto LABEL_329;
      v209->m_Items[0] = (Il2CppObject *)v212;
      sub_1C36FFC((CGThumbnailListItem_o *)v209->m_Items, v212, v210, v211);
      if ( !v207 )
        goto LABEL_327;
      v215 = v207[2].klass;
      if ( v215 )
      {
        selectItem = sub_1C37194(v207[2].klass, v209->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v209->max_length) <= 1 )
        goto LABEL_329;
      v209->m_Items[1] = (Il2CppObject *)v215;
      sub_1C36FFC((CGThumbnailListItem_o *)&v209->m_Items[1], (int32_t)v215, v213, v214);
      selectItem = (int64_t)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (int64_t)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v218 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v209->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v209->max_length) <= 2 )
        goto LABEL_329;
      v209->m_Items[2] = (Il2CppObject *)v218;
      sub_1C36FFC((CGThumbnailListItem_o *)&v209->m_Items[2], v218, v216, v217);
      v221 = v207[3].klass;
      if ( v221 )
      {
        selectItem = sub_1C37194(v207[3].klass, v209->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v209->max_length) <= 3 )
        goto LABEL_329;
      v209->m_Items[3] = (Il2CppObject *)v221;
      sub_1C36FFC((CGThumbnailListItem_o *)&v209->m_Items[3], (int32_t)v221, v219, v220);
      v222 = this->fields.servantItemInfo;
      if ( !v222 )
        goto LABEL_327;
      v223 = v222->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (int64_t)Rarity__getRarityType(v223, 0);
      v226 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v209->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v209->max_length) <= 4 )
        goto LABEL_329;
      v209->m_Items[4] = (Il2CppObject *)v226;
      sub_1C36FFC((CGThumbnailListItem_o *)&v209->m_Items[4], v226, v224, v225);
      selectItem = (int64_t)Rarity__getRarityType(HIDWORD(v207[3].monitor), 0);
      v229 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C37194(selectItem, v209->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v209->max_length) <= 5 )
        goto LABEL_329;
      v209->m_Items[5] = (Il2CppObject *)v229;
      sub_1C36FFC((CGThumbnailListItem_o *)&v209->m_Items[5], v229, v227, v228);
      v76 = v208;
      v77 = v209;
    }
    v230 = System_String__Format_63603084(v76, v77, 0);
    v231 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v232 = LocalizationManager__Get((System_String_o *)StringLiteral_5496/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
    v233 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v233,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectConfirm__,
      0);
    selectItem = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v231 )
    {
      CommonUI__OpenConfirmDialog(
        (CommonUI_o *)v231,
        v232,
        v230,
        v233,
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
  v43 = Method_EquipGraphListViewManager_SelectEquip__;
  v44 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v43 = (_QWORD *)sub_1C37070(Method_EquipGraphListViewManager_SelectEquip__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C3703C(v43, v43[4]);
  if ( v44 )
    goto LABEL_62;
  OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
  selectItem = (int64_t)this->fields.servantItemInfo;
  if ( !selectItem )
    goto LABEL_327;
  selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
  if ( (selectItem & 1) == 0 )
    goto LABEL_120;
  v78 = this->fields.waveDeckItemList;
  if ( !v78 )
    goto LABEL_327;
  max_length = v78->max_length;
  if ( (int)max_length >= 1 )
  {
    v80 = 0;
    v81 = 1;
    v289 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v80 >= (unsigned int)max_length )
        goto LABEL_329;
      v82 = v78->m_Items[v80];
      v83 = 0;
      do
      {
        selectItem = (int64_t)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          selectItem = (int64_t)BalanceConfig_TypeInfo;
        }
        if ( v83 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
          goto LABEL_118;
        if ( !v82 )
          goto LABEL_327;
        selectItem = (int64_t)PartyListViewItem__GetMember(v82, v83, 0);
        if ( !*p_selectItem )
          goto LABEL_327;
        servantEntity = (*p_selectItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_327;
        v85 = (PartyOrganizationListViewItem_o *)selectItem;
        v87 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
        v86 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v297.fields.currentCryptoKey = v87;
        *(_QWORD *)&v297.fields.fakeValue = v86;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v297, 0);
        if ( !v85 )
          goto LABEL_327;
        v88 = selectItem;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v85, 0);
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(EquipSvtId, 0);
        ++v83;
      }
      while ( v88 != (_DWORD)selectItem );
      v89 = v85->fields.servantEntity;
      if ( v89 )
        break;
LABEL_118:
      v78 = v289;
      ++v80;
      ++v81;
      LODWORD(max_length) = v289->max_length;
      if ( (__int64)v80 >= (int)max_length )
        return;
    }
    userServantEntity = v85->fields.userServantEntity;
    if ( userServantEntity )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v236 = v85->fields.rarityId;
      if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v237 = LocalizationManager__Get((System_String_o *)StringLiteral_15499/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/, 0);
        v238 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
        selectItem = (int64_t)LocalizationManager__ConvertNumberToRomaNumber(v81, 0);
        if ( !v238 )
          goto LABEL_327;
        v241 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v238->max_length) )
          goto LABEL_329;
        v238->m_Items[0] = v241;
        sub_1C36FFC((CGThumbnailListItem_o *)v238->m_Items, (int32_t)v241, v239, v240);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (int64_t)Rarity__getRarityType(v236, 0);
        v244 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 1 )
          goto LABEL_329;
        v238->m_Items[1] = v244;
        sub_1C36FFC((CGThumbnailListItem_o *)&v238->m_Items[1], (int32_t)v244, v242, v243);
        selectItem = (int64_t)ServantEntity__getClassName(v89, 0);
        v247 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 2 )
          goto LABEL_329;
        v238->m_Items[2] = v247;
        sub_1C36FFC((CGThumbnailListItem_o *)&v238->m_Items[2], (int32_t)v247, v245, v246);
        v249 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v248 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v299.fields.currentCryptoKey = v249;
        *(_QWORD *)&v299.fields.fakeValue = v248;
        v250 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v299, 0);
        selectItem = (int64_t)ServantEntity__getName(v89, v250, -1, 0, 0);
        v253 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 3 )
          goto LABEL_329;
        v238->m_Items[3] = v253;
        v254 = (CGThumbnailListItem_o *)&v238->m_Items[3];
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v237 = LocalizationManager__Get((System_String_o *)StringLiteral_15497/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0);
        v238 = (System_Object_array *)sub_1C37100(object___TypeInfo, 5);
        LODWORD(v292.fields.currentCryptoKey) = v81;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v292, v255, v256, v257, v258, v259, v260);
        if ( !v238 )
          goto LABEL_327;
        v263 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v238->max_length) )
          goto LABEL_329;
        v238->m_Items[0] = v263;
        sub_1C36FFC((CGThumbnailListItem_o *)v238->m_Items, (int32_t)v263, v261, v262);
        maxWave = this->fields.maxWave;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v264, v265, v266, v267, v268, v269);
        v272 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 1 )
          goto LABEL_329;
        v238->m_Items[1] = v272;
        sub_1C36FFC((CGThumbnailListItem_o *)&v238->m_Items[1], (int32_t)v272, v270, v271);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (int64_t)Rarity__getRarityType(v236, 0);
        v275 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 2 )
          goto LABEL_329;
        v238->m_Items[2] = v275;
        sub_1C36FFC((CGThumbnailListItem_o *)&v238->m_Items[2], (int32_t)v275, v273, v274);
        selectItem = (int64_t)ServantEntity__getClassName(v89, 0);
        v278 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 3 )
          goto LABEL_329;
        v238->m_Items[3] = v278;
        sub_1C36FFC((CGThumbnailListItem_o *)&v238->m_Items[3], (int32_t)v278, v276, v277);
        v280 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v279 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v300.fields.currentCryptoKey = v280;
        *(_QWORD *)&v300.fields.fakeValue = v279;
        v281 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v300, 0);
        selectItem = (int64_t)ServantEntity__getName(v89, v281, -1, 0, 0);
        v253 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C37194(selectItem, v238->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v238->max_length) <= 4 )
          goto LABEL_329;
        v238->m_Items[4] = v253;
        v254 = (CGThumbnailListItem_o *)&v238->m_Items[4];
      }
      sub_1C36FFC(v254, (int32_t)v253, v251, v252);
      v282 = System_String__Format_63603084(v237, v238, 0);
      v283 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v284 = LocalizationManager__Get((System_String_o *)StringLiteral_5496/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v285 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
      v286 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
      v287 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v287,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      if ( v283 )
      {
        CommonUI__OpenConfirmDialog_31208316(
          (CommonUI_o *)v283,
          v284,
          v282,
          v285,
          v286,
          v287,
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

  if ( (byte_4C42530 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17487/*"btn_filter_on"*/);
    sub_1C37058(&StringLiteral_17486/*"btn_filter"*/);
    byte_4C42530 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C372B4(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17486/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17487/*"btn_filter_on"*/;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_41062900(this, mode, v6);
}


void EquipGraphListViewManager__SetMode_41062900(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v6; // x2

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
    sub_1C372B4(servantItemDraw);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_41101652(this, mode + 1, v6);
}


void EquipGraphListViewManager__SetMode_41101600(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_41062900(this, mode, v6);
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
  if ( (byte_4C42526 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1C37058(&EquipGraphListViewObject_TypeInfo);
    byte_4C42526 = 1;
  }
  if ( !obj
    || (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_42251276((EquipGraphListViewObject_o *)obj, v7, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__SetSortButtonImage(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  int32_t equipGraphType; // w21
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20
  float v18; // s0 OVERLAPPED
  float v19; // s3
  float v20; // s1
  float v21; // s2

  if ( (byte_4C42535 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17523/*"btn_sort_up"*/);
    sub_1C37058(&StringLiteral_17621/*"btn_txt_up"*/);
    sub_1C37058(&StringLiteral_17572/*"btn_txt_new"*/);
    sub_1C37058(&StringLiteral_17562/*"btn_txt_down"*/);
    sub_1C37058(&StringLiteral_17579/*"btn_txt_old"*/);
    sub_1C37058(&StringLiteral_17520/*"btn_sort_down"*/);
    byte_4C42535 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_47;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( !v7 )
      goto LABEL_47;
    sortKind = v7->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17579/*"btn_txt_old"*/ : &StringLiteral_17572/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v11 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
      v12 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_up"*/ : &StringLiteral_17562/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v11 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
      v12 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
    }
    if ( v10->fields.isAscendingOrder )
      v14 = v11;
    else
      v14 = v12;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
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
    v17 = this->fields.bonusFilterKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                               sort,
                               this->fields.alignedBonusFilterInfos,
                               this->fields.isQuestStart,
                               0);
    if ( !v17 )
      goto LABEL_47;
    UILabel__set_text(v17, (System_String_o *)sort, 0);
    sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
    v18 = 1.0;
    if ( equipGraphType == 1 )
      v18 = 0.5;
    if ( !sort )
      goto LABEL_47;
    v19 = 1.0;
    v20 = v18;
    v21 = v18;
    UIWidget__set_color((UIWidget_o *)sort, *(UnityEngine_Color_o *)&v18, 0);
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
    sub_1C372B4(sort);
  }
}


void EquipGraphListViewManager___EndSelectConfirm_b__84_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool EquipGraphListViewManager___EndSelectConfirm_b__84_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void EquipGraphListViewManager___EndSelectConfirm_b__84_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__83_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__83_1(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4C42539 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C42539 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v5, v6);
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
    sub_1C372B4(this);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void EquipGraphListViewManager___SelectEquip_b__83_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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

  if ( (byte_4C42515 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C42515 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C42517 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C42517 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C42519 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C42519 = 1;
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
    v8 = sub_1C712B0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x21
  ListViewItem_o *Item; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C4251E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4251E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v8 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v12 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v12 )
        {
          if ( !v3 )
            sub_1C372B4(v12);
          items = v3->fields._items;
          v14 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v12);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v8,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v8;
        sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4251D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4251D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C42516 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C42516 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C42518 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C42518 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C4251A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C4251A = 1;
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
    v8 = sub_1C712B0(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7C094;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7C03C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C432E8 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_4C432E8 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             EquipGraphListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C432E9 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager___c_TypeInfo);
    byte_4C432E9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EquipGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return y->fields.atk;
}


int32_t EquipGraphListViewManager___c___CreateList_b__62_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C372B4(this);
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
  if ( (byte_4C432EB & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4C432EB = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)_4__this->fields.itemList) == 0
    || (equipList = this->fields.equipList,
        v8 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++*(&this->fields.type + 1),
        !equipList) )
  {
    sub_1C372B4(this);
  }
  type = this->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)x,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &equipList->obj.klass + type;
    this->fields.type = type + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
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
  if ( (byte_4C432EA & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C432EA = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                                &v9,
                                                                0);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_1C372B4(this);
  type = v4->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
    sub_1C372BC(this);
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
  if ( (byte_4C432EC & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)sub_1C37058(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__5__);
    byte_4C432EC = 1;
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
  this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
                                                                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
LABEL_15:
    sub_1C372B4(this);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
  _9__5 = v4->fields.__9__5;
  v11 = ActIndividuality;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13);
  }
  return BasicHelper__Any_int__51187064(
           v11,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
}


bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_4C432ED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C432ED = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4C432EE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C432EE = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1C372B4(0);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}