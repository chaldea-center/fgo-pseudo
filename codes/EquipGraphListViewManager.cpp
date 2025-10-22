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

  if ( (byte_4C562E1 & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewManager_TypeInfo);
    sub_1C3E564(&ListViewSort_TypeInfo);
    sub_1C3E564(&StringLiteral_11410/*"RewardUpEquipGraph"*/);
    sub_1C3E564(&StringLiteral_6112/*"EquipGraph"*/);
    sub_1C3E564(&StringLiteral_3193/*"BondEquipGraph"*/);
    sub_1C3E564(&StringLiteral_15592/*"WarBoardEquipGraph"*/);
    byte_4C562E1 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v1, (System_String_o *)StringLiteral_6112/*"EquipGraph"*/, 3, 0, 0);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1C3E508((CGThumbnailListItem_o *)EquipGraphListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v4, (System_String_o *)StringLiteral_3193/*"BondEquipGraph"*/, 3, 0, 0);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->bondSortStatus, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v8, (System_String_o *)StringLiteral_11410/*"RewardUpEquipGraph"*/, 3, 0, 0);
  v9 = EquipGraphListViewManager_TypeInfo->static_fields;
  v9->rewardUpSortStatus = v8;
  sub_1C3E508((CGThumbnailListItem_o *)&v9->rewardUpSortStatus, (int32_t)v8, v10, v11);
  v12 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v12, (System_String_o *)StringLiteral_15592/*"WarBoardEquipGraph"*/, 3, 0, 0);
  v13 = EquipGraphListViewManager_TypeInfo->static_fields;
  v13->warBoardSortStatus = v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v13->warBoardSortStatus, (int32_t)v12, v14, v15);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_41111336(this, 2, v11);
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
  System_Collections_Generic_List_object__o *v99; // x26
  __int64 v100; // x23
  int v101; // w8
  void *v102; // x8
  unsigned __int64 v103; // x24
  UserServantEntity_o *v104; // x20
  int64_t v105; // x0
  int32_t v106; // w27
  int64_t v107; // x28
  int32_t v108; // w29
  EquipGraphListViewItem_o *v109; // x22
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  Il2CppObject *v116; // x20
  ServantSkillMaster_o *v117; // x28
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  int v122; // w8
  System_Collections_Generic_HashSet_int__o *v123; // x21
  unsigned int v124; // w27
  CGThumbnailListItem_o *v125; // x29
  __int64 v126; // x24
  __int64 v127; // x20
  __int64 v128; // x22
  __int64 v129; // x20
  __int64 v130; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Func_int__bool__o *klass; // x20
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x22
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  System_Collections_Generic_HashSet_int__o *v136; // x29
  __int64 v137; // x25
  int64_t v138; // x0
  int32_t v139; // w23
  int64_t v140; // x21
  EquipGraphListViewItem_o *v141; // x20
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  Il2CppObject *Master_object; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  struct ServantEntity_o *servantEntity; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v157; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v158; // x0
  System_Collections_Generic_List_object__o *v159; // x24
  int32_t v160; // w25
  UserServantEntity_o *v161; // x22
  int64_t EquipUserSvtId; // x0
  int32_t memberIndex; // w27
  int64_t v164; // x28
  int32_t v165; // w21
  EquipGraphListViewItem_o *v166; // x20
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  struct System_Object_array *items; // x8
  _QWORD *v170; // x9
  __int64 size; // x10
  Il2CppClass **v172; // x0
  System_Action_object__o *v173; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v176; // x8
  System_String_o *v177; // x21
  const MethodInfo *v178; // x1
  const MethodInfo *v179; // x1
  const MethodInfo *v180; // [xsp+10h] [xbp-B0h]
  CGThumbnailListItem_o *v181; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_IEnumerable_TSource__o *v182; // [xsp+20h] [xbp-A0h]
  int32_t v183; // [xsp+28h] [xbp-98h]
  int32_t v184; // [xsp+2Ch] [xbp-94h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+30h] [xbp-90h]
  PartyListViewItem_o *v186; // [xsp+38h] [xbp-88h]
  PartyListViewItem_array *v187; // [xsp+40h] [xbp-80h]
  EquipGraphServantItem_o **p_servantItemInfo; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int monitor; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16

  if ( (byte_4C562C8 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_EquipGraphListViewItem__TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_All_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&EquipGraphListViewManager_TypeInfo);
    sub_1C3E564(&EquipGraphServantItem_TypeInfo);
    sub_1C3E564(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_EquipGraphListViewManager___c__CreateList_b__62_2__);
    sub_1C3E564(&Method_EquipGraphListViewManager___c__CreateList_b__62_3__);
    sub_1C3E564(&Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__0__);
    sub_1C3E564(&Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__1__);
    sub_1C3E564(&EquipGraphListViewManager___c__DisplayClass62_0_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__4__);
    sub_1C3E564(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__6__);
    sub_1C3E564(&EquipGraphListViewManager___c__DisplayClass62_1_TypeInfo);
    sub_1C3E564(&EquipGraphListViewManager___c_TypeInfo);
    sub_1C3E564(&StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C3E564(&StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C3E564(&StringLiteral_12486/*"SUM_INFO"*/);
    byte_4C562C8 = 1;
  }
  v13 = sub_1C3E7B0(EquipGraphListViewManager___c__DisplayClass62_0_TypeInfo);
  EquipGraphListViewManager___c__DisplayClass62_0___ctor((EquipGraphListViewManager___c__DisplayClass62_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_151;
  *(_QWORD *)(v13 + 32) = this;
  *(_DWORD *)(v13 + 24) = type;
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.waveDeckItemList, (int32_t)baseDeckItemList, v18, v19);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v27, v20, v21);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v32, v33);
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v39, v40);
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v32, v33);
    v41 = this->fields.sort;
    if ( !v41 )
      goto LABEL_151;
    v42 = 0;
  }
  v41->fields.isBonusKind = v42;
  v43 = PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0);
  p_baseItem = &this->fields.baseItem;
  this->fields.baseItem = v43;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)v43, v45, v46);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_151;
  if ( !baseItem->fields.isFollower )
  {
    v48 = *(_DWORD *)(v13 + 24);
    IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
    v50 = (EquipGraphServantItem_o *)sub_1C3E7B0(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v50, baseItem, v48, IsTempGrandServant_k__BackingField, 0);
    this->fields.servantItemInfo = v50;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v50, v51, v52);
    sort = (int64_t)this->fields.baseItem;
    if ( !sort )
      goto LABEL_151;
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0);
    *(_QWORD *)(v13 + 16) = EquipList;
    v54 = (__int64 *)(v13 + 16);
    sub_1C3E508((CGThumbnailListItem_o *)(v13 + 16), (int32_t)EquipList, v55, v56);
    sort = (int64_t)*p_baseItem;
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
              (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
      v62 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v62,
        (Il2CppObject *)v13,
        Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__1__,
        0);
      v63 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v61,
              (System_Func_TSource__bool__o *)v62,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v63,
                                                                   (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
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
        _9__62_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__62_2, v67, Method_EquipGraphListViewManager___c__CreateList_b__62_2__, 0);
        static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__62_2 = (struct System_Func_UserServantEntity__int__o *)_9__62_2;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__62_2, (int32_t)_9__62_2, v69, v70);
      }
      this->fields.addBaseAtk = System_Linq_Enumerable__Sum_object_(
                                  v64,
                                  (System_Func_TSource__int__o *)_9__62_2,
                                  (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
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
        _9__62_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__62_3, v73, Method_EquipGraphListViewManager___c__CreateList_b__62_3__, 0);
        v74 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v74->__9__62_3 = (struct System_Func_UserServantEntity__int__o *)_9__62_3;
        sub_1C3E508((CGThumbnailListItem_o *)&v74->__9__62_3, (int32_t)_9__62_3, v75, v76);
      }
      this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                                 v64,
                                 (System_Func_TSource__int__o *)_9__62_3,
                                 (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
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
    v187 = baseDeckItemList;
    this->fields.maxWave = baseDeckItemList->max_length;
    sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_151;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_151;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v186 = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v82 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUM_INFO"*/, 0);
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
      sort = (int64_t)System_String__Format_63677760(v89, v96, v97, 0);
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
      v15 = sort > 0;
    }
    else
    {
      v15 = 0;
    }
    if ( !bondSkillChangeMessageLabel )
LABEL_151:
      sub_1C3E7C0(sort, v15);
    UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v15, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    v99 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v99,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    v100 = sub_1C3E7B0(EquipGraphListViewManager___c__DisplayClass62_1_TypeInfo);
    EquipGraphListViewManager___c__DisplayClass62_1___ctor((EquipGraphListViewManager___c__DisplayClass62_1_o *)v100, 0);
    v101 = *(_DWORD *)(v13 + 24);
    setupInfoa = setupInfo;
    if ( v101 != 2 )
    {
      if ( v101 == 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sort = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantSkillMaster___);
        if ( !v100 )
          goto LABEL_151;
        *(_QWORD *)(v100 + 24) = sort;
        sub_1C3E508((CGThumbnailListItem_o *)(v100 + 24), sort, v148, v149);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v100 + 16) = Master_object;
        sub_1C3E508((CGThumbnailListItem_o *)(v100 + 16), (int32_t)Master_object, v151, v152);
        if ( !*p_baseItem )
          goto LABEL_151;
        servantEntity = (*p_baseItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_151;
        individuality = servantEntity->fields.individuality;
        *(_QWORD *)(v100 + 32) = individuality;
        sub_1C3E508((CGThumbnailListItem_o *)(v100 + 32), (int32_t)individuality, v153, v154);
        v157 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v157,
          (Il2CppObject *)v100,
          Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__4__,
          0);
        v158 = System_Linq_Enumerable__Where_object_(
                 v81,
                 (System_Func_TSource__bool__o *)v157,
                 (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        sort = (int64_t)System_Linq_Enumerable__ToList_object_(
                          v158,
                          (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
        if ( !sort )
          goto LABEL_151;
        v159 = (System_Collections_Generic_List_object__o *)sort;
        if ( *(int *)(sort + 24) >= 1 )
        {
          v160 = 0;
          while ( 1 )
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v159,
                              v160,
                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v161 = (UserServantEntity_o *)sort;
            EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, 0);
            memberIndex = this->fields.memberIndex;
            v164 = EquipUserSvtId;
            v165 = (int32_t)object[1].monitor;
            v166 = (EquipGraphListViewItem_o *)sub_1C3E7B0(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v166, v160, v161, v164, v187, v186, setupInfo, memberIndex, 0, v165, v180);
            if ( !v99 )
              goto LABEL_151;
            items = v99->fields._items;
            v170 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v99->fields._version;
            if ( !items )
              goto LABEL_151;
            size = v99->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v99,
                (Il2CppObject *)v166,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
            }
            else
            {
              v172 = &items->obj.klass + size;
              v99->fields._size = size + 1;
              v172[4] = (Il2CppClass *)v166;
              sub_1C3E508((CGThumbnailListItem_o *)(v172 + 4), (int32_t)v166, v167, v168);
            }
            if ( ++v160 >= v159->fields._size )
              goto LABEL_141;
          }
        }
      }
      else if ( !v101 )
      {
        if ( !v81 )
          goto LABEL_151;
        v102 = v81[1].monitor;
        if ( (int)v102 >= 1 )
        {
          v103 = 0;
          while ( v103 < (unsigned int)v102 )
          {
            sort = (int64_t)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v104 = (UserServantEntity_o *)*((_QWORD *)&v81[2].klass + v103);
            v105 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v106 = this->fields.memberIndex;
            v107 = v105;
            v108 = *(_DWORD *)(v13 + 24);
            v109 = (EquipGraphListViewItem_o *)sub_1C3E7B0(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v109, v103, v104, v107, v187, v186, setupInfoa, v106, 0, v108, v180);
            if ( !v99 )
              goto LABEL_151;
            v112 = v99->fields._items;
            v113 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v99->fields._version;
            if ( !v112 )
              goto LABEL_151;
            v114 = v99->fields._size;
            if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v99,
                (Il2CppObject *)v109,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
            }
            else
            {
              v115 = &v112->obj.klass + v114;
              v99->fields._size = v114 + 1;
              v115[4] = (Il2CppClass *)v109;
              sub_1C3E508((CGThumbnailListItem_o *)(v115 + 4), (int32_t)v109, v110, v111);
            }
            LODWORD(v102) = v81[1].monitor;
            if ( (__int64)++v103 >= (int)v102 )
              goto LABEL_141;
          }
          goto LABEL_152;
        }
      }
      goto LABEL_141;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v116 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ConstantStrMaster___);
    sort = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantSkillMaster___);
    if ( !v116 )
      goto LABEL_151;
    v117 = (ServantSkillMaster_o *)sort;
    RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                  (ConstantStrMaster_o *)v116,
                                                                                  0);
    sort = (int64_t)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpFuncCategory,
                      (const MethodInfo_313DA14 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v100 )
      goto LABEL_151;
    *(_QWORD *)(v100 + 40) = sort;
    sub_1C3E508((CGThumbnailListItem_o *)(v100 + 40), sort, v119, v120);
    RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                                 (ConstantStrMaster_o *)v116,
                                                                                 0);
    sort = (int64_t)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpIgnoreSvtId,
                      (const MethodInfo_313DA14 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v81 )
      goto LABEL_151;
    v122 = (int)v81[1].monitor;
    if ( v122 < 1 )
    {
LABEL_141:
      v173 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EquipGraphListViewItem__TypeInfo);
      System_Action_object____ctor(
        v173,
        object,
        Method_EquipGraphListViewManager___c__DisplayClass62_0__CreateList_b__0__,
        0);
      if ( v99 )
      {
        System_Collections_Generic_List_object___ForEach(
          v99,
          (System_Action_T__o *)v173,
          (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          emptyMessageLabel = this->fields.emptyMessageLabel;
          v176 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
          v177 = *v176;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (int64_t)LocalizationManager__Get(v177, 0);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
            EquipGraphListViewManager__RefrashListDisp(this, v178);
            ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
            EquipGraphListViewManager__SetFilterButtonImage(this, v179);
            return;
          }
        }
      }
      goto LABEL_151;
    }
    v123 = (System_Collections_Generic_HashSet_int__o *)sort;
    v124 = 0;
    v125 = (CGThumbnailListItem_o *)(v100 + 56);
    v184 = 0;
    v181 = (CGThumbnailListItem_o *)(v100 + 56);
    v182 = v81;
    while ( v124 < v122 )
    {
      v126 = *((_QWORD *)&v81[2].klass + (int)v124);
      if ( !v126 )
        goto LABEL_151;
      v128 = *(_QWORD *)(v126 + 80);
      v127 = *(_QWORD *)(v126 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v192.fields.currentCryptoKey = v128;
      *(_QWORD *)&v192.fields.fakeValue = v127;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v192, 0);
      if ( !v123 )
        goto LABEL_151;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v123,
               sort,
               (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        v130 = *(_QWORD *)(v126 + 80);
        v129 = *(_QWORD *)(v126 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v193.fields.currentCryptoKey = v130;
        *(_QWORD *)&v193.fields.fakeValue = v129;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v193, 0);
        if ( !v117 )
          goto LABEL_151;
        ServantSkillList = ServantSkillMaster__getServantSkillList(v117, sort, 0);
        sort = (int64_t)UserServantEntity__GetEquipAllCategoryIdList((UserServantEntity_o *)v126, ServantSkillList, 0);
        if ( sort )
        {
          klass = (System_Func_int__bool__o *)v125->klass;
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v125->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v100,
              Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__6__,
              0);
            *(_QWORD *)(v100 + 56) = klass;
            sub_1C3E508(v125, (int32_t)klass, v134, v135);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)klass,
                   (const MethodInfo_31038C8 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (int64_t)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v136 = v123;
            v137 = v100;
            v138 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v139 = (int32_t)object[1].monitor;
            v140 = v138;
            v183 = this->fields.memberIndex;
            v141 = (EquipGraphListViewItem_o *)sub_1C3E7B0(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v141,
              v184,
              (UserServantEntity_o *)v126,
              v140,
              v187,
              v186,
              setupInfoa,
              v183,
              (System_Int32_array *)preLoadCategoryIdList,
              v139,
              v180);
            if ( !v99 )
              goto LABEL_151;
            v144 = v99->fields._items;
            v145 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v99->fields._version;
            if ( !v144 )
              goto LABEL_151;
            v146 = v99->fields._size;
            v100 = v137;
            v123 = v136;
            if ( (unsigned int)v146 >= LODWORD(v144->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v99,
                (Il2CppObject *)v141,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
            }
            else
            {
              v147 = &v144->obj.klass + v146;
              v99->fields._size = v146 + 1;
              v147[4] = (Il2CppClass *)v141;
              sub_1C3E508((CGThumbnailListItem_o *)(v147 + 4), (int32_t)v141, v142, v143);
            }
            v125 = v181;
            v81 = v182;
            ++v184;
          }
        }
      }
      v122 = (int)v81[1].monitor;
      if ( (int)++v124 >= v122 )
        goto LABEL_141;
    }
LABEL_152:
    sub_1C3E7C8(sort, v15);
  }
}


void EquipGraphListViewManager__CreateList_41109268(
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
  int64_t sort; // x0
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
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  System_String_o *v44; // x27
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x28
  Il2CppObject *v52; // x0
  il2cpp_array_size_t v53; // x8
  unsigned __int64 v54; // x22
  UserServantEntity_o *v55; // x26
  int64_t EquipUserSvtId; // x27
  EquipGraphListViewItem_o *v57; // x25
  const MethodInfo *v58; // x6
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v67; // x8
  System_String_o *v68; // x21
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // [xsp+0h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int max_length; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C562C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&EquipGraphListViewManager_TypeInfo);
    sub_1C3E564(&EquipGraphServantItem_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C3E564(&StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C3E564(&StringLiteral_12486/*"SUM_INFO"*/);
    byte_4C562C9 = 1;
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
  sub_1C3E508(
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v14, v15);
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v20, v21);
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v14, v15);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v25, v26);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_62;
  if ( !baseItem->fields.isFollower )
  {
    v28 = (EquipGraphServantItem_o *)sub_1C3E7B0(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v28, baseItem, 0, 0, 0);
    this->fields.servantItemInfo = v28;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v28, v29, v30);
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
    sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_62;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      sort = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUM_INFO"*/, 0);
      if ( !v36 )
        goto LABEL_62;
      v44 = (System_String_o *)sort;
      max_length = v36->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &max_length, v38, v39, v40, v41, v42, v43);
      if ( !SelfUserGame )
        goto LABEL_62;
      v51 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v45, v46, v47, v48, v49, v50);
      sort = (int64_t)System_String__Format_63677760(v44, v51, v52, 0);
      if ( !v37 )
        goto LABEL_62;
      UILabel__set_text(v37, (System_String_o *)sort, 0);
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
    if ( !v36 )
      goto LABEL_62;
    v53 = v36->max_length;
    if ( (int)v53 >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( v54 >= (unsigned int)v53 )
          sub_1C3E7C8(sort, v12);
        sort = (int64_t)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v55 = v36->m_Items[v54];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
        v57 = (EquipGraphListViewItem_o *)sub_1C3E7B0(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_41133212(v57, v54, v55, EquipUserSvtId, partyItem, setupInfo, v58);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          break;
        v61 = *(_QWORD *)(sort + 16);
        v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v61 )
          break;
        v63 = *(int *)(sort + 24);
        if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v57,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = v61 + 8 * v63;
          *(_DWORD *)(sort + 24) = v63 + 1;
          *(_QWORD *)(v64 + 32) = v57;
          sub_1C3E508((CGThumbnailListItem_o *)(v64 + 32), (int32_t)v57, v59, v60);
        }
        LODWORD(v53) = v36->max_length;
        if ( (__int64)++v54 >= (int)v53 )
          goto LABEL_53;
      }
LABEL_62:
      sub_1C3E7C0(sort, v12);
    }
LABEL_53:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_62;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v67 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v68 = *v67;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (int64_t)LocalizationManager__Get(v68, 0);
    if ( !emptyMessageLabel )
      goto LABEL_62;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
    EquipGraphListViewManager__RefrashListDisp(this, v69);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v70);
  }
}


void EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4C562C4 & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewManager_TypeInfo);
    byte_4C562C4 = 1;
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
    sub_1C3E7C0(sortStatus, v1);
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
    sub_1C3E7C0(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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

  if ( (byte_4C562D6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_0__);
    sub_1C3E564(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_1__);
    sub_1C3E564(&Method_EquipGraphListViewManager__EndSelectConfirm_b__84_2__);
    sub_1C3E564(&EquipGraphListViewObject_TypeInfo);
    sub_1C3E564(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C562D6 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v79 = *(System_Collections_Generic_List_Enumerator_object__o *)&v78.fields.currentCryptoKey;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v33 )
        break;
      current = v79.fields._current;
      if ( !v79.fields._current
        || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
            v79.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EquipGraphListViewItem_c *)v79.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1C3E7C0(v33, v34);
      }
      if ( BYTE1(v79.fields._current[9].monitor) )
      {
        BYTE1(v79.fields._current[9].monitor) = 0;
        if ( EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v34) )
        {
          klass = (System_Collections_Generic_List_object__o *)current[17].klass;
          v38 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v38,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__84_2__,
            0);
          if ( !klass )
            sub_1C3E7C0(v39, v40);
          System_Collections_Generic_List_object___ForEach(
            klass,
            (System_Action_T__o *)v38,
            (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
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
              sub_1C3E7C0(v42, v43);
            }
            EquipGraphListViewObject__Init_42303060((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v80, 0);
            if ( !v71 )
              goto LABEL_109;
            v74 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v71, 0);
            if ( v74 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(EquipSvtId, 0) )
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
      sub_1C3E7C0(Instance, v6);
    v12 = *(_DWORD *)(Instance + 224) - 1;
    if ( (unsigned int)v12 >= LODWORD(v11->max_length) )
LABEL_114:
      sub_1C3E7C8(Instance, v6);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v77, 0);
  if ( !v20 )
    goto LABEL_109;
  PartyListViewItem__SetEquip(v20, memberIndex, Instance, 0, 0);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v79 = v76;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    v24 = v79.fields._current;
    if ( !v79.fields._current
      || (v25 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v79.fields._current->klass->_2.naturalAligment < (unsigned int)v25)
      || (EquipGraphListViewItem_c *)v79.fields._current->klass->_2.typeHierarchy[v25 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C3E7C0(v21, v22);
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
        sub_1C3E7C0(v27, v28);
      }
      EquipGraphListViewObject__Init_42303060((EquipGraphListViewObject_o *)v24[7].klass, 4, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  v48 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
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
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v49 = this->fields.selectItem;
  if ( !v49 )
    goto LABEL_109;
  v50 = (System_Collections_Generic_List_T__o *)v49->fields.wearerMemberInfoList;
  v51 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v51,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__84_1__,
    0);
  Instance = BasicHelper__Any_object_(
               v50,
               (System_Func_T__bool__o *)v51,
               (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v75, 0);
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
  EquipGraphListViewObject__Init_42303060((EquipGraphListViewObject_o *)Instance, 4, 1, 0);
LABEL_85:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_86:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v7, v8);
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

  if ( (byte_4C562D8 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C562D8 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C3E7C0(v8, v9);
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

  if ( (byte_4C562DC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C562DC = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C3E7C0(v7, v8);
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

  if ( (byte_4C562DF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C562DF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3E7C0(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v15 = v14;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C3E7C0(v7, v8);
    }
    monitor = v15.fields._current[7].monitor;
    if ( !monitor )
      sub_1C3E7C0(v7, v8);
    v12 = monitor[10];
    v11 = monitor[11];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v16, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C562E0 & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C562E0 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C3E7C0(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C562CB & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C562CB = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C562D3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C562D3 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C3E7C0(v4, v5);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C562D4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C562D4 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C3E7C0(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C562CD & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C562CD = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v39, 0);
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
              *(const MethodInfo_379D494 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v38, 0);
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
    sub_1C3E7C0(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C3E508((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C3E508((CGThumbnailListItem_o *)v36, v35, v33, v34);
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

  if ( (byte_4C562CC & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C562CC = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v39, 0);
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
              *(const MethodInfo_379D494 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v38, 0);
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
    sub_1C3E7C0(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C3E508((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C3E508((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4C562C5 & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewManager_TypeInfo);
    byte_4C562C5 = 1;
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
    sub_1C3E7C0(sortStatus, v1);
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

  if ( (byte_4C562CA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C562CA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v34, 0);
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
                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v33, 0);
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
        sub_1C3E508((CGThumbnailListItem_o *)&v17->fields.context, (int32_t)v23, v21, v22);
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
        sub_1C3E7C8(Instance, v5);
    }
LABEL_44:
    sub_1C3E7C0(Instance, v5);
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
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C562DA & 1) == 0 )
  {
    sub_1C3E564(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_4C562DA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(0, v5);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
    sub_1C3E7C0(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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

  if ( (byte_4C562D7 & 1) == 0 )
  {
    sub_1C3E564(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_1C3E564(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C562D7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0);
    if ( !v8 )
      sub_1C3E7C0(v10, v11);
    if ( equipGraphType == 2 )
      v12 = 16;
    else
      v12 = 5;
    CommonUI__OpenServantFilterSelectMenu_31245072(v8, v12, sort, (ListViewManager_o *)this, v9, -1, 0);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C3E7C0(v6, v7);
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

  if ( (byte_4C562DD & 1) == 0 )
  {
    sub_1C3E564(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4C562DD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(v5, v6);
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

  if ( (byte_4C562DB & 1) == 0 )
  {
    sub_1C3E564(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_1C3E564(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C562DB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C3E7C0(v9, v10);
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
    sub_1C3E7C0(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
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

  if ( (byte_4C562D2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C562D2 = 1;
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
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C562CE & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_12487/*"SUM_OVER_INFO"*/);
    sub_1C3E564(&StringLiteral_12486/*"SUM_INFO"*/);
    byte_4C562CE = 1;
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
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
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
    sub_1C3E7C0(ObjectList, v4);
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
        ? (System_String_o **)&StringLiteral_12486/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12487/*"SUM_OVER_INFO"*/;
    v12 = *v11;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get(v12, 0);
    v29 = v9;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v14, v15, v16, v17, v18, v19);
    maxCost = this->fields.maxCost;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v21, v22, v23, v24, v25, v26);
    ObjectList = (int *)System_String__Format_63677760(v13, v20, v27, 0);
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

  if ( (byte_4C562D0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C3E564(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C562D0 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      EquipGraphListViewObject__Init_42303856((EquipGraphListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject_41150088(
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

  if ( (byte_4C562D1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C3E564(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C562D1 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      EquipGraphListViewObject__Init_42303944((EquipGraphListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  int64_t v50; // x21
  System_String_o *v51; // x20
  System_Object_array *v52; // x22
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int64_t v55; // x23
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x23
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int64_t v61; // x23
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x23
  struct EquipGraphServantItem_o *v65; // x8
  int32_t rarityId; // w23
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int64_t v69; // x23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int64_t v72; // x21
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
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  __int64 v148; // x5
  __int64 v149; // x6
  __int64 v150; // x7
  struct EquipGraphListViewItem_o *v151; // x8
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  Il2CppObject *v154; // x23
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  __int64 v158; // x5
  __int64 v159; // x6
  __int64 v160; // x7
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  Il2CppObject *v163; // x23
  int32_t v164; // w23
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  Il2CppObject *v167; // x23
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  Il2CppObject *v170; // x23
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  Il2CppObject *v173; // x22
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  __int64 v177; // x5
  __int64 v178; // x6
  __int64 v179; // x7
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  Il2CppObject *v182; // x22
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  __int64 v186; // x5
  __int64 v187; // x6
  __int64 v188; // x7
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  Il2CppObject *v191; // x22
  struct EquipGraphServantItem_o *v192; // x8
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  Il2CppObject *v195; // x22
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  Il2CppObject *v198; // x22
  System_String_o *v199; // x20
  Il2CppObject *v200; // x21
  System_String_o *v201; // x22
  System_String_o *v202; // x23
  System_String_o *v203; // x24
  CommonConfirmDialog_ClickDelegate_o *v204; // x25
  System_Func_object__bool__o *v205; // x21
  Il2CppObject *v206; // x22
  System_String_o *v207; // x20
  System_Object_array *v208; // x21
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  int64_t v211; // x23
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  Il2CppClass *v214; // x23
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  int64_t v217; // x23
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  Il2CppClass *v220; // x23
  struct EquipGraphServantItem_o *v221; // x8
  int32_t v222; // w23
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  int64_t v225; // x23
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  int64_t v228; // x22
  System_String_o *v229; // x20
  Il2CppObject *v230; // x21
  System_String_o *v231; // x22
  CommonConfirmDialog_ClickDelegate_o *v232; // x23
  struct UserServantEntity_o *userServantEntity; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v235; // w24
  System_String_o *v236; // x21
  System_Object_array *v237; // x23
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  Il2CppObject *v240; // x22
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  Il2CppObject *v243; // x22
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  Il2CppObject *v246; // x22
  __int64 v247; // x22
  __int64 v248; // x24
  int32_t v249; // w0
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  Il2CppObject *v252; // x20
  CGThumbnailListItem_o *v253; // x0
  __int64 v254; // x2
  __int64 v255; // x3
  __int64 v256; // x4
  __int64 v257; // x5
  __int64 v258; // x6
  __int64 v259; // x7
  int32_t v260; // w2
  const MethodInfo *v261; // x3
  Il2CppObject *v262; // x22
  __int64 v263; // x2
  __int64 v264; // x3
  __int64 v265; // x4
  __int64 v266; // x5
  __int64 v267; // x6
  __int64 v268; // x7
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  Il2CppObject *v271; // x22
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  Il2CppObject *v274; // x22
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  Il2CppObject *v277; // x22
  __int64 v278; // x22
  __int64 v279; // x24
  int32_t v280; // w0
  System_String_o *v281; // x20
  Il2CppObject *v282; // x21
  System_String_o *v283; // x22
  System_String_o *v284; // x23
  System_String_o *v285; // x24
  CommonConfirmDialog_ClickDelegate_o *v286; // x25
  __int64 v287; // x0
  struct PartyListViewItem_array *v288; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v289; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v290; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v291; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v292; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v295; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v296; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16

  if ( (byte_4C562D5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&EquipGraphListViewItem_TypeInfo);
    sub_1C3E564(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_1C3E564(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_1C3E564(&Method_EquipGraphListViewManager__SelectEquip_b__83_0__);
    sub_1C3E564(&Method_EquipGraphListViewManager__SelectEquip_b__83_1__);
    sub_1C3E564(&Method_EquipGraphListViewManager__SelectEquip_b__83_2__);
    sub_1C3E564(&Method_EquipGraphListViewManager__SelectEquip_b__83_3__);
    sub_1C3E564(&EquipGraphListViewObject_TypeInfo);
    sub_1C3E564(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Rarity_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_15513/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_15514/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_1C3E564(&StringLiteral_15507/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_15509/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_5496/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_1C3E564(&StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_15510/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_15503/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_1C3E564(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C3E564(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C3E564(&StringLiteral_5495/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_15502/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_4C562D5 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v295, 0, sizeof(v295));
  this->fields.selectItem = item;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectItem, (int32_t)item, (int32_t)callback, method);
  p_selectItemCallbackFunc = (CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v9, v10);
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
      v17 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_SelectEquip__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C3E548(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    if ( !this->fields.isWaveBattle )
      goto LABEL_21;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_327;
    v20 = this->fields.partyNumber - 1;
    if ( (unsigned int)v20 < LODWORD(waveDeckItemList->max_length) )
    {
      selectItem = (int64_t)waveDeckItemList->m_Items[v20];
      if ( !selectItem )
        goto LABEL_327;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)selectItem, this->fields.memberIndex, 0, 0, 0);
LABEL_21:
      selectItem = (int64_t)*p_selectItem;
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
      v35 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
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
        (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v16 )
        goto LABEL_327;
      EquipGraphListViewObject__Init_42303060(v16, 4, 0, 0);
      goto LABEL_51;
    }
LABEL_329:
    sub_1C3E7C8(selectItem, v11);
  }
  if ( *(int *)(selectItem + 224) >= 1 )
  {
    if ( !item )
      goto LABEL_327;
    v22 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_SelectEquip__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C3E548(v22, v22[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
      selectItem = (int64_t)this->fields.servantItemInfo;
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
        selectItem = (int64_t)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        v28 = v26->m_Items[v27];
        selectItem = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v11);
        if ( !selectItem )
          goto LABEL_327;
        if ( !v28 )
          goto LABEL_327;
        selectItem = (int64_t)PartyListViewItem__GetMember(v28, *(_DWORD *)(selectItem + 16), 0);
        if ( !selectItem )
          goto LABEL_327;
        cost = v28->fields.cost;
        selectItem = PartyOrganizationListViewItem__get_EquipCost((PartyOrganizationListViewItem_o *)selectItem, 0);
        if ( !this->fields.servantItemInfo )
          goto LABEL_327;
        if ( cost - (int)selectItem + EquipGraphServantItem__get_EquipCost(this->fields.servantItemInfo, 0) > v28->fields.maxCost )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15503/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0);
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0);
          v33 = (NotificationDialog_ClickDelegate_o *)sub_1C3E7B0(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v33,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__83_1__,
            0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_31240556(
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
        selectItem = (int64_t)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        WearerMemberInfo = EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v11);
        if ( this->fields.questRestrictionInfo
          && QuestRestrictionInfo__IsWaveSetupSwitchParty(this->fields.questRestrictionInfo, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_15510/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C3E60C(object___TypeInfo, 8);
          v116 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v117 = (System_Object_array *)selectItem;
          selectItem = (int64_t)LocalizationManager__ConvertNumberToRomaNumber(
                                  v116->fields._OrganizedWave_k__BackingField,
                                  0);
          if ( !v117 )
            goto LABEL_327;
          v120 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v117->max_length) )
              goto LABEL_329;
            v117->m_Items[0] = v120;
            sub_1C3E508((CGThumbnailListItem_o *)v117->m_Items, (int32_t)v120, v118, v119);
            if ( !WearerMemberInfo )
              goto LABEL_327;
            WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            selectItem = (int64_t)Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0);
            v124 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v117->max_length) <= 1 )
                goto LABEL_329;
              v117->m_Items[1] = v124;
              sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[1], (int32_t)v124, v122, v123);
              WearerServantClassName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !WearerServantClassName_k__BackingField
                || (selectItem = sub_1C3E6A0(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   v117->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v117->max_length) <= 2 )
                  goto LABEL_329;
                v117->m_Items[2] = WearerServantClassName_k__BackingField;
                sub_1C3E508(
                  (CGThumbnailListItem_o *)&v117->m_Items[2],
                  (int32_t)WearerServantClassName_k__BackingField,
                  v125,
                  v126);
                WearerServantName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !WearerServantName_k__BackingField
                  || (selectItem = sub_1C3E6A0(WearerServantName_k__BackingField, v117->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v117->max_length) <= 3 )
                    goto LABEL_329;
                  v117->m_Items[3] = WearerServantName_k__BackingField;
                  sub_1C3E508(
                    (CGThumbnailListItem_o *)&v117->m_Items[3],
                    (int32_t)WearerServantName_k__BackingField,
                    v128,
                    v129);
                  selectItem = (int64_t)LocalizationManager__ConvertNumberToRomaNumber(this->fields.partyNumber, 0);
                  v133 = (Il2CppObject *)selectItem;
                  if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v117->max_length) <= 4 )
                      goto LABEL_329;
                    v117->m_Items[4] = v133;
                    sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[4], (int32_t)v133, v131, v132);
                    servantItemInfo = this->fields.servantItemInfo;
                    if ( !servantItemInfo )
                      goto LABEL_327;
                    selectItem = (int64_t)Rarity__getRarityType(servantItemInfo->fields.rarityId, 0);
                    v137 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v117->max_length) <= 5 )
                        goto LABEL_329;
                      v117->m_Items[5] = v137;
                      sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[5], (int32_t)v137, v135, v136);
                      selectItem = (int64_t)this->fields.servantItemInfo;
                      if ( !selectItem )
                        goto LABEL_327;
                      selectItem = (int64_t)EquipGraphServantItem__get_ClassName(
                                              (EquipGraphServantItem_o *)selectItem,
                                              0);
                      v140 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v117->max_length) <= 6 )
                          goto LABEL_329;
                        v117->m_Items[6] = v140;
                        sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[6], (int32_t)v140, v138, v139);
                        selectItem = (int64_t)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_327;
                        selectItem = (int64_t)EquipGraphServantItem__get_NameText(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0);
                        v143 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
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
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_15513/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C3E60C(object___TypeInfo, 10);
          v151 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v117 = (System_Object_array *)selectItem;
          LODWORD(v291.fields.currentCryptoKey) = v151->fields._OrganizedWave_k__BackingField;
          selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v291, v145, v146, v147, v148, v149, v150);
          if ( !v117 )
            goto LABEL_327;
          v154 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v117->max_length) )
              goto LABEL_329;
            v117->m_Items[0] = v154;
            sub_1C3E508((CGThumbnailListItem_o *)v117->m_Items, (int32_t)v154, v152, v153);
            maxWave = this->fields.maxWave;
            selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v155, v156, v157, v158, v159, v160);
            v163 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v117->max_length) <= 1 )
                goto LABEL_329;
              v117->m_Items[1] = v163;
              sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[1], (int32_t)v163, v161, v162);
              if ( !WearerMemberInfo )
                goto LABEL_327;
              v164 = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              selectItem = (int64_t)Rarity__getRarityType(v164, 0);
              v167 = (Il2CppObject *)selectItem;
              if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v117->max_length) <= 2 )
                  goto LABEL_329;
                v117->m_Items[2] = v167;
                sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[2], (int32_t)v167, v165, v166);
                v170 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
                if ( !v170
                  || (selectItem = sub_1C3E6A0(
                                     WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                     v117->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v117->max_length) <= 3 )
                    goto LABEL_329;
                  v117->m_Items[3] = v170;
                  sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[3], (int32_t)v170, v168, v169);
                  v173 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                  if ( !v173 || (selectItem = sub_1C3E6A0(v173, v117->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v117->max_length) <= 4 )
                      goto LABEL_329;
                    v117->m_Items[4] = v173;
                    sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[4], (int32_t)v173, v171, v172);
                    partyNumber = this->fields.partyNumber;
                    selectItem = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v174, v175, v176, v177, v178, v179);
                    v182 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v117->max_length) <= 5 )
                        goto LABEL_329;
                      v117->m_Items[5] = v182;
                      sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[5], (int32_t)v182, v180, v181);
                      v292 = this->fields.maxWave;
                      selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v292, v183, v184, v185, v186, v187, v188);
                      v191 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v117->max_length) <= 6 )
                          goto LABEL_329;
                        v117->m_Items[6] = v191;
                        sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[6], (int32_t)v191, v189, v190);
                        v192 = this->fields.servantItemInfo;
                        if ( !v192 )
                          goto LABEL_327;
                        selectItem = (int64_t)Rarity__getRarityType(v192->fields.rarityId, 0);
                        v195 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v117->max_length) <= 7 )
                            goto LABEL_329;
                          v117->m_Items[7] = v195;
                          sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[7], (int32_t)v195, v193, v194);
                          selectItem = (int64_t)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_327;
                          selectItem = (int64_t)EquipGraphServantItem__get_ClassName(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0);
                          v198 = (Il2CppObject *)selectItem;
                          if ( !selectItem
                            || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( LODWORD(v117->max_length) <= 8 )
                              goto LABEL_329;
                            v117->m_Items[8] = v198;
                            sub_1C3E508((CGThumbnailListItem_o *)&v117->m_Items[8], (int32_t)v198, v196, v197);
                            selectItem = (int64_t)this->fields.servantItemInfo;
                            if ( !selectItem )
                              goto LABEL_327;
                            selectItem = (int64_t)EquipGraphServantItem__get_NameText(
                                                    (EquipGraphServantItem_o *)selectItem,
                                                    0);
                            v143 = (Il2CppObject *)selectItem;
                            if ( !selectItem
                              || (selectItem = sub_1C3E6A0(selectItem, v117->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v117->max_length) <= 9 )
                                goto LABEL_329;
                              v117->m_Items[9] = v143;
                              v144 = (CGThumbnailListItem_o *)&v117->m_Items[9];
LABEL_239:
                              sub_1C3E508(v144, (int32_t)v143, v141, v142);
                              v199 = System_String__Format_63677896(v115, v117, 0);
                              v200 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v201 = LocalizationManager__Get((System_String_o *)StringLiteral_15514/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0);
                              v202 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
                              v203 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
                              v204 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v204,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0);
                              if ( v200 )
                              {
                                CommonUI__OpenConfirmDialog_31238288(
                                  (CommonUI_o *)v200,
                                  v201,
                                  v199,
                                  v202,
                                  v203,
                                  v204,
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
        v287 = sub_1C3E7E4(selectItem);
        sub_1C3E68C(v287, 0);
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
      sub_1C3E508(p_selectItemCallbackFunc, 0, v42, v43);
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
      v46 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_SelectEquip__);
    v48 = (System_Reflection_MethodBase_o *)sub_1C3E548(v46, v46[4]);
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
        *(_OWORD *)&v291.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v291.fields.fakeValue = v92;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v290 = v291;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v290, 0);
        if ( !v93 )
          goto LABEL_327;
        PartyListViewItem__SetEquip(v93, memberIndex, selectItem, 0, 0);
      }
      selectItem = (int64_t)this->fields.itemList;
      if ( selectItem )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v291,
          (System_Collections_Generic_List_object__o *)selectItem,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v295 = *(System_Collections_Generic_List_Enumerator_object__o *)&v291.fields.currentCryptoKey;
        while ( 1 )
        {
          v94 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v295,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v94 )
            break;
          current = v295.fields._current;
          if ( !v295.fields._current
            || (v97 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
                v295.fields._current->klass->_2.naturalAligment < (unsigned int)v97)
            || (EquipGraphListViewItem_c *)v295.fields._current->klass->_2.typeHierarchy[v97 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            sub_1C3E7C0(v94, v95);
          }
          if ( BYTE1(v295.fields._current[9].monitor) )
          {
            monitor_low = LOBYTE(v295.fields._current[16].monitor);
            BYTE1(v295.fields._current[9].monitor) = 0;
            v99 = monitor_low ? BYTE1(current[16].monitor) ^ 1 : 0;
            if ( (v100 = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v95), !v99) && v100
              || SLODWORD(current[14].klass) > 0
              || BYTE4(current[14].monitor) )
            {
              v101 = (System_Collections_Generic_List_object__o *)current[17].klass;
              v102 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
              System_Action_object____ctor(
                v102,
                (Il2CppObject *)this,
                Method_EquipGraphListViewManager__SelectEquip_b__83_3__,
                0);
              if ( !v101 )
                sub_1C3E7C0(v103, v104);
              System_Collections_Generic_List_object___ForEach(
                v101,
                (System_Action_T__o *)v102,
                (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
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
                  sub_1C3E7C0(v106, v107);
                }
                EquipGraphListViewObject__Init_42303060((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v295,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v110 = *p_selectItem;
        if ( *p_selectItem )
        {
          v111 = v110->fields.userSvtEntity;
          v110->fields.isBase = 1;
          if ( v111 )
          {
            v112 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
            v113 = this->fields.servantItemInfo;
            *(_OWORD *)&v291.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v291.fields.fakeValue = v112;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v289 = v291;
            selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v289, 0);
            if ( v113 )
            {
              EquipGraphServantItem__SetEquipTarget(v113, selectItem, 0);
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
                  v36 = this->fields.equipGraphType == 1;
LABEL_55:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v36, 0);
                  EquipGraphListViewManager__RefrashListDisp(this, v37);
                  if ( callback )
                  {
                    p_selectItemCallbackFunc->klass = 0;
                    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v38, v39);
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
      sub_1C3E7C0(selectItem, v11);
    }
    if ( !*p_selectItem )
      goto LABEL_327;
    v49 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
    if ( !v49 )
      goto LABEL_327;
    if ( v49->fields._size == 1 )
    {
      selectItem = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v49,
                              0,
                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
      if ( !selectItem )
        goto LABEL_327;
      v50 = selectItem;
      if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
        goto LABEL_120;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5494/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0);
      selectItem = sub_1C3E60C(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v52 = (System_Object_array *)selectItem;
      selectItem = (int64_t)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v52 )
        goto LABEL_327;
      v55 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v52->max_length) )
        goto LABEL_329;
      v52->m_Items[0] = (Il2CppObject *)v55;
      sub_1C3E508((CGThumbnailListItem_o *)v52->m_Items, v55, v53, v54);
      v58 = *(Il2CppObject **)(v50 + 32);
      if ( v58 )
      {
        selectItem = sub_1C3E6A0(*(_QWORD *)(v50 + 32), v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 1 )
        goto LABEL_329;
      v52->m_Items[1] = v58;
      sub_1C3E508((CGThumbnailListItem_o *)&v52->m_Items[1], (int32_t)v58, v56, v57);
      selectItem = (int64_t)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (int64_t)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v61 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 2 )
        goto LABEL_329;
      v52->m_Items[2] = (Il2CppObject *)v61;
      sub_1C3E508((CGThumbnailListItem_o *)&v52->m_Items[2], v61, v59, v60);
      v64 = *(Il2CppObject **)(v50 + 48);
      if ( v64 )
      {
        selectItem = sub_1C3E6A0(*(_QWORD *)(v50 + 48), v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 3 )
        goto LABEL_329;
      v52->m_Items[3] = v64;
      sub_1C3E508((CGThumbnailListItem_o *)&v52->m_Items[3], (int32_t)v64, v62, v63);
      v65 = this->fields.servantItemInfo;
      if ( !v65 )
        goto LABEL_327;
      rarityId = v65->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (int64_t)Rarity__getRarityType(rarityId, 0);
      v69 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 4 )
        goto LABEL_329;
      v52->m_Items[4] = (Il2CppObject *)v69;
      sub_1C3E508((CGThumbnailListItem_o *)&v52->m_Items[4], v69, v67, v68);
      selectItem = (int64_t)Rarity__getRarityType(*(_DWORD *)(v50 + 60), 0);
      v72 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v52->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v52->max_length) <= 5 )
        goto LABEL_329;
      v52->m_Items[5] = (Il2CppObject *)v72;
      sub_1C3E508((CGThumbnailListItem_o *)&v52->m_Items[5], v72, v70, v71);
      v73 = v51;
      v74 = v52;
    }
    else
    {
      v205 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v205,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__83_2__,
        0);
      v206 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
               (System_Collections_Generic_IEnumerable_TSource__o *)v49,
               (System_Func_TSource__bool__o *)v205,
               (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v207 = LocalizationManager__Get((System_String_o *)StringLiteral_5495/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0);
      selectItem = sub_1C3E60C(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v208 = (System_Object_array *)selectItem;
      selectItem = (int64_t)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v208 )
        goto LABEL_327;
      v211 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v208->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v208->max_length) )
        goto LABEL_329;
      v208->m_Items[0] = (Il2CppObject *)v211;
      sub_1C3E508((CGThumbnailListItem_o *)v208->m_Items, v211, v209, v210);
      if ( !v206 )
        goto LABEL_327;
      v214 = v206[2].klass;
      if ( v214 )
      {
        selectItem = sub_1C3E6A0(v206[2].klass, v208->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v208->max_length) <= 1 )
        goto LABEL_329;
      v208->m_Items[1] = (Il2CppObject *)v214;
      sub_1C3E508((CGThumbnailListItem_o *)&v208->m_Items[1], (int32_t)v214, v212, v213);
      selectItem = (int64_t)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (int64_t)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v217 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v208->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v208->max_length) <= 2 )
        goto LABEL_329;
      v208->m_Items[2] = (Il2CppObject *)v217;
      sub_1C3E508((CGThumbnailListItem_o *)&v208->m_Items[2], v217, v215, v216);
      v220 = v206[3].klass;
      if ( v220 )
      {
        selectItem = sub_1C3E6A0(v206[3].klass, v208->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v208->max_length) <= 3 )
        goto LABEL_329;
      v208->m_Items[3] = (Il2CppObject *)v220;
      sub_1C3E508((CGThumbnailListItem_o *)&v208->m_Items[3], (int32_t)v220, v218, v219);
      v221 = this->fields.servantItemInfo;
      if ( !v221 )
        goto LABEL_327;
      v222 = v221->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (int64_t)Rarity__getRarityType(v222, 0);
      v225 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v208->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v208->max_length) <= 4 )
        goto LABEL_329;
      v208->m_Items[4] = (Il2CppObject *)v225;
      sub_1C3E508((CGThumbnailListItem_o *)&v208->m_Items[4], v225, v223, v224);
      selectItem = (int64_t)Rarity__getRarityType(HIDWORD(v206[3].monitor), 0);
      v228 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C3E6A0(selectItem, v208->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v208->max_length) <= 5 )
        goto LABEL_329;
      v208->m_Items[5] = (Il2CppObject *)v228;
      sub_1C3E508((CGThumbnailListItem_o *)&v208->m_Items[5], v228, v226, v227);
      v73 = v207;
      v74 = v208;
    }
    v229 = System_String__Format_63677896(v73, v74, 0);
    v230 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v231 = LocalizationManager__Get((System_String_o *)StringLiteral_5496/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
    v232 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v232,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectConfirm__,
      0);
    selectItem = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v230 )
    {
      CommonUI__OpenConfirmDialog(
        (CommonUI_o *)v230,
        v231,
        v229,
        v232,
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
    v40 = (_QWORD *)sub_1C3E57C(Method_EquipGraphListViewManager_SelectEquip__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C3E548(v40, v40[4]);
  if ( v41 )
    goto LABEL_62;
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
  selectItem = (int64_t)this->fields.servantItemInfo;
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
    v288 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v77 >= (unsigned int)max_length )
        goto LABEL_329;
      v79 = v75->m_Items[v77];
      v80 = 0;
      do
      {
        selectItem = (int64_t)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          selectItem = (int64_t)BalanceConfig_TypeInfo;
        }
        if ( v80 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
          goto LABEL_118;
        if ( !v79 )
          goto LABEL_327;
        selectItem = (int64_t)PartyListViewItem__GetMember(v79, v80, 0);
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
        *(_QWORD *)&v296.fields.currentCryptoKey = v84;
        *(_QWORD *)&v296.fields.fakeValue = v83;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v296, 0);
        if ( !v82 )
          goto LABEL_327;
        v85 = selectItem;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v82, 0);
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(EquipSvtId, 0);
        ++v80;
      }
      while ( v85 != (_DWORD)selectItem );
      v86 = v82->fields.servantEntity;
      if ( v86 )
        break;
LABEL_118:
      v75 = v288;
      ++v77;
      ++v78;
      LODWORD(max_length) = v288->max_length;
      if ( (__int64)v77 >= (int)max_length )
        return;
    }
    userServantEntity = v82->fields.userServantEntity;
    if ( userServantEntity )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v235 = v82->fields.rarityId;
      if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v236 = LocalizationManager__Get((System_String_o *)StringLiteral_15509/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/, 0);
        v237 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
        selectItem = (int64_t)LocalizationManager__ConvertNumberToRomaNumber(v78, 0);
        if ( !v237 )
          goto LABEL_327;
        v240 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v237->max_length) )
          goto LABEL_329;
        v237->m_Items[0] = v240;
        sub_1C3E508((CGThumbnailListItem_o *)v237->m_Items, (int32_t)v240, v238, v239);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (int64_t)Rarity__getRarityType(v235, 0);
        v243 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 1 )
          goto LABEL_329;
        v237->m_Items[1] = v243;
        sub_1C3E508((CGThumbnailListItem_o *)&v237->m_Items[1], (int32_t)v243, v241, v242);
        selectItem = (int64_t)ServantEntity__getClassName(v86, 0);
        v246 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 2 )
          goto LABEL_329;
        v237->m_Items[2] = v246;
        sub_1C3E508((CGThumbnailListItem_o *)&v237->m_Items[2], (int32_t)v246, v244, v245);
        v248 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v247 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v298.fields.currentCryptoKey = v248;
        *(_QWORD *)&v298.fields.fakeValue = v247;
        v249 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v298, 0);
        selectItem = (int64_t)ServantEntity__getName(v86, v249, -1, 0, 0);
        v252 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 3 )
          goto LABEL_329;
        v237->m_Items[3] = v252;
        v253 = (CGThumbnailListItem_o *)&v237->m_Items[3];
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v236 = LocalizationManager__Get((System_String_o *)StringLiteral_15507/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0);
        v237 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 5);
        LODWORD(v291.fields.currentCryptoKey) = v78;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v291, v254, v255, v256, v257, v258, v259);
        if ( !v237 )
          goto LABEL_327;
        v262 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v237->max_length) )
          goto LABEL_329;
        v237->m_Items[0] = v262;
        sub_1C3E508((CGThumbnailListItem_o *)v237->m_Items, (int32_t)v262, v260, v261);
        maxWave = this->fields.maxWave;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v263, v264, v265, v266, v267, v268);
        v271 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 1 )
          goto LABEL_329;
        v237->m_Items[1] = v271;
        sub_1C3E508((CGThumbnailListItem_o *)&v237->m_Items[1], (int32_t)v271, v269, v270);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (int64_t)Rarity__getRarityType(v235, 0);
        v274 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 2 )
          goto LABEL_329;
        v237->m_Items[2] = v274;
        sub_1C3E508((CGThumbnailListItem_o *)&v237->m_Items[2], (int32_t)v274, v272, v273);
        selectItem = (int64_t)ServantEntity__getClassName(v86, 0);
        v277 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 3 )
          goto LABEL_329;
        v237->m_Items[3] = v277;
        sub_1C3E508((CGThumbnailListItem_o *)&v237->m_Items[3], (int32_t)v277, v275, v276);
        v279 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v278 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v299.fields.currentCryptoKey = v279;
        *(_QWORD *)&v299.fields.fakeValue = v278;
        v280 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v299, 0);
        selectItem = (int64_t)ServantEntity__getName(v86, v280, -1, 0, 0);
        v252 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C3E6A0(selectItem, v237->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v237->max_length) <= 4 )
          goto LABEL_329;
        v237->m_Items[4] = v252;
        v253 = (CGThumbnailListItem_o *)&v237->m_Items[4];
      }
      sub_1C3E508(v253, (int32_t)v252, v250, v251);
      v281 = System_String__Format_63677896(v236, v237, 0);
      v282 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v283 = LocalizationManager__Get((System_String_o *)StringLiteral_5496/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v284 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
      v285 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
      v286 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v286,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      if ( v282 )
      {
        CommonUI__OpenConfirmDialog_31238288(
          (CommonUI_o *)v282,
          v283,
          v281,
          v284,
          v285,
          v286,
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

  if ( (byte_4C562D9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17504/*"btn_filter_on"*/);
    sub_1C3E564(&StringLiteral_17503/*"btn_filter"*/);
    byte_4C562D9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C3E7C0(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17503/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17504/*"btn_filter_on"*/;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_41111336(this, mode, v6);
}


void EquipGraphListViewManager__SetMode_41111336(
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
    sub_1C3E7C0(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_41150088(this, mode + 1, v7);
}


void EquipGraphListViewManager__SetMode_41150036(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_41111336(this, mode, v6);
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
  if ( (byte_4C562CF & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1C3E564(&EquipGraphListViewObject_TypeInfo);
    byte_4C562CF = 1;
  }
  if ( !obj
    || (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_42303060((EquipGraphListViewObject_o *)obj, v7, 0, 0);
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

  if ( (byte_4C562DE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_17540/*"btn_sort_up"*/);
    sub_1C3E564(&StringLiteral_17638/*"btn_txt_up"*/);
    sub_1C3E564(&StringLiteral_17589/*"btn_txt_new"*/);
    sub_1C3E564(&StringLiteral_17579/*"btn_txt_down"*/);
    sub_1C3E564(&StringLiteral_17596/*"btn_txt_old"*/);
    sub_1C3E564(&StringLiteral_17537/*"btn_sort_down"*/);
    byte_4C562DE = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17596/*"btn_txt_old"*/ : &StringLiteral_17589/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17638/*"btn_txt_up"*/ : &StringLiteral_17579/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
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
    sub_1C3E7C0(sort, v4);
  }
}


void EquipGraphListViewManager___EndSelectConfirm_b__84_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool EquipGraphListViewManager___EndSelectConfirm_b__84_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void EquipGraphListViewManager___EndSelectConfirm_b__84_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__83_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C562E2 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C562E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7);
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
    sub_1C3E7C0(this, 0);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void EquipGraphListViewManager___SelectEquip_b__83_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C562BE & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C562BE = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C562C0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C562C0 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C562C2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C562C2 = 1;
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
    v8 = sub_1C787BC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C562C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C562C7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C3E7C0(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C562C6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C562C6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C562BF & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C562BF = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C562C1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C562C1 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C562C3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C562C3 = 1;
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
    v8 = sub_1C787BC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8343C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A833E4;
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
  if ( (byte_4C5709D & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_4C5709D = 1;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, v18, callback, object);
}


void EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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

  if ( (byte_4C5709E & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphListViewManager___c_TypeInfo);
    byte_4C5709E = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)EquipGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return y->fields.atk;
}


int32_t EquipGraphListViewManager___c___CreateList_b__62_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C570A0 & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4C570A0 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)_4__this->fields.itemList) == 0
    || (equipList = this->fields.equipList,
        v8 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++*(&this->fields.type + 1),
        !equipList) )
  {
    sub_1C3E7C0(this, x);
  }
  type = this->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)x,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &equipList->obj.klass + type;
    this->fields.type = type + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
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
  if ( (byte_4C5709F & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C5709F = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (EquipGraphListViewManager___c__DisplayClass62_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(
                                                                &v9,
                                                                0);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_1C3E7C0(this, x);
  type = v4->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
    sub_1C3E7C8(this, x);
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
  if ( (byte_4C570A1 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)sub_1C3E564(&Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__5__);
    byte_4C570A1 = 1;
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
  this = (EquipGraphListViewManager___c__DisplayClass62_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
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
                                                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
LABEL_15:
    sub_1C3E7C0(this, x);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
  _9__5 = v4->fields.__9__5;
  v11 = ActIndividuality;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass62_1__CreateList_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13);
  }
  return BasicHelper__Any_int__51260304(
           v11,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
}


bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_4C570A2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C570A2 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool EquipGraphListViewManager___c__DisplayClass62_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass62_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4C570A3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C570A3 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1C3E7C0(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}