void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ListViewSort_o *v10; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ListViewSort_o *v14; // x19
  struct EquipGraphListViewManager_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ListViewSort_o *v18; // x19
  struct EquipGraphListViewManager_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B44099 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_TypeInfo, v1);
    sub_1BDB878(&ListViewSort_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_11378/*"RewardUpEquipGraph"*/, v3);
    sub_1BDB878(&StringLiteral_6122/*"EquipGraph"*/, v4);
    sub_1BDB878(&StringLiteral_3234/*"BondEquipGraph"*/, v5);
    sub_1BDB878(&StringLiteral_15555/*"WarBoardEquipGraph"*/, v6);
    byte_4B44099 = 1;
  }
  v7 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v7, (System_String_o *)StringLiteral_6122/*"EquipGraph"*/, 3, 0, 0LL);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)EquipGraphListViewManager_TypeInfo->static_fields, (int32_t)v7, v8, v9);
  v10 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v10, (System_String_o *)StringLiteral_3234/*"BondEquipGraph"*/, 3, 0, 0LL);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->bondSortStatus, (int32_t)v10, v12, v13);
  v14 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v14, (System_String_o *)StringLiteral_11378/*"RewardUpEquipGraph"*/, 3, 0, 0LL);
  v15 = EquipGraphListViewManager_TypeInfo->static_fields;
  v15->rewardUpSortStatus = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&v15->rewardUpSortStatus, (int32_t)v14, v16, v17);
  v18 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v18, (System_String_o *)StringLiteral_15555/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  v19 = EquipGraphListViewManager_TypeInfo->static_fields;
  v19->warBoardSortStatus = v18;
  sub_1BDB81C((CGThumbnailListItem_o *)&v19->warBoardSortStatus, (int32_t)v18, v20, v21);
}


void __fastcall EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  sub_1BDB81C((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1BDBAD4(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  EquipGraphListViewManager__ModifyList(this, 1, v10);
  EquipGraphListViewManager__SetMode_40111656(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EquipGraphListViewManager__CreateList(
        EquipGraphListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        int32_t type,
        const MethodInfo *method)
{
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
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x20
  __int64 sort; // x0
  int64_t v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w8
  EquipGraphListViewManager_c *v68; // x0
  struct ListViewSort_o **p_rewardUpSortStatus; // x8
  EquipGraphListViewManager_c *v70; // x0
  EquipGraphListViewManager_c *v71; // x0
  struct ListViewSort_o *v72; // x1
  struct ListViewSort_o **p_sort; // x26
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct ListViewSort_o *v76; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct ListViewSort_o *v83; // x20
  PartyListViewItem_array *v84; // x29
  bool v85; // w8
  struct PartyOrganizationListViewItem_o *v86; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // x27
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x22
  int32_t monitor; // w24
  bool IsTempGrandServant_k__BackingField; // w25
  EquipGraphServantItem_o *v93; // x28
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Int64_array *EquipList; // x0
  Il2CppObject *v97; // x24
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x2
  EquipGraphServantItem_o *v101; // x22
  Il2CppClass *klass; // x8
  __int64 monitor_low; // x9
  Il2CppClass *v104; // x22
  System_Collections_Generic_IEnumerable_T__o *v105; // x22
  System_Func_object__bool__o *v106; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x25
  EquipGraphListViewManager___c_c *v109; // x8
  System_Func_object__int__o *_9__61_2; // x22
  Il2CppObject *v111; // x24
  struct EquipGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  EquipGraphListViewManager___c_c *v115; // x0
  System_Func_object__int__o *_9__61_3; // x22
  Il2CppObject *v117; // x24
  struct EquipGraphListViewManager___c_StaticFields *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  UserGameEntity_o *SelfUserGame; // x28
  int32_t cost; // w21
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x25
  UILabel_o *v126; // x24
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  System_String_o *v130; // x22
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  Il2CppObject *v134; // x29
  Il2CppObject *v135; // x0
  UnityEngine_GameObject_o *bondSkillChangeMessageLabel; // x22
  System_Collections_Generic_List_object__o *v137; // x26
  __int64 v138; // x23
  int v139; // w8
  __int64 v140; // x22
  struct PartyOrganizationListViewItem_o *v141; // x8
  System_Func_object__bool__o *v142; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v143; // x0
  void *v144; // x8
  unsigned __int64 v145; // x27
  UserServantEntity_o *v146; // x22
  int64_t v147; // x0
  int32_t v148; // w28
  int64_t v149; // x29
  int32_t v150; // w21
  EquipGraphListViewItem_o *v151; // x24
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  struct System_Object_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  Il2CppClass **v157; // x0
  ConstantStrMaster_o *v158; // x22
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  int v163; // w8
  System_Collections_Generic_HashSet_int__o *v164; // x27
  unsigned int v165; // w21
  CGThumbnailListItem_o *v166; // x20
  __int64 v167; // x29
  __int64 v168; // x22
  __int64 v169; // x24
  System_Func_int__bool__o *v170; // x22
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x24
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  __int64 v174; // x25
  int64_t v175; // x28
  int32_t v176; // w23
  EquipGraphListViewItem_o *v177; // x22
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  Il2CppClass **v183; // x0
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  Il2CppObject *Master_object; // x0
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  struct ServantEntity_o *servantEntity; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v193; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x0
  System_Collections_Generic_List_object__o *v195; // x25
  int32_t v196; // w27
  UserServantEntity_o *v197; // x24
  int64_t EquipUserSvtId; // x0
  int32_t memberIndex; // w28
  int64_t v200; // x29
  int32_t v201; // w20
  EquipGraphListViewItem_o *v202; // x22
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  struct System_Object_array *items; // x8
  _QWORD *v206; // x9
  __int64 size; // x10
  Il2CppClass **v208; // x0
  System_Action_object__o *v209; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v212; // x8
  System_String_o *v213; // x21
  const MethodInfo *v214; // x1
  const MethodInfo *v215; // x1
  const MethodInfo *v216; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_IEnumerable_TSource__o *v217; // [xsp+20h] [xbp-A0h]
  int32_t v218; // [xsp+28h] [xbp-98h]
  int32_t v219; // [xsp+2Ch] [xbp-94h]
  PartyListViewItem_array *v220; // [xsp+30h] [xbp-90h]
  EventUpValSetupInfo_o *v221; // [xsp+38h] [xbp-88h]
  EquipGraphServantItem_o **p_servantItemInfo; // [xsp+40h] [xbp-80h]
  PartyListViewItem_o *partyItema; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int v226; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16

  if ( (byte_4B44080 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_EquipGraphListViewItem__TypeInfo, baseDeckItemList);
    sub_1BDB878(&BalanceConfig_TypeInfo, v13);
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_UserServantEntity___, v14);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v15);
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantStrMaster___, v16);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantSkillMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1BDB878(&DataManager_TypeInfo, v19);
    sub_1BDB878(&Method_System_Linq_Enumerable_All_int___, v20);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v21);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v22);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToHashSet_int___, v23);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v24);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v25);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v26);
    sub_1BDB878(&EquipGraphListViewManager_TypeInfo, v27);
    sub_1BDB878(&EquipGraphServantItem_TypeInfo, v28);
    sub_1BDB878(&System_Func_UserServantEntity__bool__TypeInfo, v29);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v30);
    sub_1BDB878(&System_Func_UserServantEntity__int__TypeInfo, v31);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Contains__, v32);
    sub_1BDB878(&int_TypeInfo, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__, v35);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__, v36);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v37);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v38);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v39);
    sub_1BDB878(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo, v40);
    sub_1BDB878(&LocalizationManager_TypeInfo, v41);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v42);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__CreateList_b__61_2__, v45);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__CreateList_b__61_3__, v46);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__DisplayClass61_0__CreateList_b__0__, v47);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__DisplayClass61_0__CreateList_b__1__, v48);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__DisplayClass61_0__CreateList_b__4__, v49);
    sub_1BDB878(&EquipGraphListViewManager___c__DisplayClass61_0_TypeInfo, v50);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__DisplayClass61_1__CreateList_b__5__, v51);
    sub_1BDB878(&Method_EquipGraphListViewManager___c__DisplayClass61_1__CreateList_b__7__, v52);
    sub_1BDB878(&EquipGraphListViewManager___c__DisplayClass61_1_TypeInfo, v53);
    sub_1BDB878(&EquipGraphListViewManager___c_TypeInfo, v54);
    sub_1BDB878(&StringLiteral_11577/*"SERVANT_EQUIP_EMPTY"*/, v55);
    sub_1BDB878(&StringLiteral_11777/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v56);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v57);
    byte_4B44080 = 1;
  }
  v58 = sub_1BDBAC4(EquipGraphListViewManager___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v58, 0LL);
  if ( !v58 )
    goto LABEL_157;
  *(_QWORD *)(v58 + 32) = this;
  *(_DWORD *)(v58 + 24) = type;
  sub_1BDB81C((CGThumbnailListItem_o *)(v58 + 32), (int32_t)this, v61, v62);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.waveDeckItemList, (int32_t)baseDeckItemList, v63, v64);
  v67 = *(_DWORD *)(v58 + 24);
  object = (Il2CppObject *)v58;
  this->fields.equipGraphType = v67;
  if ( v67 == 2 )
  {
    v70 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v70 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v70->static_fields->rewardUpSortStatus;
  }
  else if ( v67 == 1 )
  {
    v71 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v71 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v71->static_fields->bondSortStatus;
  }
  else
  {
    v68 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v68 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v68->static_fields->sortStatus;
  }
  v72 = *p_rewardUpSortStatus;
  this->fields.sort = *p_rewardUpSortStatus;
  p_sort = &this->fields.sort;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v72, v65, v66);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_157;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( !partyItem )
    goto LABEL_157;
  v76 = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !v76 )
    goto LABEL_157;
  iconScaleKind = v76->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_24:
    this->fields.seed = normalSizeSeed;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v74, v75);
  }
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    sort = (__int64)this->fields.sort;
    this->fields.isQuestStart = isQuestStart;
    if ( !sort )
      goto LABEL_157;
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
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v81, v82);
    v83 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v83 )
      goto LABEL_157;
    v84 = baseDeckItemList;
    v85 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v74, v75);
    v83 = this->fields.sort;
    if ( !v83 )
      goto LABEL_157;
    v84 = baseDeckItemList;
    v85 = 0;
  }
  v83->fields.isBonusKind = v85;
  partyItema = partyItem;
  v86 = PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  p_baseItem = &this->fields.baseItem;
  this->fields.baseItem = v86;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)v86, v88, v89);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_157;
  if ( baseItem->fields.isFollower )
    return;
  monitor = (int32_t)object[1].monitor;
  IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
  v93 = (EquipGraphServantItem_o *)sub_1BDBAC4(EquipGraphServantItem_TypeInfo);
  EquipGraphServantItem___ctor(v93, baseItem, monitor, IsTempGrandServant_k__BackingField, 0LL);
  this->fields.servantItemInfo = v93;
  p_servantItemInfo = &this->fields.servantItemInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v93, v94, v95);
  sort = (__int64)this->fields.baseItem;
  if ( !sort )
    goto LABEL_157;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0LL);
  object[1].klass = (Il2CppClass *)EquipList;
  v97 = object + 1;
  sub_1BDB81C((CGThumbnailListItem_o *)&object[1], (int32_t)EquipList, v98, v99);
  sort = (__int64)*p_baseItem;
  if ( !*p_baseItem )
    goto LABEL_157;
  v101 = *p_servantItemInfo;
  if ( *(_BYTE *)(sort + 394) )
  {
    sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0LL);
    v60 = sort;
  }
  else
  {
    klass = object[1].klass;
    if ( !klass )
      goto LABEL_157;
    monitor_low = SLODWORD(object[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      goto LABEL_158;
    v60 = *((_QWORD *)&klass->_1.byval_arg.data + monitor_low);
  }
  v221 = setupInfo;
  if ( !v101 )
    goto LABEL_157;
  EquipGraphServantItem__SetEquipTarget(v101, v60, 0LL);
  *(_QWORD *)&this->fields.addBaseAtk = 0LL;
  v104 = v97->klass;
  if ( !v97->klass )
    goto LABEL_157;
  sort = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    sort = (__int64)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == LODWORD(v104->_1.namespaze) )
  {
    if ( !*p_baseItem )
      goto LABEL_157;
    v105 = BasicHelper__ExcludeNull_object_(
             (System_Collections_Generic_IEnumerable_T__o *)(*p_baseItem)->fields.equipUserServantEntityList,
             (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
    v106 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v106,
      object,
      Method_EquipGraphListViewManager___c__DisplayClass61_0__CreateList_b__1__,
      0LL);
    v107 = System_Linq_Enumerable__Where_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v105,
             (System_Func_TSource__bool__o *)v106,
             (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
    v108 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v107,
                                                                  (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    v109 = EquipGraphListViewManager___c_TypeInfo;
    if ( !EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo);
      v109 = EquipGraphListViewManager___c_TypeInfo;
    }
    _9__61_2 = (System_Func_object__int__o *)v109->static_fields->__9__61_2;
    if ( !_9__61_2 )
    {
      if ( !v109->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v109);
        v109 = EquipGraphListViewManager___c_TypeInfo;
      }
      v111 = (Il2CppObject *)v109->static_fields->__9;
      _9__61_2 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__61_2, v111, Method_EquipGraphListViewManager___c__CreateList_b__61_2__, 0LL);
      static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__61_2 = (struct System_Func_UserServantEntity__int__o *)_9__61_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__61_2, (int32_t)_9__61_2, v113, v114);
    }
    this->fields.addBaseAtk = System_Linq_Enumerable__Sum_object_(
                                v108,
                                (System_Func_TSource__int__o *)_9__61_2,
                                (const MethodInfo_306F328 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    v115 = EquipGraphListViewManager___c_TypeInfo;
    if ( !EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo);
      v115 = EquipGraphListViewManager___c_TypeInfo;
    }
    _9__61_3 = (System_Func_object__int__o *)v115->static_fields->__9__61_3;
    if ( !_9__61_3 )
    {
      if ( !v115->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v115);
        v115 = EquipGraphListViewManager___c_TypeInfo;
      }
      v117 = (Il2CppObject *)v115->static_fields->__9;
      _9__61_3 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__61_3, v117, Method_EquipGraphListViewManager___c__CreateList_b__61_3__, 0LL);
      v118 = EquipGraphListViewManager___c_TypeInfo->static_fields;
      v118->__9__61_3 = (struct System_Func_UserServantEntity__int__o *)_9__61_3;
      sub_1BDB81C((CGThumbnailListItem_o *)&v118->__9__61_3, (int32_t)_9__61_3, v119, v120);
    }
    this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                               v108,
                               (System_Func_TSource__int__o *)_9__61_3,
                               (const MethodInfo_306F328 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  }
  sort = (__int64)this->fields.servantItemDraw;
  if ( !sort )
    goto LABEL_157;
  EquipGraphServantItemDraw__SetItem(
    (EquipGraphServantItemDraw_o *)sort,
    this->fields.servantItemInfo,
    this->fields.addBaseHp,
    this->fields.addBaseAtk,
    0LL);
  sort = (__int64)this->fields.servantItemDraw;
  if ( !sort )
    goto LABEL_157;
  EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  sort = (__int64)this->fields.servantItemInfo;
  this->fields.maxCost = partyItem->fields.maxCost;
  if ( !sort )
    goto LABEL_157;
  cost = partyItem->fields.cost;
  sort = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0LL);
  this->fields.baseCost = cost - sort;
  this->fields.partyNumber = partyItem->fields.index + 1;
  if ( !v84 )
    goto LABEL_157;
  v220 = v84;
  this->fields.maxWave = *(_QWORD *)&v84->max_length;
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_157;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_157;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  v125 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEquipList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v126 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUM_INFO"*/, 0LL);
    if ( !v125 )
      goto LABEL_157;
    v130 = (System_String_o *)sort;
    v226 = (int)v125[1].monitor;
    sort = j_il2cpp_value_box_0(int_TypeInfo, &v226, v127, v128, v129);
    if ( !SelfUserGame )
      goto LABEL_157;
    v134 = (Il2CppObject *)sort;
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v131, v132, v133);
    sort = (__int64)System_String__Format_62613552(v130, v134, v135, 0LL);
    if ( !v126 )
      goto LABEL_157;
    UILabel__set_text(v126, (System_String_o *)sort, 0LL);
  }
  sort = (__int64)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_157;
  sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort || !sort )
    goto LABEL_157;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  bondSkillChangeMessageLabel = this->fields.bondSkillChangeMessageLabel;
  if ( this->fields.equipGraphType == 1 )
  {
    sort = (__int64)*p_servantItemInfo;
    if ( !*p_servantItemInfo )
      goto LABEL_157;
    sort = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0LL);
    v60 = sort > 0;
  }
  else
  {
    v60 = 0LL;
  }
  if ( !bondSkillChangeMessageLabel )
LABEL_157:
    sub_1BDBAD4(sort, v60);
  UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v60, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v137 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v137,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
  v138 = sub_1BDBAC4(EquipGraphListViewManager___c__DisplayClass61_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v138, 0LL);
  v139 = (int)object[1].monitor;
  if ( v139 != 2 )
  {
    if ( v139 == 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      if ( v138 )
      {
        *(_QWORD *)(v138 + 24) = sort;
        sub_1BDB81C((CGThumbnailListItem_o *)(v138 + 24), sort, v184, v185);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v138 + 16) = Master_object;
        sub_1BDB81C((CGThumbnailListItem_o *)(v138 + 16), (int32_t)Master_object, v187, v188);
        if ( *p_baseItem )
        {
          servantEntity = (*p_baseItem)->fields.servantEntity;
          if ( servantEntity )
          {
            individuality = servantEntity->fields.individuality;
            *(_QWORD *)(v138 + 32) = individuality;
            sub_1BDB81C((CGThumbnailListItem_o *)(v138 + 32), (int32_t)individuality, v189, v190);
            v193 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v193,
              (Il2CppObject *)v138,
              Method_EquipGraphListViewManager___c__DisplayClass61_1__CreateList_b__5__,
              0LL);
            v194 = System_Linq_Enumerable__Where_object_(
                     v125,
                     (System_Func_TSource__bool__o *)v193,
                     (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            sort = (__int64)System_Linq_Enumerable__ToList_object_(
                              v194,
                              (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            if ( sort )
            {
              v195 = (System_Collections_Generic_List_object__o *)sort;
              if ( *(int *)(sort + 24) < 1 )
                goto LABEL_147;
              v196 = 0;
              while ( 1 )
              {
                sort = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v195,
                                  v196,
                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
                if ( !*p_servantItemInfo )
                  break;
                v197 = (UserServantEntity_o *)sort;
                EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, 0LL);
                memberIndex = this->fields.memberIndex;
                v200 = EquipUserSvtId;
                v201 = (int32_t)object[1].monitor;
                v202 = (EquipGraphListViewItem_o *)sub_1BDBAC4(EquipGraphListViewItem_TypeInfo);
                EquipGraphListViewItem___ctor(
                  v202,
                  v196,
                  v197,
                  v200,
                  v220,
                  partyItema,
                  v221,
                  memberIndex,
                  0LL,
                  v201,
                  v216);
                if ( !v137 )
                  break;
                items = v137->fields._items;
                v206 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
                ++v137->fields._version;
                if ( !items )
                  break;
                size = v137->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v137,
                    (Il2CppObject *)v202,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
                }
                else
                {
                  v208 = &items->obj.klass + size;
                  v137->fields._size = size + 1;
                  v208[4] = (Il2CppClass *)v202;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v208 + 4), (int32_t)v202, v203, v204);
                }
                if ( ++v196 >= v195->fields._size )
                  goto LABEL_147;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( v139 )
        goto LABEL_147;
      sort = (__int64)*p_baseItem;
      if ( *p_baseItem )
      {
        sort = (__int64)PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0LL);
        if ( sort )
        {
          v140 = sort;
          sort = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            sort = (__int64)BalanceConfig_TypeInfo;
          }
          if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == *(_DWORD *)(v140 + 24) )
          {
            v141 = *p_baseItem;
            if ( !*p_baseItem )
              goto LABEL_157;
            if ( v141->fields._IsGrandServant_k__BackingField || v141->fields._IsTempGrandServant_k__BackingField )
            {
              v142 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UserServantEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v142,
                object,
                Method_EquipGraphListViewManager___c__DisplayClass61_0__CreateList_b__4__,
                0LL);
              v143 = System_Linq_Enumerable__Where_object_(
                       v125,
                       (System_Func_TSource__bool__o *)v142,
                       (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
              sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                                v143,
                                (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
              v125 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
            }
          }
          if ( v125 )
          {
            v144 = v125[1].monitor;
            if ( (int)v144 >= 1 )
            {
              v145 = 0LL;
              while ( v145 < (unsigned int)v144 )
              {
                sort = (__int64)*p_servantItemInfo;
                if ( !*p_servantItemInfo )
                  goto LABEL_157;
                v146 = (UserServantEntity_o *)*((_QWORD *)&v125[2].klass + v145);
                v147 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0LL);
                v148 = this->fields.memberIndex;
                v149 = v147;
                v150 = (int32_t)object[1].monitor;
                v151 = (EquipGraphListViewItem_o *)sub_1BDBAC4(EquipGraphListViewItem_TypeInfo);
                EquipGraphListViewItem___ctor(v151, v145, v146, v149, v220, partyItema, v221, v148, 0LL, v150, v216);
                if ( !v137 )
                  goto LABEL_157;
                v154 = v137->fields._items;
                v155 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
                ++v137->fields._version;
                if ( !v154 )
                  goto LABEL_157;
                v156 = v137->fields._size;
                if ( (unsigned int)v156 >= v154->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v137,
                    (Il2CppObject *)v151,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
                }
                else
                {
                  v157 = &v154->obj.klass + v156;
                  v137->fields._size = v156 + 1;
                  v157[4] = (Il2CppClass *)v151;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v157 + 4), (int32_t)v151, v152, v153);
                }
                LODWORD(v144) = v125[1].monitor;
                if ( (__int64)++v145 >= (int)v144 )
                  goto LABEL_147;
              }
              goto LABEL_158;
            }
            goto LABEL_147;
          }
        }
      }
    }
    goto LABEL_157;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !sort )
    goto LABEL_157;
  v158 = (ConstantStrMaster_o *)sort;
  RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                (ConstantStrMaster_o *)sort,
                                                                                0LL);
  sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                    RewardUpFuncCategory,
                    (const MethodInfo_3074BCC *)Method_System_Linq_Enumerable_ToHashSet_int___);
  if ( !v138 )
    goto LABEL_157;
  *(_QWORD *)(v138 + 40) = sort;
  sub_1BDB81C((CGThumbnailListItem_o *)(v138 + 40), sort, v160, v161);
  RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                               v158,
                                                                               0LL);
  sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                    RewardUpIgnoreSvtId,
                    (const MethodInfo_3074BCC *)Method_System_Linq_Enumerable_ToHashSet_int___);
  if ( !v125 )
    goto LABEL_157;
  v163 = (int)v125[1].monitor;
  if ( v163 >= 1 )
  {
    v219 = 0;
    v164 = (System_Collections_Generic_HashSet_int__o *)sort;
    v165 = 0;
    v166 = (CGThumbnailListItem_o *)(v138 + 56);
    v217 = v125;
    while ( v165 < v163 )
    {
      v167 = *((_QWORD *)&v125[2].klass + (int)v165);
      if ( !v167 )
        goto LABEL_157;
      v169 = *(_QWORD *)(v167 + 80);
      v168 = *(_QWORD *)(v167 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v227.fields.currentCryptoKey = v169;
      *(_QWORD *)&v227.fields.fakeValue = v168;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v227, 0LL);
      if ( !v164 )
        goto LABEL_157;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v164,
               sort,
               (const MethodInfo_358C094 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        sort = (__int64)UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)v167, 1, 0LL);
        if ( sort )
        {
          v170 = (System_Func_int__bool__o *)v166->klass;
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v166->klass )
          {
            v170 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v170,
              (Il2CppObject *)v138,
              Method_EquipGraphListViewManager___c__DisplayClass61_1__CreateList_b__7__,
              0LL);
            *(_QWORD *)(v138 + 56) = v170;
            sub_1BDB81C(v166, (int32_t)v170, v172, v173);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)v170,
                   (const MethodInfo_303D8D0 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (__int64)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_157;
            v174 = v138;
            v175 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0LL);
            v218 = this->fields.memberIndex;
            v176 = (int32_t)object[1].monitor;
            v177 = (EquipGraphListViewItem_o *)sub_1BDBAC4(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v177,
              v219,
              (UserServantEntity_o *)v167,
              v175,
              v220,
              partyItema,
              v221,
              v218,
              (System_Int32_array *)preLoadCategoryIdList,
              v176,
              v216);
            if ( !v137 )
              goto LABEL_157;
            v180 = v137->fields._items;
            v181 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v137->fields._version;
            if ( !v180 )
              goto LABEL_157;
            v182 = v137->fields._size;
            v138 = v174;
            if ( (unsigned int)v182 >= v180->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v137,
                (Il2CppObject *)v177,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
            }
            else
            {
              v183 = &v180->obj.klass + v182;
              v137->fields._size = v182 + 1;
              v183[4] = (Il2CppClass *)v177;
              sub_1BDB81C((CGThumbnailListItem_o *)(v183 + 4), (int32_t)v177, v178, v179);
            }
            v125 = v217;
            ++v219;
          }
        }
      }
      v163 = (int)v125[1].monitor;
      if ( (int)++v165 >= v163 )
        goto LABEL_147;
    }
LABEL_158:
    sub_1BDBADC(sort, v60, v100);
  }
LABEL_147:
  v209 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EquipGraphListViewItem__TypeInfo);
  System_Action_object____ctor(
    v209,
    object,
    Method_EquipGraphListViewManager___c__DisplayClass61_0__CreateList_b__0__,
    0LL);
  if ( !v137 )
    goto LABEL_157;
  System_Collections_Generic_List_object___ForEach(
    v137,
    (System_Action_T__o *)v209,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_157;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v212 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11577/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11777/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v213 = *v212;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get(v213, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_157;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EquipGraphListViewManager__RefrashListDisp(this, v214);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EquipGraphListViewManager__SetFilterButtonImage(this, v215);
}


void __fastcall EquipGraphListViewManager__CreateList_40109428(
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
  __int64 v24; // x1
  __int64 sort; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ListViewSort_o *v34; // x21
  bool v35; // w8
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x23
  EquipGraphServantItem_o *v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  EquipGraphServantItem_o *servantItemInfo; // x24
  UserGameEntity_o *SelfUserGame; // x25
  int32_t cost; // w21
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v48; // x24
  UILabel_o *v49; // x26
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_String_o *v53; // x27
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x28
  Il2CppObject *v58; // x0
  __int64 v59; // x2
  __int64 v60; // x8
  unsigned __int64 v61; // x22
  UserServantEntity_o *v62; // x26
  int64_t EquipUserSvtId; // x27
  EquipGraphListViewItem_o *v64; // x25
  const MethodInfo *v65; // x6
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v74; // x8
  System_String_o *v75; // x21
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // [xsp+0h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int v80; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B44081 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v9);
    sub_1BDB878(&EquipGraphListViewManager_TypeInfo, v10);
    sub_1BDB878(&EquipGraphServantItem_TypeInfo, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14);
    sub_1BDB878(&LocalizationManager_TypeInfo, v15);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BDB878(&StringLiteral_11577/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_1BDB878(&StringLiteral_11777/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v19);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v20);
    byte_4B44081 = 1;
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
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.sort,
    (int32_t)warBoardSortStatus,
    member,
    (const MethodInfo *)setupInfo);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v26, v27);
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
                           0LL,
                           setupInfo->fields.servantEquipFilterEventCampaignIds,
                           setupInfo->fields.servantEquipFilterEventIds,
                           0LL,
                           0LL,
                           isQuestStart,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v32, v33);
    v34 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0LL);
    if ( !v34 )
      goto LABEL_62;
    v35 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v26, v27);
    v34 = this->fields.sort;
    if ( !v34 )
      goto LABEL_62;
    v35 = 0;
  }
  v34->fields.isBonusKind = v35;
  if ( !partyItem )
    goto LABEL_62;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  this->fields.baseItem = MemberItem;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v37, v38);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_62;
  if ( !baseItem->fields.isFollower )
  {
    v40 = (EquipGraphServantItem_o *)sub_1BDBAC4(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v40, baseItem, 0, 0, 0LL);
    this->fields.servantItemInfo = v40;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantItemInfo, (int32_t)v40, v41, v42);
    sort = (__int64)this->fields.baseItem;
    if ( !sort )
      goto LABEL_62;
    servantItemInfo = this->fields.servantItemInfo;
    sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0LL);
    if ( !servantItemInfo )
      goto LABEL_62;
    EquipGraphServantItem__SetEquipTarget(servantItemInfo, sort, 0LL);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_62;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, 0, 0, 0LL);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_62;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    sort = (__int64)this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !sort )
      goto LABEL_62;
    cost = partyItem->fields.cost;
    this->fields.baseCost = cost - EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0LL);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_62;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_62;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v48 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v49 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUM_INFO"*/, 0LL);
      if ( !v48 )
        goto LABEL_62;
      v53 = (System_String_o *)sort;
      v80 = *(_QWORD *)&v48->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &v80, v50, v51, v52);
      if ( !SelfUserGame )
        goto LABEL_62;
      v57 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v54, v55, v56);
      sort = (__int64)System_String__Format_62613552(v53, v57, v58, 0LL);
      if ( !v49 )
        goto LABEL_62;
      UILabel__set_text(v49, (System_String_o *)sort, 0LL);
    }
    sort = (__int64)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_62;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
    if ( !*p_sort )
      goto LABEL_62;
    if ( !sort )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v48 )
      goto LABEL_62;
    v60 = *(_QWORD *)&v48->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = 0LL;
      while ( 1 )
      {
        if ( v61 >= (unsigned int)v60 )
          sub_1BDBADC(sort, v24, v59);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v62 = v48->m_Items[v61];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0LL);
        v64 = (EquipGraphListViewItem_o *)sub_1BDBAC4(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_40130900(v64, v61, v62, EquipUserSvtId, partyItem, setupInfo, v65);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v68 = *(_QWORD *)(sort + 16);
        v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v68 )
          break;
        v70 = *(int *)(sort + 24);
        if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v64,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = v68 + 8 * v70;
          *(_DWORD *)(sort + 24) = v70 + 1;
          *(_QWORD *)(v71 + 32) = v64;
          sub_1BDB81C((CGThumbnailListItem_o *)(v71 + 32), (int32_t)v64, v66, v67);
        }
        LODWORD(v60) = v48->max_length;
        if ( (__int64)++v61 >= (int)v60 )
          goto LABEL_53;
      }
LABEL_62:
      sub_1BDBAD4(sort, v24);
    }
LABEL_53:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_62;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v74 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11577/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11777/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v75 = *v74;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sort = (__int64)LocalizationManager__Get(v75, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_62;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v76);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v77);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4B4407C & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4B4407C = 1;
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
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0LL)
    || (ListViewSort__DeleteContinueData(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0LL)
    || (ListViewSort__DeleteContinueData(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_1BDBAD4(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BDBAD4(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int64_t Instance; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t EquipUserSvtId; // x20
  struct PartyListViewItem_array *v28; // x8
  int v29; // w9
  PartyListViewItem_o *v30; // x21
  struct PartyListViewItem_array *v31; // x8
  int v32; // w9
  struct EquipGraphListViewItem_o *v33; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v36; // q1
  PartyListViewItem_o *v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x4
  Il2CppObject *v41; // x21
  __int64 v42; // x10
  UnityEngine_Object_o *v43; // x22
  _BOOL8 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  void *v47; // x8
  __int64 v48; // x11
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *klass; // x21
  System_Action_object__o *v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  UnityEngine_Object_o *monitor; // x21
  _BOOL8 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x3
  void *v61; // x8
  __int64 v62; // x11
  struct EquipGraphListViewItem_o *v63; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  System_Action_object__o *v65; // x21
  struct EquipGraphListViewItem_o *v66; // x8
  System_Collections_Generic_List_T__o *v67; // x20
  System_Func_object__bool__o *v68; // x21
  struct EquipGraphListViewItem_o *v69; // x8
  struct UserServantEntity_o *v70; // x9
  int32_t hp; // w21
  int32_t atk; // w22
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  struct EquipGraphListViewItem_o *v76; // x8
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v78; // x3
  struct EquipGraphListViewItem_o *v79; // x8
  __int64 v80; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  struct PartyListViewItem_array *waveDeckItemList; // x25
  __int64 v83; // x8
  unsigned __int64 v84; // x26
  PartyListViewItem_o *v85; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v87; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v89; // x22
  __int64 v90; // x23
  __int64 v91; // x24
  int v92; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+10h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+38h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4B4408E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo, result);
    sub_1BDB878(&BalanceConfig_TypeInfo, v5);
    sub_1BDB878(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v10);
    sub_1BDB878(&Method_EquipGraphListViewManager__EndSelectConfirm_b__83_0__, v11);
    sub_1BDB878(&Method_EquipGraphListViewManager__EndSelectConfirm_b__83_1__, v12);
    sub_1BDB878(&Method_EquipGraphListViewManager__EndSelectConfirm_b__83_2__, v13);
    sub_1BDB878(&EquipGraphListViewObject_TypeInfo, v14);
    sub_1BDB878(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v18);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    byte_4B4408E = 1;
  }
  memset(&v97, 0, sizeof(v97));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( !result )
    goto LABEL_83;
  if ( !this->fields.isWaveBattle )
  {
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_106;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v96,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v97 = *(System_Collections_Generic_List_Enumerator_object__o *)&v96.fields.currentCryptoKey;
    while ( 1 )
    {
      v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v97,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v49 )
        break;
      current = v97.fields._current;
      if ( !v97.fields._current
        || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v97.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EquipGraphListViewItem_c *)v97.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1BDBAD4(v49, v50);
      }
      if ( BYTE1(v97.fields._current[9].klass) )
      {
        BYTE1(v97.fields._current[9].klass) = 0;
        if ( EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v50) )
        {
          klass = (System_Collections_Generic_List_object__o *)current[15].klass;
          v54 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v54,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__83_2__,
            0LL);
          if ( !klass )
            sub_1BDBAD4(v55, v56);
          System_Collections_Generic_List_object___ForEach(
            klass,
            (System_Action_T__o *)v54,
            (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
          monitor = (UnityEngine_Object_o *)current[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v58 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( v58 )
          {
            v61 = current[6].monitor;
            if ( !v61
              || (v62 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                  *(unsigned __int8 *)(*(_QWORD *)v61 + 304LL) < (unsigned int)v62)
              || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v61 + 200LL) + 8 * v62 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1BDBAD4(v58, v59);
            }
            EquipGraphListViewObject__Init_40145504((EquipGraphListViewObject_o *)current[6].monitor, 4, 0, v60);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v97,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    goto LABEL_58;
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
      v83 = *(_QWORD *)&waveDeckItemList->max_length;
      if ( (int)v83 >= 1 )
      {
        v84 = 0LL;
        while ( v84 < (unsigned int)v83 )
        {
          v85 = waveDeckItemList->m_Items[v84];
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
            if ( !v85 )
              goto LABEL_106;
            Instance = (int64_t)PartyListViewItem__GetMember(v85, i, 0LL);
            v87 = this->fields.selectItem;
            if ( !v87 )
              goto LABEL_106;
            servantEntity = v87->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_106;
            v89 = (PartyOrganizationListViewItem_o *)Instance;
            v91 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v90 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v98.fields.currentCryptoKey = v91;
            *(_QWORD *)&v98.fields.fakeValue = v90;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v98, 0LL);
            if ( !v89 )
              goto LABEL_106;
            v92 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v89, 0LL);
            if ( v92 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(EquipSvtId, 0LL) )
              PartyListViewItem__SetEquip(v85, i, 0LL, 0, 0LL);
          }
          LODWORD(v83) = waveDeckItemList->max_length;
          if ( (__int64)++v84 >= (int)v83 )
            goto LABEL_18;
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
    EquipUserSvtId = 0LL;
    if ( EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)Instance, 0LL) )
    {
      Instance = (int64_t)this->fields.servantItemInfo;
      if ( !Instance )
        goto LABEL_106;
      EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, 0LL);
    }
    Instance = (int64_t)this->fields.selectItem;
    if ( !Instance || (v28 = this->fields.waveDeckItemList) == 0LL )
LABEL_106:
      sub_1BDBAD4(Instance, v23);
    v29 = *(_DWORD *)(Instance + 208) - 1;
    if ( v29 >= v28->max_length )
LABEL_111:
      sub_1BDBADC(Instance, v23, v24);
    v30 = v28->m_Items[v29];
    Instance = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)Instance, v23);
    if ( !Instance || !v30 )
      goto LABEL_106;
    PartyListViewItem__SetEquip(v30, *(_DWORD *)(Instance + 16), EquipUserSvtId, 0, 0LL);
  }
LABEL_18:
  v31 = this->fields.waveDeckItemList;
  if ( !v31 )
    goto LABEL_106;
  v32 = this->fields.partyNumber - 1;
  if ( v32 >= v31->max_length )
    goto LABEL_111;
  v33 = this->fields.selectItem;
  if ( !v33 )
    goto LABEL_106;
  userSvtEntity = v33->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_106;
  memberIndex = this->fields.memberIndex;
  v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v37 = v31->m_Items[v32];
  *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v96.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v95 = v96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v95, 0LL);
  if ( !v37 )
    goto LABEL_106;
  PartyListViewItem__SetEquip(v37, memberIndex, Instance, 0, 0LL);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v97 = v94;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v38 )
      break;
    v41 = v97.fields._current;
    if ( !v97.fields._current
      || (v42 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v97.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v42)
      || (EquipGraphListViewItem_c *)v97.fields._current->klass->_2.typeHierarchy[v42 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BDBAD4(v38, v39);
    }
    if ( BYTE1(v97.fields._current[9].klass) )
      LOWORD(v97.fields._current[9].klass) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v41,
      this->fields.waveDeckItemList,
      v37,
      this->fields.memberIndex,
      v40);
    v43 = (UnityEngine_Object_o *)v41[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v44 = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
    if ( v44 )
    {
      v47 = v41[6].monitor;
      if ( !v47
        || (v48 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) < (unsigned int)v48)
        || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v48 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1BDBAD4(v44, v45);
      }
      EquipGraphListViewObject__Init_40145504((EquipGraphListViewObject_o *)v41[6].monitor, 4, 0, v46);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.baseCost = v37->fields.cost;
LABEL_58:
  v63 = this->fields.selectItem;
  if ( !v63 )
    goto LABEL_106;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v63->fields.wearerMemberInfoList;
  v63->fields.isBase = 1;
  v65 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Action_object____ctor(
    v65,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__83_0__,
    0LL);
  if ( !wearerMemberInfoList )
    goto LABEL_106;
  System_Collections_Generic_List_object___ForEach(
    wearerMemberInfoList,
    (System_Action_T__o *)v65,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v66 = this->fields.selectItem;
  if ( !v66 )
    goto LABEL_106;
  v67 = (System_Collections_Generic_List_T__o *)v66->fields.wearerMemberInfoList;
  v68 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v68,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__83_1__,
    0LL);
  Instance = BasicHelper__Any_object_(
               v67,
               (System_Func_T__bool__o *)v68,
               (const MethodInfo_301CDFC *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
  v69 = this->fields.selectItem;
  if ( (Instance & 1) != 0 )
  {
    if ( !v69 )
      goto LABEL_106;
    v70 = v69->fields.userSvtEntity;
    if ( v70 )
    {
      hp = v70->fields.hp;
      atk = v70->fields.atk;
      goto LABEL_67;
    }
  }
  else if ( !v69 )
  {
    goto LABEL_106;
  }
  hp = 0;
  atk = 0;
LABEL_67:
  v73 = v69->fields.userSvtEntity;
  if ( !v73 )
    goto LABEL_106;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v96.fields.fakeValue = v74;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v93 = v96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v93, 0LL);
  if ( !servantItemInfo )
    goto LABEL_106;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, 0LL);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_106;
  EquipGraphServantItemDraw__SetItem(
    (EquipGraphServantItemDraw_o *)Instance,
    this->fields.servantItemInfo,
    this->fields.addBaseHp - hp,
    this->fields.addBaseAtk - atk,
    0LL);
  Instance = (int64_t)this->fields.bondSkillChangeMessageLabel;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.equipGraphType == 1, 0LL);
  v76 = this->fields.selectItem;
  if ( !v76 )
    goto LABEL_106;
  viewObject = (UnityEngine_Object_o *)v76->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_82;
  v79 = this->fields.selectItem;
  if ( !v79 )
    goto LABEL_106;
  Instance = (int64_t)v79->fields.viewObject;
  if ( !Instance )
    goto LABEL_106;
  v80 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v80
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v80 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_106;
  }
  EquipGraphListViewObject__Init_40145504((EquipGraphListViewObject_o *)Instance, 4, 1, v78);
LABEL_82:
  EquipGraphListViewManager__RefrashListDisp(this, v23);
LABEL_83:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v24, v25);
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

  if ( (byte_4B44090 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B44090 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BDBAD4(v10, v11);
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

  if ( (byte_4B44094 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B44094 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BDBAD4(v9, v10);
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

  if ( (byte_4B44097 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4B44097 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BDBAD4(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BDBAD4(v13, v14);
    }
    klass = v21.fields._current[7].klass;
    if ( !klass )
      sub_1BDBAD4(v13, v14);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v22.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v22, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B44098 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, index);
    this = (EquipGraphListViewManager_o *)sub_1BDB878(
                                            &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                            v8);
    byte_4B44098 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BDBAD4(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v9,
                                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B44083 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B44083 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BDBAD4(0LL, method);
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

  if ( (byte_4B4408B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4B4408B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v13.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BDBAD4(v8, v9);
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
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B4408C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4B4408C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current
      || (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EquipGraphListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1BDBAD4(v8, v9);
    }
    if ( BYTE1(v13.fields._current[9].klass) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  const MethodInfo *v19; // x3
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
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4B44085 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4B44085 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 169) )
      {
        if ( *(_BYTE *)(itemList + 147) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v47, 0LL);
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
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v34 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v46, 0LL);
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
    sub_1BDBAD4(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1BDB81C((CGThumbnailListItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)v44, v43, v41, v42);
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
  const MethodInfo *v19; // x3
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
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4B44084 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4B44084 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 168) )
      {
        if ( *(_BYTE *)(itemList + 146) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v47, 0LL);
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
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v34 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v46, 0LL);
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
    sub_1BDBAD4(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1BDB81C((CGThumbnailListItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4B4407D & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4B4407D = 1;
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
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0LL)
    || (ListViewSort__InitLoad(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0LL)
    || (ListViewSort__InitLoad(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_1BDBAD4(sortStatus, v1);
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
  __int64 v21; // x2
  DataManager_o *v22; // x22
  int32_t v23; // w23
  DataManager_o *v24; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v27; // q0
  const MethodInfo *v28; // x3
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

  if ( (byte_4B44082 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B44082 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v40, 0LL);
      if ( size >= 1 )
      {
        v22 = (DataManager_o *)v20;
        v23 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v23,
                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v24 = Instance;
          methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (EquipGraphListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v27 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v41.fields.fakeValue = v27;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v39 = v41;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v39, 0LL);
            if ( Instance == v22 )
              break;
          }
          if ( size == ++v23 )
            goto LABEL_27;
        }
        if ( v14 >= LODWORD(v38->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v29 = *v17;
        v24->fields.masterLoadThreads = *v17;
        sub_1BDB81C((CGThumbnailListItem_o *)&v24->fields.masterLoadThreads, (int32_t)v29, v21, v28);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v24, v11);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v24, v30);
        }
      }
LABEL_27:
      Instance = v38;
      if ( ++v14 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v14 >= LODWORD(v38->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1BDBADC(Instance, v11, v21);
    }
LABEL_44:
    sub_1BDBAD4(Instance, v11);
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
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B44092 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__, method);
    byte_4B44092 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BDBAD4(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  const MethodInfo *v3; // x3
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v7; // x1
  unsigned int Select; // w0

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_1BDBAD4(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  int32_t equipGraphType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1

  if ( (byte_4B4408F & 1) == 0 )
  {
    sub_1BDB878(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_1BDB878(&Method_EquipGraphListViewManager_OnClickFilterKind__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B4408F = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BDBAC4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v11 )
      sub_1BDBAD4(v13, v14);
    if ( equipGraphType == 2 )
      v15 = 16;
    else
      v15 = 5;
    CommonUI__OpenServantFilterSelectMenu_30840412(v11, v15, sort, (ListViewManager_o *)this, v12, -1, 0LL);
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
  const MethodInfo *v3; // x3
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BDBAD4(v6, v7);
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

  if ( (byte_4B44095 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B44095 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BDBAD4(v5, v6);
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

  if ( (byte_4B44093 & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_1BDB878(&Method_EquipGraphListViewManager_OnClickSortKind__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B44093 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BDBAC4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1BDBAD4(v12, v13);
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
    sub_1BDBAD4(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.callbackFunc, 0, v7, v8);
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
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B4408A & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4408A = 1;
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
          sub_1BDBAD4(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  int *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  int32_t baseCost; // w20
  int32_t v15; // w22
  UILabel_o *v16; // x20
  System_String_o **v17; // x8
  System_String_o *v18; // x21
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  int32_t maxCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B44086 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_12443/*"SUM_OVER_INFO"*/, v7);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v8);
    byte_4B44086 = 1;
  }
  ObjectList = (int *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_20;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( ObjectList[6] >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      ObjectList = (int *)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v12,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      (*(void (__fastcall **)(int *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
        ObjectList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
      if ( ++v12 >= v11->fields._size )
        goto LABEL_8;
    }
LABEL_20:
    sub_1BDBAD4(ObjectList, v10);
  }
LABEL_8:
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoData2Label, 0LL, 0LL) )
  {
    ObjectList = (int *)this->fields.servantItemInfo;
    if ( !ObjectList )
      goto LABEL_20;
    baseCost = this->fields.baseCost;
    v15 = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)ObjectList, 0LL) + baseCost;
    v16 = this->fields.infoData2Label;
    v17 = v15 <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12442/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12443/*"SUM_OVER_INFO"*/;
    v18 = *v17;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get(v18, 0LL);
    v29 = v15;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v20, v21, v22);
    maxCost = this->fields.maxCost;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v24, v25, v26);
    ObjectList = (int *)System_String__Format_62613552(v19, v23, v27, 0LL);
    if ( !v16 )
      goto LABEL_20;
    UILabel__set_text(v16, (System_String_o *)ObjectList, 0LL);
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

  if ( (byte_4B44088 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_1BDB878(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4B44088 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v19, v20);
      EquipGraphListViewObject__Init_40146672((EquipGraphListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_40145644(
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

  if ( (byte_4B44089 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_1BDB878(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4B44089 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v17, v18);
      EquipGraphListViewObject__Init_40146760((EquipGraphListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  struct EquipGraphListViewItem_o **p_selectItem; // x21
  CGThumbnailListItem_o *p_selectItemCallbackFunc; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x1
  __int64 selectItem; // x0
  int v52; // w25
  EquipGraphListViewObject_o *v53; // x8
  __int64 methodPtr_low; // x11
  EquipGraphListViewObject_o *v55; // x24
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  const MethodInfo *v58; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v60; // w9
  struct EquipGraphListViewItem_o *v61; // x8
  _QWORD *v62; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w20
  System_Reflection_MethodBase_o *v64; // x0
  struct PartyListViewItem_array *v65; // x8
  int v66; // w9
  PartyListViewItem_o *v67; // x20
  int32_t cost; // w23
  Il2CppObject *Instance; // x20
  System_String_o *v70; // x21
  System_String_o *v71; // x22
  NotificationDialog_ClickDelegate_o *v72; // x23
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x21
  System_Action_object__o *v74; // x23
  const MethodInfo *v75; // x3
  bool v76; // w1
  const MethodInfo *v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  _QWORD *v80; // x0
  _BOOL4 v81; // w20
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  CGThumbnailListItem_c *v84; // x19
  bool IsUse; // w0
  _QWORD *v86; // x8
  bool v87; // w23
  System_Reflection_MethodBase_o *v88; // x0
  System_Collections_Generic_List_object__o *v89; // x20
  __int64 v90; // x21
  System_String_o *v91; // x20
  System_Object_array *v92; // x22
  const MethodInfo *v93; // x3
  __int64 v94; // x23
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x23
  const MethodInfo *v97; // x3
  __int64 v98; // x23
  const MethodInfo *v99; // x3
  Il2CppObject *v100; // x23
  struct EquipGraphServantItem_o *v101; // x8
  int32_t rarityId; // w23
  const MethodInfo *v103; // x3
  __int64 v104; // x23
  const MethodInfo *v105; // x3
  __int64 v106; // x21
  System_String_o *v107; // x0
  System_Object_array *v108; // x1
  struct PartyListViewItem_array *v109; // x9
  __int64 v110; // x8
  unsigned __int64 v111; // x29
  int v112; // w27
  PartyListViewItem_o *v113; // x20
  int32_t v114; // w22
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v116; // x23
  __int64 v117; // x24
  __int64 v118; // x25
  int v119; // w24
  ServantEntity_o *v120; // x22
  struct PartyListViewItem_array *v121; // x8
  int v122; // w9
  struct EquipGraphListViewItem_o *v123; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v126; // q1
  PartyListViewItem_o *v127; // x24
  _BOOL8 v128; // x0
  const MethodInfo *v129; // x1
  Il2CppObject *current; // x23
  __int64 v131; // x10
  int monitor_low; // w8
  int v133; // w24
  _BOOL4 v134; // w0
  System_Collections_Generic_List_object__o *klass; // x24
  System_Action_object__o *v136; // x25
  __int64 v137; // x0
  __int64 v138; // x1
  UnityEngine_Object_o *monitor; // x24
  _BOOL8 v140; // x0
  __int64 v141; // x1
  const MethodInfo *v142; // x3
  void *v143; // x8
  __int64 v144; // x11
  struct EquipGraphListViewItem_o *v145; // x8
  struct UserServantEntity_o *v146; // x9
  __int128 v147; // q1
  EquipGraphServantItem_o *v148; // x21
  EquipGraphListViewItem_WearerMemberInfo_o *WearerMemberInfo; // x22
  System_String_o *v150; // x20
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  struct EquipGraphListViewItem_o *v154; // x8
  __int64 v155; // x21
  const MethodInfo *v156; // x3
  __int64 v157; // x23
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  const MethodInfo *v161; // x3
  __int64 v162; // x23
  int32_t WearerSvtRarity_k__BackingField; // w23
  const MethodInfo *v164; // x3
  __int64 v165; // x23
  const MethodInfo *v166; // x3
  struct System_String_o *WearerServantClassName_k__BackingField; // x23
  const MethodInfo *v168; // x3
  struct System_String_o *WearerServantName_k__BackingField; // x22
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  const MethodInfo *v173; // x3
  __int64 v174; // x22
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  const MethodInfo *v178; // x3
  __int64 v179; // x22
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  const MethodInfo *v181; // x3
  __int64 v182; // x22
  const MethodInfo *v183; // x3
  __int64 v184; // x22
  const MethodInfo *v185; // x3
  __int64 v186; // x22
  System_String_o *v187; // x20
  Il2CppObject *v188; // x21
  System_String_o *v189; // x22
  System_String_o *v190; // x23
  System_String_o *v191; // x24
  CommonConfirmDialog_ClickDelegate_o *v192; // x25
  System_Func_object__bool__o *v193; // x21
  Il2CppObject *v194; // x22
  System_String_o *v195; // x20
  System_Object_array *v196; // x21
  const MethodInfo *v197; // x3
  __int64 v198; // x23
  const MethodInfo *v199; // x3
  Il2CppClass *v200; // x23
  const MethodInfo *v201; // x3
  __int64 v202; // x23
  const MethodInfo *v203; // x3
  Il2CppClass *v204; // x23
  struct EquipGraphServantItem_o *v205; // x8
  int32_t v206; // w23
  const MethodInfo *v207; // x3
  __int64 v208; // x23
  const MethodInfo *v209; // x3
  __int64 v210; // x22
  System_String_o *v211; // x20
  Il2CppObject *v212; // x21
  System_String_o *v213; // x22
  CommonConfirmDialog_ClickDelegate_o *v214; // x23
  struct UserServantEntity_o *userServantEntity; // x25
  int32_t v216; // w23
  System_String_o *v217; // x20
  System_Object_array *v218; // x21
  __int64 v219; // x2
  __int64 v220; // x3
  __int64 v221; // x4
  const MethodInfo *v222; // x3
  Il2CppObject *v223; // x24
  __int64 v224; // x2
  __int64 v225; // x3
  __int64 v226; // x4
  const MethodInfo *v227; // x3
  Il2CppObject *v228; // x24
  const MethodInfo *v229; // x3
  Il2CppObject *v230; // x23
  const MethodInfo *v231; // x3
  Il2CppObject *v232; // x23
  __int64 v233; // x23
  __int64 v234; // x24
  int32_t v235; // w0
  const MethodInfo *v236; // x3
  Il2CppObject *v237; // x22
  System_String_o *v238; // x20
  Il2CppObject *v239; // x21
  System_String_o *v240; // x22
  System_String_o *v241; // x23
  System_String_o *v242; // x24
  CommonConfirmDialog_ClickDelegate_o *v243; // x25
  __int64 v244; // x0
  struct PartyListViewItem_array *v245; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v246; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v247; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v248; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v249; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v253; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v255; // 0:x0.16

  if ( (byte_4B4408D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo, item);
    sub_1BDB878(&BalanceConfig_TypeInfo, v7);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1BDB878(&NotificationDialog_ClickDelegate_TypeInfo, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_1BDB878(&EquipGraphListViewItem_TypeInfo, v14);
    sub_1BDB878(&Method_EquipGraphListViewManager_EndSelectConfirm__, v15);
    sub_1BDB878(&Method_EquipGraphListViewManager_SelectEquip__, v16);
    sub_1BDB878(&Method_EquipGraphListViewManager__SelectEquip_b__82_0__, v17);
    sub_1BDB878(&Method_EquipGraphListViewManager__SelectEquip_b__82_1__, v18);
    sub_1BDB878(&Method_EquipGraphListViewManager__SelectEquip_b__82_2__, v19);
    sub_1BDB878(&Method_EquipGraphListViewManager__SelectEquip_b__82_3__, v20);
    sub_1BDB878(&EquipGraphListViewObject_TypeInfo, v21);
    sub_1BDB878(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo, v22);
    sub_1BDB878(&int_TypeInfo, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__, v27);
    sub_1BDB878(&LocalizationManager_TypeInfo, v28);
    sub_1BDB878(&object___TypeInfo, v29);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v30);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1BDB878(&Rarity_TypeInfo, v33);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v34);
    sub_1BDB878(&string_TypeInfo, v35);
    sub_1BDB878(&StringLiteral_15483/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v36);
    sub_1BDB878(&StringLiteral_15484/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v37);
    sub_1BDB878(&StringLiteral_15480/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v38);
    sub_1BDB878(&StringLiteral_5528/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v39);
    sub_1BDB878(&StringLiteral_5526/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v40);
    sub_1BDB878(&StringLiteral_15476/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v41);
    sub_1BDB878(&StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, v42);
    sub_1BDB878(&StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, v43);
    sub_1BDB878(&StringLiteral_5527/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, v44);
    sub_1BDB878(&StringLiteral_15475/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v45);
    byte_4B4408D = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v252, 0, sizeof(v252));
  this->fields.selectItem = item;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectItem, (int32_t)item, (int32_t)callback, method);
  p_selectItemCallbackFunc = (CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, (int32_t)callback, v48, v49);
  selectItem = (__int64)this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_262;
  if ( *(_BYTE *)(selectItem + 232) )
    v52 = *(unsigned __int8 *)(selectItem + 233) ^ 1;
  else
    v52 = 0;
  v53 = *(EquipGraphListViewObject_o **)(selectItem + 104);
  *(_BYTE *)(selectItem + 233) = 1;
  if ( v53
    && (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v53->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EquipGraphListViewObject_c *)v53->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewObject_TypeInfo )
      v55 = v53;
    else
      v55 = 0LL;
  }
  else
  {
    v55 = 0LL;
  }
  if ( *(_BYTE *)(selectItem + 145) )
  {
    v56 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_SelectEquip__);
    v57 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v56, v56[4]);
    OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0LL);
    if ( !this->fields.isWaveBattle )
      goto LABEL_21;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_262;
    v60 = this->fields.partyNumber - 1;
    if ( v60 < waveDeckItemList->max_length )
    {
      selectItem = (__int64)waveDeckItemList->m_Items[v60];
      if ( !selectItem )
        goto LABEL_262;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)selectItem, this->fields.memberIndex, 0LL, 0, 0LL);
LABEL_21:
      selectItem = (__int64)*p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_262;
      *(_BYTE *)(selectItem + 145) = 0;
      selectItem = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v50);
      v61 = *p_selectItem;
      if ( v52 || (selectItem & 1) == 0 )
      {
        if ( !v61 )
          goto LABEL_262;
        if ( v61->fields._OrganizedWave_k__BackingField <= 0 && !v61->fields._IsUnique_k__BackingField )
        {
LABEL_51:
          selectItem = (__int64)this->fields.servantItemInfo;
          if ( selectItem )
          {
            EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)selectItem, 0LL, 0LL);
            selectItem = (__int64)this->fields.servantItemDraw;
            if ( selectItem )
            {
              EquipGraphServantItemDraw__SetItem(
                (EquipGraphServantItemDraw_o *)selectItem,
                this->fields.servantItemInfo,
                this->fields.addBaseHp,
                this->fields.addBaseAtk,
                0LL);
              selectItem = (__int64)this->fields.bondSkillChangeMessageLabel;
              if ( selectItem )
              {
                v76 = 0;
                goto LABEL_55;
              }
            }
          }
          goto LABEL_262;
        }
      }
      else if ( !v61 )
      {
        goto LABEL_262;
      }
      wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v61->fields.wearerMemberInfoList;
      v74 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
      System_Action_object____ctor(
        v74,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__82_0__,
        0LL);
      if ( !wearerMemberInfoList )
        goto LABEL_262;
      System_Collections_Generic_List_object___ForEach(
        wearerMemberInfoList,
        (System_Action_T__o *)v74,
        (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v55 )
        goto LABEL_262;
      EquipGraphListViewObject__Init_40145504(v55, 4, 0, v75);
      goto LABEL_51;
    }
LABEL_264:
    sub_1BDBADC(selectItem, v50, v58);
  }
  if ( *(int *)(selectItem + 208) >= 1 )
  {
    if ( !item )
      goto LABEL_262;
    v62 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v62 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_SelectEquip__);
    v64 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v62, v62[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0LL);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_262;
      selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0LL);
      if ( (selectItem & 1) != 0 )
      {
        v65 = this->fields.waveDeckItemList;
        if ( !v65 )
          goto LABEL_262;
        v66 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v66 >= v65->max_length )
          goto LABEL_264;
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_262;
        v67 = v65->m_Items[v66];
        selectItem = (__int64)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v50);
        if ( !selectItem )
          goto LABEL_262;
        if ( !v67 )
          goto LABEL_262;
        selectItem = (__int64)PartyListViewItem__GetMember(v67, *(_DWORD *)(selectItem + 16), 0LL);
        if ( !selectItem )
          goto LABEL_262;
        cost = v67->fields.cost;
        selectItem = PartyOrganizationListViewItem__get_EquipCost((PartyOrganizationListViewItem_o *)selectItem, 0LL);
        if ( !this->fields.servantItemInfo )
          goto LABEL_262;
        if ( cost - (int)selectItem + EquipGraphServantItem__get_EquipCost(this->fields.servantItemInfo, 0LL) > v67->fields.maxCost )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_15476/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_15475/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v72 = (NotificationDialog_ClickDelegate_o *)sub_1BDBAC4(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v72,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__82_1__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_30835896(
              (CommonUI_o *)Instance,
              v70,
              v71,
              v72,
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
          goto LABEL_262;
        }
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_262;
        WearerMemberInfo = EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v50);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v150 = LocalizationManager__Get((System_String_o *)StringLiteral_15483/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        selectItem = sub_1BDB920(object___TypeInfo, 10LL);
        v154 = *p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_262;
        v155 = selectItem;
        LODWORD(v248.fields.currentCryptoKey) = v154->fields._OrganizedWave_k__BackingField;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v248, v151, v152, v153);
        if ( !v155 )
          goto LABEL_262;
        v157 = selectItem;
        if ( !selectItem || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v155 + 24) )
            goto LABEL_264;
          *(_QWORD *)(v155 + 32) = v157;
          sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 32), v157, (int32_t)v58, v156);
          maxWave = this->fields.maxWave;
          selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v158, v159, v160);
          v162 = selectItem;
          if ( !selectItem || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v155 + 24) <= 1u )
              goto LABEL_264;
            *(_QWORD *)(v155 + 40) = v162;
            sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 40), v162, (int32_t)v58, v161);
            if ( !WearerMemberInfo )
              goto LABEL_262;
            WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            selectItem = (__int64)Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0LL);
            v165 = selectItem;
            if ( !selectItem || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v155 + 24) <= 2u )
                goto LABEL_264;
              *(_QWORD *)(v155 + 48) = v165;
              sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 48), v165, (int32_t)v58, v164);
              WearerServantClassName_k__BackingField = WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !WearerServantClassName_k__BackingField
                || (selectItem = sub_1BDB9B4(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v155 + 24) <= 3u )
                  goto LABEL_264;
                *(_QWORD *)(v155 + 56) = WearerServantClassName_k__BackingField;
                sub_1BDB81C(
                  (CGThumbnailListItem_o *)(v155 + 56),
                  (int32_t)WearerServantClassName_k__BackingField,
                  (int32_t)v58,
                  v166);
                WearerServantName_k__BackingField = WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !WearerServantName_k__BackingField
                  || (selectItem = sub_1BDB9B4(WearerServantName_k__BackingField, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v155 + 24) <= 4u )
                    goto LABEL_264;
                  *(_QWORD *)(v155 + 64) = WearerServantName_k__BackingField;
                  sub_1BDB81C(
                    (CGThumbnailListItem_o *)(v155 + 64),
                    (int32_t)WearerServantName_k__BackingField,
                    (int32_t)v58,
                    v168);
                  partyNumber = this->fields.partyNumber;
                  selectItem = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v170, v171, v172);
                  v174 = selectItem;
                  if ( !selectItem || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v155 + 24) <= 5u )
                      goto LABEL_264;
                    *(_QWORD *)(v155 + 72) = v174;
                    sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 72), v174, (int32_t)v58, v173);
                    v249 = this->fields.maxWave;
                    selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v249, v175, v176, v177);
                    v179 = selectItem;
                    if ( !selectItem || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v155 + 24) <= 6u )
                        goto LABEL_264;
                      *(_QWORD *)(v155 + 80) = v179;
                      sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 80), v179, (int32_t)v58, v178);
                      servantItemInfo = this->fields.servantItemInfo;
                      if ( !servantItemInfo )
                        goto LABEL_262;
                      selectItem = (__int64)Rarity__getRarityType(servantItemInfo->fields.rarityId, 0LL);
                      v182 = selectItem;
                      if ( !selectItem
                        || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v155 + 24) <= 7u )
                          goto LABEL_264;
                        *(_QWORD *)(v155 + 88) = v182;
                        sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 88), v182, (int32_t)v58, v181);
                        selectItem = (__int64)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_262;
                        selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0LL);
                        v184 = selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v155 + 24) <= 8u )
                            goto LABEL_264;
                          *(_QWORD *)(v155 + 96) = v184;
                          sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 96), v184, (int32_t)v58, v183);
                          selectItem = (__int64)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_262;
                          selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0LL);
                          v186 = selectItem;
                          if ( !selectItem
                            || (selectItem = sub_1BDB9B4(selectItem, *(_QWORD *)(*(_QWORD *)v155 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v155 + 24) <= 9u )
                              goto LABEL_264;
                            *(_QWORD *)(v155 + 104) = v186;
                            sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 104), v186, (int32_t)v58, v185);
                            v187 = System_String__Format_62613688(v150, (System_Object_array *)v155, 0LL);
                            v188 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v189 = LocalizationManager__Get((System_String_o *)StringLiteral_15484/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                            v190 = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v191 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v192 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v192,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( !v188 )
                              goto LABEL_262;
                            CommonUI__OpenConfirmDialog_30833632(
                              (CommonUI_o *)v188,
                              v189,
                              v187,
                              v190,
                              v191,
                              v192,
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
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_267:
        v244 = sub_1BDBAF8(selectItem);
        sub_1BDB9A0(v244, 0LL);
      }
LABEL_120:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v58);
      return;
    }
    goto LABEL_62;
  }
  if ( !*(_BYTE *)(selectItem + 220) )
  {
    IsUse = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v50);
    v86 = Method_EquipGraphListViewManager_SelectEquip__;
    v87 = IsUse;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v86 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_SelectEquip__);
    v88 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v86, v86[4]);
    OverwriteAssetSoundName__PlaySystemSe(v88, 0, 0, 0LL);
    if ( !v87 )
    {
      if ( this->fields.isWaveBattle )
      {
        v121 = this->fields.waveDeckItemList;
        if ( !v121 )
          goto LABEL_262;
        v122 = this->fields.partyNumber - 1;
        if ( v122 >= v121->max_length )
          goto LABEL_264;
        v123 = this->fields.selectItem;
        if ( !v123 )
          goto LABEL_262;
        userSvtEntity = v123->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_262;
        memberIndex = this->fields.memberIndex;
        v126 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v127 = v121->m_Items[v122];
        *(_OWORD *)&v248.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v248.fields.fakeValue = v126;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v247 = v248;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v247, 0LL);
        if ( !v127 )
          goto LABEL_262;
        PartyListViewItem__SetEquip(v127, memberIndex, selectItem, 0, 0LL);
      }
      selectItem = (__int64)this->fields.itemList;
      if ( selectItem )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v248,
          (System_Collections_Generic_List_object__o *)selectItem,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v252 = *(System_Collections_Generic_List_Enumerator_object__o *)&v248.fields.currentCryptoKey;
        while ( 1 )
        {
          v128 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v252,
                   (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v128 )
            break;
          current = v252.fields._current;
          if ( !v252.fields._current
            || (v131 = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v252.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v131)
            || (EquipGraphListViewItem_c *)v252.fields._current->klass->_2.typeHierarchy[v131 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            sub_1BDBAD4(v128, v129);
          }
          if ( BYTE1(v252.fields._current[9].klass) )
          {
            monitor_low = LOBYTE(v252.fields._current[14].monitor);
            BYTE1(v252.fields._current[9].klass) = 0;
            v133 = monitor_low ? BYTE1(current[14].monitor) ^ 1 : 0;
            if ( (v134 = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v129), !v133) && v134
              || SLODWORD(current[13].klass) > 0
              || BYTE4(current[13].monitor) )
            {
              klass = (System_Collections_Generic_List_object__o *)current[15].klass;
              v136 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
              System_Action_object____ctor(
                v136,
                (Il2CppObject *)this,
                Method_EquipGraphListViewManager__SelectEquip_b__82_3__,
                0LL);
              if ( !klass )
                sub_1BDBAD4(v137, v138);
              System_Collections_Generic_List_object___ForEach(
                klass,
                (System_Action_T__o *)v136,
                (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
              monitor = (UnityEngine_Object_o *)current[6].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v140 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
              if ( v140 )
              {
                v143 = current[6].monitor;
                if ( !v143
                  || (v144 = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                      *(unsigned __int8 *)(*(_QWORD *)v143 + 304LL) < (unsigned int)v144)
                  || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v143 + 200LL) + 8 * v144 - 8) != EquipGraphListViewObject_TypeInfo )
                {
                  sub_1BDBAD4(v140, v141);
                }
                EquipGraphListViewObject__Init_40145504((EquipGraphListViewObject_o *)current[6].monitor, 4, 0, v142);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v252,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v145 = *p_selectItem;
        if ( *p_selectItem )
        {
          v146 = v145->fields.userSvtEntity;
          v145->fields.isBase = 1;
          if ( v146 )
          {
            v147 = *(_OWORD *)&v146->fields.id.fields.fakeValue;
            v148 = this->fields.servantItemInfo;
            *(_OWORD *)&v248.fields.currentCryptoKey = *(_OWORD *)&v146->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v248.fields.fakeValue = v147;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v246 = v248;
            selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v246, 0LL);
            if ( v148 )
            {
              EquipGraphServantItem__SetEquipTarget(v148, selectItem, 0LL);
              selectItem = (__int64)this->fields.servantItemDraw;
              if ( selectItem )
              {
                EquipGraphServantItemDraw__SetItem(
                  (EquipGraphServantItemDraw_o *)selectItem,
                  this->fields.servantItemInfo,
                  this->fields.addBaseHp,
                  this->fields.addBaseAtk,
                  0LL);
                selectItem = (__int64)this->fields.bondSkillChangeMessageLabel;
                if ( selectItem )
                {
                  v76 = this->fields.equipGraphType == 1;
LABEL_55:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v76, 0LL);
                  EquipGraphListViewManager__RefrashListDisp(this, v77);
                  if ( callback )
                  {
                    p_selectItemCallbackFunc->klass = 0LL;
                    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v78, v79);
                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
                      callback->fields.original_method_info,
                      *(_QWORD *)&callback->fields.extra_arg);
                  }
                  return;
                }
              }
            }
          }
        }
      }
LABEL_262:
      sub_1BDBAD4(selectItem, v50);
    }
    if ( !*p_selectItem )
      goto LABEL_262;
    v89 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
    if ( !v89 )
      goto LABEL_262;
    if ( v89->fields._size == 1 )
    {
      selectItem = (__int64)System_Collections_Generic_List_object___get_Item(
                              v89,
                              0,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
      if ( !selectItem )
        goto LABEL_262;
      v90 = selectItem;
      if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
        goto LABEL_120;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_5526/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
      selectItem = sub_1BDB920(object___TypeInfo, 6LL);
      if ( !this->fields.servantItemInfo )
        goto LABEL_262;
      v92 = (System_Object_array *)selectItem;
      selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0LL);
      if ( !v92 )
        goto LABEL_262;
      v94 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v92->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( !v92->max_length )
        goto LABEL_264;
      v92->m_Items[0] = (Il2CppObject *)v94;
      sub_1BDB81C((CGThumbnailListItem_o *)v92->m_Items, v94, (int32_t)v58, v93);
      v96 = *(Il2CppObject **)(v90 + 32);
      if ( v96 )
      {
        selectItem = sub_1BDB9B4(*(_QWORD *)(v90 + 32), v92->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v92->max_length <= 1 )
        goto LABEL_264;
      v92->m_Items[1] = v96;
      sub_1BDB81C((CGThumbnailListItem_o *)&v92->m_Items[1], (int32_t)v96, (int32_t)v58, v95);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_262;
      selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0LL);
      v98 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v92->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v92->max_length <= 2 )
        goto LABEL_264;
      v92->m_Items[2] = (Il2CppObject *)v98;
      sub_1BDB81C((CGThumbnailListItem_o *)&v92->m_Items[2], v98, (int32_t)v58, v97);
      v100 = *(Il2CppObject **)(v90 + 48);
      if ( v100 )
      {
        selectItem = sub_1BDB9B4(*(_QWORD *)(v90 + 48), v92->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v92->max_length <= 3 )
        goto LABEL_264;
      v92->m_Items[3] = v100;
      sub_1BDB81C((CGThumbnailListItem_o *)&v92->m_Items[3], (int32_t)v100, (int32_t)v58, v99);
      v101 = this->fields.servantItemInfo;
      if ( !v101 )
        goto LABEL_262;
      rarityId = v101->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (__int64)Rarity__getRarityType(rarityId, 0LL);
      v104 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v92->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v92->max_length <= 4 )
        goto LABEL_264;
      v92->m_Items[4] = (Il2CppObject *)v104;
      sub_1BDB81C((CGThumbnailListItem_o *)&v92->m_Items[4], v104, (int32_t)v58, v103);
      selectItem = (__int64)Rarity__getRarityType(*(_DWORD *)(v90 + 60), 0LL);
      v106 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v92->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v92->max_length <= 5 )
        goto LABEL_264;
      v92->m_Items[5] = (Il2CppObject *)v106;
      sub_1BDB81C((CGThumbnailListItem_o *)&v92->m_Items[5], v106, (int32_t)v58, v105);
      v107 = v91;
      v108 = v92;
    }
    else
    {
      v193 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v193,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__82_2__,
        0LL);
      v194 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
               (System_Collections_Generic_IEnumerable_TSource__o *)v89,
               (System_Func_TSource__bool__o *)v193,
               (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v195 = LocalizationManager__Get((System_String_o *)StringLiteral_5527/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0LL);
      selectItem = sub_1BDB920(object___TypeInfo, 6LL);
      if ( !this->fields.servantItemInfo )
        goto LABEL_262;
      v196 = (System_Object_array *)selectItem;
      selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0LL);
      if ( !v196 )
        goto LABEL_262;
      v198 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v196->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( !v196->max_length )
        goto LABEL_264;
      v196->m_Items[0] = (Il2CppObject *)v198;
      sub_1BDB81C((CGThumbnailListItem_o *)v196->m_Items, v198, (int32_t)v58, v197);
      if ( !v194 )
        goto LABEL_262;
      v200 = v194[2].klass;
      if ( v200 )
      {
        selectItem = sub_1BDB9B4(v194[2].klass, v196->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v196->max_length <= 1 )
        goto LABEL_264;
      v196->m_Items[1] = (Il2CppObject *)v200;
      sub_1BDB81C((CGThumbnailListItem_o *)&v196->m_Items[1], (int32_t)v200, (int32_t)v58, v199);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_262;
      selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0LL);
      v202 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v196->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v196->max_length <= 2 )
        goto LABEL_264;
      v196->m_Items[2] = (Il2CppObject *)v202;
      sub_1BDB81C((CGThumbnailListItem_o *)&v196->m_Items[2], v202, (int32_t)v58, v201);
      v204 = v194[3].klass;
      if ( v204 )
      {
        selectItem = sub_1BDB9B4(v194[3].klass, v196->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v196->max_length <= 3 )
        goto LABEL_264;
      v196->m_Items[3] = (Il2CppObject *)v204;
      sub_1BDB81C((CGThumbnailListItem_o *)&v196->m_Items[3], (int32_t)v204, (int32_t)v58, v203);
      v205 = this->fields.servantItemInfo;
      if ( !v205 )
        goto LABEL_262;
      v206 = v205->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (__int64)Rarity__getRarityType(v206, 0LL);
      v208 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v196->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v196->max_length <= 4 )
        goto LABEL_264;
      v196->m_Items[4] = (Il2CppObject *)v208;
      sub_1BDB81C((CGThumbnailListItem_o *)&v196->m_Items[4], v208, (int32_t)v58, v207);
      selectItem = (__int64)Rarity__getRarityType(HIDWORD(v194[3].monitor), 0LL);
      v210 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1BDB9B4(selectItem, v196->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_267;
      }
      if ( v196->max_length <= 5 )
        goto LABEL_264;
      v196->m_Items[5] = (Il2CppObject *)v210;
      sub_1BDB81C((CGThumbnailListItem_o *)&v196->m_Items[5], v210, (int32_t)v58, v209);
      v107 = v195;
      v108 = v196;
    }
    v211 = System_String__Format_62613688(v107, v108, 0LL);
    v212 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v213 = LocalizationManager__Get((System_String_o *)StringLiteral_5528/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
    v214 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v214,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectConfirm__,
      0LL);
    selectItem = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v212 )
    {
      CommonUI__OpenConfirmDialog(
        (CommonUI_o *)v212,
        v213,
        v211,
        v214,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        0,
        0,
        0LL);
      return;
    }
    goto LABEL_262;
  }
  if ( !item )
    goto LABEL_262;
  v80 = Method_EquipGraphListViewManager_SelectEquip__;
  v81 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v80 = (_QWORD *)sub_1BDB890(Method_EquipGraphListViewManager_SelectEquip__);
  v64 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v80, v80[4]);
  if ( v81 )
  {
LABEL_62:
    OverwriteAssetSoundName__PlaySystemSe(v64, 2, 0, 0LL);
    v84 = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_1BDB81C(p_selectItemCallbackFunc, 0, v82, v83);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))v84->_1.namespaze)(
        v84->_1.element_class,
        *(_QWORD *)&v84->_1.byval_arg.bits);
    }
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0LL);
  selectItem = (__int64)this->fields.servantItemInfo;
  if ( !selectItem )
    goto LABEL_262;
  selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0LL);
  if ( (selectItem & 1) == 0 )
    goto LABEL_120;
  v109 = this->fields.waveDeckItemList;
  if ( !v109 )
    goto LABEL_262;
  v110 = *(_QWORD *)&v109->max_length;
  if ( (int)v110 < 1 )
    return;
  v111 = 0LL;
  v112 = 1;
  v245 = this->fields.waveDeckItemList;
  while ( 1 )
  {
    if ( v111 >= (unsigned int)v110 )
      goto LABEL_264;
    v113 = v109->m_Items[v111];
    v114 = 0;
    do
    {
      selectItem = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        selectItem = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v114 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
        goto LABEL_118;
      if ( !v113 )
        goto LABEL_262;
      selectItem = (__int64)PartyListViewItem__GetMember(v113, v114, 0LL);
      if ( !*p_selectItem )
        goto LABEL_262;
      servantEntity = (*p_selectItem)->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_262;
      v116 = (PartyOrganizationListViewItem_o *)selectItem;
      v118 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v117 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v253.fields.currentCryptoKey = v118;
      *(_QWORD *)&v253.fields.fakeValue = v117;
      selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v253, 0LL);
      if ( !v116 )
        goto LABEL_262;
      v119 = selectItem;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v116, 0LL);
      selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(EquipSvtId, 0LL);
      ++v114;
    }
    while ( v119 != (_DWORD)selectItem );
    v120 = v116->fields.servantEntity;
    if ( v120 )
      break;
LABEL_118:
    v109 = v245;
    ++v111;
    ++v112;
    LODWORD(v110) = v245->max_length;
    if ( (__int64)v111 >= (int)v110 )
      return;
  }
  userServantEntity = v116->fields.userServantEntity;
  if ( !userServantEntity )
    return;
  v216 = v116->fields.rarityId;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v217 = LocalizationManager__Get((System_String_o *)StringLiteral_15480/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
  v218 = (System_Object_array *)sub_1BDB920(object___TypeInfo, 5LL);
  LODWORD(v248.fields.currentCryptoKey) = v112;
  selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v248, v219, v220, v221);
  if ( !v218 )
    goto LABEL_262;
  v223 = (Il2CppObject *)selectItem;
  if ( selectItem )
  {
    selectItem = sub_1BDB9B4(selectItem, v218->obj.klass->_1.element_class);
    if ( !selectItem )
      goto LABEL_267;
  }
  if ( !v218->max_length )
    goto LABEL_264;
  v218->m_Items[0] = v223;
  sub_1BDB81C((CGThumbnailListItem_o *)v218->m_Items, (int32_t)v223, (int32_t)v58, v222);
  maxWave = this->fields.maxWave;
  selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v224, v225, v226);
  v228 = (Il2CppObject *)selectItem;
  if ( selectItem )
  {
    selectItem = sub_1BDB9B4(selectItem, v218->obj.klass->_1.element_class);
    if ( !selectItem )
      goto LABEL_267;
  }
  if ( v218->max_length <= 1 )
    goto LABEL_264;
  v218->m_Items[1] = v228;
  sub_1BDB81C((CGThumbnailListItem_o *)&v218->m_Items[1], (int32_t)v228, (int32_t)v58, v227);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  selectItem = (__int64)Rarity__getRarityType(v216, 0LL);
  v230 = (Il2CppObject *)selectItem;
  if ( selectItem )
  {
    selectItem = sub_1BDB9B4(selectItem, v218->obj.klass->_1.element_class);
    if ( !selectItem )
      goto LABEL_267;
  }
  if ( v218->max_length <= 2 )
    goto LABEL_264;
  v218->m_Items[2] = v230;
  sub_1BDB81C((CGThumbnailListItem_o *)&v218->m_Items[2], (int32_t)v230, (int32_t)v58, v229);
  selectItem = (__int64)ServantEntity__getClassName(v120, 0LL);
  v232 = (Il2CppObject *)selectItem;
  if ( selectItem )
  {
    selectItem = sub_1BDB9B4(selectItem, v218->obj.klass->_1.element_class);
    if ( !selectItem )
      goto LABEL_267;
  }
  if ( v218->max_length <= 3 )
    goto LABEL_264;
  v218->m_Items[3] = v232;
  sub_1BDB81C((CGThumbnailListItem_o *)&v218->m_Items[3], (int32_t)v232, (int32_t)v58, v231);
  v234 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v233 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v255.fields.currentCryptoKey = v234;
  *(_QWORD *)&v255.fields.fakeValue = v233;
  v235 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v255, 0LL);
  selectItem = (__int64)ServantEntity__getName(v120, v235, -1, 0, 0LL);
  v237 = (Il2CppObject *)selectItem;
  if ( selectItem )
  {
    selectItem = sub_1BDB9B4(selectItem, v218->obj.klass->_1.element_class);
    if ( !selectItem )
      goto LABEL_267;
  }
  if ( v218->max_length <= 4 )
    goto LABEL_264;
  v218->m_Items[4] = v237;
  sub_1BDB81C((CGThumbnailListItem_o *)&v218->m_Items[4], (int32_t)v237, (int32_t)v58, v236);
  v238 = System_String__Format_62613688(v217, v218, 0LL);
  v239 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v240 = LocalizationManager__Get((System_String_o *)StringLiteral_5528/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
  v241 = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, 0LL);
  v242 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, 0LL);
  v243 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v243,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager_EndSelectConfirm__,
    0LL);
  if ( !v239 )
    goto LABEL_262;
  CommonUI__OpenConfirmDialog_30833632(
    (CommonUI_o *)v239,
    v240,
    v238,
    v241,
    v242,
    v243,
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
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4B44091 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17500/*"btn_filter_on"*/, method);
    sub_1BDB878(&StringLiteral_17499/*"btn_filter"*/, v3);
    byte_4B44091 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BDBAD4(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17499/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17500/*"btn_filter_on"*/;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_40111656(this, mode, v6);
}


void __fastcall EquipGraphListViewManager__SetMode_40111656(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, 0LL);
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
    sub_1BDBAD4(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_40145644(this, mode + 1, v7);
}


void __fastcall EquipGraphListViewManager__SetMode_40145592(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  EquipGraphListViewManager__SetMode_40111656(this, mode, v6);
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
  if ( (byte_4B44087 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1BDB878(&EquipGraphListViewObject_TypeInfo, obj);
    byte_4B44087 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EquipGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_40145504((EquipGraphListViewObject_o *)obj, v7, 0, method);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t equipGraphType; // w21
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v24; // x20
  float v25; // s0
  float v26; // s3
  float v27; // s1
  float v28; // s2

  if ( (byte_4B44096 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17536/*"btn_sort_up"*/, v3);
    sub_1BDB878(&StringLiteral_17631/*"btn_txt_up"*/, v4);
    sub_1BDB878(&StringLiteral_17584/*"btn_txt_new"*/, v5);
    sub_1BDB878(&StringLiteral_17574/*"btn_txt_down"*/, v6);
    sub_1BDB878(&StringLiteral_17591/*"btn_txt_old"*/, v7);
    sub_1BDB878(&StringLiteral_17533/*"btn_sort_down"*/, v8);
    byte_4B44096 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_47;
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
      goto LABEL_47;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v18 = (System_String_o **)&StringLiteral_17533/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17536/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17631/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v18 = (System_String_o **)&StringLiteral_17536/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17533/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  equipGraphType = this->fields.equipGraphType;
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v24 = this->fields.bonusFilterKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                               sort,
                               this->fields.alignedBonusFilterInfos,
                               this->fields.isQuestStart,
                               0LL);
    if ( !v24 )
      goto LABEL_47;
    UILabel__set_text(v24, (System_String_o *)sort, 0LL);
    sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
    v25 = 1.0;
    if ( equipGraphType == 1 )
      v25 = 0.5;
    if ( !sort )
      goto LABEL_47;
    v26 = 1.0;
    v27 = v25;
    v28 = v25;
    UIWidget__set_color((UIWidget_o *)sort, *(UnityEngine_Color_o *)&v25, 0LL);
  }
  if ( equipGraphType == 1 )
  {
    sort = (ListViewSort_o *)this->fields.filterButton;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))sort->klass[1]._1.implementedInterfaces)(
        sort,
        3LL,
        1LL,
        sort->klass[1]._1.interfaceOffsets);
      sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
      if ( sort )
      {
        ((void (__fastcall *)(ListViewSort_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))sort->klass[1]._1.implementedInterfaces)(
          sort,
          3LL,
          1LL,
          sort->klass[1]._1.interfaceOffsets);
        return;
      }
    }
LABEL_47:
    sub_1BDBAD4(sort, v10);
  }
}


void __fastcall EquipGraphListViewManager___EndSelectConfirm_b__83_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool __fastcall EquipGraphListViewManager___EndSelectConfirm_b__83_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void __fastcall EquipGraphListViewManager___EndSelectConfirm_b__83_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void __fastcall EquipGraphListViewManager___SelectEquip_b__82_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager___SelectEquip_b__82_1(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4B4409A & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B4409A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))selectItemCallbackFunc->fields.m_target)(
      selectItemCallbackFunc->fields.original_method_info,
      *(_QWORD *)&selectItemCallbackFunc->fields.extra_arg);
  }
}


bool __fastcall EquipGraphListViewManager___SelectEquip_b__82_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void __fastcall EquipGraphListViewManager___SelectEquip_b__82_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
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

  if ( (byte_4B44076 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B44076 = 1;
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
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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

  if ( (byte_4B44078 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B44078 = 1;
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
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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

  if ( (byte_4B4407A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B4407A = 1;
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
    v8 = sub_1C15B34(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B4407F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B4407F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BDBAD4(0LL, v18);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BDBAD4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42750172((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BDBAD4(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BDBAD4(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BDBAD4(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BDBAD4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B4407E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B4407E = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BDBAD4(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BDBAD4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B44077 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B44077 = 1;
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
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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

  if ( (byte_4B44079 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B44079 = 1;
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
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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

  if ( (byte_4B4407B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B4407B = 1;
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
    v8 = sub_1C15B34(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A25458;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A25400;
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
  if ( (byte_4B4409B & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4B4409B = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EquipGraphListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v14, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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


void __fastcall EquipGraphListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4409C & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager___c_TypeInfo, v1);
    byte_4B4409C = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EquipGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EquipGraphListViewManager___c___ctor(EquipGraphListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EquipGraphListViewManager___c___CreateList_b__61_2(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BDBAD4(this, 0LL);
  return y->fields.atk;
}


int32_t __fastcall EquipGraphListViewManager___c___CreateList_b__61_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BDBAD4(this, 0LL);
  return y->fields.hp;
}


void __fastcall EquipGraphListViewManager___c__DisplayClass61_0___ctor(
        EquipGraphListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipGraphListViewManager___c__DisplayClass61_0___CreateList_b__0(
        EquipGraphListViewManager___c__DisplayClass61_0_o *this,
        EquipGraphListViewItem_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager___c__DisplayClass61_0_o *v5; // x20
  struct EquipGraphListViewManager_o *_4__this; // x8
  struct System_Int64_array *equipList; // x8
  _QWORD *v8; // x9
  __int64 type; // x10
  Il2CppClass **v10; // x8

  v5 = this;
  if ( (byte_4B4409F & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)sub_1BDB878(
                                                                  &Method_System_Collections_Generic_List_ListViewItem__Add__,
                                                                  x);
    byte_4B4409F = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)_4__this->fields.itemList) == 0LL
    || (equipList = this->fields.equipList,
        v8 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++*(&this->fields.type + 1),
        !equipList) )
  {
    sub_1BDBAD4(this, x);
  }
  type = this->fields.type;
  if ( (unsigned int)type >= equipList->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)x,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &equipList->obj.klass + type;
    this->fields.type = type + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


bool __fastcall EquipGraphListViewManager___c__DisplayClass61_0___CreateList_b__1(
        EquipGraphListViewManager___c__DisplayClass61_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass61_0_o *v4; // x19
  __int128 v5; // q1
  __int64 v6; // x2
  struct System_Int64_array *equipList; // x8
  __int64 type; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B4409D & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)sub_1BDB878(
                                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                  x);
    byte_4B4409D = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                &v10,
                                                                0LL);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_1BDBAD4(this, x);
  type = v4->fields.type;
  if ( (unsigned int)type >= equipList->max_length )
    sub_1BDBADC(this, x, v6);
  return this != (EquipGraphListViewManager___c__DisplayClass61_0_o *)equipList->m_Items[type];
}


bool __fastcall EquipGraphListViewManager___c__DisplayClass61_0___CreateList_b__4(
        EquipGraphListViewManager___c__DisplayClass61_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass61_0_o *v4; // x19
  __int128 v5; // q1
  struct EquipGraphListViewManager_o *_4__this; // x8
  EquipGraphListViewManager___c__DisplayClass61_0_o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B4409E & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)sub_1BDB878(
                                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                  x);
    byte_4B4409E = 1;
  }
  if ( !x )
    goto LABEL_12;
  if ( UserServantEntity__IsFriendShipSvtEquip(x, 0LL) )
  {
    v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v10.fields.fakeValue = v5;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v9 = v10;
    this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                  &v9,
                                                                  0LL);
    _4__this = v4->fields.__4__this;
    if ( _4__this )
    {
      v7 = this;
      this = (EquipGraphListViewManager___c__DisplayClass61_0_o *)_4__this->fields.servantItemInfo;
      if ( this )
        return v7 == (EquipGraphListViewManager___c__DisplayClass61_0_o *)EquipGraphServantItem__get_EquipUserSvtId(
                                                                            (EquipGraphServantItem_o *)this,
                                                                            0LL);
    }
LABEL_12:
    sub_1BDBAD4(this, x);
  }
  return 1;
}


void __fastcall EquipGraphListViewManager___c__DisplayClass61_1___ctor(
        EquipGraphListViewManager___c__DisplayClass61_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EquipGraphListViewManager___c__DisplayClass61_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass61_1_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass61_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x21
  ServantSkillMaster_o *svtSkillMaster; // x22
  __int64 v11; // x20
  __int64 v12; // x23
  System_Int32_array *ActIndividuality; // x0
  System_Func_int__bool__o *_9__6; // x22
  System_Int32_array *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4B440A0 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, x);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (EquipGraphListViewManager___c__DisplayClass61_1_o *)sub_1BDB878(
                                                                  &Method_EquipGraphListViewManager___c__DisplayClass61_1__CreateList_b__6__,
                                                                  v8);
    byte_4B440A0 = 1;
  }
  if ( !x )
    goto LABEL_15;
  if ( !UserServantEntity__IsFriendShipSvtEquip(x, 0LL) )
    return 0;
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.skillMaster;
  svtSkillMaster = v4->fields.svtSkillMaster;
  v12 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  this = (EquipGraphListViewManager___c__DisplayClass61_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                v19,
                                                                0LL);
  if ( !svtSkillMaster
    || (this = (EquipGraphListViewManager___c__DisplayClass61_1_o *)ServantSkillMaster__GetEntity(
                                                                      svtSkillMaster,
                                                                      (int32_t)this,
                                                                      1,
                                                                      1,
                                                                      0LL)) == 0LL
    || !skillMaster
    || (this = (EquipGraphListViewManager___c__DisplayClass61_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                      skillMaster,
                                                                      HIDWORD(this->fields.svtSkillMaster),
                                                                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_1BDBAD4(this, x);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0LL);
  _9__6 = v4->fields.__9__6;
  v15 = ActIndividuality;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass61_1__CreateList_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__6, (int32_t)_9__6, v16, v17);
  }
  return BasicHelper__Any_int__50449276(
           v15,
           (System_Func_T__bool__o *)_9__6,
           (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipGraphListViewManager___c__DisplayClass61_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass61_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_4B440A1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&y);
    byte_4B440A1 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipGraphListViewManager___c__DisplayClass61_1___CreateList_b__7(
        EquipGraphListViewManager___c__DisplayClass61_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4B440A2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_4B440A2 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1BDBAD4(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_358C094 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}