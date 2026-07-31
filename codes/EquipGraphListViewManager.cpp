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

  if ( (byte_5937A8B & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&StringLiteral_11883/*"RewardUpEquipGraph"*/);
    sub_21FFC50(&StringLiteral_6357/*"EquipGraph"*/);
    sub_21FFC50(&StringLiteral_3317/*"BondEquipGraph"*/);
    sub_21FFC50(&StringLiteral_16163/*"WarBoardEquipGraph"*/);
    byte_5937A8B = 1;
  }
  v1 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v1, (System_String_o *)StringLiteral_6357/*"EquipGraph"*/, 3, 0, 0);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v8, (System_String_o *)StringLiteral_3317/*"BondEquipGraph"*/, 3, 0, 0);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->bondSortStatus,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v16, (System_String_o *)StringLiteral_11883/*"RewardUpEquipGraph"*/, 3, 0, 0);
  v17 = EquipGraphListViewManager_TypeInfo->static_fields;
  v17->rewardUpSortStatus = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->rewardUpSortStatus, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v24, (System_String_o *)StringLiteral_16163/*"WarBoardEquipGraph"*/, 3, 0, 0);
  v25 = EquipGraphListViewManager_TypeInfo->static_fields;
  v25->warBoardSortStatus = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->warBoardSortStatus, (int32_t)v24, v26, v27, v28, v29, v30, v31);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  EquipGraphListViewManager__ModifyList(this, 1, v14);
  EquipGraphListViewManager__SetMode_47835964(this, 2, v15);
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
  __int64 v98; // x2
  __int64 v99; // x20
  System_Collections_Generic_IEnumerable_T__o *v100; // x20
  System_Func_object__bool__o *v101; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x24
  EquipGraphListViewManager___c_c *v106; // x8
  struct EquipGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__66_2; // x20
  Il2CppObject *v109; // x22
  struct EquipGraphListViewManager___c_StaticFields *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  int32_t v117; // w0
  __int64 v118; // x1
  __int64 v119; // x2
  EquipGraphListViewManager___c_c *v120; // x8
  struct EquipGraphListViewManager___c_StaticFields *v121; // x9
  System_Func_object__int__o *_9__66_3; // x20
  Il2CppObject *v123; // x22
  struct EquipGraphListViewManager___c_StaticFields *v124; // x0
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  UserGameEntity_o *SelfUserGame; // x27
  int32_t cost; // w20
  int32_t v133; // w8
  const MethodInfo_476E8C0 *v134; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ServantEquipList; // x24
  UnityEngine_Object_o *infoDataLabel; // x20
  __int64 v139; // x2
  UILabel_o *v140; // x22
  System_String_o *v141; // x20
  Il2CppObject *v142; // x28
  Il2CppObject *v143; // x0
  UnityEngine_GameObject_o *bondSkillChangeMessageLabel; // x20
  System_Collections_Generic_List_object__o *v145; // x25
  __int64 v146; // x21
  __int64 v147; // x2
  int v148; // w8
  void *v149; // x8
  unsigned __int64 v150; // x26
  UserServantEntity_o *v151; // x20
  int64_t v152; // x0
  int32_t v153; // w27
  int64_t v154; // x28
  int32_t v155; // w21
  EquipGraphListViewItem_o *v156; // x22
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  Il2CppObject *Master_object; // x0
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  System_String_o *v180; // x2
  System_String_o *v181; // x3
  int32_t v182; // w4
  int32_t v183; // w5
  bool v184; // w6
  bool v185; // w7
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v188; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v189; // x0
  System_Collections_Generic_List_object__o *v190; // x24
  int32_t v191; // w26
  UserServantEntity_o *v192; // x22
  int64_t EquipUserSvtId; // x0
  int32_t v194; // w27
  int64_t v195; // x28
  int32_t v196; // w21
  EquipGraphListViewItem_o *v197; // x20
  System_String_o *v198; // x2
  System_String_o *v199; // x3
  int32_t v200; // w4
  int32_t v201; // w5
  bool v202; // w6
  bool v203; // w7
  struct System_Object_array *items; // x8
  _QWORD *v205; // x9
  __int64 size; // x10
  Il2CppClass **v207; // x0
  Il2CppObject *v208; // x20
  ServantSkillMaster_o *v209; // x23
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  __int64 v218; // x2
  int v219; // w8
  System_Collections_Generic_HashSet_int__o *v220; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v221; // x26
  unsigned int v222; // w27
  __int64 v223; // x29
  __int64 v224; // x20
  __int64 v225; // x22
  __int64 v226; // x20
  __int64 v227; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Func_int__bool__o *v229; // x20
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x22
  System_String_o *v231; // x2
  System_String_o *v232; // x3
  int32_t v233; // w4
  int32_t v234; // w5
  bool v235; // w6
  bool v236; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v237; // x28
  ServantSkillMaster_o *v238; // x24
  int64_t v239; // x0
  int32_t v240; // w21
  int32_t v241; // w23
  int64_t v242; // x26
  EquipGraphListViewItem_o *v243; // x20
  System_String_o *v244; // x2
  System_String_o *v245; // x3
  int32_t v246; // w4
  int32_t v247; // w5
  bool v248; // w6
  bool v249; // w7
  struct System_Object_array *v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  Il2CppClass **v253; // x0
  System_Action_object__o *v254; // x20
  __int64 v255; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v258; // x8
  System_String_o *v259; // x21
  const MethodInfo *v260; // x1
  const MethodInfo *v261; // x1
  const MethodInfo *v262; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_HashSet_int__o *v263; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_IEnumerable_TSource__o *v264; // [xsp+20h] [xbp-A0h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+28h] [xbp-98h]
  __int64 v266; // [xsp+30h] [xbp-90h]
  int32_t index; // [xsp+3Ch] [xbp-84h]
  PartyListViewItem_o *v268; // [xsp+40h] [xbp-80h]
  PartyListViewItem_array *v269; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int monitor; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // 0:x0.16

  if ( (byte_5937A72 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_EquipGraphListViewItem__TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    sub_21FFC50(&EquipGraphServantItem_TypeInfo);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_Func_UserServantEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EquipGraphListViewManager___c__CreateList_b__66_2__);
    sub_21FFC50(&Method_EquipGraphListViewManager___c__CreateList_b__66_3__);
    sub_21FFC50(&Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__0__);
    sub_21FFC50(&Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__1__);
    sub_21FFC50(&EquipGraphListViewManager___c__DisplayClass66_0_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__4__);
    sub_21FFC50(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__6__);
    sub_21FFC50(&EquipGraphListViewManager___c__DisplayClass66_1_TypeInfo);
    sub_21FFC50(&EquipGraphListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_5937A72 = 1;
  }
  v13 = sub_21FFEBC(EquipGraphListViewManager___c__DisplayClass66_0_TypeInfo);
  EquipGraphListViewManager___c__DisplayClass66_0___ctor((EquipGraphListViewManager___c__DisplayClass66_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_151;
  *(_QWORD *)(v13 + 32) = this;
  *(_DWORD *)(v13 + 24) = type;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_21FFBF4(
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
      j_il2cpp_runtime_class_init_0(v35, v28, v29);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->rewardUpSortStatus;
  }
  else if ( v36 == 1 )
  {
    if ( !v37 )
    {
      j_il2cpp_runtime_class_init_0(v35, v28, v29);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->bondSortStatus;
  }
  else
  {
    if ( !v37 )
    {
      j_il2cpp_runtime_class_init_0(v35, v28, v29);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->sortStatus;
  }
  v39 = *p_rewardUpSortStatus;
  this->fields.sort = *p_rewardUpSortStatus;
  p_sort = &this->fields.sort;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v39, v29, v30, v31, v32, v33, v34);
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
  sub_21FFBF4(
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
  sub_21FFBF4(
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
    sub_21FFBF4(
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
    sub_21FFBF4(
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseItem, (int32_t)v69, v71, v72, v73, v74, v75, v76);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_151;
  if ( !baseItem->fields.isFollower )
  {
    v269 = baseDeckItemList;
    v78 = *(_DWORD *)(v13 + 24);
    IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
    v80 = (EquipGraphServantItem_o *)sub_21FFEBC(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v80, baseItem, v78, IsTempGrandServant_k__BackingField, 0);
    this->fields.servantItemInfo = v80;
    sub_21FFBF4(
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)EquipList, v89, v90, v91, v92, v93, v94);
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
    v99 = *v88;
    *(_QWORD *)&this->fields.addBaseAtk = 0;
    if ( !v99 )
      goto LABEL_151;
    sort = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15, v98);
      sort = (__int64)BalanceConfig_TypeInfo;
    }
    object = (Il2CppObject *)v13;
    if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == *(_DWORD *)(v99 + 24) )
    {
      if ( !*p_baseItem )
        goto LABEL_151;
      v100 = BasicHelper__ExcludeNull_object_(
               (System_Collections_Generic_IEnumerable_T__o *)(*p_baseItem)->fields.equipUserServantEntityList,
               (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
      v101 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v101,
        (Il2CppObject *)v13,
        Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__1__,
        0);
      v102 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v100,
               (System_Func_TSource__bool__o *)v101,
               (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v102,
                                                                    (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
      v106 = EquipGraphListViewManager___c_TypeInfo;
      if ( !*(&EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo, v103, v104);
        v106 = EquipGraphListViewManager___c_TypeInfo;
      }
      static_fields = v106->static_fields;
      _9__66_2 = (System_Func_object__int__o *)static_fields->__9__66_2;
      if ( !_9__66_2 )
      {
        if ( !*(&v106->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v106, v103, v104);
          static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
        }
        v109 = (Il2CppObject *)static_fields->__9;
        _9__66_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__66_2, v109, Method_EquipGraphListViewManager___c__CreateList_b__66_2__, 0);
        v110 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v110->__9__66_2 = (struct System_Func_UserServantEntity__int__o *)_9__66_2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v110->__9__66_2,
          (int32_t)_9__66_2,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116);
      }
      v117 = System_Linq_Enumerable__Sum_object_(
               v105,
               (System_Func_TSource__int__o *)_9__66_2,
               (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
      v120 = EquipGraphListViewManager___c_TypeInfo;
      this->fields.addBaseAtk = v117;
      if ( !*(&v120->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v120, v118, v119);
        v120 = EquipGraphListViewManager___c_TypeInfo;
      }
      v121 = v120->static_fields;
      _9__66_3 = (System_Func_object__int__o *)v121->__9__66_3;
      if ( !_9__66_3 )
      {
        if ( !*(&v120->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v120, v118, v119);
          v121 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        }
        v123 = (Il2CppObject *)v121->__9;
        _9__66_3 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__66_3, v123, Method_EquipGraphListViewManager___c__CreateList_b__66_3__, 0);
        v124 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v124->__9__66_3 = (struct System_Func_UserServantEntity__int__o *)_9__66_3;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v124->__9__66_3,
          (int32_t)_9__66_3,
          v125,
          v126,
          v127,
          v128,
          v129,
          v130);
      }
      this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                                 v105,
                                 (System_Func_TSource__int__o *)_9__66_3,
                                 (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
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
    v133 = partyItem->fields.index;
    this->fields.baseCost = cost - sort;
    this->fields.partyNumber = v133 + 1;
    if ( !v269 )
      goto LABEL_151;
    v134 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields.maxWave = v269->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance(v134);
    if ( !sort )
      goto LABEL_151;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_151;
    ServantEquipList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getServantEquipList(
                                                                              (UserServantMaster_o *)sort,
                                                                              0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v135, v136);
    v268 = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v140 = this->fields.infoDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v139);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
      if ( !ServantEquipList )
        goto LABEL_151;
      v141 = (System_String_o *)sort;
      monitor = (int)ServantEquipList[1].monitor;
      sort = j_il2cpp_value_box_0(qword_594C070, &monitor);
      if ( !SelfUserGame )
        goto LABEL_151;
      v142 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v143 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtEquipKeep);
      sort = (__int64)System_String__Format_75484576(v141, v142, v143, 0);
      if ( !v140 )
        goto LABEL_151;
      UILabel__set_text(v140, (System_String_o *)sort, 0);
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
      sub_21FFECC(sort, v15);
    UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v15, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    v145 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v145,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    v146 = sub_21FFEBC(EquipGraphListViewManager___c__DisplayClass66_1_TypeInfo);
    EquipGraphListViewManager___c__DisplayClass66_1___ctor((EquipGraphListViewManager___c__DisplayClass66_1_o *)v146, 0);
    v148 = *(_DWORD *)(v13 + 24);
    if ( v148 != 2 )
    {
      if ( v148 == 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v147);
        sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
        if ( !v146 )
          goto LABEL_151;
        *(_QWORD *)(v146 + 24) = sort;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v146 + 24), sort, v167, v168, v169, v170, v171, v172);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v146 + 16) = Master_object;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v146 + 16),
          (int32_t)Master_object,
          v174,
          v175,
          v176,
          v177,
          v178,
          v179);
        if ( !*p_baseItem )
          goto LABEL_151;
        ServantEntity_k__BackingField = (*p_baseItem)->fields._ServantEntity_k__BackingField;
        if ( !ServantEntity_k__BackingField )
          goto LABEL_151;
        individuality = ServantEntity_k__BackingField->fields.individuality;
        *(_QWORD *)(v146 + 32) = individuality;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v146 + 32),
          (int32_t)individuality,
          v180,
          v181,
          v182,
          v183,
          v184,
          v185);
        v188 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v188,
          (Il2CppObject *)v146,
          Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__4__,
          0);
        v189 = System_Linq_Enumerable__Where_object_(
                 ServantEquipList,
                 (System_Func_TSource__bool__o *)v188,
                 (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        sort = (__int64)System_Linq_Enumerable__ToList_object_(
                          v189,
                          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
        if ( !sort )
          goto LABEL_151;
        v190 = (System_Collections_Generic_List_object__o *)sort;
        if ( *(int *)(sort + 24) >= 1 )
        {
          v191 = 0;
          while ( 1 )
          {
            sort = (__int64)System_Collections_Generic_List_object___get_Item(
                              v190,
                              v191,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !this->fields.servantItemInfo )
              goto LABEL_151;
            v192 = (UserServantEntity_o *)sort;
            EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(this->fields.servantItemInfo, 0);
            v194 = this->fields.memberIndex;
            v195 = EquipUserSvtId;
            v196 = *(_DWORD *)(v13 + 24);
            v197 = (EquipGraphListViewItem_o *)sub_21FFEBC(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v197, v191, v192, v195, v269, v268, setupInfo, v194, 0, v196, v262);
            if ( !v145 )
              goto LABEL_151;
            items = v145->fields._items;
            v205 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v145->fields._version;
            if ( !items )
              goto LABEL_151;
            size = v145->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v145,
                (Il2CppObject *)v197,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
            }
            else
            {
              v207 = &items->obj.klass + size;
              v145->fields._size = size + 1;
              v207[4] = (Il2CppClass *)v197;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v207 + 4),
                (int32_t)v197,
                v198,
                v199,
                v200,
                v201,
                v202,
                v203);
            }
            if ( ++v191 >= v190->fields._size )
              goto LABEL_141;
          }
        }
      }
      else if ( !v148 )
      {
        if ( !ServantEquipList )
          goto LABEL_151;
        v149 = ServantEquipList[1].monitor;
        if ( (int)v149 >= 1 )
        {
          v150 = 0;
          while ( v150 < (unsigned int)v149 )
          {
            sort = (__int64)this->fields.servantItemInfo;
            if ( !sort )
              goto LABEL_151;
            v151 = (UserServantEntity_o *)*((_QWORD *)&ServantEquipList[2].klass + v150);
            v152 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v153 = this->fields.memberIndex;
            v154 = v152;
            v155 = *(_DWORD *)(v13 + 24);
            v156 = (EquipGraphListViewItem_o *)sub_21FFEBC(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v156, v150, v151, v154, v269, v268, setupInfo, v153, 0, v155, v262);
            if ( !v145 )
              goto LABEL_151;
            v163 = v145->fields._items;
            v164 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v145->fields._version;
            if ( !v163 )
              goto LABEL_151;
            v165 = v145->fields._size;
            if ( (unsigned int)v165 >= LODWORD(v163->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v145,
                (Il2CppObject *)v156,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
            }
            else
            {
              v166 = &v163->obj.klass + v165;
              v145->fields._size = v165 + 1;
              v166[4] = (Il2CppClass *)v156;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v166 + 4),
                (int32_t)v156,
                v157,
                v158,
                v159,
                v160,
                v161,
                v162);
            }
            LODWORD(v149) = ServantEquipList[1].monitor;
            if ( (__int64)++v150 >= (int)v149 )
              goto LABEL_141;
          }
          goto LABEL_152;
        }
      }
      goto LABEL_141;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v147);
    v266 = v146;
    v208 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
    if ( !v208 )
      goto LABEL_151;
    v209 = (ServantSkillMaster_o *)sort;
    setupInfoa = setupInfo;
    RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                  (ConstantStrMaster_o *)v208,
                                                                                  0);
    v15 = (int64_t)System_Linq_Enumerable__ToHashSet_int_(
                     RewardUpFuncCategory,
                     (const MethodInfo_386D418 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    sort = v146;
    if ( !v146 )
      goto LABEL_151;
    *(_QWORD *)(v146 + 40) = v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v146 + 40), v15, v211, v212, v213, v214, v215, v216);
    RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                                 (ConstantStrMaster_o *)v208,
                                                                                 0);
    sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpIgnoreSvtId,
                      (const MethodInfo_386D418 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !ServantEquipList )
      goto LABEL_151;
    v219 = (int)ServantEquipList[1].monitor;
    if ( v219 < 1 )
    {
LABEL_141:
      v254 = (System_Action_object__o *)sub_21FFEBC(System_Action_EquipGraphListViewItem__TypeInfo);
      System_Action_object____ctor(
        v254,
        object,
        Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__0__,
        0);
      if ( v145 )
      {
        System_Collections_Generic_List_object___ForEach(
          v145,
          (System_Action_T__o *)v254,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          emptyMessageLabel = this->fields.emptyMessageLabel;
          v258 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
          v259 = *v258;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v255);
          sort = (__int64)LocalizationManager__Get(v259, 0);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
            EquipGraphListViewManager__RefrashListDisp(this, v260);
            ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
            EquipGraphListViewManager__SetFilterButtonImage(this, v261);
            return;
          }
        }
      }
      goto LABEL_151;
    }
    index = 0;
    v220 = (System_Collections_Generic_HashSet_int__o *)sort;
    v221 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v222 = 0;
    v263 = (System_Collections_Generic_HashSet_int__o *)sort;
    v264 = ServantEquipList;
    while ( v222 < v219 )
    {
      v223 = *((_QWORD *)&ServantEquipList[2].klass + (int)v222);
      if ( !v223 )
        goto LABEL_151;
      v224 = *(_QWORD *)(v223 + 80);
      v225 = *(_QWORD *)(v223 + 88);
      if ( !*(&(*v221)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v221, v15, v218);
      *(_QWORD *)&v273.fields.currentCryptoKey = v224;
      *(_QWORD *)&v273.fields.fakeValue = v225;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v273, 0);
      if ( !v220 )
        goto LABEL_151;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v220,
               sort,
               (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        v226 = *(_QWORD *)(v223 + 80);
        v227 = *(_QWORD *)(v223 + 88);
        if ( !*(&(*v221)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v221, v15, v218);
        *(_QWORD *)&v274.fields.currentCryptoKey = v226;
        *(_QWORD *)&v274.fields.fakeValue = v227;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v274, 0);
        if ( !v209 )
          goto LABEL_151;
        ServantSkillList = ServantSkillMaster__getServantSkillList(v209, sort, 0);
        sort = (__int64)UserServantEntity__GetEquipAllCategoryIdList((UserServantEntity_o *)v223, ServantSkillList, 0);
        if ( sort )
        {
          v229 = *(System_Func_int__bool__o **)(v146 + 56);
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v229 )
          {
            v229 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v229,
              (Il2CppObject *)v146,
              Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__6__,
              0);
            *(_QWORD *)(v146 + 56) = v229;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v146 + 56),
              (int32_t)v229,
              v231,
              v232,
              v233,
              v234,
              v235,
              v236);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)v229,
                   (const MethodInfo_3831218 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (__int64)this->fields.servantItemInfo;
            if ( !sort )
              goto LABEL_151;
            v237 = v221;
            v238 = v209;
            v239 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v240 = this->fields.memberIndex;
            v241 = (int32_t)object[1].monitor;
            v242 = v239;
            v243 = (EquipGraphListViewItem_o *)sub_21FFEBC(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v243,
              index,
              (UserServantEntity_o *)v223,
              v242,
              v269,
              v268,
              setupInfoa,
              v240,
              (System_Int32_array *)preLoadCategoryIdList,
              v241,
              v262);
            if ( !v145 )
              goto LABEL_151;
            v250 = v145->fields._items;
            v251 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v145->fields._version;
            if ( !v250 )
              goto LABEL_151;
            v252 = v145->fields._size;
            v209 = v238;
            v146 = v266;
            v221 = v237;
            if ( (unsigned int)v252 >= LODWORD(v250->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v145,
                (Il2CppObject *)v243,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
            }
            else
            {
              v253 = &v250->obj.klass + v252;
              v145->fields._size = v252 + 1;
              v253[4] = (Il2CppClass *)v243;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v253 + 4),
                (int32_t)v243,
                v244,
                v245,
                v246,
                v247,
                v248,
                v249);
            }
            v220 = v263;
            ServantEquipList = v264;
            ++index;
          }
        }
      }
      v219 = (int)ServantEquipList[1].monitor;
      if ( (int)++v222 >= v219 )
        goto LABEL_141;
    }
LABEL_152:
    sub_21FFED4(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__CreateList_47833896(
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
  __int64 v54; // x2
  UserServantEntity_array *ServantEquipList; // x23
  UnityEngine_Object_o *infoDataLabel; // x25
  __int64 v57; // x2
  UILabel_o *v58; // x25
  System_String_o *v59; // x26
  Il2CppObject *v60; // x27
  Il2CppObject *v61; // x0
  __int64 v62; // x2
  il2cpp_array_size_t v63; // x8
  unsigned __int64 v64; // x22
  UserServantEntity_o *v65; // x25
  int64_t EquipUserSvtId; // x26
  EquipGraphListViewItem_o *v67; // x24
  const MethodInfo *v68; // x6
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v81; // x8
  System_String_o *v82; // x21
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // x1
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int max_length; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5937A73 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    sub_21FFC50(&EquipGraphServantItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_5937A73 = 1;
  }
  v12 = EquipGraphListViewManager_TypeInfo;
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, partyItem, *(_QWORD *)&member);
    v12 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v12->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_21FFBF4(
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
  sub_21FFBF4(
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
    sub_21FFBF4(
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
    sub_21FFBF4(
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
  sub_21FFBF4(
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
    v43 = (EquipGraphServantItem_o *)sub_21FFEBC(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v43, baseItem, 0, 0, 0);
    this->fields.servantItemInfo = v43;
    sub_21FFBF4(
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
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v58 = this->fields.infoDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v57);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
      if ( !ServantEquipList )
        goto LABEL_63;
      v59 = (System_String_o *)sort;
      max_length = ServantEquipList->max_length;
      sort = j_il2cpp_value_box_0(qword_594C070, &max_length);
      if ( !SelfUserGame )
        goto LABEL_63;
      v60 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtEquipKeep);
      sort = (__int64)System_String__Format_75484576(v59, v60, v61, 0);
      if ( !v58 )
        goto LABEL_63;
      UILabel__set_text(v58, (System_String_o *)sort, 0);
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
    v63 = ServantEquipList->max_length;
    if ( (int)v63 >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( v64 >= (unsigned int)v63 )
          sub_21FFED4(sort);
        sort = (__int64)this->fields.servantItemInfo;
        if ( !sort )
          break;
        v65 = ServantEquipList->m_Items[v64];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
        v67 = (EquipGraphListViewItem_o *)sub_21FFEBC(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_47857740(v67, v64, v65, EquipUserSvtId, partyItem, setupInfo, v68);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          break;
        v75 = *(_QWORD *)(sort + 16);
        v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v75 )
          break;
        v77 = *(int *)(sort + 24);
        if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v67,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = v75 + 8 * v77;
          *(_DWORD *)(sort + 24) = v77 + 1;
          *(_QWORD *)(v78 + 32) = v67;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v78 + 32), (int32_t)v67, v69, v70, v71, v72, v73, v74);
        }
        LODWORD(v63) = ServantEquipList->max_length;
        if ( (__int64)++v64 >= (int)v63 )
          goto LABEL_54;
      }
LABEL_63:
      sub_21FFECC(sort, v15);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v81 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v82 = *v81;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v62);
    sort = (__int64)LocalizationManager__Get(v82, 0);
    if ( !emptyMessageLabel )
      goto LABEL_63;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
    EquipGraphListViewManager__RefrashListDisp(this, v83);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v84);
  }
}


void EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EquipGraphListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_5937A6E & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    byte_5937A6E = 1;
  }
  v3 = EquipGraphListViewManager_TypeInfo;
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1, v2);
    v3 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0)
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0)
    || (ListViewSort__DeleteContinueData(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0) )
  {
    sub_21FFECC(sortStatus, v1);
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
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
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
  __int64 v31; // x2
  UnityEngine_Object_o *v32; // x22
  __int64 v33; // x1
  EquipGraphListViewObject_o *v34; // x0
  __int64 v35; // x10
  struct EquipGraphListViewItem_o *v36; // x8
  struct ServantEntity_o *v37; // x9
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x1
  EquipGraphListViewItem_o *current; // x20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x21
  System_Action_object__o *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v49; // x1
  EquipGraphListViewObject_o *v50; // x0
  __int64 v51; // x10
  struct EquipGraphListViewItem_o *v52; // x8
  System_Collections_Generic_List_object__o *v53; // x20
  System_Action_object__o *v54; // x21
  struct EquipGraphListViewItem_o *v55; // x8
  System_Collections_Generic_List_T__o *v56; // x20
  System_Func_object__bool__o *v57; // x21
  __int64 v58; // x2
  struct EquipGraphListViewItem_o *v59; // x8
  struct UserServantEntity_o *v60; // x9
  int32_t hp; // w21
  int32_t atk; // w22
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  __int64 v66; // x2
  struct EquipGraphListViewItem_o *v67; // x8
  UnityEngine_Object_o *v68; // x20
  struct EquipGraphListViewItem_o *v69; // x8
  __int64 v70; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  struct PartyListViewItem_array *waveDeckItemList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v74; // x26
  int32_t v75; // w21
  PartyListViewItem_o *v76; // x20
  __int64 v77; // x2
  struct EquipGraphListViewItem_o *v78; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v80; // x22
  __int64 v81; // x23
  __int64 v82; // x24
  int v83; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+38h] [xbp-D8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_5937A80 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_0__);
    sub_21FFC50(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_1__);
    sub_21FFC50(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_2__);
    sub_21FFC50(&EquipGraphListViewObject_TypeInfo);
    sub_21FFC50(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937A80 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v87,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v88 = *(System_Collections_Generic_List_Enumerator_object__o *)&v87.fields.currentCryptoKey;
    v87.fields.currentCryptoKey = 0;
    v87.fields.hiddenValue = (int64_t)&v88;
    while ( 1 )
    {
      v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v88,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v38 )
        break;
      current = (EquipGraphListViewItem_o *)v88.fields._current;
      if ( !v88.fields._current
        || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
            v88.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EquipGraphListViewItem_c *)v88.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_21FFECC(v38, v39);
      }
      if ( BYTE1(v88.fields._current[9].monitor) )
      {
        BYTE1(v88.fields._current[9].monitor) = 0;
        if ( EquipGraphListViewItem__get_IsUse(current, v39) )
        {
          wearerMemberInfoList = (System_Collections_Generic_List_object__o *)current->fields.wearerMemberInfoList;
          v43 = (System_Action_object__o *)sub_21FFEBC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v43,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__88_2__,
            0);
          if ( !wearerMemberInfoList )
            sub_21FFECC(v44, v45);
          System_Collections_Generic_List_object___ForEach(
            wearerMemberInfoList,
            (System_Action_T__o *)v43,
            (const MethodInfo_445054C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
          viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
          if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
          {
            v50 = (EquipGraphListViewObject_o *)current->fields.viewObject;
            if ( !v50
              || (v51 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                  v50->klass->_2.naturalAligment < (unsigned int)v51)
              || (EquipGraphListViewObject_c *)v50->klass->_2.typeHierarchy[v51 - 1] != EquipGraphListViewObject_TypeInfo )
            {
              sub_21FFECC(v50, v49);
            }
            EquipGraphListViewObject__Init_48955644(v50, 4, 0, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v88,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v74 = 0;
        while ( v74 < (unsigned int)max_length )
        {
          v75 = 0;
          v76 = waveDeckItemList->m_Items[v74];
          while ( 1 )
          {
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v75 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
              break;
            if ( !v76 )
              goto LABEL_109;
            Instance = (int64_t)PartyListViewItem__GetMember(v76, v75, 0);
            v78 = this->fields.selectItem;
            if ( !v78 )
              goto LABEL_109;
            servantEntity = v78->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_109;
            v80 = (PartyOrganizationListViewItem_o *)Instance;
            v81 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v82 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v77);
            *(_QWORD *)&v89.fields.currentCryptoKey = v81;
            *(_QWORD *)&v89.fields.fakeValue = v82;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v89, 0);
            if ( !v80 )
              goto LABEL_109;
            v83 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v80, 0);
            if ( v83 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(EquipSvtId, 0) )
              PartyListViewItem__SetEquip(v76, v75, 0, 0, 0);
            ++v75;
          }
          LODWORD(max_length) = waveDeckItemList->max_length;
          if ( (__int64)++v74 >= (int)max_length )
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
      sub_21FFECC(Instance, v6);
    v16 = *(_DWORD *)(Instance + 224) - 1;
    if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
LABEL_114:
      sub_21FFED4(Instance);
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
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v22;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
  v86 = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v86, 0);
  if ( !v23 )
    goto LABEL_109;
  PartyListViewItem__SetEquip(v23, memberIndex, Instance, 0, 0);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v88 = v85;
  v87.fields.currentCryptoKey = 0;
  v87.fields.hiddenValue = (int64_t)&v88;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    v28 = (EquipGraphListViewItem_o *)v88.fields._current;
    if ( !v88.fields._current
      || (v29 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v88.fields._current->klass->_2.naturalAligment < (unsigned int)v29)
      || (EquipGraphListViewItem_c *)v88.fields._current->klass->_2.typeHierarchy[v29 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_21FFECC(v25, v26);
    }
    if ( BYTE1(v88.fields._current[9].monitor) )
      LOWORD(v88.fields._current[9].monitor) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(v28, this->fields.waveDeckItemList, v23, this->fields.memberIndex, v27);
    v32 = (UnityEngine_Object_o *)v28->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
    if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
    {
      v34 = (EquipGraphListViewObject_o *)v28->fields.viewObject;
      if ( !v34
        || (v35 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
            v34->klass->_2.naturalAligment < (unsigned int)v35)
        || (EquipGraphListViewObject_c *)v34->klass->_2.typeHierarchy[v35 - 1] != EquipGraphListViewObject_TypeInfo )
      {
        sub_21FFECC(v34, v33);
      }
      EquipGraphListViewObject__Init_48955644(v34, 4, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v36 = this->fields.selectItem;
  if ( !v36 )
    goto LABEL_109;
  v37 = v36->fields.servantEntity;
  if ( v37 )
    LODWORD(v37) = v37->fields.cost;
  this->fields.baseCost = v23->fields.cost - (_DWORD)v37;
LABEL_61:
  v52 = this->fields.selectItem;
  if ( !v52 )
    goto LABEL_109;
  v53 = (System_Collections_Generic_List_object__o *)v52->fields.wearerMemberInfoList;
  v52->fields.isBase = 1;
  v54 = (System_Action_object__o *)sub_21FFEBC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Action_object____ctor(
    v54,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__88_0__,
    0);
  if ( !v53 )
    goto LABEL_109;
  System_Collections_Generic_List_object___ForEach(
    v53,
    (System_Action_T__o *)v54,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v55 = this->fields.selectItem;
  if ( !v55 )
    goto LABEL_109;
  v56 = (System_Collections_Generic_List_T__o *)v55->fields.wearerMemberInfoList;
  v57 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v57,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__88_1__,
    0);
  Instance = BasicHelper__Any_object_(
               v56,
               (System_Func_T__bool__o *)v57,
               (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
  v59 = this->fields.selectItem;
  if ( (Instance & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_109;
    v60 = v59->fields.userSvtEntity;
    if ( v60 )
    {
      hp = v60->fields.hp;
      atk = v60->fields.atk;
      goto LABEL_70;
    }
  }
  else if ( !v59 )
  {
    goto LABEL_109;
  }
  hp = 0;
  atk = 0;
LABEL_70:
  v63 = v59->fields.userSvtEntity;
  if ( !v63 )
    goto LABEL_109;
  v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v64;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v58);
  v84 = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v84, 0);
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
  v67 = this->fields.selectItem;
  if ( !v67 )
    goto LABEL_109;
  v68 = (UnityEngine_Object_o *)v67->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v66);
  Instance = UnityEngine_Object__op_Inequality(v68, 0, 0);
  if ( (Instance & 1) == 0 )
    goto LABEL_85;
  v69 = this->fields.selectItem;
  if ( !v69 )
    goto LABEL_109;
  Instance = (int64_t)v69->fields.viewObject;
  if ( !Instance )
    goto LABEL_109;
  v70 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v70
    || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v70 - 8) != EquipGraphListViewObject_TypeInfo )
  {
    goto LABEL_109;
  }
  EquipGraphListViewObject__Init_48955644((EquipGraphListViewObject_o *)Instance, 4, 1, 0);
LABEL_85:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_86:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_5937A82 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937A82 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_21FFECC(v8, v9);
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

  if ( (byte_5937A86 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937A86 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_21FFECC(v7, v8);
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
  __int64 v9; // x2
  __int64 naturalAligment; // x11
  __int64 v11; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5937A89 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937A89 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v15, 0, sizeof(v15));
  if ( !itemList )
    sub_21FFECC(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_21FFECC(v7, v8);
    }
    v11 = *(__int64 *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_78);
    if ( !v11 )
      sub_21FFECC(v7, v8);
    v12 = *(_QWORD *)(v11 + 80);
    v13 = *(_QWORD *)(v11 + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v13;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_5937A8A & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5937A8A = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_21FFECC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_5937A75 & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5937A75 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_21FFECC(0, method);
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

  if ( (byte_5937A7D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_5937A7D = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_21FFECC(v4, v5);
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
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_5937A7E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_5937A7E = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_21FFECC(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_5937A77 & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5937A77 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
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
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v53, 0);
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
    sub_21FFECC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
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

  if ( (byte_5937A76 & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5937A76 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
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
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v53, 0);
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
    sub_21FFECC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EquipGraphListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_5937A6F & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager_TypeInfo);
    byte_5937A6F = 1;
  }
  v3 = EquipGraphListViewManager_TypeInfo;
  if ( !*(&EquipGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo, v1, v2);
    v3 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->bondSortStatus) == 0)
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->rewardUpSortStatus) == 0)
    || (ListViewSort__InitLoad(sortStatus, 0),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0) )
  {
    sub_21FFECC(sortStatus, v1);
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
  System_String_o *v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t v8; // x21
  int size; // w27
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x28
  __int64 v12; // x8
  __int64 *v13; // x28
  __int64 v14; // t1
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x22
  int32_t v19; // w24
  int64_t v20; // x23
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  const MethodInfo *v32; // x1
  int32_t v33; // w20
  Il2CppObject *Item; // x0
  __int64 v35; // x2
  ListViewItem_o *v36; // x21
  __int64 v37; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v40; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-80h]

  if ( (byte_5937A74 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937A74 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_43;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  v8 = Instance;
  size = itemList->fields._size;
  v40 = *(unsigned int *)(Instance + 24);
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v10 = 0;
    while ( v10 < *(unsigned int *)(v8 + 24) )
    {
      v11 = v8 + 8 * v10;
      v14 = *(_QWORD *)(v11 + 32);
      v13 = (__int64 *)(v11 + 32);
      v12 = v14;
      if ( !v14 )
        goto LABEL_43;
      v15 = *(_OWORD *)(v12 + 16);
      v16 = *(_OWORD *)(v12 + 32);
      v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v43.fields.currentCryptoKey = v15;
      *(_OWORD *)&v43.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
      v42 = v43;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v42, 0);
      if ( size >= 1 )
      {
        v18 = Instance;
        v19 = 0;
        while ( 1 )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_43;
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v19,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_43;
          v20 = Instance;
          naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
            || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_43;
          }
          v22 = *(_QWORD *)(Instance + 120);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 16);
            v24 = *(_OWORD *)(v22 + 32);
            v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v43.fields.currentCryptoKey = v23;
            *(_OWORD *)&v43.fields.fakeValue = v24;
            if ( !v25 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
            v41 = v43;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v41, 0);
            if ( Instance == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_28;
        }
        if ( v10 >= *(unsigned int *)(v8 + 24) )
          break;
        v31 = *v13;
        *(_QWORD *)(v20 + 120) = *v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 120), v31, v6, v26, v27, v28, v29, v30);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v20, v5);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v20, v32);
        }
      }
LABEL_28:
      if ( ++v10 == v40 )
        goto LABEL_29;
    }
    sub_21FFED4(Instance);
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
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v36 = (ListViewItem_o *)Item;
        v37 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v37
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v37 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v35);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (int64_t)v36->fields.viewObject;
            if ( !Instance )
              break;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v36, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v33 )
        return;
    }
LABEL_43:
    sub_21FFECC(Instance, v5);
  }
}


void EquipGraphListViewManager__OnClickBonusFilterKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_5937A84 & 1) == 0 )
  {
    sub_21FFC50(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_5937A84 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(0, v5);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
    sub_21FFECC(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_5937A81 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937A81 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0);
    if ( !v8 )
      sub_21FFECC(v10, v11);
    if ( equipGraphType == 2 )
      v12 = 16;
    else
      v12 = 5;
    CommonUI__OpenServantFilterSelectMenu_37298956(v8, v12, sort, (ListViewManager_o *)this, v9, -1, 0);
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
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
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

  if ( (byte_5937A87 & 1) == 0 )
  {
    sub_21FFC50(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_5937A87 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5937A85 & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_21FFC50(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937A85 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_21FFECC(v9, v10);
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
    sub_21FFECC(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_5937A7C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A7C = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  UnityEngine_Object_o *infoData2Label; // x20
  int32_t baseCost; // w22
  __int64 v10; // x2
  int32_t EquipCost; // w20
  int32_t maxCost; // w23
  BalanceConfig_c *v13; // x8
  int32_t InfinityCostValue; // w24
  int v15; // w22
  __int64 v16; // x2
  float v17; // s0
  float v18; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  BalanceConfig_c *v20; // x0
  int32_t v21; // w23
  Il2CppObject *v22; // x20
  int32_t v23; // w9
  UILabel_o *v24; // x19
  System_String_o **v25; // x8
  System_String_o *v26; // x21
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  int v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5937A78 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12980/*"SUM_OVER_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_5937A78 = 1;
  }
  ObjectList = (int *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_37;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( ObjectList[6] >= 1 )
  {
    v7 = 0;
    do
    {
      ObjectList = (int *)System_Collections_Generic_List_object___get_Item(
                            v6,
                            v7,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
      if ( !ObjectList )
        goto LABEL_37;
      (*(void (__fastcall **)(int *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
        ObjectList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
    }
    while ( ++v7 < v6->fields._size );
  }
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(infoData2Label, 0, 0) )
  {
    ObjectList = (int *)this->fields.servantItemInfo;
    if ( !ObjectList )
      goto LABEL_37;
    baseCost = this->fields.baseCost;
    EquipCost = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)ObjectList, 0);
    maxCost = this->fields.maxCost;
    v13 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v10);
      v13 = BalanceConfig_TypeInfo;
    }
    ObjectList = (int *)this->fields.infinityCostLabel;
    if ( !ObjectList )
      goto LABEL_37;
    InfinityCostValue = v13->static_fields->InfinityCostValue;
    ObjectList = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0);
    if ( !ObjectList )
      goto LABEL_37;
    v15 = EquipCost + baseCost;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ObjectList, maxCost >= InfinityCostValue, 0);
    if ( maxCost >= InfinityCostValue )
    {
      ObjectList = (int *)this->fields.infinityCostLabel;
      if ( !ObjectList )
        goto LABEL_37;
      v17 = 49.0;
      if ( v15 < 10 )
        v17 = 38.0;
      if ( v15 >= 100 )
        v18 = 60.0;
      else
        v18 = v17;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v18, 0);
    }
    v20 = BalanceConfig_TypeInfo;
    v21 = this->fields.maxCost;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v16);
      v20 = BalanceConfig_TypeInfo;
    }
    v22 = (Il2CppObject *)(v21 >= v20->static_fields->InfinityCostValue
                         ? StringLiteral_1/*""*/
                         : System_Int32__ToString((int)this + 504, 0));
    v23 = this->fields.maxCost;
    v24 = this->fields.infoData2Label;
    v25 = v15 <= v23 ? (System_String_o **)&StringLiteral_12979/*"SUM_INFO"*/ : (System_String_o **)&StringLiteral_12980/*"SUM_OVER_INFO"*/;
    v26 = *v25;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v16);
    v27 = LocalizationManager__Get(v26, 0);
    v29 = v15;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
    ObjectList = (int *)System_String__Format_75484576(v27, v28, v22, 0);
    if ( !v24 )
LABEL_37:
      sub_21FFECC(ObjectList, v4);
    UILabel__set_text(v24, (System_String_o *)ObjectList, 0);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5937A7A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_21FFC50(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5937A7A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      EquipGraphListViewObject__Init_48956440((EquipGraphListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject_47873624(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5937A7B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_21FFC50(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5937A7B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      EquipGraphListViewObject__Init_48956528((EquipGraphListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  __int64 v39; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  NotificationDialog_ClickDelegate_o *v43; // x23
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  System_Action_object__o *v45; // x23
  bool v46; // w1
  const MethodInfo *v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Reflection_MethodBase_o *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  MissionNaviTransitionBoardItem_c *v61; // x19
  bool IsUse; // w8
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  System_Collections_Generic_List_object__o *v65; // x20
  __int64 v66; // x20
  System_String_o *v67; // x21
  System_Object_array *v68; // x22
  __int64 v69; // x23
  __int64 v70; // x23
  System_String_o *v71; // x23
  __int64 v72; // x23
  __int64 v73; // x2
  struct EquipGraphServantItem_o *v74; // x8
  int32_t rarityId; // w23
  System_String_o *v76; // x23
  System_String_o *v77; // x20
  System_String_o *v78; // x0
  System_Object_array *v79; // x1
  System_Reflection_MethodBase_o *v80; // x0
  struct PartyListViewItem_array *v81; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v83; // x29
  int32_t v84; // w22
  int32_t v85; // w23
  PartyListViewItem_o *v86; // x21
  __int64 v87; // x2
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v89; // x24
  __int64 v90; // x25
  __int64 v91; // x26
  int v92; // w25
  ServantEntity_o *ServantEntity_k__BackingField; // x21
  System_Reflection_MethodBase_o *v94; // x0
  __int64 v95; // x2
  struct PartyListViewItem_array *v96; // x8
  int v97; // w9
  struct EquipGraphListViewItem_o *v98; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  __int128 v100; // q1
  PartyListViewItem_o *v101; // x23
  int32_t memberIndex; // w24
  _BOOL8 v103; // x0
  const MethodInfo *v104; // x1
  EquipGraphListViewItem_o *current; // x23
  __int64 v106; // x10
  int monitor_low; // w8
  _BOOL4 v108; // w24
  System_Collections_Generic_List_object__o *v109; // x24
  System_Action_object__o *v110; // x25
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x2
  UnityEngine_Object_o *viewObject; // x24
  __int64 v116; // x1
  EquipGraphListViewObject_o *v117; // x0
  __int64 v118; // x10
  __int64 v119; // x2
  struct EquipGraphListViewItem_o *v120; // x9
  struct UserServantEntity_o *v121; // x8
  __int128 v122; // q1
  EquipGraphServantItem_o *v123; // x20
  __int64 v124; // x1
  __int64 v125; // x2
  EquipGraphListViewItem_WearerMemberInfo_o *WearerMemberInfo; // x22
  System_String_o *v127; // x21
  struct EquipGraphListViewItem_o *v128; // x8
  __int64 v129; // x20
  __int64 v130; // x23
  __int64 v131; // x2
  int32_t WearerSvtRarity_k__BackingField; // w23
  System_String_o *RarityType; // x23
  struct System_String_o *WearerServantClassName_k__BackingField; // x23
  struct System_String_o *WearerServantName_k__BackingField; // x22
  System_String_o *v136; // x22
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  System_String_o *v138; // x22
  System_String_o *ClassName; // x22
  System_String_o *NameText; // x22
  struct EquipGraphListViewItem_o *v141; // x8
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  __int64 v148; // x23
  __int64 v149; // x1
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  __int64 v156; // x23
  __int64 v157; // x2
  int32_t v158; // w23
  System_String_o *v159; // x2
  System_String_o *v160; // x3
  int32_t v161; // w4
  int32_t v162; // w5
  bool v163; // w6
  bool v164; // w7
  __int64 v165; // x23
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  struct System_String_o *v172; // x23
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  struct System_String_o *v179; // x22
  System_String_o *v180; // x2
  System_String_o *v181; // x3
  int32_t v182; // w4
  int32_t v183; // w5
  bool v184; // w6
  bool v185; // w7
  __int64 v186; // x22
  System_String_o *v187; // x2
  System_String_o *v188; // x3
  int32_t v189; // w4
  int32_t v190; // w5
  bool v191; // w6
  bool v192; // w7
  __int64 v193; // x22
  struct EquipGraphServantItem_o *v194; // x8
  System_String_o *v195; // x2
  System_String_o *v196; // x3
  int32_t v197; // w4
  int32_t v198; // w5
  bool v199; // w6
  bool v200; // w7
  __int64 v201; // x22
  System_String_o *v202; // x2
  System_String_o *v203; // x3
  int32_t v204; // w4
  int32_t v205; // w5
  bool v206; // w6
  bool v207; // w7
  __int64 v208; // x22
  System_String_o *v209; // x2
  System_String_o *v210; // x3
  int32_t v211; // w4
  int32_t v212; // w5
  bool v213; // w6
  bool v214; // w7
  __int64 v215; // x22
  System_String_o *v216; // x20
  __int64 v217; // x1
  __int64 v218; // x2
  Il2CppObject *v219; // x21
  System_String_o *v220; // x22
  System_String_o *v221; // x23
  System_String_o *v222; // x24
  CommonConfirmDialog_ClickDelegate_o *v223; // x25
  System_Func_object__bool__o *v224; // x21
  __int64 v225; // x1
  __int64 v226; // x2
  Il2CppObject *v227; // x22
  System_String_o *v228; // x20
  System_Object_array *v229; // x21
  System_String_o *v230; // x2
  System_String_o *v231; // x3
  int32_t v232; // w4
  int32_t v233; // w5
  bool v234; // w6
  bool v235; // w7
  __int64 v236; // x23
  System_String_o *v237; // x2
  System_String_o *v238; // x3
  int32_t v239; // w4
  int32_t v240; // w5
  bool v241; // w6
  bool v242; // w7
  Il2CppClass *klass; // x23
  System_String_o *v244; // x2
  System_String_o *v245; // x3
  int32_t v246; // w4
  int32_t v247; // w5
  bool v248; // w6
  bool v249; // w7
  __int64 v250; // x23
  System_String_o *v251; // x2
  System_String_o *v252; // x3
  int32_t v253; // w4
  int32_t v254; // w5
  bool v255; // w6
  bool v256; // w7
  Il2CppClass *v257; // x23
  __int64 v258; // x2
  struct EquipGraphServantItem_o *v259; // x8
  int32_t v260; // w23
  System_String_o *v261; // x2
  System_String_o *v262; // x3
  int32_t v263; // w4
  int32_t v264; // w5
  bool v265; // w6
  bool v266; // w7
  __int64 v267; // x23
  System_String_o *v268; // x2
  System_String_o *v269; // x3
  int32_t v270; // w4
  int32_t v271; // w5
  bool v272; // w6
  bool v273; // w7
  __int64 v274; // x22
  System_String_o *v275; // x20
  __int64 v276; // x1
  __int64 v277; // x2
  Il2CppObject *v278; // x21
  System_String_o *v279; // x22
  CommonConfirmDialog_ClickDelegate_o *v280; // x23
  __int64 v281; // x2
  struct UserServantEntity_o *userServantEntity; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v284; // w20
  System_String_o *v285; // x23
  System_Object_array *v286; // x24
  __int64 v287; // x22
  __int64 v288; // x1
  __int64 v289; // x2
  System_String_o *v290; // x20
  System_String_o *v291; // x20
  __int64 v292; // x1
  __int64 v293; // x2
  __int64 v294; // x20
  __int64 v295; // x22
  int32_t v296; // w0
  System_String_o *Name; // x20
  System_Object_array *v298; // x0
  __int64 v299; // x1
  __int64 v300; // x22
  __int64 v301; // x22
  __int64 v302; // x1
  __int64 v303; // x2
  System_String_o *v304; // x20
  System_String_o *v305; // x20
  __int64 v306; // x1
  __int64 v307; // x2
  __int64 v308; // x20
  __int64 v309; // x22
  int32_t v310; // w0
  System_String_o *v311; // x20
  __int64 v312; // x1
  __int64 v313; // x2
  Il2CppObject *v314; // x21
  System_String_o *v315; // x22
  System_String_o *v316; // x23
  System_String_o *v317; // x24
  CommonConfirmDialog_ClickDelegate_o *v318; // x25
  __int64 v319; // x0
  struct PartyListViewItem_array *v320; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v321; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v322; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v323; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v324; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v327; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v328; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v330; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v331; // 0:x0.16

  if ( (byte_5937A7F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EquipGraphListViewItem_TypeInfo);
    sub_21FFC50(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_21FFC50(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_21FFC50(&Method_EquipGraphListViewManager__SelectEquip_b__87_0__);
    sub_21FFC50(&Method_EquipGraphListViewManager__SelectEquip_b__87_1__);
    sub_21FFC50(&Method_EquipGraphListViewManager__SelectEquip_b__87_2__);
    sub_21FFC50(&Method_EquipGraphListViewManager__SelectEquip_b__87_3__);
    sub_21FFC50(&EquipGraphListViewObject_TypeInfo);
    sub_21FFC50(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_16083/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_16084/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_21FFC50(&StringLiteral_16077/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_16079/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_5684/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_21FFC50(&StringLiteral_5682/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_16080/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_16073/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_3831/*"COMMON_CONFIRM_YES"*/);
    sub_21FFC50(&StringLiteral_5683/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16072/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_5937A7F = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v327, 0, sizeof(v327));
  this->fields.selectItem = item;
  sub_21FFBF4(
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
  sub_21FFBF4(
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
      v25 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_SelectEquip__);
    v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v25, v25[4]);
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
                v46 = 0;
                goto LABEL_54;
              }
            }
          }
          goto LABEL_260;
        }
      }
      wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v29->fields.wearerMemberInfoList;
      v45 = (System_Action_object__o *)sub_21FFEBC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
      System_Action_object____ctor(
        v45,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__87_0__,
        0);
      if ( !wearerMemberInfoList )
        goto LABEL_260;
      System_Collections_Generic_List_object___ForEach(
        wearerMemberInfoList,
        (System_Action_T__o *)v45,
        (const MethodInfo_445054C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v24 )
        goto LABEL_260;
      EquipGraphListViewObject__Init_48955644(v24, 4, 0, 0);
      goto LABEL_50;
    }
LABEL_262:
    sub_21FFED4(selectItem);
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
        v30 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_SelectEquip__);
      v32 = (System_Reflection_MethodBase_o *)sub_21FFC34(v30, v30[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_16073/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0);
          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_16072/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0);
          v43 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v43,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__87_1__,
            0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_37294692(
              (CommonUI_o *)Instance,
              v41,
              v42,
              v43,
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124, v125);
          v127 = LocalizationManager__Get((System_String_o *)StringLiteral_16080/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/, 0);
          selectItem = sub_21FFD10(object___TypeInfo, 8);
          v128 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_260;
          v129 = selectItem;
          selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(
                                  v128->fields._OrganizedWave_k__BackingField,
                                  0);
          if ( !v129 )
            goto LABEL_260;
          v130 = selectItem;
          sub_1FEB8A8(v129, selectItem);
          selectItem = sub_1FEB274(v129, 0, v130);
          if ( !WearerMemberInfo )
            goto LABEL_260;
          WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
          if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19, v131);
          RarityType = Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0);
          sub_1FEB8A8(v129, RarityType);
          sub_1FEB274(v129, 1, RarityType);
          WearerServantClassName_k__BackingField = WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
          sub_1FEB8A8(v129, WearerServantClassName_k__BackingField);
          sub_1FEB274(v129, 2, WearerServantClassName_k__BackingField);
          WearerServantName_k__BackingField = WearerMemberInfo->fields._WearerServantName_k__BackingField;
          sub_1FEB8A8(v129, WearerServantName_k__BackingField);
          sub_1FEB274(v129, 3, WearerServantName_k__BackingField);
          v136 = LocalizationManager__ConvertNumberToRomaNumber(this->fields.partyNumber, 0);
          sub_1FEB8A8(v129, v136);
          selectItem = sub_1FEB274(v129, 4, v136);
          servantItemInfo = this->fields.servantItemInfo;
          if ( !servantItemInfo )
            goto LABEL_260;
          v138 = Rarity__getRarityType(servantItemInfo->fields.rarityId, 0);
          sub_1FEB8A8(v129, v138);
          sub_1FEB274(v129, 5, v138);
          selectItem = (__int64)this->fields.servantItemInfo;
          if ( !selectItem )
            goto LABEL_260;
          ClassName = EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
          sub_1FEB8A8(v129, ClassName);
          sub_1FEB274(v129, 6, ClassName);
          selectItem = (__int64)this->fields.servantItemInfo;
          if ( !selectItem )
            goto LABEL_260;
          NameText = EquipGraphServantItem__get_NameText((EquipGraphServantItem_o *)selectItem, 0);
          sub_1FEB8A8(v129, NameText);
          sub_1FEB274(v129, 7, NameText);
          goto LABEL_199;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124, v125);
        v127 = LocalizationManager__Get((System_String_o *)StringLiteral_16083/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0);
        selectItem = sub_21FFD10(object___TypeInfo, 10);
        v141 = *p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_260;
        v129 = selectItem;
        LODWORD(v323.fields.currentCryptoKey) = v141->fields._OrganizedWave_k__BackingField;
        selectItem = j_il2cpp_value_box_0(qword_594C070, &v323);
        if ( !v129 )
          goto LABEL_260;
        v148 = selectItem;
        if ( !selectItem || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v129 + 24) )
            goto LABEL_262;
          *(_QWORD *)(v129 + 32) = v148;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v129 + 32), v148, v142, v143, v144, v145, v146, v147);
          maxWave = this->fields.maxWave;
          selectItem = j_il2cpp_value_box_0(qword_594C070, &maxWave);
          v156 = selectItem;
          if ( !selectItem || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v129 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_262;
            *(_QWORD *)(v129 + 40) = v156;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v129 + 40), v156, v150, v151, v152, v153, v154, v155);
            if ( !WearerMemberInfo )
              goto LABEL_260;
            v158 = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19, v157);
            selectItem = (__int64)Rarity__getRarityType(v158, 0);
            v165 = selectItem;
            if ( !selectItem || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v129 + 24) <= 2u )
                goto LABEL_262;
              *(_QWORD *)(v129 + 48) = v165;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v129 + 48), v165, v159, v160, v161, v162, v163, v164);
              v172 = WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !v172
                || (selectItem = sub_21FFDA4(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
              {
                if ( (*(_DWORD *)(v129 + 24) & 0xFFFFFFFC) == 0 )
                  goto LABEL_262;
                *(_QWORD *)(v129 + 56) = v172;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v129 + 56),
                  (int32_t)v172,
                  v166,
                  v167,
                  v168,
                  v169,
                  v170,
                  v171);
                v179 = WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !v179 || (selectItem = sub_21FFDA4(v179, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v129 + 24) <= 4u )
                    goto LABEL_262;
                  *(_QWORD *)(v129 + 64) = v179;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v129 + 64),
                    (int32_t)v179,
                    v173,
                    v174,
                    v175,
                    v176,
                    v177,
                    v178);
                  partyNumber = this->fields.partyNumber;
                  selectItem = j_il2cpp_value_box_0(qword_594C070, &partyNumber);
                  v186 = selectItem;
                  if ( !selectItem || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v129 + 24) <= 5u )
                      goto LABEL_262;
                    *(_QWORD *)(v129 + 72) = v186;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v129 + 72),
                      v186,
                      v180,
                      v181,
                      v182,
                      v183,
                      v184,
                      v185);
                    v324 = this->fields.maxWave;
                    selectItem = j_il2cpp_value_box_0(qword_594C070, &v324);
                    v193 = selectItem;
                    if ( !selectItem || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v129 + 24) <= 6u )
                        goto LABEL_262;
                      *(_QWORD *)(v129 + 80) = v193;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v129 + 80),
                        v193,
                        v187,
                        v188,
                        v189,
                        v190,
                        v191,
                        v192);
                      v194 = this->fields.servantItemInfo;
                      if ( !v194 )
                        goto LABEL_260;
                      selectItem = (__int64)Rarity__getRarityType(v194->fields.rarityId, 0);
                      v201 = selectItem;
                      if ( !selectItem
                        || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                      {
                        if ( (*(_DWORD *)(v129 + 24) & 0xFFFFFFF8) == 0 )
                          goto LABEL_262;
                        *(_QWORD *)(v129 + 88) = v201;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)(v129 + 88),
                          v201,
                          v195,
                          v196,
                          v197,
                          v198,
                          v199,
                          v200);
                        selectItem = (__int64)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_260;
                        selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0);
                        v208 = selectItem;
                        if ( !selectItem
                          || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v129 + 24) <= 8u )
                            goto LABEL_262;
                          *(_QWORD *)(v129 + 96) = v208;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)(v129 + 96),
                            v208,
                            v202,
                            v203,
                            v204,
                            v205,
                            v206,
                            v207);
                          selectItem = (__int64)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_260;
                          selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0);
                          v215 = selectItem;
                          if ( !selectItem
                            || (selectItem = sub_21FFDA4(selectItem, *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v129 + 24) <= 9u )
                              goto LABEL_262;
                            *(_QWORD *)(v129 + 104) = v215;
                            sub_21FFBF4(
                              (MissionNaviTransitionBoardItem_o *)(v129 + 104),
                              v215,
                              v209,
                              v210,
                              v211,
                              v212,
                              v213,
                              v214);
LABEL_199:
                            v216 = System_String__Format_75484712(v127, (System_Object_array *)v129, 0);
                            v219 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v217, v218);
                            v220 = LocalizationManager__Get((System_String_o *)StringLiteral_16084/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0);
                            v221 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
                            v222 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
                            v223 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v223,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0);
                            if ( v219 )
                            {
                              CommonUI__OpenConfirmDialog_37292168(
                                (CommonUI_o *)v219,
                                v220,
                                v216,
                                v221,
                                v222,
                                v223,
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
        v319 = sub_21FFEF0(selectItem, v149);
        sub_21FFD90(v319, 0);
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
    v63 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( IsUse )
    {
      if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
        v63 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_SelectEquip__);
      v64 = (System_Reflection_MethodBase_o *)sub_21FFC34(v63, v63[4]);
      OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0);
      if ( !*p_selectItem )
        goto LABEL_260;
      v65 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
      if ( !v65 )
        goto LABEL_260;
      if ( v65->fields._size == 1 )
      {
        selectItem = (__int64)System_Collections_Generic_List_object___get_Item(
                                v65,
                                0,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
        if ( !selectItem )
          goto LABEL_260;
        v66 = selectItem;
        if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
          goto LABEL_103;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v33);
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0);
        selectItem = sub_21FFD10(object___TypeInfo, 6);
        if ( !this->fields.servantItemInfo )
          goto LABEL_260;
        v68 = (System_Object_array *)selectItem;
        selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
        if ( !v68 )
          goto LABEL_260;
        v69 = selectItem;
        sub_1FEB8A8(v68, selectItem);
        sub_1FEB274(v68, 0, v69);
        v70 = *(_QWORD *)(v66 + 32);
        sub_1FEB8A8(v68, v70);
        sub_1FEB274(v68, 1, v70);
        selectItem = (__int64)this->fields.servantItemInfo;
        if ( !selectItem )
          goto LABEL_260;
        v71 = EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
        sub_1FEB8A8(v68, v71);
        sub_1FEB274(v68, 2, v71);
        v72 = *(_QWORD *)(v66 + 48);
        sub_1FEB8A8(v68, v72);
        selectItem = sub_1FEB274(v68, 3, v72);
        v74 = this->fields.servantItemInfo;
        if ( !v74 )
          goto LABEL_260;
        rarityId = v74->fields.rarityId;
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19, v73);
        v76 = Rarity__getRarityType(rarityId, 0);
        sub_1FEB8A8(v68, v76);
        sub_1FEB274(v68, 4, v76);
        v77 = Rarity__getRarityType(*(_DWORD *)(v66 + 56), 0);
        sub_1FEB8A8(v68, v77);
        sub_1FEB274(v68, 5, v77);
        v78 = v67;
        v79 = v68;
      }
      else
      {
        v224 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v224,
          (Il2CppObject *)this,
          Method_EquipGraphListViewManager__SelectEquip_b__87_2__,
          0);
        v227 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v65,
                 (System_Func_TSource__bool__o *)v224,
                 (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v225, v226);
        v228 = LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0);
        selectItem = sub_21FFD10(object___TypeInfo, 6);
        if ( !this->fields.servantItemInfo )
          goto LABEL_260;
        v229 = (System_Object_array *)selectItem;
        selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
        if ( !v229 )
          goto LABEL_260;
        v236 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_21FFDA4(selectItem, v229->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( !LODWORD(v229->max_length) )
          goto LABEL_262;
        v229->m_Items[0] = (Il2CppObject *)v236;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v229->m_Items, v236, v230, v231, v232, v233, v234, v235);
        if ( !v227 )
          goto LABEL_260;
        klass = v227[2].klass;
        if ( klass )
        {
          selectItem = sub_21FFDA4(v227[2].klass, v229->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( (v229->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_262;
        v229->m_Items[1] = (Il2CppObject *)klass;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v229->m_Items[1],
          (int32_t)klass,
          v237,
          v238,
          v239,
          v240,
          v241,
          v242);
        selectItem = (__int64)this->fields.servantItemInfo;
        if ( !selectItem )
          goto LABEL_260;
        selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
        v250 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_21FFDA4(selectItem, v229->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( LODWORD(v229->max_length) <= 2 )
          goto LABEL_262;
        v229->m_Items[2] = (Il2CppObject *)v250;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v229->m_Items[2], v250, v244, v245, v246, v247, v248, v249);
        v257 = v227[3].klass;
        if ( v257 )
        {
          selectItem = sub_21FFDA4(v227[3].klass, v229->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( (v229->max_length & 0xFFFFFFFC) == 0 )
          goto LABEL_262;
        v229->m_Items[3] = (Il2CppObject *)v257;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v229->m_Items[3],
          (int32_t)v257,
          v251,
          v252,
          v253,
          v254,
          v255,
          v256);
        v259 = this->fields.servantItemInfo;
        if ( !v259 )
          goto LABEL_260;
        v260 = v259->fields.rarityId;
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19, v258);
        selectItem = (__int64)Rarity__getRarityType(v260, 0);
        v267 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_21FFDA4(selectItem, v229->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( LODWORD(v229->max_length) <= 4 )
          goto LABEL_262;
        v229->m_Items[4] = (Il2CppObject *)v267;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v229->m_Items[4], v267, v261, v262, v263, v264, v265, v266);
        selectItem = (__int64)Rarity__getRarityType((int32_t)v227[3].monitor, 0);
        v274 = selectItem;
        if ( selectItem )
        {
          selectItem = sub_21FFDA4(selectItem, v229->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_265;
        }
        if ( LODWORD(v229->max_length) <= 5 )
          goto LABEL_262;
        v229->m_Items[5] = (Il2CppObject *)v274;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v229->m_Items[5], v274, v268, v269, v270, v271, v272, v273);
        v78 = v228;
        v79 = v229;
      }
      v275 = System_String__Format_75484712(v78, v79, 0);
      v278 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v276, v277);
      v279 = LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v280 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v280,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      selectItem = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v281);
      if ( v278 )
      {
        CommonUI__OpenConfirmDialog(
          (CommonUI_o *)v278,
          v279,
          v275,
          v280,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0);
        return;
      }
      goto LABEL_260;
    }
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v63 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_SelectEquip__);
    v94 = (System_Reflection_MethodBase_o *)sub_21FFC34(v63, v63[4]);
    OverwriteAssetSoundName__PlaySystemSe(v94, 0, 0, 0);
    if ( this->fields.isWaveBattle )
    {
      v96 = this->fields.waveDeckItemList;
      if ( !v96 )
        goto LABEL_260;
      v97 = this->fields.partyNumber - 1;
      if ( (unsigned int)v97 >= LODWORD(v96->max_length) )
        goto LABEL_262;
      v98 = this->fields.selectItem;
      if ( !v98 )
        goto LABEL_260;
      userSvtEntity = v98->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_260;
      v100 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v101 = v96->m_Items[v97];
      memberIndex = this->fields.memberIndex;
      *(_OWORD *)&v323.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v323.fields.fakeValue = v100;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v95);
      v322 = v323;
      selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v322, 0);
      if ( !v101 )
        goto LABEL_260;
      PartyListViewItem__SetEquip(v101, memberIndex, selectItem, 0, 0);
    }
    selectItem = (__int64)this->fields.itemList;
    if ( selectItem )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v323,
        (System_Collections_Generic_List_object__o *)selectItem,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v327 = *(System_Collections_Generic_List_Enumerator_object__o *)&v323.fields.currentCryptoKey;
      v323.fields.currentCryptoKey = 0;
      v323.fields.hiddenValue = (int64_t)&v327;
      while ( 1 )
      {
        v103 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v327,
                 (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v103 )
          break;
        current = (EquipGraphListViewItem_o *)v327.fields._current;
        if ( !v327.fields._current
          || (v106 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
              v327.fields._current->klass->_2.naturalAligment < (unsigned int)v106)
          || (EquipGraphListViewItem_c *)v327.fields._current->klass->_2.typeHierarchy[v106 - 1] != EquipGraphListViewItem_TypeInfo )
        {
          sub_21FFECC(v103, v104);
        }
        if ( BYTE1(v327.fields._current[9].monitor) )
        {
          monitor_low = LOBYTE(v327.fields._current[16].monitor);
          BYTE1(v327.fields._current[9].monitor) = 0;
          v108 = !monitor_low || current->fields._IsSelected_k__BackingField;
          if ( (v108 & EquipGraphListViewItem__get_IsUse(current, v104) & 1) != 0
            || current->fields._OrganizedWave_k__BackingField > 0
            || current->fields._IsUnique_k__BackingField )
          {
            v109 = (System_Collections_Generic_List_object__o *)current->fields.wearerMemberInfoList;
            v110 = (System_Action_object__o *)sub_21FFEBC(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
            System_Action_object____ctor(
              v110,
              (Il2CppObject *)this,
              Method_EquipGraphListViewManager__SelectEquip_b__87_3__,
              0);
            if ( !v109 )
              sub_21FFECC(v111, v112);
            System_Collections_Generic_List_object___ForEach(
              v109,
              (System_Action_T__o *)v110,
              (const MethodInfo_445054C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
            viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v113, v114);
            if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
            {
              v117 = (EquipGraphListViewObject_o *)current->fields.viewObject;
              if ( !v117
                || (v118 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                    v117->klass->_2.naturalAligment < (unsigned int)v118)
                || (EquipGraphListViewObject_c *)v117->klass->_2.typeHierarchy[v118 - 1] != EquipGraphListViewObject_TypeInfo )
              {
                sub_21FFECC(v117, v116);
              }
              EquipGraphListViewObject__Init_48955644(v117, 4, 0, 0);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v327,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      v120 = *p_selectItem;
      if ( *p_selectItem )
      {
        v121 = v120->fields.userSvtEntity;
        v120->fields.isBase = 1;
        if ( v121 )
        {
          v122 = *(_OWORD *)&v121->fields.id.fields.fakeValue;
          v123 = this->fields.servantItemInfo;
          *(_OWORD *)&v323.fields.currentCryptoKey = *(_OWORD *)&v121->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v323.fields.fakeValue = v122;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v119);
          v321 = v323;
          selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v321, 0);
          if ( v123 )
          {
            EquipGraphServantItem__SetEquipTarget(v123, selectItem, 0);
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
                v46 = this->fields.equipGraphType == 1;
LABEL_54:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v46, 0);
                EquipGraphListViewManager__RefrashListDisp(this, v47);
                if ( callback )
                {
                  p_selectItemCallbackFunc->klass = 0;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc,
                    0,
                    v48,
                    v49,
                    v50,
                    v51,
                    v52,
                    v53);
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
    sub_21FFECC(selectItem, v19);
  }
  if ( !item )
    goto LABEL_260;
  v30 = Method_EquipGraphListViewManager_SelectEquip__;
  v31 = *((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
LABEL_60:
    if ( (v31 & 2) != 0 )
      v30 = (_QWORD *)sub_21FFC68(v30);
    v54 = (System_Reflection_MethodBase_o *)sub_21FFC34(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0, 0);
    v61 = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0;
      sub_21FFBF4(p_selectItemCallbackFunc, 0, v55, v56, v57, v58, v59, v60);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))v61->_1.namespaze)(
        v61->_1.element_class,
        *(_QWORD *)&v61->_1.byval_arg.bits);
    }
    return;
  }
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_21FFC68(Method_EquipGraphListViewManager_SelectEquip__);
  v80 = (System_Reflection_MethodBase_o *)sub_21FFC34(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0, 0);
  selectItem = (__int64)this->fields.servantItemInfo;
  if ( !selectItem )
    goto LABEL_260;
  selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
  if ( (selectItem & 1) == 0 )
    goto LABEL_103;
  v81 = this->fields.waveDeckItemList;
  if ( !v81 )
    goto LABEL_260;
  max_length = v81->max_length;
  if ( (int)max_length >= 1 )
  {
    v83 = 0;
    v84 = 1;
    v320 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v83 >= (unsigned int)max_length )
        goto LABEL_262;
      v85 = 0;
      v86 = v81->m_Items[v83];
      do
      {
        selectItem = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v33);
          selectItem = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v85 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
          goto LABEL_101;
        if ( !v86 )
          goto LABEL_260;
        selectItem = (__int64)PartyListViewItem__GetMember(v86, v85, 0);
        if ( !*p_selectItem )
          goto LABEL_260;
        servantEntity = (*p_selectItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_260;
        v89 = (PartyOrganizationListViewItem_o *)selectItem;
        v90 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
        v91 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v87);
        *(_QWORD *)&v328.fields.currentCryptoKey = v90;
        *(_QWORD *)&v328.fields.fakeValue = v91;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v328, 0);
        if ( !v89 )
          goto LABEL_260;
        v92 = selectItem;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v89, 0);
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(EquipSvtId, 0);
        ++v85;
      }
      while ( v92 != (_DWORD)selectItem );
      ServantEntity_k__BackingField = v89->fields._ServantEntity_k__BackingField;
      if ( ServantEntity_k__BackingField )
        break;
LABEL_101:
      v81 = v320;
      ++v83;
      ++v84;
      LODWORD(max_length) = v320->max_length;
      if ( (__int64)v83 >= (int)max_length )
        return;
    }
    userServantEntity = v89->fields.userServantEntity;
    if ( userServantEntity )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v284 = v89->fields.rarityId;
      if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v33);
        v285 = LocalizationManager__Get((System_String_o *)StringLiteral_16079/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/, 0);
        v286 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
        selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(v84, 0);
        if ( !v286 )
          goto LABEL_260;
        v287 = selectItem;
        sub_1FEB8A8(v286, selectItem);
        sub_1FEB274(v286, 0, v287);
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v288, v289);
        v290 = Rarity__getRarityType(v284, 0);
        sub_1FEB8A8(v286, v290);
        sub_1FEB274(v286, 1, v290);
        v291 = ServantEntity__getClassName(ServantEntity_k__BackingField, 0);
        sub_1FEB8A8(v286, v291);
        sub_1FEB274(v286, 2, v291);
        v294 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v295 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v292, v293);
        *(_QWORD *)&v330.fields.currentCryptoKey = v294;
        *(_QWORD *)&v330.fields.fakeValue = v295;
        v296 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v330, 0);
        Name = ServantEntity__getName(ServantEntity_k__BackingField, v296, -1, 0, 1, 0);
        sub_1FEB8A8(v286, Name);
        v298 = v286;
        v299 = 3;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v33);
        v285 = LocalizationManager__Get((System_String_o *)StringLiteral_16077/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0);
        v286 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 5);
        LODWORD(v323.fields.currentCryptoKey) = v84;
        selectItem = j_il2cpp_value_box_0(qword_594C070, &v323);
        if ( !v286 )
          goto LABEL_260;
        v300 = selectItem;
        sub_1FEB8A8(v286, selectItem);
        sub_1FEB274(v286, 0, v300);
        maxWave = this->fields.maxWave;
        v301 = j_il2cpp_value_box_0(qword_594C070, &maxWave);
        sub_1FEB8A8(v286, v301);
        sub_1FEB274(v286, 1, v301);
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v302, v303);
        v304 = Rarity__getRarityType(v284, 0);
        sub_1FEB8A8(v286, v304);
        sub_1FEB274(v286, 2, v304);
        v305 = ServantEntity__getClassName(ServantEntity_k__BackingField, 0);
        sub_1FEB8A8(v286, v305);
        sub_1FEB274(v286, 3, v305);
        v308 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v309 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v306, v307);
        *(_QWORD *)&v331.fields.currentCryptoKey = v308;
        *(_QWORD *)&v331.fields.fakeValue = v309;
        v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v331, 0);
        Name = ServantEntity__getName(ServantEntity_k__BackingField, v310, -1, 0, 1, 0);
        sub_1FEB8A8(v286, Name);
        v298 = v286;
        v299 = 4;
      }
      sub_1FEB274(v298, v299, Name);
      v311 = System_String__Format_75484712(v285, v286, 0);
      v314 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v312, v313);
      v315 = LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v316 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
      v317 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
      v318 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v318,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      if ( v314 )
      {
        CommonUI__OpenConfirmDialog_37292168(
          (CommonUI_o *)v314,
          v315,
          v311,
          v316,
          v317,
          v318,
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

  if ( (byte_5937A83 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_5937A83 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_21FFECC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_47835964(this, mode, v10);
}


void EquipGraphListViewManager__SetMode_47835964(
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
    sub_21FFECC(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_47873624(this, mode + 1, v7);
}


void EquipGraphListViewManager__SetMode_47873572(
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_47835964(this, mode, v10);
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

  if ( (byte_5937A79 & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewObject_TypeInfo);
    byte_5937A79 = 1;
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
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  EquipGraphListViewObject__Init_48955644((EquipGraphListViewObject_o *)v7, v8, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__SetSortButtonImage(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  int32_t equipGraphType; // w21
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v21; // x20
  float v22; // s0 OVERLAPPED
  float v23; // s3
  float v24; // s1
  float v25; // s2

  if ( (byte_5937A88 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_5937A88 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_47;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_47;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  equipGraphType = this->fields.equipGraphType;
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    v21 = this->fields.bonusFilterKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                               sort,
                               this->fields.alignedBonusFilterInfos,
                               this->fields.isQuestStart,
                               0);
    if ( !v21 )
      goto LABEL_47;
    UILabel__set_text(v21, (System_String_o *)sort, 0);
    sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
    if ( !sort )
      goto LABEL_47;
    v22 = 1.0;
    v23 = 1.0;
    if ( equipGraphType == 1 )
      v22 = 0.5;
    v24 = v22;
    v25 = v22;
    UIWidget__set_color((UIWidget_o *)sort, *(UnityEngine_Color_o *)&v22, 0);
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
    sub_21FFECC(sort, v5);
  }
}


void EquipGraphListViewManager___EndSelectConfirm_b__88_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool EquipGraphListViewManager___EndSelectConfirm_b__88_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void EquipGraphListViewManager___EndSelectConfirm_b__88_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__87_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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

  if ( (byte_5937A8C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937A8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7, v8, v9, v10, v11);
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
    sub_21FFECC(this, 0);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void EquipGraphListViewManager___SelectEquip_b__87_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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

  if ( (byte_5937A68 & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_5937A68 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, EquipGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
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

  if ( (byte_5937A6A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937A6A = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
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

  if ( (byte_5937A6C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937A6C = 1;
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
    v9 = sub_223767C(&this->fields.selectItemCallbackFunc, v6, selectItemCallbackFunc);
    v10 = v9 == (_QWORD)selectItemCallbackFunc;
    selectItemCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
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
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5937A71 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A71 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5937A70 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A70 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_5937A69 & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_5937A69 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, EquipGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
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

  if ( (byte_5937A6B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937A6B = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
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

  if ( (byte_5937A6D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937A6D = 1;
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
    v9 = sub_223767C(&this->fields.selectItemCallbackFunc, v6, selectItemCallbackFunc);
    v10 = v9 == (_QWORD)selectItemCallbackFunc;
    selectItemCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFAC5C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFAC04;
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
  if ( (byte_593867C & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_593867C = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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

  if ( (byte_593867D & 1) == 0 )
  {
    sub_21FFC50(&EquipGraphListViewManager___c_TypeInfo);
    byte_593867D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v1;
  sub_21FFBF4(
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
    sub_21FFECC(this, 0);
  return y->fields.atk;
}


int32_t EquipGraphListViewManager___c___CreateList_b__66_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_21FFECC(this, 0);
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
  if ( (byte_593867F & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_593867F = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (itemList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemList) == 0
    || (items = itemList->fields._items,
        v13 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++itemList->fields._version,
        !items) )
  {
    sub_21FFECC(this, x);
  }
  size = itemList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemList,
      (Il2CppObject *)x,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    itemList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)x;
    sub_21FFBF4(
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
  if ( (byte_593867E & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593867E = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, x);
  v9 = v10;
  this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                &v9,
                                                                0);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_21FFECC(this, x);
  type = v4->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
    sub_21FFED4(this);
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
  if ( (byte_5938680 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)sub_21FFC50(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__5__);
    byte_5938680 = 1;
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
  this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
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
                                                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
LABEL_15:
    sub_21FFECC(this, x);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13, v14, v15, v16, v17);
  }
  return BasicHelper__Any_int__58574768(
           ActIndividuality,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
}


bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_5938681 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5938681 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_5938682 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_5938682 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_21FFECC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}