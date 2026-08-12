void EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewSort_o *v8; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ListViewSort_o *v16; // x19
  struct EquipGraphListViewManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  ListViewSort_o *v24; // x19
  struct EquipGraphListViewManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596FC82 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_11906/*"RewardUpEquipGraph"*/);
    sub_2213A60(&StringLiteral_6369/*"EquipGraph"*/);
    sub_2213A60(&StringLiteral_3322/*"BondEquipGraph"*/);
    sub_2213A60(&StringLiteral_16194/*"WarBoardEquipGraph"*/);
    byte_596FC82 = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_6369/*"EquipGraph"*/, 3, 0, 0);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v8, (System_String_o *)StringLiteral_3322/*"BondEquipGraph"*/, 3, 0, 0);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->bondSortStatus,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v16, (System_String_o *)StringLiteral_11906/*"RewardUpEquipGraph"*/, 3, 0, 0);
  v17 = EquipGraphListViewManager_TypeInfo->static_fields;
  v17->rewardUpSortStatus = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->rewardUpSortStatus, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v24, (System_String_o *)StringLiteral_16194/*"WarBoardEquipGraph"*/, 3, 0, 0);
  v25 = EquipGraphListViewManager_TypeInfo->static_fields;
  v25->warBoardSortStatus = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->warBoardSortStatus, (int32_t)v24, v26, v27, v28, v29, v30, v31);
}


void EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  *((_DWORD *)p_seed + 87) = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  EquipGraphListViewManager__ModifyList(this, 1, v14);
  EquipGraphListViewManager__SetMode_47936760(this, 2, v15);
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
  __int64 v13; // x23
  __int64 sort; // x0
  int64_t v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  EquipGraphListViewManager_c *v35; // x0
  int32_t v36; // w9
  int v37; // w8
  struct ListViewSort_o **p_rewardUpSortStatus; // x8
  struct ListViewSort_o *v39; // x1
  struct ListViewSort_o **p_sort; // x25
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t menuKind; // w8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct ListViewSort_o *v55; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct ListViewSort_o *v66; // x20
  bool v67; // w8
  int32_t memberIndex; // w1
  struct PartyOrganizationListViewItem_o *v69; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // x26
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct PartyOrganizationListViewItem_o *baseItem; // x20
  int32_t v78; // w22
  bool IsTempGrandServant_k__BackingField; // w24
  EquipGraphServantItem_o *v80; // x27
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Int64_array *EquipList; // x0
  __int64 *v88; // x22
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  EquipGraphServantItem_o *servantItemInfo; // x20
  __int64 v96; // x8
  __int64 v97; // x9
  __int64 v98; // x20
  System_Collections_Generic_IEnumerable_T__o *v99; // x20
  System_Func_object__bool__o *v100; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x0
  __int64 v102; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x24
  EquipGraphListViewManager___c_c *v104; // x8
  struct EquipGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__66_2; // x20
  Il2CppObject *v107; // x22
  struct EquipGraphListViewManager___c_StaticFields *v108; // x0
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  int32_t v115; // w0
  __int64 v116; // x1
  EquipGraphListViewManager___c_c *v117; // x8
  struct EquipGraphListViewManager___c_StaticFields *v118; // x9
  System_Func_object__int__o *_9__66_3; // x20
  Il2CppObject *v120; // x22
  struct EquipGraphListViewManager___c_StaticFields *v121; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  UserGameEntity_o *SelfUserGame; // x27
  int32_t cost; // w20
  int32_t v130; // w8
  const MethodInfo_47A29F8 *v131; // x0
  __int64 v132; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ServantEquipList; // x24
  UnityEngine_Object_o *infoDataLabel; // x20
  UILabel_o *v135; // x22
  System_String_o *v136; // x20
  Il2CppObject *v137; // x28
  Il2CppObject *v138; // x0
  UnityEngine_GameObject_o *bondSkillChangeMessageLabel; // x20
  System_Collections_Generic_List_object__o *v140; // x25
  __int64 v141; // x21
  int v142; // w8
  void *v143; // x8
  unsigned __int64 v144; // x26
  UserServantEntity_o *v145; // x20
  int64_t v146; // x0
  int32_t v147; // w27
  int64_t v148; // x28
  int32_t v149; // w21
  EquipGraphListViewItem_o *v150; // x22
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  Il2CppClass **v160; // x0
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  Il2CppObject *Master_object; // x0
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v182; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v183; // x0
  System_Collections_Generic_List_object__o *v184; // x24
  int32_t v185; // w26
  UserServantEntity_o *v186; // x22
  int64_t EquipUserSvtId; // x0
  int32_t v188; // w27
  int64_t v189; // x28
  int32_t v190; // w21
  EquipGraphListViewItem_o *v191; // x20
  System_String_o *v192; // x2
  System_String_o *v193; // x3
  int32_t v194; // w4
  int32_t v195; // w5
  bool v196; // w6
  bool v197; // w7
  struct System_Object_array *items; // x8
  _QWORD *v199; // x9
  __int64 size; // x10
  Il2CppClass **v201; // x0
  Il2CppObject *v202; // x20
  ServantSkillMaster_o *v203; // x23
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  int v212; // w8
  System_Collections_Generic_HashSet_int__o *v213; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v214; // x26
  unsigned int v215; // w27
  __int64 v216; // x29
  __int64 v217; // x20
  __int64 v218; // x22
  __int64 v219; // x20
  __int64 v220; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Func_int__bool__o *v222; // x20
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x22
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v230; // x28
  ServantSkillMaster_o *v231; // x24
  int64_t v232; // x0
  int32_t v233; // w21
  int32_t v234; // w23
  int64_t v235; // x26
  EquipGraphListViewItem_o *v236; // x20
  System_String_o *v237; // x2
  System_String_o *v238; // x3
  int32_t v239; // w4
  int32_t v240; // w5
  bool v241; // w6
  bool v242; // w7
  struct System_Object_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  Il2CppClass **v246; // x0
  System_Action_object__o *v247; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v250; // x8
  System_String_o *v251; // x21
  const MethodInfo *v252; // x1
  const MethodInfo *v253; // x1
  const MethodInfo *v254; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_HashSet_int__o *v255; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_IEnumerable_TSource__o *v256; // [xsp+20h] [xbp-A0h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+28h] [xbp-98h]
  __int64 v258; // [xsp+30h] [xbp-90h]
  int32_t index; // [xsp+3Ch] [xbp-84h]
  PartyListViewItem_o *v260; // [xsp+40h] [xbp-80h]
  PartyListViewItem_array *v261; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int monitor; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16

  if ( (byte_596FC69 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EquipGraphListViewItem__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    sub_2213A60(&EquipGraphServantItem_TypeInfo);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EquipGraphListViewManager___c__CreateList_b__66_2__);
    sub_2213A60(&Method_EquipGraphListViewManager___c__CreateList_b__66_3__);
    sub_2213A60(&Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__0__);
    sub_2213A60(&Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__1__);
    sub_2213A60(&EquipGraphListViewManager___c__DisplayClass66_0_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__4__);
    sub_2213A60(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__6__);
    sub_2213A60(&EquipGraphListViewManager___c__DisplayClass66_1_TypeInfo);
    sub_2213A60(&EquipGraphListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596FC69 = 1;
  }
  v13 = sub_2213CCC(EquipGraphListViewManager___c__DisplayClass66_0_TypeInfo);
  EquipGraphListViewManager___c__DisplayClass66_0___ctor((EquipGraphListViewManager___c__DisplayClass66_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_151;
  *(_QWORD *)(v13 + 32) = this;
  *(_DWORD *)(v13 + 24) = type;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.waveDeckItemList,
    (int32_t)baseDeckItemList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v35 = EquipGraphListViewManager_TypeInfo;
  v36 = *(_DWORD *)(v13 + 24);
  v37 = *(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.equipGraphType = v36;
  if ( v36 == 2 )
  {
    if ( !v37 )
    {
      j_il2cpp_runtime_class_init_0(v35, v28);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->rewardUpSortStatus;
  }
  else if ( v36 == 1 )
  {
    if ( !v37 )
    {
      j_il2cpp_runtime_class_init_0(v35, v28);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->bondSortStatus;
  }
  else
  {
    if ( !v37 )
    {
      j_il2cpp_runtime_class_init_0(v35, v28);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->sortStatus;
  }
  v39 = *p_rewardUpSortStatus;
  this->fields.sort = *p_rewardUpSortStatus;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v39, v29, v30, v31, v32, v33, v34);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_151;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  if ( !partyItem )
    goto LABEL_151;
  menuKind = partyItem->fields.menuKind;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  this->fields.isWaveBattle = menuKind == 9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v55 = this->fields.sort;
  if ( !v55 )
    goto LABEL_151;
  iconScaleKind = v55->fields.iconScaleKind;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v66 )
      goto LABEL_151;
    v67 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v66 = this->fields.sort;
    if ( !v66 )
      goto LABEL_151;
    v67 = 0;
  }
  memberIndex = this->fields.memberIndex;
  v66->fields.isBonusKind = v67;
  v69 = PartyListViewItem__GetMember(partyItem, memberIndex, 0);
  p_baseItem = &this->fields.baseItem;
  this->fields.baseItem = v69;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseItem, (int32_t)v69, v71, v72, v73, v74, v75, v76);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_151;
  if ( !baseItem->fields.isFollower )
  {
    v261 = baseDeckItemList;
    v78 = *(_DWORD *)(v13 + 24);
    IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
    v80 = (EquipGraphServantItem_o *)sub_2213CCC(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v80, baseItem, v78, IsTempGrandServant_k__BackingField, 0);
    this->fields.servantItemInfo = v80;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantItemInfo,
      (int32_t)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    sort = (__int64)this->fields.baseItem;
    if ( !sort )
      goto LABEL_151;
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0);
    *(_QWORD *)(v13 + 16) = EquipList;
    v88 = (__int64 *)(v13 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)EquipList, v89, v90, v91, v92, v93, v94);
    sort = (__int64)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_151;
    servantItemInfo = this->fields.servantItemInfo;
    if ( *(_BYTE *)(sort + 394) )
    {
      sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
      v15 = sort;
      if ( !servantItemInfo )
        goto LABEL_151;
    }
    else
    {
      v96 = *v88;
      if ( !*v88 )
        goto LABEL_151;
      v97 = *(int *)(v13 + 24);
      if ( (unsigned int)v97 >= *(_DWORD *)(v96 + 24) )
        goto LABEL_152;
      v15 = *(_QWORD *)(v96 + 8 * v97 + 32);
      if ( !servantItemInfo )
        goto LABEL_151;
    }
    EquipGraphServantItem__SetEquipTarget(servantItemInfo, v15, 0);
    v98 = *v88;
    *(_QWORD *)&this->fields.addBaseAtk = 0;
    if ( !v98 )
      goto LABEL_151;
    sort = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
      sort = (__int64)BalanceConfig_TypeInfo;
    }
    object = (Il2CppObject *)v13;
    if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == *(_DWORD *)(v98 + 24) )
    {
      if ( !*p_baseItem )
        goto LABEL_151;
      v99 = BasicHelper__ExcludeNull_object_(
              (System_Collections_Generic_IEnumerable_T__o *)(*p_baseItem)->fields.equipUserServantEntityList,
              (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
      v100 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v100,
        (Il2CppObject *)v13,
        Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__1__,
        0);
      v101 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v99,
               (System_Func_TSource__bool__o *)v100,
               (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v101,
                                                                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
      v104 = EquipGraphListViewManager___c_TypeInfo;
      if ( !*(&EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo, v102);
        v104 = EquipGraphListViewManager___c_TypeInfo;
      }
      static_fields = v104->static_fields;
      _9__66_2 = (System_Func_object__int__o *)static_fields->__9__66_2;
      if ( !_9__66_2 )
      {
        if ( !*(&v104->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v104, v102);
          static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
        }
        v107 = (Il2CppObject *)static_fields->__9;
        _9__66_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__66_2, v107, Method_EquipGraphListViewManager___c__CreateList_b__66_2__, 0);
        v108 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v108->__9__66_2 = (struct System_Func_UserServantEntity__int__o *)_9__66_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v108->__9__66_2,
          (int32_t)_9__66_2,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114);
      }
      v115 = System_Linq_Enumerable__Sum_object_(
               v103,
               (System_Func_TSource__int__o *)_9__66_2,
               (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
      v117 = EquipGraphListViewManager___c_TypeInfo;
      this->fields.addBaseAtk = v115;
      if ( !*(&v117->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v117, v116);
        v117 = EquipGraphListViewManager___c_TypeInfo;
      }
      v118 = v117->static_fields;
      _9__66_3 = (System_Func_object__int__o *)v118->__9__66_3;
      if ( !_9__66_3 )
      {
        if ( !*(&v117->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v117, v116);
          v118 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        }
        v120 = (Il2CppObject *)v118->__9;
        _9__66_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__66_3, v120, Method_EquipGraphListViewManager___c__CreateList_b__66_3__, 0);
        v121 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v121->__9__66_3 = (struct System_Func_UserServantEntity__int__o *)_9__66_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v121->__9__66_3,
          (int32_t)_9__66_3,
          v122,
          v123,
          v124,
          v125,
          v126,
          v127);
      }
      this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                                 v103,
                                 (System_Func_TSource__int__o *)_9__66_3,
                                 (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
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
    v130 = partyItem->fields.index;
    this->fields.baseCost = cost - sort;
    this->fields.partyNumber = v130 + 1;
    if ( !v261 )
      goto LABEL_151;
    v131 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields.maxWave = v261->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance(v131);
    if ( !sort )
      goto LABEL_151;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_151;
    ServantEquipList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getServantEquipList(
                                                                              (UserServantMaster_o *)sort,
                                                                              0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v132);
    v260 = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v135 = this->fields.infoDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
      if ( !ServantEquipList )
        goto LABEL_151;
      v136 = (System_String_o *)sort;
      monitor = (int)ServantEquipList[1].monitor;
      sort = j_il2cpp_value_box_0(qword_5984348, &monitor);
      if ( !SelfUserGame )
        goto LABEL_151;
      v137 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v138 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtEquipKeep);
      sort = (__int64)System_String__Format_75697880(v136, v137, v138, 0);
      if ( !v135 )
        goto LABEL_151;
      UILabel__set_text(v135, (System_String_o *)sort, 0);
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
      sort = (__int64)this->fields.servantItemInfo;
      if ( !sort )
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
      sub_2213CDC(sort, v15);
    UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v15, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    v140 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v140,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    v141 = sub_2213CCC(EquipGraphListViewManager___c__DisplayClass66_1_TypeInfo);
    EquipGraphListViewManager___c__DisplayClass66_1___ctor((EquipGraphListViewManager___c__DisplayClass66_1_o *)v141, 0);
    v142 = *(_DWORD *)(v13 + 24);
    if ( v142 != 2 )
    {
      if ( v142 == 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
        sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
        if ( !v141 )
          goto LABEL_151;
        *(_QWORD *)(v141 + 24) = sort;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v141 + 24), sort, v161, v162, v163, v164, v165, v166);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v141 + 16) = Master_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v141 + 16),
          (int32_t)Master_object,
          v168,
          v169,
          v170,
          v171,
          v172,
          v173);
        if ( !*p_baseItem )
          goto LABEL_151;
        ServantEntity_k__BackingField = (*p_baseItem)->fields._ServantEntity_k__BackingField;
        if ( !ServantEntity_k__BackingField )
          goto LABEL_151;
        individuality = ServantEntity_k__BackingField->fields.individuality;
        *(_QWORD *)(v141 + 32) = individuality;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v141 + 32),
          (int32_t)individuality,
          v174,
          v175,
          v176,
          v177,
          v178,
          v179);
        v182 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v182,
          (Il2CppObject *)v141,
          Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__4__,
          0);
        v183 = System_Linq_Enumerable__Where_object_(
                 ServantEquipList,
                 (System_Func_TSource__bool__o *)v182,
                 (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        sort = (__int64)System_Linq_Enumerable__ToList_object_(
                          v183,
                          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
        if ( !sort )
          goto LABEL_151;
        v184 = (System_Collections_Generic_List_object__o *)sort;
        if ( *(int *)(sort + 24) >= 1 )
        {
          v185 = 0;
          while ( 1 )
          {
            sort = (__int64)System_Collections_Generic_List_object___get_Item(
                              v184,
                              v185,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !this->fields.servantItemInfo )
              goto LABEL_151;
            v186 = (UserServantEntity_o *)sort;
            EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(this->fields.servantItemInfo, 0);
            v188 = this->fields.memberIndex;
            v189 = EquipUserSvtId;
            v190 = *(_DWORD *)(v13 + 24);
            v191 = (EquipGraphListViewItem_o *)sub_2213CCC(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v191, v185, v186, v189, v261, v260, setupInfo, v188, 0, v190, v254);
            if ( !v140 )
              goto LABEL_151;
            items = v140->fields._items;
            v199 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v140->fields._version;
            if ( !items )
              goto LABEL_151;
            size = v140->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v140,
                (Il2CppObject *)v191,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
            }
            else
            {
              v201 = &items->obj.klass + size;
              v140->fields._size = size + 1;
              v201[4] = (Il2CppClass *)v191;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v201 + 4),
                (int32_t)v191,
                v192,
                v193,
                v194,
                v195,
                v196,
                v197);
            }
            if ( ++v185 >= v184->fields._size )
              goto LABEL_141;
          }
        }
      }
      else if ( !v142 )
      {
        if ( !ServantEquipList )
          goto LABEL_151;
        v143 = ServantEquipList[1].monitor;
        if ( (int)v143 >= 1 )
        {
          v144 = 0;
          while ( v144 < (unsigned int)v143 )
          {
            sort = (__int64)this->fields.servantItemInfo;
            if ( !sort )
              goto LABEL_151;
            v145 = (UserServantEntity_o *)*((_QWORD *)&ServantEquipList[2].klass + v144);
            v146 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v147 = this->fields.memberIndex;
            v148 = v146;
            v149 = *(_DWORD *)(v13 + 24);
            v150 = (EquipGraphListViewItem_o *)sub_2213CCC(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v150, v144, v145, v148, v261, v260, setupInfo, v147, 0, v149, v254);
            if ( !v140 )
              goto LABEL_151;
            v157 = v140->fields._items;
            v158 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v140->fields._version;
            if ( !v157 )
              goto LABEL_151;
            v159 = v140->fields._size;
            if ( (unsigned int)v159 >= LODWORD(v157->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v140,
                (Il2CppObject *)v150,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
            }
            else
            {
              v160 = &v157->obj.klass + v159;
              v140->fields._size = v159 + 1;
              v160[4] = (Il2CppClass *)v150;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v160 + 4),
                (int32_t)v150,
                v151,
                v152,
                v153,
                v154,
                v155,
                v156);
            }
            LODWORD(v143) = ServantEquipList[1].monitor;
            if ( (__int64)++v144 >= (int)v143 )
              goto LABEL_141;
          }
          goto LABEL_152;
        }
      }
      goto LABEL_141;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    v258 = v141;
    v202 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
    if ( !v202 )
      goto LABEL_151;
    v203 = (ServantSkillMaster_o *)sort;
    setupInfoa = setupInfo;
    RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                  (ConstantStrMaster_o *)v202,
                                                                                  0);
    v15 = (int64_t)System_Linq_Enumerable__ToHashSet_int_(
                     RewardUpFuncCategory,
                     (const MethodInfo_38A08E0 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    sort = v141;
    if ( !v141 )
      goto LABEL_151;
    *(_QWORD *)(v141 + 40) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v141 + 40), v15, v205, v206, v207, v208, v209, v210);
    RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                                 (ConstantStrMaster_o *)v202,
                                                                                 0);
    sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpIgnoreSvtId,
                      (const MethodInfo_38A08E0 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !ServantEquipList )
      goto LABEL_151;
    v212 = (int)ServantEquipList[1].monitor;
    if ( v212 < 1 )
    {
LABEL_141:
      v247 = (System_Action_object__o *)sub_2213CCC(System_Action_EquipGraphListViewItem__TypeInfo);
      System_Action_object____ctor(
        v247,
        object,
        Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__0__,
        0);
      if ( v140 )
      {
        System_Collections_Generic_List_object___ForEach(
          v140,
          (System_Action_T__o *)v247,
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          emptyMessageLabel = this->fields.emptyMessageLabel;
          v250 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
          v251 = *v250;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
          sort = (__int64)LocalizationManager__Get(v251, 0);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
            EquipGraphListViewManager__RefrashListDisp(this, v252);
            ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
            EquipGraphListViewManager__SetFilterButtonImage(this, v253);
            return;
          }
        }
      }
      goto LABEL_151;
    }
    index = 0;
    v213 = (System_Collections_Generic_HashSet_int__o *)sort;
    v214 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v215 = 0;
    v255 = (System_Collections_Generic_HashSet_int__o *)sort;
    v256 = ServantEquipList;
    while ( v215 < v212 )
    {
      v216 = *((_QWORD *)&ServantEquipList[2].klass + (int)v215);
      if ( !v216 )
        goto LABEL_151;
      v217 = *(_QWORD *)(v216 + 80);
      v218 = *(_QWORD *)(v216 + 88);
      if ( !*(&(*v214)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v214, v15);
      *(_QWORD *)&v265.fields.currentCryptoKey = v217;
      *(_QWORD *)&v265.fields.fakeValue = v218;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v265, 0);
      if ( !v213 )
        goto LABEL_151;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v213,
               sort,
               (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        v219 = *(_QWORD *)(v216 + 80);
        v220 = *(_QWORD *)(v216 + 88);
        if ( !*(&(*v214)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v214, v15);
        *(_QWORD *)&v266.fields.currentCryptoKey = v219;
        *(_QWORD *)&v266.fields.fakeValue = v220;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v266, 0);
        if ( !v203 )
          goto LABEL_151;
        ServantSkillList = ServantSkillMaster__getServantSkillList(v203, sort, 0);
        sort = (__int64)UserServantEntity__GetEquipAllCategoryIdList((UserServantEntity_o *)v216, ServantSkillList, 0);
        if ( sort )
        {
          v222 = *(System_Func_int__bool__o **)(v141 + 56);
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v222 )
          {
            v222 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v222,
              (Il2CppObject *)v141,
              Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__6__,
              0);
            *(_QWORD *)(v141 + 56) = v222;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v141 + 56),
              (int32_t)v222,
              v224,
              v225,
              v226,
              v227,
              v228,
              v229);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)v222,
                   (const MethodInfo_38646E0 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (__int64)this->fields.servantItemInfo;
            if ( !sort )
              goto LABEL_151;
            v230 = v214;
            v231 = v203;
            v232 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v233 = this->fields.memberIndex;
            v234 = (int32_t)object[1].monitor;
            v235 = v232;
            v236 = (EquipGraphListViewItem_o *)sub_2213CCC(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v236,
              index,
              (UserServantEntity_o *)v216,
              v235,
              v261,
              v260,
              setupInfoa,
              v233,
              (System_Int32_array *)preLoadCategoryIdList,
              v234,
              v254);
            if ( !v140 )
              goto LABEL_151;
            v243 = v140->fields._items;
            v244 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v140->fields._version;
            if ( !v243 )
              goto LABEL_151;
            v245 = v140->fields._size;
            v203 = v231;
            v141 = v258;
            v214 = v230;
            if ( (unsigned int)v245 >= LODWORD(v243->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v140,
                (Il2CppObject *)v236,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
            }
            else
            {
              v246 = &v243->obj.klass + v245;
              v140->fields._size = v245 + 1;
              v246[4] = (Il2CppClass *)v236;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v246 + 4),
                (int32_t)v236,
                v237,
                v238,
                v239,
                v240,
                v241,
                v242);
            }
            v213 = v255;
            ServantEquipList = v256;
            ++index;
          }
        }
      }
      v212 = (int)ServantEquipList[1].monitor;
      if ( (int)++v215 >= v212 )
        goto LABEL_141;
    }
LABEL_152:
    sub_2213CE4(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__CreateList_47934692(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EquipGraphListViewManager_c *v12; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 v15; // x1
  __int64 sort; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct ListViewSort_o *v33; // x23
  bool v34; // w8
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct PartyOrganizationListViewItem_o *baseItem; // x23
  EquipGraphServantItem_o *v43; // x24
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  EquipGraphServantItem_o *servantItemInfo; // x23
  UserGameEntity_o *SelfUserGame; // x24
  int32_t cost; // w23
  __int64 v53; // x1
  UserServantEntity_array *ServantEquipList; // x23
  UnityEngine_Object_o *infoDataLabel; // x25
  UILabel_o *v56; // x25
  System_String_o *v57; // x26
  Il2CppObject *v58; // x27
  Il2CppObject *v59; // x0
  il2cpp_array_size_t v60; // x8
  unsigned __int64 v61; // x22
  UserServantEntity_o *v62; // x25
  int64_t EquipUserSvtId; // x26
  EquipGraphListViewItem_o *v64; // x24
  const MethodInfo *v65; // x6
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v78; // x8
  System_String_o *v79; // x21
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int max_length; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596FC6A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    sub_2213A60(&EquipGraphServantItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596FC6A = 1;
  }
  v12 = EquipGraphListViewManager_TypeInfo;
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, partyItem);
    v12 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v12->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)warBoardSortStatus,
    *(System_String_o **)&member,
    (System_String_o *)setupInfo,
    (int32_t)method,
    v5,
    v6,
    v7);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_63;
  *(_DWORD *)(sort + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
                           0,
                           setupInfo->fields.servantEquipFilterEventCampaignIds,
                           setupInfo->fields.servantEquipFilterEventIds,
                           0,
                           0,
                           isQuestStart,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v33 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v33 )
      goto LABEL_63;
    v34 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v33 = this->fields.sort;
    if ( !v33 )
      goto LABEL_63;
    v34 = 0;
  }
  v33->fields.isBonusKind = v34;
  if ( !partyItem )
    goto LABEL_63;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0);
  this->fields.baseItem = MemberItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseItem,
    (int32_t)MemberItem,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_63;
  if ( !baseItem->fields.isFollower )
  {
    v43 = (EquipGraphServantItem_o *)sub_2213CCC(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v43, baseItem, 0, 0, 0);
    this->fields.servantItemInfo = v43;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantItemInfo,
      (int32_t)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    sort = (__int64)this->fields.baseItem;
    if ( !sort )
      goto LABEL_63;
    servantItemInfo = this->fields.servantItemInfo;
    sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
    if ( !servantItemInfo )
      goto LABEL_63;
    EquipGraphServantItem__SetEquipTarget(servantItemInfo, sort, 0);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)sort, this->fields.servantItemInfo, 0, 0, 0);
    sort = (__int64)this->fields.servantItemDraw;
    if ( !sort )
      goto LABEL_63;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)sort, 0, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    sort = (__int64)this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !sort )
      goto LABEL_63;
    cost = partyItem->fields.cost;
    this->fields.baseCost = cost - EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)sort, 0);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v56 = this->fields.infoDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
      if ( !ServantEquipList )
        goto LABEL_63;
      v57 = (System_String_o *)sort;
      max_length = ServantEquipList->max_length;
      sort = j_il2cpp_value_box_0(qword_5984348, &max_length);
      if ( !SelfUserGame )
        goto LABEL_63;
      v58 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtEquipKeep);
      sort = (__int64)System_String__Format_75697880(v57, v58, v59, 0);
      if ( !v56 )
        goto LABEL_63;
      UILabel__set_text(v56, (System_String_o *)sort, 0);
    }
    sort = (__int64)this->fields.bonusFilterKindButton;
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !*p_sort )
      goto LABEL_63;
    if ( !sort )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
    sort = (__int64)this->fields.bondSkillChangeMessageLabel;
    if ( !sort )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !ServantEquipList )
      goto LABEL_63;
    v60 = ServantEquipList->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( v61 >= (unsigned int)v60 )
          sub_2213CE4(sort);
        sort = (__int64)this->fields.servantItemInfo;
        if ( !sort )
          break;
        v62 = ServantEquipList->m_Items[v61];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
        v64 = (EquipGraphListViewItem_o *)sub_2213CCC(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_47958536(v64, v61, v62, EquipUserSvtId, partyItem, setupInfo, v65);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v72 = *(_QWORD *)(sort + 16);
        v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v72 )
          break;
        v74 = *(int *)(sort + 24);
        if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v64,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = v72 + 8 * v74;
          *(_DWORD *)(sort + 24) = v74 + 1;
          *(_QWORD *)(v75 + 32) = v64;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 32), (int32_t)v64, v66, v67, v68, v69, v70, v71);
        }
        LODWORD(v60) = ServantEquipList->max_length;
        if ( (__int64)++v61 >= (int)v60 )
          goto LABEL_54;
      }
LABEL_63:
      sub_2213CDC(sort, v15);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v78 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v79 = *v78;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    sort = (__int64)LocalizationManager__Get(v79, 0);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
    EquipGraphListViewManager__RefrashListDisp(this, v80);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v81);
  }
}


void EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_596FC65 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    byte_596FC65 = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1);
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
    sub_2213CDC(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t EquipUserSvtId; // x20
  struct PartyListViewItem_array *v15; // x8
  int v16; // w9
  PartyListViewItem_o *v17; // x21
  struct PartyListViewItem_array *v18; // x8
  int v19; // w9
  struct EquipGraphListViewItem_o *v20; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  __int128 v22; // q1
  PartyListViewItem_o *v23; // x20
  int32_t memberIndex; // w21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  EquipGraphListViewItem_o *v28; // x21
  __int64 v29; // x10
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x22
  __int64 v32; // x1
  EquipGraphListViewObject_o *v33; // x0
  __int64 v34; // x10
  struct EquipGraphListViewItem_o *v35; // x8
  struct ServantEntity_o *v36; // x9
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x1
  EquipGraphListViewItem_o *current; // x20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x21
  System_Action_object__o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  UnityEngine_Object_o *viewObject; // x21
  __int64 v47; // x1
  EquipGraphListViewObject_o *v48; // x0
  __int64 v49; // x10
  struct EquipGraphListViewItem_o *v50; // x8
  System_Collections_Generic_List_object__o *v51; // x20
  System_Action_object__o *v52; // x21
  struct EquipGraphListViewItem_o *v53; // x8
  System_Collections_Generic_List_T__o *v54; // x20
  System_Func_object__bool__o *v55; // x21
  struct EquipGraphListViewItem_o *v56; // x8
  struct UserServantEntity_o *v57; // x9
  int32_t hp; // w21
  int32_t atk; // w22
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  struct EquipGraphListViewItem_o *v63; // x8
  UnityEngine_Object_o *v64; // x20
  struct EquipGraphListViewItem_o *v65; // x8
  __int64 v66; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  struct PartyListViewItem_array *waveDeckItemList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v70; // x26
  int32_t v71; // w21
  PartyListViewItem_o *v72; // x20
  struct EquipGraphListViewItem_o *v73; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v75; // x22
  __int64 v76; // x23
  __int64 v77; // x24
  int v78; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+10h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+38h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_596FC77 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_0__);
    sub_2213A60(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_1__);
    sub_2213A60(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_2__);
    sub_2213A60(&EquipGraphListViewObject_TypeInfo);
    sub_2213A60(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC77 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v82,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v83 = *(System_Collections_Generic_List_Enumerator_object__o *)&v82.fields.currentCryptoKey;
    v82.fields.currentCryptoKey = 0;
    v82.fields.hiddenValue = (int64_t)&v83;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v83,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v37 )
        break;
      current = (EquipGraphListViewItem_o *)v83.fields._current;
      if ( !v83.fields._current
        || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
            v83.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EquipGraphListViewItem_c *)v83.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_2213CDC(v37, v38);
      }
      if ( BYTE1(v83.fields._current[9].monitor) )
      {
        BYTE1(v83.fields._current[9].monitor) = 0;
        if ( EquipGraphListViewItem__get_IsUse(current, v38) )
        {
          wearerMemberInfoList = (System_Collections_Generic_List_object__o *)current->fields.wearerMemberInfoList;
          v42 = (System_Action_object__o *)sub_2213CCC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v42,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__88_2__,
            0);
          if ( !wearerMemberInfoList )
            sub_2213CDC(v43, v44);
          System_Collections_Generic_List_object___ForEach(
            wearerMemberInfoList,
            (System_Action_T__o *)v42,
            (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
          viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
          if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
          {
            v48 = (EquipGraphListViewObject_o *)current->fields.viewObject;
            if ( !v48
              || (v49 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                  v48->klass->_2.naturalAligment < (unsigned int)v49)
              || (EquipGraphListViewObject_c *)v48->klass->_2.typeHierarchy[v49 - 1] != EquipGraphListViewObject_TypeInfo )
            {
              sub_2213CDC(v48, v47);
            }
            EquipGraphListViewObject__Init_49134312(v48, 4, 0, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v83,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v70 = 0;
        while ( v70 < (unsigned int)max_length )
        {
          v71 = 0;
          v72 = waveDeckItemList->m_Items[v70];
          while ( 1 )
          {
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v71 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
              break;
            if ( !v72 )
              goto LABEL_109;
            Instance = (int64_t)PartyListViewItem__GetMember(v72, v71, 0);
            v73 = this->fields.selectItem;
            if ( !v73 )
              goto LABEL_109;
            servantEntity = v73->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_109;
            v75 = (PartyOrganizationListViewItem_o *)Instance;
            v76 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v77 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
            *(_QWORD *)&v84.fields.currentCryptoKey = v76;
            *(_QWORD *)&v84.fields.fakeValue = v77;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v84, 0);
            if ( !v75 )
              goto LABEL_109;
            v78 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v75, 0);
            if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0) )
              PartyListViewItem__SetEquip(v72, v71, 0, 0, 0);
            ++v71;
          }
          LODWORD(max_length) = waveDeckItemList->max_length;
          if ( (__int64)++v70 >= (int)max_length )
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
    if ( !Instance || (v15 = this->fields.waveDeckItemList) == 0 )
LABEL_109:
      sub_2213CDC(Instance, v6);
    v16 = *(_DWORD *)(Instance + 224) - 1;
    if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
LABEL_114:
      sub_2213CE4(Instance);
    v17 = v15->m_Items[v16];
    Instance = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)Instance, v6);
    if ( !Instance || !v17 )
      goto LABEL_109;
    PartyListViewItem__SetEquip(v17, *(_DWORD *)(Instance + 16), EquipUserSvtId, 0, 0);
  }
LABEL_18:
  v18 = this->fields.waveDeckItemList;
  if ( !v18 )
    goto LABEL_109;
  v19 = this->fields.partyNumber - 1;
  if ( (unsigned int)v19 >= LODWORD(v18->max_length) )
    goto LABEL_114;
  v20 = this->fields.selectItem;
  if ( !v20 )
    goto LABEL_109;
  userSvtEntity = v20->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_109;
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v23 = v18->m_Items[v19];
  memberIndex = this->fields.memberIndex;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v22;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
  v81 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v81, 0);
  if ( !v23 )
    goto LABEL_109;
  PartyListViewItem__SetEquip(v23, memberIndex, Instance, 0, 0);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v83 = v80;
  v82.fields.currentCryptoKey = 0;
  v82.fields.hiddenValue = (int64_t)&v83;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    v28 = (EquipGraphListViewItem_o *)v83.fields._current;
    if ( !v83.fields._current
      || (v29 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v83.fields._current->klass->_2.naturalAligment < (unsigned int)v29)
      || (EquipGraphListViewItem_c *)v83.fields._current->klass->_2.typeHierarchy[v29 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_2213CDC(v25, v26);
    }
    if ( BYTE1(v83.fields._current[9].monitor) )
      LOWORD(v83.fields._current[9].monitor) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(v28, this->fields.waveDeckItemList, v23, this->fields.memberIndex, v27);
    v31 = (UnityEngine_Object_o *)v28->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
    {
      v33 = (EquipGraphListViewObject_o *)v28->fields.viewObject;
      if ( !v33
        || (v34 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
            v33->klass->_2.naturalAligment < (unsigned int)v34)
        || (EquipGraphListViewObject_c *)v33->klass->_2.typeHierarchy[v34 - 1] != EquipGraphListViewObject_TypeInfo )
      {
        sub_2213CDC(v33, v32);
      }
      EquipGraphListViewObject__Init_49134312(v33, 4, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v35 = this->fields.selectItem;
  if ( !v35 )
    goto LABEL_109;
  v36 = v35->fields.servantEntity;
  if ( v36 )
    LODWORD(v36) = v36->fields.cost;
  this->fields.baseCost = v23->fields.cost - (_DWORD)v36;
LABEL_61:
  v50 = this->fields.selectItem;
  if ( !v50 )
    goto LABEL_109;
  v51 = (System_Collections_Generic_List_object__o *)v50->fields.wearerMemberInfoList;
  v50->fields.isBase = 1;
  v52 = (System_Action_object__o *)sub_2213CCC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Action_object____ctor(
    v52,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__88_0__,
    0);
  if ( !v51 )
    goto LABEL_109;
  System_Collections_Generic_List_object___ForEach(
    v51,
    (System_Action_T__o *)v52,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v53 = this->fields.selectItem;
  if ( !v53 )
    goto LABEL_109;
  v54 = (System_Collections_Generic_List_T__o *)v53->fields.wearerMemberInfoList;
  v55 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v55,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__88_1__,
    0);
  Instance = BasicHelper__Any_object_(
               v54,
               (System_Func_T__bool__o *)v55,
               (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
  v56 = this->fields.selectItem;
  if ( (Instance & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_109;
    v57 = v56->fields.userSvtEntity;
    if ( v57 )
    {
      hp = v57->fields.hp;
      atk = v57->fields.atk;
      goto LABEL_70;
    }
  }
  else if ( !v56 )
  {
    goto LABEL_109;
  }
  hp = 0;
  atk = 0;
LABEL_70:
  v60 = v56->fields.userSvtEntity;
  if ( !v60 )
    goto LABEL_109;
  v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v61;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
  v79 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v79, 0);
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
  v63 = this->fields.selectItem;
  if ( !v63 )
    goto LABEL_109;
  v64 = (UnityEngine_Object_o *)v63->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  Instance = UnityEngine_Object__op_Inequality(v64, 0, 0);
  if ( (Instance & 1) == 0 )
    goto LABEL_85;
  v65 = this->fields.selectItem;
  if ( !v65 )
    goto LABEL_109;
  Instance = (int64_t)v65->fields.viewObject;
  if ( !Instance )
    goto LABEL_109;
  v66 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v66
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v66 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_109;
  }
  EquipGraphListViewObject__Init_49134312((EquipGraphListViewObject_o *)Instance, 4, 1, 0);
LABEL_85:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_86:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_596FC79 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC79 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
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

  if ( (byte_596FC7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC7D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_2213CDC(v7, v8);
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
  __int64 v10; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_596FC80 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596FC80 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v14, 0, sizeof(v14));
  if ( !itemList )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v14.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_2213CDC(v7, v8);
    }
    v10 = *(__int64 *)((char *)&v14.fields._current->klass + (unsigned __int64)&dword_78);
    if ( !v10 )
      sub_2213CDC(v7, v8);
    v11 = *(_QWORD *)(v10 + 80);
    v12 = *(_QWORD *)(v10 + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v15.fields.currentCryptoKey = v11;
    *(_QWORD *)&v15.fields.fakeValue = v12;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_596FC81 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596FC81 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_596FC6C & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596FC6C = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


int32_t EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x11
  int32_t v7; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596FC74 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_596FC74 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_2213CDC(v4, v5);
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
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596FC75 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_596FC75 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_2213CDC(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596FC6E & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FC6E = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 185) )
      {
        if ( *(_BYTE *)(Item + 155) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596FC6D & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FC6D = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 184) )
      {
        if ( *(_BYTE *)(Item + 154) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_596FC66 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    byte_596FC66 = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1);
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
    sub_2213CDC(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0);
}


void EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t v7; // x21
  int size; // w27
  unsigned __int64 v9; // x20
  unsigned __int64 v10; // x28
  __int64 v11; // x8
  __int64 *v12; // x28
  __int64 v13; // t1
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  int64_t v17; // x22
  int32_t v18; // w24
  int64_t v19; // x23
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  const MethodInfo *v32; // x1
  int32_t v33; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v35; // x21
  __int64 v36; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v39; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-80h]

  if ( (byte_596FC6B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596FC6B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_43;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  v7 = Instance;
  size = itemList->fields._size;
  v39 = *(unsigned int *)(Instance + 24);
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v9 = 0;
    while ( v9 < *(unsigned int *)(v7 + 24) )
    {
      v10 = v7 + 8 * v9;
      v13 = *(_QWORD *)(v10 + 32);
      v12 = (__int64 *)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        goto LABEL_43;
      v14 = *(_OWORD *)(v11 + 16);
      v15 = *(_OWORD *)(v11 + 32);
      v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v42.fields.currentCryptoKey = v14;
      *(_OWORD *)&v42.fields.fakeValue = v15;
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
      v41 = v42;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v41, 0);
      if ( size >= 1 )
      {
        v17 = Instance;
        v18 = 0;
        while ( 1 )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_43;
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v18,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_43;
          v19 = Instance;
          naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
            || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_43;
          }
          v21 = *(_QWORD *)(Instance + 120);
          if ( v21 )
          {
            v22 = *(_OWORD *)(v21 + 16);
            v23 = *(_OWORD *)(v21 + 32);
            v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v42.fields.currentCryptoKey = v22;
            *(_OWORD *)&v42.fields.fakeValue = v23;
            if ( !v24 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
            v40 = v42;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v40, 0);
            if ( Instance == v17 )
              break;
          }
          if ( size == ++v18 )
            goto LABEL_28;
        }
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          break;
        v31 = *v12;
        *(_QWORD *)(v19 + 120) = *v12;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 120), v31, v25, v26, v27, v28, v29, v30);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v19, v5);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v19, v32);
        }
      }
LABEL_28:
      if ( ++v9 == v39 )
        goto LABEL_29;
    }
    sub_2213CE4(Instance);
  }
LABEL_29:
  if ( isIconSizeChange && size >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v33,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v35 = (ListViewItem_o *)Item;
        v36 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v36
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v36 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (int64_t)v35->fields.viewObject;
            if ( !Instance )
              break;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v35, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v33 )
        return;
    }
LABEL_43:
    sub_2213CDC(Instance, v5);
  }
}


void EquipGraphListViewManager__OnClickBonusFilterKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_596FC7B & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_596FC7B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  __int64 Select; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = (unsigned int)EquipGraphListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Select,
      callbackFunc->fields.method);
  }
}


void EquipGraphListViewManager__OnClickEquipExplanation(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v11; // x1
  __int64 Select; // x2

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_2213CDC(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      Select = (unsigned int)EquipGraphListViewManager__GetSelect(this, v11);
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596FC78 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC78 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0);
    if ( !v8 )
      sub_2213CDC(v10, v11);
    if ( equipGraphType == 2 )
      v12 = 16;
    else
      v12 = 5;
    CommonUI__OpenServantFilterSelectMenu_37380372(v8, v12, sort, (ListViewManager_o *)this, v9, -1, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596FC7E & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_596FC7E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596FC7C & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC7C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 Index; // x2

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    goto LABEL_8;
  if ( equipGraphListMenu->fields.modeKind )
    return;
  v4 = this;
  this = (EquipGraphListViewManager_o *)this->fields.scrollView;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596FC73 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC73 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_2213CDC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  int32_t baseCost; // w22
  int32_t EquipCost; // w20
  int32_t maxCost; // w23
  BalanceConfig_c *v11; // x8
  int32_t InfinityCostValue; // w24
  int v13; // w22
  float v14; // s0
  float v15; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  BalanceConfig_c *v17; // x0
  int32_t v18; // w23
  Il2CppObject *v19; // x20
  int32_t v20; // w9
  UILabel_o *v21; // x19
  System_String_o **v22; // x8
  System_String_o *v23; // x21
  System_String_o *v24; // x21
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596FC6F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13006/*"SUM_OVER_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596FC6F = 1;
  }
  ObjectList = (int *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_37;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( ObjectList[6] >= 1 )
  {
    v6 = 0;
    do
    {
      ObjectList = (int *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            v6,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        goto LABEL_37;
      (*(void (__fastcall **)(int *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
        ObjectList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
    }
    while ( ++v6 < v5->fields._size );
  }
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(infoData2Label, 0, 0) )
  {
    ObjectList = (int *)this->fields.servantItemInfo;
    if ( !ObjectList )
      goto LABEL_37;
    baseCost = this->fields.baseCost;
    EquipCost = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)ObjectList, 0);
    maxCost = this->fields.maxCost;
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
      v11 = BalanceConfig_TypeInfo;
    }
    ObjectList = (int *)this->fields.infinityCostLabel;
    if ( !ObjectList )
      goto LABEL_37;
    InfinityCostValue = v11->static_fields->InfinityCostValue;
    ObjectList = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0);
    if ( !ObjectList )
      goto LABEL_37;
    v13 = EquipCost + baseCost;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ObjectList, maxCost >= InfinityCostValue, 0);
    if ( maxCost >= InfinityCostValue )
    {
      ObjectList = (int *)this->fields.infinityCostLabel;
      if ( !ObjectList )
        goto LABEL_37;
      v14 = 49.0;
      if ( v13 < 10 )
        v14 = 38.0;
      if ( v13 >= 100 )
        v15 = 60.0;
      else
        v15 = v14;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v15, 0);
    }
    v17 = BalanceConfig_TypeInfo;
    v18 = this->fields.maxCost;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
      v17 = BalanceConfig_TypeInfo;
    }
    v19 = (Il2CppObject *)(v18 >= v17->static_fields->InfinityCostValue
                         ? StringLiteral_1/*""*/
                         : System_Int32__ToString((int)this + 504, 0));
    v20 = this->fields.maxCost;
    v21 = this->fields.infoData2Label;
    v22 = v13 <= v20 ? (System_String_o **)&StringLiteral_13005/*"SUM_INFO"*/ : (System_String_o **)&StringLiteral_13006/*"SUM_OVER_INFO"*/;
    v23 = *v22;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v24 = LocalizationManager__Get(v23, 0);
    v26 = v13;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
    ObjectList = (int *)System_String__Format_75697880(v24, v25, v19, 0);
    if ( !v21 )
LABEL_37:
      sub_2213CDC(ObjectList, v4);
    UILabel__set_text(v21, (System_String_o *)ObjectList, 0);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596FC71 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_2213A60(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596FC71 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      EquipGraphListViewObject__Init_49135108((EquipGraphListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject_47974420(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596FC72 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_2213A60(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596FC72 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      EquipGraphListViewObject__Init_49135196((EquipGraphListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EquipGraphListViewItem_o **p_selectItem; // x20
  MissionNaviTransitionBoardItem_o *p_selectItemCallbackFunc; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  __int64 selectItem; // x0
  _BOOL4 v21; // w25
  EquipGraphListViewObject_o *v22; // x8
  __int64 naturalAligment; // x11
  EquipGraphListViewObject_o *v24; // x24
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v28; // w9
  struct EquipGraphListViewItem_o *v29; // x8
  _QWORD *v30; // x0
  char v31; // w8
  System_Reflection_MethodBase_o *v32; // x0
  const MethodInfo *v33; // x2
  struct PartyListViewItem_array *v34; // x8
  int v35; // w9
  PartyListViewItem_o *v36; // x21
  int32_t cost; // w23
  __int64 v38; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  NotificationDialog_ClickDelegate_o *v42; // x23
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  System_Action_object__o *v44; // x23
  bool v45; // w1
  const MethodInfo *v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Reflection_MethodBase_o *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  MissionNaviTransitionBoardItem_c *v60; // x19
  bool IsUse; // w8
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  System_Collections_Generic_List_object__o *v64; // x20
  __int64 v65; // x20
  System_String_o *v66; // x21
  System_Object_array *v67; // x22
  __int64 v68; // x23
  __int64 v69; // x23
  System_String_o *v70; // x23
  __int64 v71; // x23
  struct EquipGraphServantItem_o *v72; // x8
  int32_t rarityId; // w23
  System_String_o *v74; // x23
  System_String_o *v75; // x20
  System_String_o *v76; // x0
  System_Object_array *v77; // x1
  System_Reflection_MethodBase_o *v78; // x0
  struct PartyListViewItem_array *v79; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v81; // x29
  int32_t v82; // w22
  int32_t v83; // w23
  PartyListViewItem_o *v84; // x21
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v86; // x24
  __int64 v87; // x25
  __int64 v88; // x26
  int v89; // w25
  ServantEntity_o *ServantEntity_k__BackingField; // x21
  System_Reflection_MethodBase_o *v91; // x0
  struct PartyListViewItem_array *v92; // x8
  int v93; // w9
  struct EquipGraphListViewItem_o *v94; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  __int128 v96; // q1
  PartyListViewItem_o *v97; // x23
  int32_t memberIndex; // w24
  _BOOL8 v99; // x0
  const MethodInfo *v100; // x1
  EquipGraphListViewItem_o *current; // x23
  __int64 v102; // x10
  int monitor_low; // w8
  _BOOL4 v104; // w24
  System_Collections_Generic_List_object__o *v105; // x24
  System_Action_object__o *v106; // x25
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x1
  UnityEngine_Object_o *viewObject; // x24
  __int64 v111; // x1
  EquipGraphListViewObject_o *v112; // x0
  __int64 v113; // x10
  struct EquipGraphListViewItem_o *v114; // x9
  struct UserServantEntity_o *v115; // x8
  __int128 v116; // q1
  EquipGraphServantItem_o *v117; // x20
  __int64 v118; // x1
  EquipGraphListViewItem_WearerMemberInfo_o *WearerMemberInfo; // x22
  System_String_o *v120; // x21
  struct EquipGraphListViewItem_o *v121; // x8
  __int64 v122; // x20
  __int64 v123; // x23
  int32_t WearerSvtRarity_k__BackingField; // w23
  System_String_o *RarityType; // x23
  struct System_String_o *WearerServantClassName_k__BackingField; // x23
  struct System_String_o *WearerServantName_k__BackingField; // x22
  System_String_o *v128; // x22
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  System_String_o *v130; // x22
  System_String_o *ClassName; // x22
  System_String_o *NameText; // x22
  struct EquipGraphListViewItem_o *v133; // x8
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  __int64 v140; // x23
  __int64 v141; // x1
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  __int64 v148; // x23
  int32_t v149; // w23
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  __int64 v156; // x23
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct System_String_o *v163; // x23
  System_String_o *v164; // x2
  System_String_o *v165; // x3
  int32_t v166; // w4
  int32_t v167; // w5
  bool v168; // w6
  bool v169; // w7
  struct System_String_o *v170; // x22
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  __int64 v177; // x22
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  __int64 v184; // x22
  struct EquipGraphServantItem_o *v185; // x8
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  __int64 v192; // x22
  System_String_o *v193; // x2
  System_String_o *v194; // x3
  int32_t v195; // w4
  int32_t v196; // w5
  bool v197; // w6
  bool v198; // w7
  __int64 v199; // x22
  System_String_o *v200; // x2
  System_String_o *v201; // x3
  int32_t v202; // w4
  int32_t v203; // w5
  bool v204; // w6
  bool v205; // w7
  __int64 v206; // x22
  System_String_o *v207; // x20
  __int64 v208; // x1
  Il2CppObject *v209; // x21
  System_String_o *v210; // x22
  System_String_o *v211; // x23
  System_String_o *v212; // x24
  CommonConfirmDialog_ClickDelegate_o *v213; // x25
  System_Func_object__bool__o *v214; // x21
  __int64 v215; // x1
  Il2CppObject *v216; // x22
  System_String_o *v217; // x20
  System_Object_array *v218; // x21
  System_String_o *v219; // x2
  System_String_o *v220; // x3
  int32_t v221; // w4
  int32_t v222; // w5
  bool v223; // w6
  bool v224; // w7
  __int64 v225; // x23
  System_String_o *v226; // x2
  System_String_o *v227; // x3
  int32_t v228; // w4
  int32_t v229; // w5
  bool v230; // w6
  bool v231; // w7
  Il2CppClass *klass; // x23
  System_String_o *v233; // x2
  System_String_o *v234; // x3
  int32_t v235; // w4
  int32_t v236; // w5
  bool v237; // w6
  bool v238; // w7
  __int64 v239; // x23
  System_String_o *v240; // x2
  System_String_o *v241; // x3
  int32_t v242; // w4
  int32_t v243; // w5
  bool v244; // w6
  bool v245; // w7
  Il2CppClass *v246; // x23
  struct EquipGraphServantItem_o *v247; // x8
  int32_t v248; // w23
  System_String_o *v249; // x2
  System_String_o *v250; // x3
  int32_t v251; // w4
  int32_t v252; // w5
  bool v253; // w6
  bool v254; // w7
  __int64 v255; // x23
  System_String_o *v256; // x2
  System_String_o *v257; // x3
  int32_t v258; // w4
  int32_t v259; // w5
  bool v260; // w6
  bool v261; // w7
  __int64 v262; // x22
  System_String_o *v263; // x20
  __int64 v264; // x1
  Il2CppObject *v265; // x21
  System_String_o *v266; // x22
  CommonConfirmDialog_ClickDelegate_o *v267; // x23
  struct UserServantEntity_o *userServantEntity; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v270; // w20
  System_String_o *v271; // x23
  System_Object_array *v272; // x24
  __int64 v273; // x22
  __int64 v274; // x1
  System_String_o *v275; // x20
  System_String_o *v276; // x20
  __int64 v277; // x1
  __int64 v278; // x20
  __int64 v279; // x22
  int32_t v280; // w0
  System_String_o *Name; // x20
  System_Object_array *v282; // x0
  __int64 v283; // x1
  __int64 v284; // x22
  __int64 v285; // x22
  __int64 v286; // x1
  System_String_o *v287; // x20
  System_String_o *v288; // x20
  __int64 v289; // x1
  __int64 v290; // x20
  __int64 v291; // x22
  int32_t v292; // w0
  System_String_o *v293; // x20
  __int64 v294; // x1
  Il2CppObject *v295; // x21
  System_String_o *v296; // x22
  System_String_o *v297; // x23
  System_String_o *v298; // x24
  CommonConfirmDialog_ClickDelegate_o *v299; // x25
  __int64 v300; // x0
  struct PartyListViewItem_array *v301; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v302; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v303; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v304; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v305; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v308; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v309; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v311; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v312; // 0:x0.16

  if ( (byte_596FC76 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EquipGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_2213A60(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_2213A60(&Method_EquipGraphListViewManager__SelectEquip_b__87_0__);
    sub_2213A60(&Method_EquipGraphListViewManager__SelectEquip_b__87_1__);
    sub_2213A60(&Method_EquipGraphListViewManager__SelectEquip_b__87_2__);
    sub_2213A60(&Method_EquipGraphListViewManager__SelectEquip_b__87_3__);
    sub_2213A60(&EquipGraphListViewObject_TypeInfo);
    sub_2213A60(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_16114/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16115/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_2213A60(&StringLiteral_16108/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16110/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5696/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_2213A60(&StringLiteral_5694/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16111/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16104/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_5695/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16103/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_596FC76 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v308, 0, sizeof(v308));
  this->fields.selectItem = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectItem,
    (int32_t)item,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  p_selectItemCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  selectItem = (__int64)this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_260;
  if ( *(_BYTE *)(selectItem + 264) )
    v21 = *(_BYTE *)(selectItem + 265) != 0;
  else
    v21 = 1;
  v22 = *(EquipGraphListViewObject_o **)(selectItem + 112);
  *(_BYTE *)(selectItem + 265) = 1;
  if ( v22
    && (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        v22->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EquipGraphListViewObject_c *)v22->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewObject_TypeInfo )
      v24 = v22;
    else
      v24 = 0;
  }
  else
  {
    v24 = 0;
  }
  if ( *(_BYTE *)(selectItem + 153) )
  {
    v25 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_SelectEquip__);
    v26 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
    if ( !this->fields.isWaveBattle )
      goto LABEL_21;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_260;
    v28 = this->fields.partyNumber - 1;
    if ( (unsigned int)v28 < LODWORD(waveDeckItemList->max_length) )
    {
      selectItem = (__int64)waveDeckItemList->m_Items[v28];
      if ( !selectItem )
        goto LABEL_260;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)selectItem, this->fields.memberIndex, 0, 0, 0);
LABEL_21:
      selectItem = (__int64)*p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_260;
      *(_BYTE *)(selectItem + 153) = 0;
      selectItem = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v19);
      v29 = *p_selectItem;
      if ( (v21 & (unsigned int)selectItem & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_260;
      }
      else
      {
        if ( !v29 )
          goto LABEL_260;
        if ( v29->fields._OrganizedWave_k__BackingField <= 0 && !v29->fields._IsUnique_k__BackingField )
        {
LABEL_50:
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
                v45 = 0;
                goto LABEL_54;
              }
            }
          }
          goto LABEL_260;
        }
      }
      wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v29->fields.wearerMemberInfoList;
      v44 = (System_Action_object__o *)sub_2213CCC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
      System_Action_object____ctor(
        v44,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__87_0__,
        0);
      if ( !wearerMemberInfoList )
        goto LABEL_260;
      System_Collections_Generic_List_object___ForEach(
        wearerMemberInfoList,
        (System_Action_T__o *)v44,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v24 )
        goto LABEL_260;
      EquipGraphListViewObject__Init_49134312(v24, 4, 0, 0);
      goto LABEL_50;
    }
LABEL_262:
    sub_2213CE4(selectItem);
  }
  if ( *(int *)(selectItem + 224) >= 1 )
  {
    if ( !item )
      goto LABEL_260;
    v30 = Method_EquipGraphListViewManager_SelectEquip__;
    v31 = *((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83);
    if ( !item->fields._IsClearedWave_k__BackingField )
    {
      if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_SelectEquip__);
      v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_260;
      selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
      if ( (selectItem & 1) != 0 )
      {
        v34 = this->fields.waveDeckItemList;
        if ( !v34 )
          goto LABEL_260;
        v35 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( (unsigned int)v35 >= LODWORD(v34->max_length) )
          goto LABEL_262;
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_260;
        v36 = v34->m_Items[v35];
        selectItem = (__int64)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v19);
        if ( !selectItem )
          goto LABEL_260;
        if ( !v36 )
          goto LABEL_260;
        selectItem = (__int64)PartyListViewItem__GetMember(v36, *(_DWORD *)(selectItem + 16), 0);
        if ( !selectItem )
          goto LABEL_260;
        cost = v36->fields.cost;
        selectItem = PartyOrganizationListViewItem__get_EquipCost((PartyOrganizationListViewItem_o *)selectItem, 0);
        if ( !this->fields.servantItemInfo )
          goto LABEL_260;
        if ( cost - (int)selectItem + EquipGraphServantItem__get_EquipCost(this->fields.servantItemInfo, 0) > v36->fields.maxCost )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_16104/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0);
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_16103/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0);
          v42 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v42,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__87_1__,
            0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_37376108(
              (CommonUI_o *)Instance,
              v40,
              v41,
              v42,
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
          goto LABEL_260;
        }
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_260;
        WearerMemberInfo = EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v19);
        if ( this->fields.questRestrictionInfo
          && QuestRestrictionInfo__IsWaveSetupSwitchParty(this->fields.questRestrictionInfo, 0) )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118);
          v120 = LocalizationManager__Get((System_String_o *)StringLiteral_16111/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/, 0);
          selectItem = sub_2213B20(object___TypeInfo, 8);
          v121 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_260;
          v122 = selectItem;
          selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(
                                  v121->fields._OrganizedWave_k__BackingField,
                                  0);
          if ( !v122 )
            goto LABEL_260;
          v123 = selectItem;
          sub_1FFE8F8(v122, selectItem);
          selectItem = sub_1FFE2C4(v122, 0, v123);
          if ( !WearerMemberInfo )
            goto LABEL_260;
          WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
          if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
          RarityType = Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0);
          sub_1FFE8F8(v122, RarityType);
          sub_1FFE2C4(v122, 1, RarityType);
          WearerServantClassName_k__BackingField = WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
          sub_1FFE8F8(v122, WearerServantClassName_k__BackingField);
          sub_1FFE2C4(v122, 2, WearerServantClassName_k__BackingField);
          WearerServantName_k__BackingField = WearerMemberInfo->fields._WearerServantName_k__BackingField;
          sub_1FFE8F8(v122, WearerServantName_k__BackingField);
          sub_1FFE2C4(v122, 3, WearerServantName_k__BackingField);
          v128 = LocalizationManager__ConvertNumberToRomaNumber(this->fields.partyNumber, 0);
          sub_1FFE8F8(v122, v128);
          selectItem = sub_1FFE2C4(v122, 4, v128);
          servantItemInfo = this->fields.servantItemInfo;
          if ( !servantItemInfo )
            goto LABEL_260;
          v130 = Rarity__getRarityType(servantItemInfo->fields.rarityId, 0);
          sub_1FFE8F8(v122, v130);
          sub_1FFE2C4(v122, 5, v130);
          selectItem = (__int64)this->fields.servantItemInfo;
          if ( !selectItem )
            goto LABEL_260;
          ClassName = EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
          sub_1FFE8F8(v122, ClassName);
          sub_1FFE2C4(v122, 6, ClassName);
          selectItem = (__int64)this->fields.servantItemInfo;
          if ( !selectItem )
            goto LABEL_260;
          NameText = EquipGraphServantItem__get_NameText((EquipGraphServantItem_o *)selectItem, 0);
          sub_1FFE8F8(v122, NameText);
          sub_1FFE2C4(v122, 7, NameText);
          goto LABEL_199;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118);
        v120 = LocalizationManager__Get((System_String_o *)StringLiteral_16114/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0);
        selectItem = sub_2213B20(object___TypeInfo, 10);
        v133 = *p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_260;
        v122 = selectItem;
        LODWORD(v304.fields.currentCryptoKey) = v133->fields._OrganizedWave_k__BackingField;
        selectItem = j_il2cpp_value_box_0(qword_5984348, &v304);
        if ( !v122 )
          goto LABEL_260;
        v140 = selectItem;
        if ( !selectItem || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v122 + 24) )
            goto LABEL_262;
          *(_QWORD *)(v122 + 32) = v140;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v122 + 32), v140, v134, v135, v136, v137, v138, v139);
          maxWave = this->fields.maxWave;
          selectItem = j_il2cpp_value_box_0(qword_5984348, &maxWave);
          v148 = selectItem;
          if ( !selectItem || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v122 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_262;
            *(_QWORD *)(v122 + 40) = v148;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v122 + 40), v148, v142, v143, v144, v145, v146, v147);
            if ( !WearerMemberInfo )
              goto LABEL_260;
            v149 = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
            selectItem = (__int64)Rarity__getRarityType(v149, 0);
            v156 = selectItem;
            if ( !selectItem || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v122 + 24) <= 2u )
                goto LABEL_262;
              *(_QWORD *)(v122 + 48) = v156;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v122 + 48), v156, v150, v151, v152, v153, v154, v155);
              v163 = WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !v163
                || (selectItem = sub_2213BB4(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
              {
                if ( (*(_DWORD *)(v122 + 24) & 0xFFFFFFFC) == 0 )
                  goto LABEL_262;
                *(_QWORD *)(v122 + 56) = v163;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v122 + 56),
                  (int32_t)v163,
                  v157,
                  v158,
                  v159,
                  v160,
                  v161,
                  v162);
                v170 = WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !v170 || (selectItem = sub_2213BB4(v170, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v122 + 24) <= 4u )
                    goto LABEL_262;
                  *(_QWORD *)(v122 + 64) = v170;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v122 + 64),
                    (int32_t)v170,
                    v164,
                    v165,
                    v166,
                    v167,
                    v168,
                    v169);
                  partyNumber = this->fields.partyNumber;
                  selectItem = j_il2cpp_value_box_0(qword_5984348, &partyNumber);
                  v177 = selectItem;
                  if ( !selectItem || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v122 + 24) <= 5u )
                      goto LABEL_262;
                    *(_QWORD *)(v122 + 72) = v177;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v122 + 72),
                      v177,
                      v171,
                      v172,
                      v173,
                      v174,
                      v175,
                      v176);
                    v305 = this->fields.maxWave;
                    selectItem = j_il2cpp_value_box_0(qword_5984348, &v305);
                    v184 = selectItem;
                    if ( !selectItem || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v122 + 24) <= 6u )
                        goto LABEL_262;
                      *(_QWORD *)(v122 + 80) = v184;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v122 + 80),
                        v184,
                        v178,
                        v179,
                        v180,
                        v181,
                        v182,
                        v183);
                      v185 = this->fields.servantItemInfo;
                      if ( !v185 )
                        goto LABEL_260;
                      selectItem = (__int64)Rarity__getRarityType(v185->fields.rarityId, 0);
                      v192 = selectItem;
                      if ( !selectItem
                        || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
                      {
                        if ( (*(_DWORD *)(v122 + 24) & 0xFFFFFFF8) == 0 )
                          goto LABEL_262;
                        *(_QWORD *)(v122 + 88) = v192;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v122 + 88),
                          v192,
                          v186,
                          v187,
                          v188,
                          v189,
                          v190,
                          v191);
                        selectItem = (__int64)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_260;
                        selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0);
                        v199 = selectItem;
                        if ( !selectItem
                          || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v122 + 24) <= 8u )
                            goto LABEL_262;
                          *(_QWORD *)(v122 + 96) = v199;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v122 + 96),
                            v199,
                            v193,
                            v194,
                            v195,
                            v196,
                            v197,
                            v198);
                          selectItem = (__int64)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_260;
                          selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0);
                          v206 = selectItem;
                          if ( !selectItem
                            || (selectItem = sub_2213BB4(selectItem, *(_QWORD *)(*(_QWORD *)v122 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v122 + 24) <= 9u )
                              goto LABEL_262;
                            *(_QWORD *)(v122 + 104) = v206;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v122 + 104),
                              v206,
                              v200,
                              v201,
                              v202,
                              v203,
                              v204,
                              v205);
LABEL_199:
                            v207 = System_String__Format_75698016(v120, (System_Object_array *)v122, 0);
                            v209 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v208);
                            v210 = LocalizationManager__Get((System_String_o *)StringLiteral_16115/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0);
                            v211 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
                            v212 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
                            v213 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v213,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0);
                            if ( v209 )
                            {
                              CommonUI__OpenConfirmDialog_37373584(
                                (CommonUI_o *)v209,
                                v210,
                                v207,
                                v211,
                                v212,
                                v213,
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
                            goto LABEL_260;
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
LABEL_265:
        v300 = sub_2213D00(selectItem, v141);
        sub_2213BA0(v300, 0);
      }
LABEL_103:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v33);
      return;
    }
    goto LABEL_60;
  }
  if ( !*(_BYTE *)(selectItem + 236) )
  {
    IsUse = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v19);
    v62 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( IsUse )
    {
      if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
        v62 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_SelectEquip__);
      v63 = (System_Reflection_MethodBase_o *)sub_2213A44(v62, v62[4]);
      OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0);
      if ( !*p_selectItem )
        goto LABEL_260;
      v64 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
      if ( !v64 )
        goto LABEL_260;
      if ( v64->fields._size == 1 )
      {
        selectItem = (__int64)System_Collections_Generic_List_object___get_Item(
                                v64,
                                0,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
        if ( !selectItem )
          goto LABEL_260;
        v65 = selectItem;
        if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
          goto LABEL_103;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_5694/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0);
        selectItem = sub_2213B20(object___TypeInfo, 6);
        if ( !this->fields.servantItemInfo )
          goto LABEL_260;
        v67 = (System_Object_array *)selectItem;
        selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
        if ( !v67 )
          goto LABEL_260;
        v68 = selectItem;
        sub_1FFE8F8(v67, selectItem);
        sub_1FFE2C4(v67, 0, v68);
        v69 = *(_QWORD *)(v65 + 32);
        sub_1FFE8F8(v67, v69);
        sub_1FFE2C4(v67, 1, v69);
        selectItem = (__int64)this->fields.servantItemInfo;
        if ( !selectItem )
          goto LABEL_260;
        v70 = EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
        sub_1FFE8F8(v67, v70);
        sub_1FFE2C4(v67, 2, v70);
        v71 = *(_QWORD *)(v65 + 48);
        sub_1FFE8F8(v67, v71);
        selectItem = sub_1FFE2C4(v67, 3, v71);
        v72 = this->fields.servantItemInfo;
        if ( !v72 )
          goto LABEL_260;
        rarityId = v72->fields.rarityId;
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
        v74 = Rarity__getRarityType(rarityId, 0);
        sub_1FFE8F8(v67, v74);
        sub_1FFE2C4(v67, 4, v74);
        v75 = Rarity__getRarityType(*(_DWORD *)(v65 + 56), 0);
        sub_1FFE8F8(v67, v75);
        sub_1FFE2C4(v67, 5, v75);
        v76 = v66;
        v77 = v67;
      }
      else
      {
        v214 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v214,
          (Il2CppObject *)this,
          Method_EquipGraphListViewManager__SelectEquip_b__87_2__,
          0);
        v216 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                 (System_Func_TSource__bool__o *)v214,
                 (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v215);
        v217 = LocalizationManager__Get((System_String_o *)StringLiteral_5695/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0);
        selectItem = sub_2213B20(object___TypeInfo, 6);
        if ( !this->fields.servantItemInfo )
          goto LABEL_260;
        v218 = (System_Object_array *)selectItem;
        selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
        if ( !v218 )
          goto LABEL_260;
        v225 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_2213BB4(selectItem, v218->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( !LODWORD(v218->max_length) )
          goto LABEL_262;
        v218->m_Items[0] = (Il2CppObject *)v225;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)v218->m_Items, v225, v219, v220, v221, v222, v223, v224);
        if ( !v216 )
          goto LABEL_260;
        klass = v216[2].klass;
        if ( klass )
        {
          selectItem = sub_2213BB4(v216[2].klass, v218->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( (v218->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_262;
        v218->m_Items[1] = (Il2CppObject *)klass;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v218->m_Items[1],
          (int32_t)klass,
          v226,
          v227,
          v228,
          v229,
          v230,
          v231);
        selectItem = (__int64)this->fields.servantItemInfo;
        if ( !selectItem )
          goto LABEL_260;
        selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
        v239 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_2213BB4(selectItem, v218->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( LODWORD(v218->max_length) <= 2 )
          goto LABEL_262;
        v218->m_Items[2] = (Il2CppObject *)v239;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v218->m_Items[2], v239, v233, v234, v235, v236, v237, v238);
        v246 = v216[3].klass;
        if ( v246 )
        {
          selectItem = sub_2213BB4(v216[3].klass, v218->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( (v218->max_length & 0xFFFFFFFC) == 0 )
          goto LABEL_262;
        v218->m_Items[3] = (Il2CppObject *)v246;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v218->m_Items[3],
          (int32_t)v246,
          v240,
          v241,
          v242,
          v243,
          v244,
          v245);
        v247 = this->fields.servantItemInfo;
        if ( !v247 )
          goto LABEL_260;
        v248 = v247->fields.rarityId;
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
        selectItem = (__int64)Rarity__getRarityType(v248, 0);
        v255 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_2213BB4(selectItem, v218->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( LODWORD(v218->max_length) <= 4 )
          goto LABEL_262;
        v218->m_Items[4] = (Il2CppObject *)v255;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v218->m_Items[4], v255, v249, v250, v251, v252, v253, v254);
        selectItem = (__int64)Rarity__getRarityType((int32_t)v216[3].monitor, 0);
        v262 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_2213BB4(selectItem, v218->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( LODWORD(v218->max_length) <= 5 )
          goto LABEL_262;
        v218->m_Items[5] = (Il2CppObject *)v262;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v218->m_Items[5], v262, v256, v257, v258, v259, v260, v261);
        v76 = v217;
        v77 = v218;
      }
      v263 = System_String__Format_75698016(v76, v77, 0);
      v265 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v264);
      v266 = LocalizationManager__Get((System_String_o *)StringLiteral_5696/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v267 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v267,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      selectItem = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
      if ( v265 )
      {
        CommonUI__OpenConfirmDialog(
          (CommonUI_o *)v265,
          v266,
          v263,
          v267,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0);
        return;
      }
      goto LABEL_260;
    }
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v62 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_SelectEquip__);
    v91 = (System_Reflection_MethodBase_o *)sub_2213A44(v62, v62[4]);
    OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0, 0);
    if ( this->fields.isWaveBattle )
    {
      v92 = this->fields.waveDeckItemList;
      if ( !v92 )
        goto LABEL_260;
      v93 = this->fields.partyNumber - 1;
      if ( (unsigned int)v93 >= LODWORD(v92->max_length) )
        goto LABEL_262;
      v94 = this->fields.selectItem;
      if ( !v94 )
        goto LABEL_260;
      userSvtEntity = v94->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_260;
      v96 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v97 = v92->m_Items[v93];
      memberIndex = this->fields.memberIndex;
      *(_OWORD *)&v304.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v304.fields.fakeValue = v96;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
      v303 = v304;
      selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v303, 0);
      if ( !v97 )
        goto LABEL_260;
      PartyListViewItem__SetEquip(v97, memberIndex, selectItem, 0, 0);
    }
    selectItem = (__int64)this->fields.itemList;
    if ( selectItem )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v304,
        (System_Collections_Generic_List_object__o *)selectItem,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v308 = *(System_Collections_Generic_List_Enumerator_object__o *)&v304.fields.currentCryptoKey;
      v304.fields.currentCryptoKey = 0;
      v304.fields.hiddenValue = (int64_t)&v308;
      while ( 1 )
      {
        v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v308,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v99 )
          break;
        current = (EquipGraphListViewItem_o *)v308.fields._current;
        if ( !v308.fields._current
          || (v102 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
              v308.fields._current->klass->_2.naturalAligment < (unsigned int)v102)
          || (EquipGraphListViewItem_c *)v308.fields._current->klass->_2.typeHierarchy[v102 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_2213CDC(v99, v100);
        }
        if ( BYTE1(v308.fields._current[9].monitor) )
        {
          monitor_low = LOBYTE(v308.fields._current[16].monitor);
          BYTE1(v308.fields._current[9].monitor) = 0;
          v104 = !monitor_low || current->fields._IsSelected_k__BackingField;
          if ( (v104 & EquipGraphListViewItem__get_IsUse(current, v100) & 1) != 0
            || current->fields._OrganizedWave_k__BackingField > 0
            || current->fields._IsUnique_k__BackingField )
          {
            v105 = (System_Collections_Generic_List_object__o *)current->fields.wearerMemberInfoList;
            v106 = (System_Action_object__o *)sub_2213CCC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
            System_Action_object____ctor(
              v106,
              (Il2CppObject *)this,
              Method_EquipGraphListViewManager__SelectEquip_b__87_3__,
              0);
            if ( !v105 )
              sub_2213CDC(v107, v108);
            System_Collections_Generic_List_object___ForEach(
              v105,
              (System_Action_T__o *)v106,
              (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
            viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v109);
            if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
            {
              v112 = (EquipGraphListViewObject_o *)current->fields.viewObject;
              if ( !v112
                || (v113 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                    v112->klass->_2.naturalAligment < (unsigned int)v113)
                || (EquipGraphListViewObject_c *)v112->klass->_2.typeHierarchy[v113 - 1] != EquipGraphListViewObject_TypeInfo )
              {
                sub_2213CDC(v112, v111);
              }
              EquipGraphListViewObject__Init_49134312(v112, 4, 0, 0);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v308,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v114 = *p_selectItem;
      if ( *p_selectItem )
      {
        v115 = v114->fields.userSvtEntity;
        v114->fields.isBase = 1;
        if ( v115 )
        {
          v116 = *(_OWORD *)&v115->fields.id.fields.fakeValue;
          v117 = this->fields.servantItemInfo;
          *(_OWORD *)&v304.fields.currentCryptoKey = *(_OWORD *)&v115->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v304.fields.fakeValue = v116;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
          v302 = v304;
          selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v302, 0);
          if ( v117 )
          {
            EquipGraphServantItem__SetEquipTarget(v117, selectItem, 0);
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
                v45 = this->fields.equipGraphType == 1;
LABEL_54:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v45, 0);
                EquipGraphListViewManager__RefrashListDisp(this, v46);
                if ( callback )
                {
                  p_selectItemCallbackFunc->klass = 0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc,
                    0,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51,
                    v52);
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
LABEL_260:
    sub_2213CDC(selectItem, v19);
  }
  if ( !item )
    goto LABEL_260;
  v30 = Method_EquipGraphListViewManager_SelectEquip__;
  v31 = *((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
LABEL_60:
    if ( (v31 & 2) != 0 )
      v30 = (_QWORD *)sub_2213A78(v30);
    v53 = (System_Reflection_MethodBase_o *)sub_2213A44(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v53, 2, 0, 0);
    v60 = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0;
      sub_2213A04(p_selectItemCallbackFunc, 0, v54, v55, v56, v57, v58, v59);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))v60->_1.namespaze)(
        v60->_1.element_class,
        *(_QWORD *)&v60->_1.byval_arg.bits);
    }
    return;
  }
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_2213A78(Method_EquipGraphListViewManager_SelectEquip__);
  v78 = (System_Reflection_MethodBase_o *)sub_2213A44(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0, 0);
  selectItem = (__int64)this->fields.servantItemInfo;
  if ( !selectItem )
    goto LABEL_260;
  selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
  if ( (selectItem & 1) == 0 )
    goto LABEL_103;
  v79 = this->fields.waveDeckItemList;
  if ( !v79 )
    goto LABEL_260;
  max_length = v79->max_length;
  if ( (int)max_length >= 1 )
  {
    v81 = 0;
    v82 = 1;
    v301 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v81 >= (unsigned int)max_length )
        goto LABEL_262;
      v83 = 0;
      v84 = v79->m_Items[v81];
      do
      {
        selectItem = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
          selectItem = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v83 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
          goto LABEL_101;
        if ( !v84 )
          goto LABEL_260;
        selectItem = (__int64)PartyListViewItem__GetMember(v84, v83, 0);
        if ( !*p_selectItem )
          goto LABEL_260;
        servantEntity = (*p_selectItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_260;
        v86 = (PartyOrganizationListViewItem_o *)selectItem;
        v87 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
        v88 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
        *(_QWORD *)&v309.fields.currentCryptoKey = v87;
        *(_QWORD *)&v309.fields.fakeValue = v88;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v309, 0);
        if ( !v86 )
          goto LABEL_260;
        v89 = selectItem;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v86, 0);
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0);
        ++v83;
      }
      while ( v89 != (_DWORD)selectItem );
      ServantEntity_k__BackingField = v86->fields._ServantEntity_k__BackingField;
      if ( ServantEntity_k__BackingField )
        break;
LABEL_101:
      v79 = v301;
      ++v81;
      ++v82;
      LODWORD(max_length) = v301->max_length;
      if ( (__int64)v81 >= (int)max_length )
        return;
    }
    userServantEntity = v86->fields.userServantEntity;
    if ( userServantEntity )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v270 = v86->fields.rarityId;
      if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        v271 = LocalizationManager__Get((System_String_o *)StringLiteral_16110/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/, 0);
        v272 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
        selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(v82, 0);
        if ( !v272 )
          goto LABEL_260;
        v273 = selectItem;
        sub_1FFE8F8(v272, selectItem);
        sub_1FFE2C4(v272, 0, v273);
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v274);
        v275 = Rarity__getRarityType(v270, 0);
        sub_1FFE8F8(v272, v275);
        sub_1FFE2C4(v272, 1, v275);
        v276 = ServantEntity__getClassName(ServantEntity_k__BackingField, 0);
        sub_1FFE8F8(v272, v276);
        sub_1FFE2C4(v272, 2, v276);
        v278 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v279 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v277);
        *(_QWORD *)&v311.fields.currentCryptoKey = v278;
        *(_QWORD *)&v311.fields.fakeValue = v279;
        v280 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v311, 0);
        Name = ServantEntity__getName(ServantEntity_k__BackingField, v280, -1, 0, 1, 0);
        sub_1FFE8F8(v272, Name);
        v282 = v272;
        v283 = 3;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        v271 = LocalizationManager__Get((System_String_o *)StringLiteral_16108/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0);
        v272 = (System_Object_array *)sub_2213B20(object___TypeInfo, 5);
        LODWORD(v304.fields.currentCryptoKey) = v82;
        selectItem = j_il2cpp_value_box_0(qword_5984348, &v304);
        if ( !v272 )
          goto LABEL_260;
        v284 = selectItem;
        sub_1FFE8F8(v272, selectItem);
        sub_1FFE2C4(v272, 0, v284);
        maxWave = this->fields.maxWave;
        v285 = j_il2cpp_value_box_0(qword_5984348, &maxWave);
        sub_1FFE8F8(v272, v285);
        sub_1FFE2C4(v272, 1, v285);
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v286);
        v287 = Rarity__getRarityType(v270, 0);
        sub_1FFE8F8(v272, v287);
        sub_1FFE2C4(v272, 2, v287);
        v288 = ServantEntity__getClassName(ServantEntity_k__BackingField, 0);
        sub_1FFE8F8(v272, v288);
        sub_1FFE2C4(v272, 3, v288);
        v290 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v291 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v289);
        *(_QWORD *)&v312.fields.currentCryptoKey = v290;
        *(_QWORD *)&v312.fields.fakeValue = v291;
        v292 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v312, 0);
        Name = ServantEntity__getName(ServantEntity_k__BackingField, v292, -1, 0, 1, 0);
        sub_1FFE8F8(v272, Name);
        v282 = v272;
        v283 = 4;
      }
      sub_1FFE2C4(v282, v283, Name);
      v293 = System_String__Format_75698016(v271, v272, 0);
      v295 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v294);
      v296 = LocalizationManager__Get((System_String_o *)StringLiteral_5696/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v297 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
      v298 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
      v299 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v299,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      if ( v295 )
      {
        CommonUI__OpenConfirmDialog_37373584(
          (CommonUI_o *)v295,
          v296,
          v293,
          v297,
          v298,
          v299,
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
      goto LABEL_260;
    }
  }
}


void EquipGraphListViewManager__SetFilterButtonImage(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596FC7A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596FC7A = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_47936760(this, mode, v10);
}


void EquipGraphListViewManager__SetMode_47936760(
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
    sub_2213CDC(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_47974420(this, mode + 1, v7);
}


void EquipGraphListViewManager__SetMode_47974368(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_47936760(this, mode, v10);
}


void EquipGraphListViewManager__SetObjectItem(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596FC70 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewObject_TypeInfo);
    byte_596FC70 = 1;
  }
  if ( obj
    && (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  EquipGraphListViewObject__Init_49134312((EquipGraphListViewObject_o *)v7, v8, 0, 0);
}


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
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FC7F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596FC7F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  equipGraphType = this->fields.equipGraphType;
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    if ( !sort )
      goto LABEL_47;
    v20.fields.r = 1.0;
    v20.fields.a = 1.0;
    if ( equipGraphType == 1 )
      v20.fields.r = 0.5;
    v20.fields.g = v20.fields.r;
    v20.fields.b = v20.fields.r;
    UIWidget__set_color((UIWidget_o *)sort, v20, 0);
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
    sub_2213CDC(sort, v4);
  }
}


void EquipGraphListViewManager___EndSelectConfirm_b__88_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool EquipGraphListViewManager___EndSelectConfirm_b__88_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void EquipGraphListViewManager___EndSelectConfirm_b__88_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__87_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__87_1(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_596FC83 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))selectItemCallbackFunc->fields.invoke_impl)(
      selectItemCallbackFunc->fields.method_code,
      selectItemCallbackFunc->fields.method);
  }
}


bool EquipGraphListViewManager___SelectEquip_b__87_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void EquipGraphListViewManager___SelectEquip_b__87_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager__add_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  EquipGraphListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596FC5F & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_596FC5F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v6->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, EquipGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
  EquipGraphListViewManager__remove_callbackFunc(v11, v12, v13);
}


void EquipGraphListViewManager__add_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596FC61 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596FC61 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EquipGraphListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void EquipGraphListViewManager__add_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *selectItemCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596FC63 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596FC63 = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(selectItemCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.selectItemCallbackFunc, v6, selectItemCallbackFunc);
    v10 = v9 == (_QWORD)selectItemCallbackFunc;
    selectItemCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596FC68 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC68 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v12 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v11);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v23 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v20, v21);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v12,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v23 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v12;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596FC67 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC67 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v17 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v19 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


void EquipGraphListViewManager__remove_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596FC60 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_596FC60 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v6->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, EquipGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
  EquipGraphListViewManager__add_callbackFunc2(v11, v12, v13);
}


void EquipGraphListViewManager__remove_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596FC62 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596FC62 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EquipGraphListViewManager__add_selectItemCallbackFunc(v11, v12, v13);
}


void EquipGraphListViewManager__remove_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *selectItemCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596FC64 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596FC64 = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(selectItemCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.selectItemCallbackFunc, v6, selectItemCallbackFunc);
    v10 = v9 == (_QWORD)selectItemCallbackFunc;
    selectItemCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EquipGraphListViewManager__DeleteContinueData(v11);
}


void EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200DD24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200DCCC;
}


System_IAsyncResult_o *EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_59709D7 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_59709D7 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59709D8 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager___c_TypeInfo);
    byte_59709D8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EquipGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EquipGraphListViewManager___c___ctor(EquipGraphListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EquipGraphListViewManager___c___CreateList_b__66_2(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_2213CDC(this, 0);
  return y->fields.atk;
}


int32_t EquipGraphListViewManager___c___CreateList_b__66_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_2213CDC(this, 0);
  return y->fields.hp;
}


void EquipGraphListViewManager___c__DisplayClass66_0___ctor(
        EquipGraphListViewManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewManager___c__DisplayClass66_0___CreateList_b__0(
        EquipGraphListViewManager___c__DisplayClass66_0_o *this,
        EquipGraphListViewItem_o *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EquipGraphListViewManager___c__DisplayClass66_0_o *v9; // x20
  struct EquipGraphListViewManager_o *_4__this; // x8
  System_Collections_Generic_List_object__o *itemList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  Il2CppClass **v15; // x0

  v9 = this;
  if ( (byte_59709DA & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_59709DA = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (itemList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemList) == 0
    || (items = itemList->fields._items,
        v13 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++itemList->fields._version,
        !items) )
  {
    sub_2213CDC(this, x);
  }
  size = itemList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemList,
      (Il2CppObject *)x,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    itemList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)x;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v15 + 4),
      (int32_t)x,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


bool EquipGraphListViewManager___c__DisplayClass66_0___CreateList_b__1(
        EquipGraphListViewManager___c__DisplayClass66_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass66_0_o *v4; // x19
  __int128 v5; // q1
  struct System_Int64_array *equipList; // x8
  __int64 type; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_59709D9 & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59709D9 = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, x);
  v9 = v10;
  this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                &v9,
                                                                0);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_2213CDC(this, x);
  type = v4->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
    sub_2213CE4(this);
  return this != (EquipGraphListViewManager___c__DisplayClass66_0_o *)equipList->m_Items[type];
}


void EquipGraphListViewManager___c__DisplayClass66_1___ctor(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__4(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  EquipGraphListViewManager___c__DisplayClass66_1_o *v4; // x19
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x21
  ServantSkillMaster_o *svtSkillMaster; // x22
  __int64 v8; // x20
  __int64 v9; // x23
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *_9__5; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_59709DB & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)sub_2213A60(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__5__);
    byte_59709DB = 1;
  }
  if ( !x )
    goto LABEL_15;
  if ( !UserServantEntity__IsFriendShipSvtEquip(x, 0) )
    return 0;
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.skillMaster;
  svtSkillMaster = v4->fields.svtSkillMaster;
  v9 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                v19,
                                                                0);
  if ( !svtSkillMaster
    || (this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)ServantSkillMaster__GetEntity(
                                                                      svtSkillMaster,
                                                                      (int32_t)this,
                                                                      1,
                                                                      1,
                                                                      0)) == 0
    || !skillMaster
    || (this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                      skillMaster,
                                                                      HIDWORD(this->fields.svtSkillMaster),
                                                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
LABEL_15:
    sub_2213CDC(this, x);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13, v14, v15, v16, v17);
  }
  return BasicHelper__Any_int__58784608(
           ActIndividuality,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_59709DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_59709DC = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_59709DD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_59709DD = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_2213CDC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}